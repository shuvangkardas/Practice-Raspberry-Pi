# Raspberry PI

# Installation 
In the [official site](https://www.raspberrypi.org/downloads/) of the raspberry pi, There are few flavours of operating system. I selected Raspberry Pi OS(previously know as Raspbian)
Here are the steps and software I used
1. Connect the SD card more than 16GB with PC and formatted tha card using SD Card Formatter downloaded from sdcard association
2. Then used win32DiskImager to copy the boot files in the sd card 

Tada!! Installation done. 

## Configure RPI without monitor keyboard
I don't have extra moitor and keyboard for runniog my raspberry pi. How can I logged into raspberry pi using ssh. Here I am going to describe the easites method
 
#### Step 1:
First of all I need to connect the wifi when rpi boot up. Just open the sd card using PC and enter boot folder. Create a file in this directory called `wpa_supplicant.conf` The file should contain the following details:
```
country=US # Your 2-digit country code
ctrl_interface=DIR=/var/run/wpa_supplicant GROUP=netdev
network={
    ssid="YOUR_NETWORK_NAME"
    psk="YOUR_PASSWORD"
    key_mgmt=WPA-PSK
}
```

#### Step2:
In the same boot folder create another file named  `SSH` without any extension. This will create SSH terminal access the rpi. 
Now done with all the setup. Boot up the device. Check DHCP cient list in the router to check whether the rpi connected or not. you can check the ssh port 22 is open or not using the telnet command. 

## Using RPi
#### SSH
We can use putty to access the RPI through SSH. The default credentials for accesing rpi 
```
user name : pi
password: raspberry
```
#### Access RPI Gui
We can access the gui remotely without any monitor. For that we will use VNC Viewer software. VNC is already installed on the full Raspberry Pi OS image. If not we cann install it using the terminal command. 
```
sudo apt update
sudo apt install realvnc-vnc-server realvnc-vnc-viewer
```
After that, we have to enable it. 
```
sudo raspi-config
Navigate to Interfacing Options
Scroll down and select VNC > Yes.
```
## Few useful command 

shutdown | sudo shutdown -h now

## Install Python 3.8 on raspberry pi 
As I installed RAspberry Pi default os. It has built in installation of python 2.7. I need to upgrade it 