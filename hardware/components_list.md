# Hardware Components List

## Main Controller

### ESP32 Microcontroller
- Controls entire system
- Processes sensor data
- Controls relay and LEDs
- Provides WiFi communication

---

## Sensors

### HC-SR04 Ultrasonic Sensor
Purpose:
Measures water level inside tank.

---

## Output Devices

### Relay Module
Purpose:
Controls water pump switching.

---

### Water Pump (Simulated)
Purpose:
Refills tank when water level is low.

---

### LED Indicators

| LED | Purpose |
|--------|-------------|
| Red LED | Low water warning |
| Yellow LED | Medium water level |
| Green LED | Tank full indicator |

Each LED uses a 220Ω resistor for current protection.

---

## Passive Components

### Resistors (220Ω)
Used to protect LED from excessive current.

---

## Supporting Components

- Breadboard
- Jumper wires
- Power supply (5V)

---

## System Requirements

- Stable power supply
- WiFi connectivity
- Proper grounding
