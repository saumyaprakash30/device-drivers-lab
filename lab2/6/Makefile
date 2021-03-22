obj-m += charDriver.o




all:
	$(MAKE) -C /lib/modules/$(shell uname -r)/build M=$(shell pwd) modules
	
clean:
	rm -rf *.o *.ko *.mod.* *.symvers *.order