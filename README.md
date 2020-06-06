# Raspberry PI

# Installation 
In the [official site](https://www.raspberrypi.org/downloads/) of the raspberry pi, There are few flavours of operating system. I selected Raspberry Pi OS(previously know as Raspbian)
Here are the steps I followed for the installation.
1. Connect SD card(more than 16GB)with PC and formatted the card using SD Card Formatter downloaded from sdcard association
2. Then used win32DiskImager to copy the boot files in the SD Card

Tada!! Installation done. 

## Use RPI without monitor keyboard
I don't have a extra moitor and a keyboard for runniog my raspberry pi. So, the question is, how can I use my raspberry pi? Here I am going to describe the easites method
 
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
In the same boot folder create another file named  `SSH` without any extension. This will create SSH terminal access. Now done with all the setups. Boot up the device. Check DHCP cient list in the router to check whether the rpi connected or not. you can also check the ssh port 22 is open or not using the telnet command. telnet is a useful tool to check remote computer port open or not. 

So all setupt done and RPi is ready to use. We can use RPi two ways. using SSH, we can get access to the terminal of RPi or we can use VNC Viewer software to access the RPI desktop. 

#### SSH
We can use putty to access the RPI through SSH. The default credentials for accesing rpi is. Putty is another useful tool for windows computer to access remote computer terminal. 
```
user name : pi
password: raspberry
```
#### Access RPI Gui
We can access the GUI remotely without any monitor. For that we will use VNC Viewer software. If VNC is not installed, the follow the commands to install it. Full Raspberry PI OS has it by default. 
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
RPi model | cat /sys/firmware/devicetree/base/model

## Install Python 3.8 on raspberry pi 
As I installed Raspberry Pi default os. It has built in installation of python 2.7. I need to upgrade it. 
