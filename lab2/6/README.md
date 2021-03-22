## Saumya Prakash (CED17I043)
# Intro
Write a simple Char Device Driver. Test it by using passing on data.
# Explaination
Whenever there will be read or write in device driver file it will tell u.
# Command used
```
$ sudo make
```
above cmd compile and build kernel object.
```
$ sudo insmod charDriver.ko
```
above cmd insert module in kernel.
```
cat /proc/devices 
```
above cmd will show the which  major attached to which character device.

![screenshot](https://github.com/saumyaprakash30/device-drivers-lab/blob/master/lab2/6/charDevices.png)


```
sudo mknod -m 666 /dev/simple_char_device c 200 0

```
above cmd will create a spectial node whose name is  *simple_char_device* where **c** represet thta it is a character device and **200** denotes major and 0 denotes minor number of device.
```
sudo tail -f /var/log/syslog
```
above cmd will show the output whenever there is read/ write to device.
This will show the 
# Output Screenshot
![screenshot](https://github.com/saumyaprakash30/device-drivers-lab/blob/master/lab2/6/read.png)
![screenshot](https://github.com/saumyaprakash30/device-drivers-lab/blob/master/lab2/6/write.png)
# Files
* charDev.c - c program
* MakeFile - use to compile and build kernel object
* write.png - ScreenShot of passing value to driver file
* read.png - ScreenShot of reading file operation
* charDevices.png - screenshot of output from module.