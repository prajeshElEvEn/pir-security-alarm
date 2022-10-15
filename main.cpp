const int pirSensor = 7;
const int buzzerPin = 6;
const int ledPin = 5;

void setup()
{
    pinMode(buzzerPin, OUTPUT);
    pinMode(ledPin, OUTPUT);
}

void loop()
{
    int sensorValue = digitalRead(pirSensor);
    if (sensorValue)
    {
        tone(buzzerPin, 1000);
        digitalWrite(ledPin, HIGH);
    }
    else
    {
        noTone(buzzerPin);
        digitalWrite(ledPin, LOW);
    }
}
