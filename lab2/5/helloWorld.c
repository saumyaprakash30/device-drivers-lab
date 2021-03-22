#include<linux/module.h>
#include<linux/init.h>
#include<linux/kernel.h>

static int hello_init(void){
   printk(KERN_ALERT "Hey... its Sp. First dd prog\n");
   return 0;
}

static void hello_exit(void){
   printk(KERN_INFO "bye!! dd prog.\n");
}

module_init(hello_init);
module_exit(hello_exit);

MODULE_AUTHOR("Saumya Prakash");