## GPIO
In this example we will demonstrate, GPIO interface of Raspberry PI using C and python. [This](https://elinux.org/RPi_GPIO_Code_Samples) page has the example of gpio code in different programming language. 
## Python 
### RPi.GPIO 
RPi.GPIO, is a Python module to control the GPIO interface on the Raspberry Pi.

### Gpiozero
A newer GPIO library for the Raspberry Pi is gpiozero. Created by Ben Nuttall of the Raspberry Pi Foundation and other contributors it is released under an MIT-type free software license.

While newer than Rpi.GPIO, it is now generally recommended to use it for new programming.

## C
WiringPi is a GPIO access library for the Raspberry Pi. Written in C, it is usable from C or C++ or any language than can call C APIs. Third party bindings for a number a number of languages including Ruby, Python, and Perl are also available.

It supports a similar API to the Wiring IDE supported on Arduino microcontrollers, making it easier to port hardware control code between the Raspberry Pi and Arduino platforms.

### WiringPi
#### Installation
1. Easy method
```
sudo apt-get install wiringpi
```
2. build fro source
```
git clone git://git.drogon.net/wiringPi
cd wiringPi
git pull origin
./build
```

To check proper installation 
```
gpio -v
```
### WiringPi User guide

To get information about pin numbering on our respective Raspberry Pi version, we can use following command:
```
gpio readall
```
