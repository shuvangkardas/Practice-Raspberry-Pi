#include <wiringPi.h>

int main(void)
{
    int led = 17;
    wiringPiSetup();

    pinMode(led,OUTPUT);

    while(1)
    {
        digitalWrite(led,HIGH);
        delay(500);
        digitalWrite(led, LOW);
        delay(500);
    }
}