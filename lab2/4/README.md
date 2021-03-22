## Saumya Prakash (CED17I043)
# Intro
This is a simple script used to have two mouse cursor on monitor.
# Explaination
```
$ xinput list
```
This command will list all pointer and keyboard attached to device.
```
$ xinput create-master SecondMouse
```
This command will create new master that will help in attaching pointer device to it. Use ```$ xinput list``` and note down the id of mouse in core pointer and id of newly created master.
```
$ sleep 1 && xinput reattach 14 15
```
This command will attach my external mouse(i.e id=14) to newly created master(id=15).
Now you can see two pointers on monitor.

# Screenshot
![screenshot](https://github.com/saumyaprakash30/device-drivers-lab/blob/master/lab2/4/Screenshot%20from%202021-03-22%2010-28-07.png)
# Files
* script.sh - contains bash command
* output.png - ScreenShot of output