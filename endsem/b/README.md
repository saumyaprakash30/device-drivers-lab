## Saumya Prakash (CED17I043)
# Intro
Write a module which prints your name in log.
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


```
$ insmod integer_parameter.ko
```
This is used to load module in kernel.
```
$ dmesg |tail
```
This will generate last 10 lines of log file where we can see the output of program.
```
$ rmmod integer_parameter
```
This will remove module from kernel.
# Output Screenshot
![screenshot](https://github.com/saumyaprakash30/device-drivers-lab/blob/master/endsem/b/output.png)

# Files
* integer_parameter.c - c program
* MakeFile - use to compile and build kernel object
* output.png - ScreenShot of output
