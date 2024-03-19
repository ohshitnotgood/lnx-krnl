#include <linux/kernel.h>
#include <linux/module.h>

int init_module(void) {
    pr_info("Hello World\n");

    // Must always return 0, otherwise this would mean the module has failed to load properly
    return 0;
}


void cleanup_module(void) {
    pr_info("Time 4 cleanup\n");
}

MODULE_LICENSE("GPL");

