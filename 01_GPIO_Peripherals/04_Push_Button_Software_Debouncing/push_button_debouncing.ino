const int BUTTON_PIN = 2;

int buttonPressCount = 0;

int lastButtonReading = HIGH;
int stableButtonState = HIGH;

unsigned long lastDebounceTime = 0;
const unsigned long debounceDelay = 50;

void setup() {
  pinMode(BUTTON_PIN, INPUT_PULLUP);
  Serial.begin(9600);

  Serial.println("Push Button Counter Started");
  Serial.println("Button Presses: 0");
}

void loop() {
  int reading = digitalRead(BUTTON_PIN);

  if (reading != lastButtonReading) {
    lastDebounceTime = millis();
  }

  if (millis() - lastDebounceTime >= debounceDelay) {
    if (reading != stableButtonState) {
      stableButtonState = reading;

      if (stableButtonState == LOW) {
        buttonPressCount++;

        Serial.print("Button Presses: ");
        Serial.println(buttonPressCount);
      }
    }
  }

  lastButtonReading = reading;
}
