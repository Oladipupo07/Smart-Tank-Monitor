#define BLYNK_TEMPLATE_ID "TMPL2g1KpxtxQ"      // Your Blynk Template ID
#define BLYNK_TEMPLATE_NAME "Smart Water Level Monitor ESP32" // Your Device Name
#define BLYNK_AUTH_TOKEN "EIj1YhkqXn3n0H-CDXgFnvl67hngx-DO" // From Blynk IoT

#include <WiFi.h>
#include <BlynkSimpleEsp32.h>
#include <Arduino.h>

char ssid[] = "Wokwi-GUEST";
char pass[] = "";

#define TRIG_PIN 41
#define ECHO_PIN 40
#define LED_LOW 16
#define LED_MED 15   
#define LED_HIGH 14
#define BUZZER 21
#define RELAY_PIN 26

const int tankHeight = 100; // cm
long duration;
int distance;
int waterLevel;

bool pumpState = false; // Track pump state

void setup() {
  Serial.begin(115200);

  pinMode(TRIG_PIN, OUTPUT);
  pinMode(ECHO_PIN, INPUT);
  pinMode(LED_LOW, OUTPUT);
  pinMode(LED_MED, OUTPUT);
  pinMode(LED_HIGH, OUTPUT);
  pinMode(BUZZER, OUTPUT);

  digitalWrite(RELAY_PIN, LOW);

  // Connect ESP32 to Blynk 2.0 IoT Cloud
  Blynk.begin(BLYNK_AUTH_TOKEN, ssid, pass);
  Serial.println("Smart Water Pump System Started");
}

void loop() {
  Blynk.run();

  // Ultrasonic sensor
  digitalWrite(TRIG_PIN, LOW);
  delayMicroseconds(2);
  digitalWrite(TRIG_PIN, HIGH);
  delayMicroseconds(10);
  digitalWrite(TRIG_PIN, LOW);

  duration = pulseIn(ECHO_PIN, HIGH);
  distance = duration * 0.034 / 2; // cm

  waterLevel = tankHeight - distance;
  int levelPercent = (waterLevel * 100) / tankHeight;

  Serial.print("Distance: "); Serial.print(distance); Serial.print(" cm, ");
  Serial.print("Water Level: "); Serial.print(levelPercent); Serial.println("%");

  // LED & Buzzer
  if (levelPercent < 20) { // Low
    digitalWrite(LED_LOW, HIGH);
    digitalWrite(LED_MED, LOW);
    digitalWrite(LED_HIGH, LOW);
    digitalWrite(BUZZER, HIGH);

    // Send notification via virtual pin
    Blynk.virtualWrite(V1, "⚠️ Water level");
    Blynk.virtualWrite(V2, "LOW! Refill tank.");

  } 
  
  else if (levelPercent <= 80) { // Medium
    digitalWrite(LED_LOW, LOW);
    digitalWrite(LED_MED, HIGH);
    digitalWrite(LED_HIGH, LOW);
    digitalWrite(BUZZER, LOW);

    Blynk.virtualWrite(V1, "Water Tank");
    Blynk.virtualWrite(V2, "Moderate");
  } 
  
  else { // High
    digitalWrite(LED_LOW, LOW);
    digitalWrite(LED_MED, LOW);
    digitalWrite(LED_HIGH, HIGH);
    digitalWrite(BUZZER, LOW);

    Blynk.virtualWrite(V1, "✅ Water tank ");
    Blynk.virtualWrite(V2, "FULL.");
  }

  // ===== PUMP CONTROL =====
  if (levelPercent < 20 && !pumpState) {
    digitalWrite(RELAY_PIN, HIGH);
    pumpState = true;

    Serial.println("⚠️ Pump ON - Water Level LOW");
    Blynk.virtualWrite(V3, "⚠️ Pump TURNED");
    Blynk.virtualWrite(V4, "ON (Low Water)");
  }

  if (levelPercent > 80 && pumpState) {
    digitalWrite(RELAY_PIN, LOW);
    pumpState = false;

    Serial.println("✅ Pump OFF - Tank FULL");
    Blynk.virtualWrite(V3, "✅ Pump TURNED ");
    Blynk.virtualWrite(V4, "OFF (Tank Full)");
  }


  // Send water level to virtual gauge V0
  Blynk.virtualWrite(V0, levelPercent);

  delay(1000);
}
