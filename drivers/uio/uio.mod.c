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
	{ 0x22f8c1ca, "kobject_put" },
	{ 0x27ebf7d2, "cdev_alloc" },
	{ 0xa4ab8272, "cdev_del" },
	{ 0xf4610713, "kmalloc_caches" },
	{ 0x76d11765, "mem_map" },
	{ 0x983ac031, "remove_wait_queue" },
	{ 0x1bdb8ad6, "kobject_uevent" },
	{ 0x7dce2d53, "kobject_set_name" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0xae353d77, "arm_copy_from_user" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0x6091b333, "unregister_chrdev_region" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x51a910c0, "arm_copy_to_user" },
	{ 0xaf22ee50, "kobject_create_and_add" },
	{ 0x5bbe49f4, "__init_waitqueue_head" },
	{ 0xaad8c7d6, "default_wake_function" },
	{ 0x2878e15a, "idr_destroy" },
	{ 0xc1c73f49, "device_del" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0xe4c122d0, "class_unregister" },
	{ 0x3b00de61, "fasync_helper" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0x36ac7fd0, "noop_llseek" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x692a4f08, "idr_alloc" },
	{ 0x1b018b60, "device_add" },
	{ 0xdce4c7a8, "kobject_add" },
	{ 0x621255c5, "__class_register" },
	{ 0x7fa795f, "_dev_err" },
	{ 0xa346975c, "idr_remove" },
	{ 0x570c6c9a, "cdev_add" },
	{ 0x12b548f6, "module_put" },
	{ 0xebcc8bdd, "put_device" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x1000e51, "schedule" },
	{ 0xebaa9dc8, "kmem_cache_alloc_trace" },
	{ 0xde147102, "get_device" },
	{ 0x3dcf1ffa, "__wake_up" },
	{ 0xa17bd3fc, "add_wait_queue" },
	{ 0x37a0cba, "kfree" },
	{ 0xb7897628, "remap_pfn_range" },
	{ 0x9dc3b2ba, "device_initialize" },
	{ 0x607e57a8, "kobject_init" },
	{ 0x9707a604, "kill_fasync" },
	{ 0x9d6eee2e, "device_unregister" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x12c76c9d, "vmalloc_to_page" },
	{ 0xe54dbfa5, "dev_set_name" },
	{ 0x47925794, "idr_find" },
	{ 0xe3ec2f2b, "alloc_chrdev_region" },
	{ 0x717bcdac, "try_module_get" },
	{ 0xc1514a3b, "free_irq" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "591992B9182773F113E4868");
