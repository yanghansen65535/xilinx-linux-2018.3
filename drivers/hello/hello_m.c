#include <linux/init.h>
#include <linux/module.h>
static int __init hello_init(void){
	printk(KERN_ALERT "hello\n");
	return 0;
}

void __exit hello_exit(void){
	printk(KERN_ALERT "hello exit\n");
}
module_init(hello_init);
module_exit(hello_exit);
