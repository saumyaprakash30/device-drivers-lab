## Saumya Prakash (CED17I043)
# Intro
Writing a C program, compiling it as module, inserting into kernel, checking message in log and removing module from kernel.
# Explaination
```module_init()```  which will get executed at the time of loading the driver
```module_exit()``` which will get executed at the time when driver gets exited.

In order to compile and build the hello module; we need to create a **Makefile**.

# how to run
```
$ sudo make
```

This will compile and build c program. and generates object and kernel object files. We will inly use **.ko** file for loading the driver module.
screenshot after make.


![screenshot](https://github.com/saumyaprakash30/device-drivers-lab/blob/master/lab2/5/make.png)

```
$ insmod helloWorld.ko
```
This is used to load module in kernel.
```
$ rmmod helloWorld
```
This will remove module from kernel.
```
$ dmesg |tail
```
This will generate last 10 lines of log file where we can see the output of program.
# Output Screenshot
![screenshot](https://github.com/saumyaprakash30/device-drivers-lab/blob/master/lab2/5/output.png)
# Files
* script.sh - contains bash command
* IMG20210322103817.jpg - ScreenShot of output