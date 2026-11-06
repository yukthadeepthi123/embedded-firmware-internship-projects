String receivedText = "";
unsigned int messageCount = 0;

void setup() {
  Serial.begin(9600);

  Serial.println("UART Serial Data Monitor Started!");
  Serial.println("Type a message and press Enter.");
}

void loop() {
  if (Serial.available() > 0) {
    receivedText = Serial.readStringUntil('\n');
    receivedText.trim();

    if (receivedText.length() > 0) {
      messageCount++;

      Serial.print("Received Message: ");
      Serial.println(receivedText);

      Serial.print("Message Count: ");
      Serial.println(messageCount);
      Serial.println("--------------------");
    }
  }
}
