const int PL_PIN = 10;
const int DATA_PIN = 12;
const int CLOCK_PIN = 13;

void setup() {
  Serial.begin(9600);

  pinMode(PL_PIN, OUTPUT);
  pinMode(DATA_PIN, INPUT);
  pinMode(CLOCK_PIN, OUTPUT);

  digitalWrite(CLOCK_PIN, LOW);
  digitalWrite(PL_PIN, HIGH);

  Serial.println("SPI Peripheral Data Reader Started");
}

void loop() {
  // Load the parallel input states.
  digitalWrite(PL_PIN, LOW);
  delayMicroseconds(5);
  digitalWrite(PL_PIN, HIGH);

  // Read 8 bits, most-significant bit first.
  byte data = shiftIn(DATA_PIN, CLOCK_PIN, MSBFIRST);

  Serial.print("Received Data: 0b");
  for (int i = 7; i >= 0; i--) {
    Serial.print(bitRead(data, i));
  }

  Serial.print(" | Hex: 0x");
  if (data < 16) Serial.print("0");
  Serial.println(data, HEX);

  delay(1000);
}
