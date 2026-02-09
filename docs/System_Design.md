# System Design

## System Overview

The Smart Water Tank Monitoring System is an embedded IoT solution that automates water level monitoring, pump control, and visual status indication.

---

## Block Diagram

Ultrasonic Sensor → ESP32 → Relay Module → Water Pump → LED Indicators → Blynk IoT App


---

## Functional Description

### 1. Water Level Monitoring
The ultrasonic sensor continuously measures water level inside the tank.

---

### 2. Data Processing
ESP32 processes sensor readings and calculates water level using tank height calibration.

---

### 3. Automatic Pump Control

The system operates using threshold control:

- Low Level Threshold → Pump ON
- High Level Threshold → Pump OFF

---

### 4. LED Status Display

The system includes three LEDs for local monitoring:

- Red LED → Low water warning
- Yellow LED → Medium level indication
- Green LED → Tank full indication

This provides real-time visual feedback and improves system usability.

---

### 5. IoT Monitoring

ESP32 connects to WiFi and transmits tank level data to the Blynk mobile dashboard.

---

## Control Algorithm

1. Read ultrasonic sensor distance.
2. Calculate water level.
3. Update LED indicators.
4. Compare level with threshold values.
5. Control relay module.
6. Send data to Blynk application.

---

## Advantages

- Reduces manual monitoring
- Prevents tank overflow
- Provides local and remote monitoring
- Saves energy
- Improves system reliability

---

## Limitations

- Requires stable WiFi connection
- Sensor readings may be affected by turbulence

---

## Future Improvements

- OLED display integration
- GSM SMS notification
- Cloud database storage
- Solar power integration
