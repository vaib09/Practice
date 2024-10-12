#include<linux/init.h>
#include<linux/module.h>

MODULE_LICENSE("GPL");

__initdata int count = 5;

__init int kernel_module_init(void){

		int index = 0;
		printk(KERN_ALERT "Inside the %s fuction ",__FUNCTION__);
		for(index = 0; index < count; index++){ 
		
			printk(KERN_ALERT "Index = %d", index);
		}

		return 0;

}

void kernel_module_exit(void){

	printk(KERN_ALERT "Inside the %s fuction ",__FUNCTION__);

}

module_init(kernel_module_init);
module_exit(kernel_module_exit);
