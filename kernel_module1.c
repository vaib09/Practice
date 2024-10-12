#include<linux/init.h>
#include<linux/module.h>

MODULE_LICENSE("GPL");

int kernel_module_init(void){

		printk(KERN_ALERT "Inside the %s fuction \n",__FUNCTION__);
		return 0;

}

void kernel_module_exit(void){

	printk(KERN_ALERT "Inside the %s fuction \n",__FUNCTION__);

}

module_init(kernel_module_init);
module_exit(kernel_module_exit);
