// =====================================================
// PROJECT: Button Controlled LED
// FUNCTION: Press the button to control the LED
// =====================================================

// ---------------- PIN SETUP ----------------

// LED is connected to digital pin 13
const int LED_PIN = 13;

// Button is connected to digital pin 2
const int BUTTON_PIN = 2;

void setup() {

  // Set LED pin as OUTPUT
  pinMode(LED_PIN, OUTPUT);

  // Set button pin as INPUT with internal pull-up resistor
  //
  // Released -> HIGH
  // Pressed  -> LOW
  pinMode(BUTTON_PIN, INPUT_PULLUP);

  // Start Serial Monitor
  Serial.begin(9600);
}

void loop() {

  // Read the current button state
  int buttonState = digitalRead(BUTTON_PIN);

  // Check if the button is pressed
  if (buttonState == LOW) {

    // Turn the LED ON
    digitalWrite(LED_PIN, HIGH);

    // Show the button state
    Serial.println("Button Pressed - LED ON");
  }

  else {

    // Turn the LED OFF
    digitalWrite(LED_PIN, LOW);

    // Show the button state
    Serial.println("Button Released - LED OFF");
  }

  // Small delay for stable reading
  delay(50);
}
