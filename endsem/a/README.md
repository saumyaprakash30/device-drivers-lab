## Saumya Prakash (CED17I043)
# Intro
Write a module that can take an integer parameter when it is loaded with insmod command.
# Explaination
```module_init()```  which will get executed at the time of loading the driver

```module_exit()``` which will get executed at the time when driver gets exited.

```module_param(name,type,permission)``` This is a macro and it takes three parameter. The first parameter is command line parameter name. The second parameter is type of command line parameter which can be int, uint, short, ushort, byte etc. The third parameter specifies the permissions to change command line parameter's value via sys file system. 

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
![screenshot](https://github.com/saumyaprakash30/device-drivers-lab/blob/master/endsem/a/output.png)

# Files
* integer_parameter.c - c program
* MakeFile - use to compile and build kernel object
* output.png - ScreenShot of output
