## RPi Serial Communication
RPi 3 has two UARTs as follows
1. UART0 -> PL011
2. UART1 -> mini UART

- Fully featured PL011 UART was moved from the header pins to the Bluetooth chip 
- Mini UART made available on header pins 8 and 10. Hence, the miniUART is now available on /dev/ttyS0 and this is the primary uart for RPi 3 . 

**Note: ** All UARTs on the Raspberry Pi are 3.3V only - damage will occur if they are connected to 5V systems

## Disable Serial Console to use UART. 

1. Start raspi-config: 
```sudo raspi-config.```
2. Select option 5 - interfacing options.
3. Select option P6 - serial.
4. At the prompt 
```Would you like a login shell to be accessible over serial?```
answer 'No'
5. At the prompt ```Would you like the serial port hardware to be enabled?```
 answer 'Yes'
6. Exit raspi-config and reboot the Pi for changes to take effect.