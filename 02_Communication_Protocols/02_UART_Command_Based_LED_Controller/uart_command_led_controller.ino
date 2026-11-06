const int LED_PIN = 8;
String commandBuffer = "";

void setup()
{
  pinMode(LED_PIN, OUTPUT);
  digitalWrite(LED_PIN, LOW);

  Serial.begin(9600);

  Serial.println("UART Command-Based LED Controller Ready");
  Serial.println("Commands: ON, OFF, STATUS");
  Serial.println("Send a command and press Enter.");
}

void processCommand(String command)
{
  command.trim();
  command.toUpperCase();

  if (command.length() == 0)
  {
    return;
  }

  if (command == "ON")
  {
    digitalWrite(LED_PIN, HIGH);
    Serial.println("LED turned ON");
  }
  else if (command == "OFF")
  {
    digitalWrite(LED_PIN, LOW);
    Serial.println("LED turned OFF");
  }
  else if (command == "STATUS")
  {
    if (digitalRead(LED_PIN) == HIGH)
    {
      Serial.println("LED STATUS: ON");
    }
    else
    {
      Serial.println("LED STATUS: OFF");
    }
  }
  else
  {
    Serial.print("ERROR: Invalid command: ");
    Serial.println(command);
    Serial.println("Valid commands: ON, OFF, STATUS");
  }
}

void loop()
{
  while (Serial.available() > 0)
  {
    char incomingChar = Serial.read();

    // Supports Newline, Carriage Return, or Both
    if (incomingChar == '\n' || incomingChar == '\r')
    {
      processCommand(commandBuffer);
      commandBuffer = "";
    }
    else
    {
      commandBuffer += incomingChar;

      if (commandBuffer.length() > 40)
      {
        commandBuffer = "";
        Serial.println("ERROR: Command too long");
      }
    }
  }
}
