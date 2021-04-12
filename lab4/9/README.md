## Saumya Prakash (CED17I043)
# Intro
Write a C program, keyboard logger, to capture keyboard strokes, through which we can capture typed passwords.

# Explaination
```module_init()```  which will get executed at the time of loading the driver

```module_exit()``` which will get executed at the time when driver gets exited.

```notifier_call``` : This is a pointer to the callback function that will be called once an event happens.

``` KBD_KEYCODE``` - this events are always sent before other events, holding the keycode.

```param->down``` - This variable can either be 0 or 1. If it is 1 it means that the key has been pressed and 0 means that the key has been released.

```param->value``` - This variable will contain the actual data representation of the key pressed (i.e. 0x41 for A)

Everytime when a key is pressed ```keylogger_notify``` function called. In this function we are first checking if ```shift``` key is pressed or not and then with  ```param->down``` checking that is key pressed or released and with the help ```param->value``` we are mapping the keys and printing in kernel log. 

In order to compile and build the hello module; we need to create a **Makefile**.

# how to run
```
$ sudo make
```

This will compile and build c program. and generates object and kernel object files. We will inly use **.ko** file for loading the driver module.

```
$ insmod keylogger.ko
```
This is used to load module in kernel.
```
$ rmmod keylogger
```
This will remove module from kernel.
```
$ dmesg |tail
```
This will generate last 10 lines of log file where we can see the output of program having keyboard logs.
# Output Screenshot
![screenshot](https://github.com/saumyaprakash30/device-drivers-lab/blob/master/lab4/9/output.png)
# Files
* keylogger.c - c program
* MakeFile - use to compile and build kernel object
* kbduskeymap.h - key mapping file
* output.png - ScreenShot of output
