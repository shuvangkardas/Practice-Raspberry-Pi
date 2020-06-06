from gpiozero import LED
from time import sleep

led = LED(17)

while True:
	led.on()
	print("LED ON")
	sleep(1)
	led.off()
	print("LED OFF")
	sleep(1)