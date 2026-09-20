// =====================================================
// PROJECT: Button Toggle LED
// FUNCTION: Press once  → LED ON
//           Press again → LED OFF
// =====================================================

// ---------------- PIN SETUP ----------------

// LED is connected to digital pin 13
const int LED_PIN = 13;

// Button is connected to digital pin 2
const int BUTTON_PIN = 2;

// ---------------- LED MEMORY ----------------

// This remembers whether the LED is ON or OFF
//
// false = OFF
// true  = ON
bool ledState = false;

// ---------------- BUTTON MEMORY ----------------

// This stores the previous button state
//
// HIGH = button released
// LOW  = button pressed
bool lastButtonState = HIGH;

void setup() {

  // Set LED pin as OUTPUT
  pinMode(LED_PIN, OUTPUT);

  // Set button pin as INPUT with internal pull-up resistor
  //
  // Released → HIGH
  // Pressed  → LOW
  pinMode(BUTTON_PIN, INPUT_PULLUP);

  // Start Serial Monitor
  Serial.begin(9600);
}

void loop() {

  // Read the current button state
  bool currentButtonState = digitalRead(BUTTON_PIN);

  // Check if the button has just been pressed
  //
  // Previous state = HIGH
  // Current state  = LOW
  //
  // This means a new press happened
  if (lastButtonState == HIGH && currentButtonState == LOW) {

    // Toggle the LED state
    //
    // OFF → ON
    // ON  → OFF
    ledState = !ledState;

    // Apply the new state to the physical LED
    digitalWrite(LED_PIN, ledState);

    // Show the new LED state in Serial Monitor
    if (ledState == true) {
      Serial.println("LED ON");
    }
    else {
      Serial.println("LED OFF");
    }

    // Wait until the button is released
    //
    // This prevents one long press
    // from being detected multiple times
    while (digitalRead(BUTTON_PIN) == LOW) {
      delay(10);
    }

    // Small extra delay for button bouncing
    delay(50);
  }

  // Save the current button state
  // for the next loop
  lastButtonState = currentButtonState;
}
