#include <wiringPi.h>


int main(void)
{
    // WiringPu pin number is different than default raspberry pi pin number
    int led = 9;
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