// =====================================================
// PROJECT: LDR Automatic Light
// FUNCTION: Turn LED ON when it is dark
//           Turn LED OFF when it is bright
// =====================================================

// ---------------- PIN SETUP ----------------

// LDR is connected to analog pin A0
const int LDR_PIN = A0;

// LED is connected to digital pin 13
const int LED_PIN = 13;

// ---------------- LIGHT THRESHOLD ----------------

// This value decides when the environment is dark
//
// Lower value  → Dark
// Higher value → Bright
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
