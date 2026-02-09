# 🚰 ESP32 Smart Water Tank Monitoring System

![ESP32](https://img.shields.io/badge/ESP32-IoT-blue)
![Platform](https://img.shields.io/badge/Platform-Arduino-green)
![Simulation](https://img.shields.io/badge/Simulation-Wokwi-orange)
![Status](https://img.shields.io/badge/Project-Completed-brightgreen)

---

## 📌 Project Overview

The **ESP32 Smart Water Tank Monitoring System** is an IoT-based embedded system that monitors water level in a tank and automatically controls a water pump. The system also sends real-time alerts to a smartphone using the Blynk IoT platform.

This project helps solve common water management problems such as:

- Pump overuse  
- Water wastage  
- Manual tank monitoring  
- Sudden tank overflow  

---

## ⭐ Key Features

✅ Real-time water level monitoring  
✅ Automatic pump control  
✅ Smartphone notification using Blynk  
✅ Serial monitor debugging system  
✅ Wokwi simulation supported  
✅ Energy efficient design  

---

## 🛠 Hardware Components

| Component | Purpose |
|-----------|-------------|
| ESP32 | Main microcontroller |
| HC-SR04 Ultrasonic Sensor | Water level measurement |
| LED (3) | Light up according to water level |
| Resistors (3) | Resists the current going through the LED |
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
### LED (Red) → Resistor → ESP32
- IN → Resistor (220 Ohms) →  16
- Anode → GND

### LED (White) → Resistor → ESP32
- Cathode → Resistor (220 Ohms) →  15
- Anode → GND

### LED (Green) → Resistor → ESP32
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

## 📈 Engineering Applications

1. Smart homes

2. Water supply systems

3. Industrial water monitoring

4. Agricultural irrigation control

---

## 🔮 Future Improvements

1. OLED display integration

2. GSM SMS alert system

3. Water flow monitoring

4. Cloud data logging

5. Solar powered operation

---

##👨‍💻 Author

Oladipupo Akobe
B.Eng Computer Engineering Student

---

📬 Contact

You can connect with me for collaboration or project discussions at akobeoladipupo@gmail.com.
