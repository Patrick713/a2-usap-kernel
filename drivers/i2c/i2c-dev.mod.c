#include <linux/build-salt.h>
#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

BUILD_SALT;

MODULE_INFO(vermagic, VERMAGIC_STRING);
MODULE_INFO(name, KBUILD_MODNAME);

__visible struct module __this_module
__section(.gnu.linkonce.this_module) = {
	.name = KBUILD_MODNAME,
	.init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
	.exit = cleanup_module,
#endif
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

static const struct modversion_info ____versions[]
__used __section(__versions) = {
	{ 0xe9942317, "module_layout" },
	{ 0xa0337a7f, "no_llseek" },
	{ 0x60131784, "bus_unregister_notifier" },
	{ 0x6091b333, "unregister_chrdev_region" },
	{ 0x6ebe0949, "i2c_for_each_dev" },
	{ 0x254652b1, "class_destroy" },
	{ 0xe449c256, "bus_register_notifier" },
	{ 0x1e4b9e78, "i2c_bus_type" },
	{ 0xe6d85203, "__class_create" },
	{ 0x3fd78f3b, "register_chrdev_region" },
	{ 0xbc10dd97, "__put_user_4" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xcb3e7453, "i2c_smbus_xfer" },
	{ 0xae353d77, "arm_copy_from_user" },
	{ 0x5f754e5a, "memset" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x51a910c0, "arm_copy_to_user" },
	{ 0xde45aa0d, "i2c_transfer" },
	{ 0x2d6fcc06, "__kmalloc" },
	{ 0xc5850110, "printk" },
	{ 0x26800c62, "cdev_device_add" },
	{ 0xe54dbfa5, "dev_set_name" },
	{ 0x9dc3b2ba, "device_initialize" },
	{ 0xad534415, "cdev_init" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x38c891ae, "cdev_device_del" },
	{ 0xebcc8bdd, "put_device" },
	{ 0xcb203516, "i2c_transfer_buffer_flags" },
	{ 0xe2e8065e, "memdup_user" },
	{ 0xf715aa7c, "i2c_verify_client" },
	{ 0xbb542eb4, "device_for_each_child" },
	{ 0xfecf4d23, "i2c_adapter_type" },
	{ 0xc358aaf8, "snprintf" },
	{ 0xebaa9dc8, "kmem_cache_alloc_trace" },
	{ 0xf4610713, "kmalloc_caches" },
	{ 0x2c5dad49, "i2c_get_adapter" },
	{ 0x32f973e3, "i2c_put_adapter" },
	{ 0x37a0cba, "kfree" },
	{ 0xdb9ca3c5, "_raw_spin_lock" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "61F542EB2F961D0651830E1");
