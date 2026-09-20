# 💡 Button Controlled LED

This is the first mini project of my **Smart Home Automation** journey.

The goal of this project is to learn how a digital input can control a digital output using an Arduino.

## 🎯 Project Goal

Build a simple system where a pushbutton controls an LED.

When the button is pressed, the Arduino detects the input and controls the LED.

## 🧩 Components

* Arduino Uno
* Pushbutton
* LED
* Jumper wires

## 🛠️ Tools

* Arduino
* Wokwi Simulator
* Arduino C/C++
* Git & GitHub

## 🔌 Basic Connection

### LED

* LED Anode → Arduino D13
* LED Cathode → GND

### Pushbutton

* Button → Arduino D2
* Button → GND
* Arduino internal pull-up resistor is used

## 🧠 Concepts Learned

* Digital input and output
* `pinMode()`
* `digitalRead()`
* `digitalWrite()`
* `INPUT_PULLUP`
* `if / else` logic
* Pushbutton control
* LED control
* Basic debugging with Serial Monitor

## ⚙️ Working Principle

The system follows a simple automation flow:

**INPUT → PROCESSING → OUTPUT**

```text
Pushbutton
    ↓
Arduino
    ↓
LED
```

The pushbutton provides the input.

The Arduino reads the button state and processes the logic.

The LED acts as the output.

## 🧪 Simulation

The project was built and tested using **Wokwi Arduino simulation**.

## 📚 What I Learned

This project helped me understand the basic relationship between:

* Input devices
* Microcontrollers
* Output devices
* Control logic

These concepts will be used in the upcoming Smart Home and Robotics projects.

## 📌 Status

**✅ Completed**

## 🚀 Next Project

The next project will introduce a new control concept and build on the knowledge learned here.

---

**Part of the `virtual-robotics` learning journey.**
