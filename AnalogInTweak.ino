int sensorPin = A0;
int ledPin = 13;
int sensorValue = 0;

void setup()
{
    pinMode(ledPin, OUTPUT);
}

void loop()
{
    sensorValue = analogRead(sensorPin);
    if (sensorValue > 511)
    {
        digitalWrite(ledPin, HIGH);
        delay(sensorValue);
    }
    else
    {
        digitalWrite(ledPin, LOW);
        delay(sensorValue);
    }
    
}