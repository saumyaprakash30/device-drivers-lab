#include<linux/module.h>
#include<linux/init.h>
#include<linux/kernel.h>
#include <linux/fs.h>

static int d_open(struct inode *inode, struct file *pfile)
{
  printk(KERN_ALERT "Inside %s func.\n",__FUNCTION__);

  return 0;
}
static ssize_t d_read(struct file *filp, /* see include/linux/fs.h   */
                           char *buffer,      /* buffer to fill with data */
                           size_t length,     /* length of the buffer     */
                           loff_t *offset)
{

  printk(KERN_ALERT "Inside %s func.\n",__FUNCTION__);

  return 0;
}

static ssize_t d_write(struct file *filp, const char *buf, size_t len, loff_t *off)
{
    printk(KERN_ALERT "Inside %s func.\n",__FUNCTION__);  return len;
}

int d_close(struct inode *pinode,struct file *pfile){
    printk(KERN_ALERT "Inside %s func.\n",__FUNCTION__);
    return 0 ;
}

static struct file_operations file_ops = {
  .owner = THIS_MODULE,
  .read = d_read,
  .write = d_write,
  .open = d_open
};

static int hello_init(void){
//    printk(KERN_ALERT "Hey... its Sp. First dd prog\n");
   printk(KERN_ALERT "Inside %s func.\n",__FUNCTION__);
   register_chrdev(200,"First char drv prog",&file_ops);
   return 0;
}

static void hello_exit(void){
//    printk(KERN_INFO "bye!! dd prog.\n");
    printk(KERN_ALERT "Inside %s func.\n",__FUNCTION__);
    unregister_chrdev(200,"First char drv prog");
}

module_init(hello_init);
module_exit(hello_exit);

MODULE_AUTHOR("Saumya Prakash");