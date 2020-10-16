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
	{ 0x71bf2745, "usb_mon_register" },
	{ 0x2680385, "kmem_cache_destroy" },
	{ 0xa4ab8272, "cdev_del" },
	{ 0xf4610713, "kmalloc_caches" },
	{ 0x2d6fcc06, "__kmalloc" },
	{ 0xad534415, "cdev_init" },
	{ 0xf09b5d9a, "get_zeroed_page" },
	{ 0x528c709d, "simple_read_from_buffer" },
	{ 0x93b18eee, "debugfs_create_dir" },
	{ 0x76d11765, "mem_map" },
	{ 0x89bbafc6, "usb_register_notify" },
	{ 0x4d06a496, "usb_debug_root" },
	{ 0x983ac031, "remove_wait_queue" },
	{ 0xa0337a7f, "no_llseek" },
	{ 0xda800db5, "device_destroy" },
	{ 0xfffa3100, "sg_next" },
	{ 0x987c11c7, "__pv_phys_pfn_offset" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0xae353d77, "arm_copy_from_user" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0x6091b333, "unregister_chrdev_region" },
	{ 0x7c20652d, "debugfs_create_file" },
	{ 0x51a910c0, "arm_copy_to_user" },
	{ 0x5bbe49f4, "__init_waitqueue_head" },
	{ 0xaad8c7d6, "default_wake_function" },
	{ 0x5f754e5a, "memset" },
	{ 0x39a12ca7, "_raw_spin_unlock_irqrestore" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0x9ec6ca96, "ktime_get_real_ts64" },
	{ 0xc0420b23, "usb_bus_idr_lock" },
	{ 0x47915c30, "debugfs_remove" },
	{ 0xbb9f1908, "kmem_cache_free" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0x13e86e9b, "device_create" },
	{ 0xc1e58a5f, "refcount_dec_and_test_checked" },
	{ 0xfed11ed1, "usb_mon_deregister" },
	{ 0x570c6c9a, "cdev_add" },
	{ 0x811dc334, "usb_unregister_notify" },
	{ 0x4007496c, "kmem_cache_alloc" },
	{ 0x65d411e9, "idr_get_next" },
	{ 0xbc10dd97, "__put_user_4" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x1000e51, "schedule" },
	{ 0xebaa9dc8, "kmem_cache_alloc_trace" },
	{ 0x5f849a69, "_raw_spin_lock_irqsave" },
	{ 0x4c0e8130, "kmem_cache_create" },
	{ 0x4302d0eb, "free_pages" },
	{ 0x3dcf1ffa, "__wake_up" },
	{ 0x2cfde9a2, "warn_slowpath_fmt" },
	{ 0xa17bd3fc, "add_wait_queue" },
	{ 0x37a0cba, "kfree" },
	{ 0x9d669763, "memcpy" },
	{ 0x254652b1, "class_destroy" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xc358aaf8, "snprintf" },
	{ 0x1ee8d6d4, "refcount_inc_checked" },
	{ 0x3461ba36, "usb_bus_idr" },
	{ 0x5e515be6, "ktime_get_ts64" },
	{ 0xe6d85203, "__class_create" },
	{ 0xe3ec2f2b, "alloc_chrdev_region" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "919DA275607B231672D1FD8");
