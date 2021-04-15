/*
Saumya Prakash
CED17I043
*/

#include<linux/module.h>
static int num = 10;

int init_module(void)
{
    printk("Hey!! module inserted\n");
    printk("value entered = %d\n",num);
    return 0;
}

void cleanup_module(void)
{
    printk("bye!! module removed\n");
}

module_param(num,int,0);
MODULE_LICENSE("GPL");