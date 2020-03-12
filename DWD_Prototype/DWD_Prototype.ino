/**
 * This example is for working with more than 2 IR proximity sensors (SHARP 2Y0A21)
 * Aim: Read all sensor data send it to Max MSP 
 */

#define ARRAY_LENGTH 4

int sensorArray[ARRAY_LENGTH];

void setup()
{
  Serial.begin(9600); // starts the serial monitor
  delay(500);
}

void loop()
{
  for (int i = 0; i < ARRAY_LENGTH / 2; i++)
  {
    sensorArray[i] = i + 1;
    sensorArray[i + 1] = analogRead(i);
  }

  for (int i = 0; i < ARRAY_LENGTH / 2; i++)
  {
    Serial.print(sensorArray[i]);
    Serial.print(" ");
    Serial.print(sensorArray[i + 1]);
    Serial.print(" ");
  }
  Serial.println("");
  delay(500);
}
