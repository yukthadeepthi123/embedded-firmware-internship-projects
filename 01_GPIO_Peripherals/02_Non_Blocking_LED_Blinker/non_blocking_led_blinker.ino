const int LED_PIN = 8;
const int BUTTON_PIN = 2;

unsigned long previousMillis = 0;
const unsigned long blinkInterval = 500;

int ledState = LOW;

int lastButtonState = HIGH;

void setup() {
  pinMode(LED_PIN, OUTPUT);
  pinMode(BUTTON_PIN, INPUT_PULLUP);

  Serial.begin(9600);
  Serial.println("Non-Blocking LED Blinker Started");
}

void loop() {
  unsigned long currentMillis = millis();

  // Toggle the LED every 500 milliseconds
  if (currentMillis - previousMillis >= blinkInterval) {
    previousMillis = currentMillis;

    ledState = !ledState;
    digitalWrite(LED_PIN, ledState);
  }

  // Check the button without blocking the loop
  int buttonState = digitalRead(BUTTON_PIN);

  if (buttonState != lastButtonState) {
    lastButtonState = buttonState;

    if (buttonState == LOW) {
      Serial.println("Button: PRESSED");
    } else {
      Serial.println("Button: RELEASED");
    }
  }
}
