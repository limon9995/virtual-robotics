# 🌞 LDR Automatic Light

This is the third mini project of my **Smart Home Automation** journey.

The goal of this project is to learn how a light sensor can be used to automatically control an LED.

## 🎯 Project Goal

Build an automatic lighting system using an LDR sensor.

* Bright environment → LED OFF
* Dark environment → LED ON

The Arduino reads the light level and makes the decision automatically.

## 🧩 Components

* Arduino Uno
* LDR / Photoresistor
* LED

## 🛠️ Tools

* Arduino
* Wokwi Simulator
* Arduino C/C++
* Git & GitHub

## 🔌 Basic Connection

### LDR

The LDR is connected to an analog input.

* LDR → Arduino A0
* LDR → 5V
* LDR → GND

### LED

* LED Anode → Arduino D13
* LED Cathode → GND

## 🧠 Concepts Learned

* Analog input
* `analogRead()`
* Analog sensor values
* Sensor threshold
* Automatic control
* `if / else` logic
* Digital output
* Sensor-based automation

## ⚙️ Working Principle

The LDR measures the surrounding light level.

```text
Light
  ↓
LDR Sensor
  ↓
Arduino A0
  ↓
Decision
  ↓
LED ON / OFF
```

The Arduino continuously reads the LDR value and compares it with a threshold.

## 🔄 Control Logic

```text
Dark → LED ON
Bright → LED OFF
```

The system does not need a person to press a button.

The sensor provides the input and the Arduino makes the control decision automatically.

## 🧪 Simulation

The project was built and tested using **Wokwi Arduino simulation**.

## 📚 What I Learned

This project introduced the concept of **sensor-based automation**.

Instead of manually controlling an output, the Arduino can read a real-world condition and automatically control an actuator.

This concept is important for:

* Smart homes
* Robotics
* IoT
* Industrial automation
* Energy-saving systems

## 📌 Status

**⏳ In Progress**

---

**Part of the `virtual-robotics` learning journey.**
