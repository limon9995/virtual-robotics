# 🌙 LDR Automatic Light

An Arduino-based automatic lighting system that uses an **LDR (Light Dependent Resistor)** to detect the surrounding light level and automatically control an LED.

This project is part of the **Virtual Robotics** learning journey and focuses on sensor-based automation using Arduino.

---

## 🎯 Project Goal

Build a simple automatic lighting system where:

* 🌑 Low light → LED turns **ON**
* ☀️ High light → LED turns **OFF**

The Arduino reads the LDR sensor value and compares it with a predefined threshold to make the decision automatically.

---

## 🧠 How It Works

The system follows this automation flow:

```text
Light
  ↓
LDR Sensor
  ↓
Arduino Analog Input (A0)
  ↓
Read Sensor Value
  ↓
Compare with Threshold
  ↓
┌───────────────────────┐
│ Value < 500           │
│ → Dark → LED ON       │
└───────────────────────┘
           OR
┌───────────────────────┐
│ Value ≥ 500           │
│ → Bright → LED OFF    │
└───────────────────────┘
```

The Arduino does not directly understand whether the environment is "dark" or "bright".

Instead, the LDR provides a numerical sensor value, and the Arduino uses a **threshold** to make the decision.

---

## 🔧 Components

* Arduino Uno
* LDR / Photoresistor Sensor
* LED
* Jumper wires
* Wokwi Simulator

---

## 🔌 Circuit Connections

### LDR Sensor

| LDR Pin | Arduino |
| ------- | ------- |
| AO      | A0      |
| VCC     | 5V      |
| GND     | GND     |

### LED

| LED Pin     | Arduino |
| ----------- | ------- |
| Anode (A)   | D13     |
| Cathode (C) | GND     |

---

## 💻 Code

The Arduino continuously reads the LDR value and controls the LED based on the threshold.

```cpp
// =====================================================
// PROJECT: LDR Automatic Light
// FUNCTION: Turn LED ON when it is dark
//           Turn LED OFF when it is bright
// =====================================================

// LDR is connected to analog pin A0
const int LDR_PIN = A0;

// LED is connected to digital pin 13
const int LED_PIN = 13;

// This value decides when the environment is dark
const int DARK_THRESHOLD = 500;

void setup() {
  // Set LED pin as OUTPUT
  pinMode(LED_PIN, OUTPUT);

  // Start Serial Monitor
  Serial.begin(9600);
}

void loop() {
  // Read the light level from the LDR
  int lightValue = analogRead(LDR_PIN);

  // Show the sensor value
  Serial.print("Light Value: ");
  Serial.println(lightValue);

  // Check if the environment is dark
  if (lightValue < DARK_THRESHOLD) {
    // Turn the LED ON
    digitalWrite(LED_PIN, HIGH);
    Serial.println("Dark - LED ON");
  }
  else {
    // Turn the LED OFF
    digitalWrite(LED_PIN, LOW);
    Serial.println("Bright - LED OFF");
  }

  // Wait before reading again
  delay(200);
}
```

---

## 📊 Threshold Logic

The current threshold is:

```cpp
const int DARK_THRESHOLD = 500;
```

The decision logic is:

| LDR Value | Condition | Result  |
| --------: | --------- | ------- |
|   `< 500` | Dark      | LED ON  |
|   `≥ 500` | Bright    | LED OFF |

For example:

```text
Light Value: 494
Dark - LED ON
```

Because:

```text
494 < 500
```

And:

```text
Light Value: 577
Bright - LED OFF
```

Because:

```text
577 ≥ 500
```

The threshold can be changed later depending on the desired light sensitivity.

---

## 📚 Concepts Learned

This project introduced several important robotics and automation concepts:

* Analog input
* `analogRead()`
* Sensor data
* LDR / photoresistor
* Threshold-based decision making
* Digital output
* `digitalWrite()`
* `if / else`
* Automatic control
* Sensor → Decision → Actuator architecture
* Serial Monitor debugging

---

## 🔄 Automation Architecture

This project demonstrates a basic automation architecture:

```text
INPUT
  ↓
LDR Sensor
  ↓
PROCESSING
  ↓
Arduino + Threshold Logic
  ↓
OUTPUT
  ↓
LED
```

This same architecture appears in larger automation systems.

For example:

```text
Temperature Sensor
        ↓
     Controller
        ↓
    Temperature
     Threshold
        ↓
       Fan
```

The main idea remains the same:

> **Sense → Decide → Act**

---

## 🧪 Testing

The project was tested in the Wokwi simulator by changing the illumination level of the LDR.

### Test 1 — Low Light

```text
Light Value: 494
Dark - LED ON
```

Result:

```text
LED → ON ✅
```

### Test 2 — Higher Light

```text
Light Value: 577
Bright - LED OFF
```

Result:

```text
LED → OFF ✅
```

### Test 3 — Threshold Experiment

The threshold was temporarily changed from:

```text
500 → 600
```

This demonstrated how changing the threshold changes the system's decision boundary.

After testing, the threshold was restored to:

```cpp
DARK_THRESHOLD = 500;
```

---

## 🛠️ Simulation Platform

This project was developed and tested using **Wokwi**, a browser-based electronics simulator.

The simulation allows the circuit and Arduino code to be tested without physical hardware.

---

## 📁 Project Files

```text
03-ldr-automatic-light/
│
├── README.md
├── sketch.ino
├── diagram.json
└── wokwi.toml
```

### File Description

| File           | Purpose                     |
| -------------- | --------------------------- |
| `README.md`    | Project documentation       |
| `sketch.ino`   | Arduino source code         |
| `diagram.json` | Wokwi circuit configuration |
| `wokwi.toml`   | Wokwi project configuration |

---

## 🚀 Future Improvements

Possible improvements for a future version:

* Add a potentiometer to manually adjust the threshold
* Control a relay instead of an LED
* Add multiple lights
* Add motion detection using a PIR sensor
* Add an LCD/OLED display
* Add automatic brightness control
* Replace the fixed threshold with adaptive logic
* Build the system using an ESP32
* Connect the system to IoT/cloud services

---

## 📌 Project Status

**Status: Completed ✅**

The system successfully detects changes in light level and automatically controls the LED using threshold-based logic.

---

## 🎓 Learning Path

This project is part of the **Virtual Robotics** roadmap:

```text
01. Button Controlled LED       ✅
02. Button Toggle LED           ✅
03. LDR Automatic Light         ✅
04. Next Automation Project     🔜
```

---

## 👨‍💻 Author

**Limon Hossain**

Virtual Robotics — Project-Based Learning Journey
