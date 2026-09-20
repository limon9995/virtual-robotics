# 🔘 Button Toggle LED

This is the second mini project of my **Smart Home Automation** journey.

The goal of this project is to learn how a button can change and remember the state of an output.

## 🎯 Project Goal

Build a system where each button press changes the LED state.

* First press → LED ON
* Second press → LED OFF
* Third press → LED ON
* Fourth press → LED OFF

The LED stays in its current state after the button is released.

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
* `digitalRead()`
* `digitalWrite()`
* `INPUT_PULLUP`
* Boolean variables
* State memory
* Toggle logic
* `!` NOT operator
* `while` loop
* Basic button debouncing
* Serial Monitor debugging

## ⚙️ Working Principle

The Arduino detects a new button press and changes the stored LED state.

```text
Button Press
     ↓
Arduino reads input
     ↓
Change LED state
     ↓
Remember the new state
     ↓
LED stays ON or OFF
```

The important concept is **state memory**.

The Arduino remembers whether the LED is currently ON or OFF.

## 🔄 Toggle Logic

The LED state changes every time a new button press is detected.

```text
OFF → ON
ON  → OFF
```

This is done using:

```cpp
ledState = !ledState;
```

## 🛡️ Button Debouncing

A physical button can create multiple quick signals when pressed.

The program waits until the button is released before accepting another press.

This prevents one long press from being detected as multiple presses.

## 🧪 Simulation

The project was built and tested using **Wokwi Arduino simulation**.

## 📚 What I Learned

This project introduced the idea of **state-based control**.

Instead of simply checking whether a button is pressed, the Arduino can remember a previous state and change it when a new event happens.

This concept is important for:

* Automation systems
* Control systems
* Robotics
* PLC logic
* IoT devices

## 📌 Status

**✅ Completed**

---

**Part of the `virtual-robotics` learning journey.**
