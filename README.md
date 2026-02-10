# 🚰 ESP32 Smart Water Tank Monitoring System

![ESP32](https://img.shields.io/badge/ESP32-IoT-blue)
![Platform](https://img.shields.io/badge/Platform-Arduino-green)
![Simulation](https://img.shields.io/badge/Simulation-Wokwi-orange)
![Status](https://img.shields.io/badge/Project-Completed-brightgreen)

---

## 📌 Project Overview
This project presents the design and simulation of an IoT-based Smart Water Tank Monitoring and Automatic Pump Control System using the ESP32 microcontroller. The system monitors water levels in a tank and automatically controls a water pump to prevent overflow and dry running.

The project integrates embedded systems and IoT technology to provide real-time monitoring and remote alerts using the Blynk platform.
**ESP32 Smart Water Tank Monitoring System** is an IoT-based embedded system that monitors water level in a tank and automatically controls a water pump. The system also sends real-time alerts to a smartphone using the Blynk IoT platform.

## 🎯 Objectives
- Monitor water tank levels (Low, Medium, High)
- Automatically control pump operation
- Prevent water overflow and pump damage
- Provide real-time alerts via smartphone
- Demonstrate IoT integration using ESP32

---

## ⚙️ System Features
✅ Automatic pump control using relay  
✅ Water level monitoring using ultrasonic sensor  
✅ Visual level indicators using LEDs  
✅ Smartphone alert notifications using Blynk IoT  
✅ Serial monitor debugging support  
✅ Wokwi simulation ready  
✅ Scalable for real-life implementation  

---

## 🧠 System Architecture
The ESP32 reads water level data from sensors and determines the tank condition. Based on the level, it:

- Turns ON pump when water level is LOW
- Turns OFF pump when tank is FULL
- Displays tank status using LEDs
- Sends alerts to smartphone via Blynk

---

## 🛠 Hardware Components

| Component | Purpose |
|-----------|-------------|
| ESP32 | Main microcontroller |
| HC-SR04 Ultrasonic Sensor | Water level measurement |
|3 LEDs (Low, Medium, High indicators) | Light up according to water level |
| Resistors| Resists the current going through the LED |
| Relay Module | Pump switching control |
| Water Pump (Simulated) | Water refill system |
| Breadboard & Wires | Circuit connection |

---

## 💻 Software & Tools Used

- Arduino IDE  
- ESP32 Board Package  
- Blynk IoT Platform  
- Wokwi Simulator  

---

## ⚙ System Working Principle

1. The ultrasonic sensor measures water level inside the tank.
2. ESP32 processes the sensor data.
3. When water level drops below a set threshold:
   - Pump automatically turns ON.
4. When tank is full:
   - Pump automatically turns OFF.
5. LED shows the water level 
6. Water level data is sent to Blynk mobile dashboard.

---

## 📊 System Flow

Water Level Sensor → ESP32 → Relay Control → Pump → Blynk App

---

## 🧪 Simulation

🔗 **Wokwi Simulation Link**  
(https://wokwi.com/projects/455164338725670913)

---

---

## 🔌 Circuit Connection

### Ultrasonic Sensor → ESP32
- VCC → 5V  
- GND → GND  
- TRIG → GPIO 5  
- ECHO → GPIO 18  

### Relay Module → ESP32
- IN → GPIO 23  
- VCC → 5V  
- GND → GND
- 
### Low Level LED → Resistor → ESP32
- IN → Resistor (220 Ohms) →  16
- Anode → GND

### Mid Level LED → Resistor → ESP32
- Cathode → Resistor (220 Ohms) →  15
- Anode → GND

### High Level LED → Resistor → ESP32
- Cathode → Resistor (220 Ohms) →  14
- Anode → GND
---

## 📱 Blynk Dashboard Setup

| Virtual Pin | Function |
|-------------|----------------|
| V1 | Water Level Display |

---

### 1️⃣ Clone Repository
```bash
git clone https://github.com/YOUR_USERNAME/ESP32-Smart-Tank-Monitor.git
```

## 📄 Documentation

- 📘 Project Report → docs/Project_Report.pdf
- 🔍 Circuit Explanation → docs/Circuit_Explanation.md
- 🧩 System Design → docs/System_Design.md
---

## 👨‍💻 Author

Oladipupo Akobe
B.Eng Computer Engineering Student

---

📬 Contact

You can connect with me for collaboration or project discussions at akobeoladipupo@gmail.com.
