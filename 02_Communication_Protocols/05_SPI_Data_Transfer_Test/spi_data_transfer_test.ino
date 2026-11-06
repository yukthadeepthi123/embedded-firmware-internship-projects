#include <SPI.h>

const int CS_PIN = 10;

void setup()
{
  Serial.begin(9600);

  pinMode(CS_PIN, OUTPUT);
  digitalWrite(CS_PIN, HIGH);

  SPI.begin();

  Serial.println("SPI Data Transfer Test Started");

  SPI.beginTransaction(
    SPISettings(1000000, MSBFIRST, SPI_MODE0)
  );

  digitalWrite(CS_PIN, LOW);

  byte transmittedByte = 0x55;
  byte receivedByte = SPI.transfer(transmittedByte);

  digitalWrite(CS_PIN, HIGH);

  SPI.endTransaction();

  Serial.print("Transmitted Byte: 0x");
  Serial.println(transmittedByte, HEX);

  Serial.print("Received Byte: 0x");
  Serial.println(receivedByte, HEX);

  if (receivedByte == transmittedByte)
  {
    Serial.println("PASS: SPI loopback successful!");
  }
  else
  {
    Serial.println("FAIL: Check MOSI-to-MISO connection.");
  }
}

void loop()
{
}
