const int pirSensor = 7;
const int ledPin = 6;
const int buzzerPin = 5;
const int buttonPin = 12;

bool buzzerMode = false;

void setup()
{
    pinMode(ledPin, OUTPUT);
    pinMode(buzzerMode, OUTPUT);
    pinMode(buttonPin, INPUT);
}

void loop()
{
    int sensorValue = digitalRead(pirSensor);
    if (sensorValue)
    {
        buzzerMode = true;
    }
}
