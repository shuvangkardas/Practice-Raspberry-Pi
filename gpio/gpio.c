#include <wiringPI.h>

int main(void)
{
    led = 17
    wiringPiSetup();

    pinMode(led,OUTPUT);

    while(1)
    {
        digitalWrite(led,HIGH);
        delay(500);
        digitalWrite(led, LOW)
        delay(500);
    }
}