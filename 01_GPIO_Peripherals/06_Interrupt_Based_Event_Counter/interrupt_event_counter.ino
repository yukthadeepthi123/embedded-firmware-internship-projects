const int BUTTON_PIN = 2;

volatile unsigned long eventCount = 0;
volatile unsigned long lastInterruptTime = 0;

const unsigned long debounceInterval = 50;

unsigned long lastDisplayedCount = 0;

void buttonISR() {
  unsigned long currentTime = millis();

  if (currentTime - lastInterruptTime >= debounceInterval) {
    eventCount++;
    lastInterruptTime = currentTime;
  }
}

void setup() {
  pinMode(BUTTON_PIN, INPUT_PULLUP);
  Serial.begin(9600);

  attachInterrupt(
    digitalPinToInterrupt(BUTTON_PIN),
    buttonISR,
    FALLING
  );

  Serial.println("Interrupt Event Counter Started");
  Serial.println("Event Count: 0");
}

void loop() {
  noInterrupts();
  unsigned long count = eventCount;
  interrupts();

  if (count != lastDisplayedCount) {
    Serial.print("Event Count: ");
    Serial.println(count);
    lastDisplayedCount = count;
  }
}
