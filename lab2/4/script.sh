#!/bin/bash
xinput list
xinput create-master SecondMouse
xinput list
sleep 1 && xinput reattach 14 15