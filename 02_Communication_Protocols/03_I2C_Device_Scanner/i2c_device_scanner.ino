#include <Wire.h>

void setup()
{
  Serial.begin(9600);
  Wire.begin();

  Serial.println("I2C Device Scanner Started");
  Serial.println("Scanning I2C bus...");

  byte deviceCount = 0;

  for (byte address = 1; address < 127; address++)
  {
    Wire.beginTransmission(address);
    byte error = Wire.endTransmission();

    if (error == 0)
    {
      Serial.print("I2C device found at address 0x");

      if (address < 16)
      {
        Serial.print("0");
      }

      Serial.println(address, HEX);
      deviceCount++;
    }
  }

  if (deviceCount == 0)
  {
    Serial.println("No I2C devices found.");
  }
  else
  {
    Serial.print("Scan complete. Devices found: ");
    Serial.println(deviceCount);
  }
}

void loop()
{
  // Press Reset to scan again.
}
