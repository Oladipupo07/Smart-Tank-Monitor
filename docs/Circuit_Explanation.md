# Circuit Explanation

## Overview
This system uses an ESP32 microcontroller to monitor water level in a storage tank, automatically control a water pump, and provide visual indication using LED indicators.

---

## Ultrasonic Sensor Connection (HC-SR04)

The ultrasonic sensor measures the distance between the water surface and the top of the tank.

### Pin Connections

| Sensor Pin | ESP32 Pin |
|------------|------------|
| VCC | 5V |
| GND | GND |
| TRIG | GPIO 5 |
| ECHO | GPIO 18 |

---

### Working Principle

1. The TRIG pin sends ultrasonic pulses.
2. The pulses bounce off the water surface.
3. The ECHO pin receives reflected signals.
4. ESP32 calculates the distance.
5. Water level is calculated using tank height.

---

## Relay Module Connection

The relay module controls the water pump.

### Pin Connections

| Relay Pin | ESP32 Pin |
|------------|------------|
| IN | GPIO 23 |
| VCC | 5V |
| GND | GND |

---

### Working Principle

- Relay works as an electrical switch.
- HIGH signal from ESP32 turns pump ON.
- LOW signal from ESP32 turns pump OFF.

---

## LED Water Level Indicator

Three LEDs provide visual tank water level indication.

### LED Connections

| LED | ESP32 Pin | Function |
|------|------------|-------------|
| Red LED | GPIO 14 | Low Water Level |
| Yellow LED | GPIO 12 | Medium Water Level |
| Green LED | GPIO 13 | High Water Level |

Each LED is connected through a 220Ω resistor to limit current and protect the LED.

---

### LED Working Logic

- LOW water level → Red LED ON  
- MEDIUM water level → White LED ON  
- HIGH water level → Green LED ON  

This allows monitoring without requiring smartphone connectivity.

---

## Power Supply

The ESP32 is powered through USB or regulated 5V supply. Relay module shares the same power supply.

---

## Safety Considerations

- Proper grounding must be maintained.
- Relay isolation protects ESP32 from high voltage.
- Electrical components must be kept away from water.
