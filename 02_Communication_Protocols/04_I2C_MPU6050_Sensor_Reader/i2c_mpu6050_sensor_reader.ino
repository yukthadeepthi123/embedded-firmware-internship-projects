#include <Wire.h>
#include <Adafruit_MPU6050.h>
#include <Adafruit_Sensor.h>

Adafruit_MPU6050 mpu;

void setup()
{
  Serial.begin(9600);
  Wire.begin();

  Serial.println("I2C Sensor Reader Started");
  Serial.println("Initializing MPU6050...");

  if (!mpu.begin())
  {
    Serial.println("ERROR: MPU6050 not detected!");
    Serial.println("Check SDA, SCL, VCC and GND.");
    while (1)
    {
      delay(10);
    }
  }

  Serial.println("MPU6050 initialized successfully!");

  mpu.setAccelerometerRange(MPU6050_RANGE_8_G);
  mpu.setGyroRange(MPU6050_RANGE_500_DEG);
  mpu.setFilterBandwidth(MPU6050_BAND_21_HZ);

  delay(100);
}

void loop()
{
  sensors_event_t accel, gyro, temp;

  mpu.getEvent(&accel, &gyro, &temp);

  Serial.print("Accel X: ");
  Serial.print(accel.acceleration.x);
  Serial.print(" m/s^2 | Y: ");
  Serial.print(accel.acceleration.y);
  Serial.print(" m/s^2 | Z: ");
  Serial.print(accel.acceleration.z);
  Serial.println(" m/s^2");

  Serial.print("Gyro X: ");
  Serial.print(gyro.gyro.x);
  Serial.print(" rad/s | Y: ");
  Serial.print(gyro.gyro.y);
  Serial.print(" rad/s | Z: ");
  Serial.print(gyro.gyro.z);
  Serial.println(" rad/s");

  Serial.print("Temperature: ");
  Serial.print(temp.temperature);
  Serial.println(" deg C");

  Serial.println("--------------------------");

  delay(500);
}
