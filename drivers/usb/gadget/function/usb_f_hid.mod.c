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
	{ 0xa4ab8272, "cdev_del" },
	{ 0xf4610713, "kmalloc_caches" },
	{ 0xad534415, "cdev_init" },
	{ 0xe1d9cb60, "usb_gstrings_attach" },
	{ 0x4e412961, "usb_free_all_descriptors" },
	{ 0x4d127d75, "usb_ep_disable" },
	{ 0xcdbf753d, "usb_ep_enable" },
	{ 0x1bee5592, "usb_ep_queue" },
	{ 0xda800db5, "device_destroy" },
	{ 0xb1b939e, "kmemdup" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0xae353d77, "arm_copy_from_user" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0x6091b333, "unregister_chrdev_region" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xf6dc7e70, "usb_function_unregister" },
	{ 0x51a910c0, "arm_copy_to_user" },
	{ 0x5bbe49f4, "__init_waitqueue_head" },
	{ 0x5f754e5a, "memset" },
	{ 0x7592e5b, "usb_put_function_instance" },
	{ 0x6a6e05bf, "kstrtou8" },
	{ 0x39a12ca7, "_raw_spin_unlock_irqrestore" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0xaea4b69b, "usb_ep_autoconfig" },
	{ 0xa24491bf, "ida_free" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0xc847167e, "config_group_init_type_name" },
	{ 0x36ac7fd0, "noop_llseek" },
	{ 0x13e86e9b, "device_create" },
	{ 0x7fa795f, "_dev_err" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x38aa9a6c, "usb_function_register" },
	{ 0x570c6c9a, "cdev_add" },
	{ 0xb39882ca, "alloc_ep_req" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x1000e51, "schedule" },
	{ 0x4af6ddf0, "kstrtou16" },
	{ 0x53ff8a7d, "config_ep_by_speed" },
	{ 0x81cbdd08, "usb_ep_free_request" },
	{ 0xebaa9dc8, "kmem_cache_alloc_trace" },
	{ 0x5f849a69, "_raw_spin_lock_irqsave" },
	{ 0x3dcf1ffa, "__wake_up" },
	{ 0x647af474, "prepare_to_wait_event" },
	{ 0x2cfde9a2, "warn_slowpath_fmt" },
	{ 0x37a0cba, "kfree" },
	{ 0x9d669763, "memcpy" },
	{ 0x254652b1, "class_destroy" },
	{ 0xf43cbd3, "usb_assign_descriptors" },
	{ 0x49970de8, "finish_wait" },
	{ 0xc4bd6698, "usb_interface_id" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xe6d85203, "__class_create" },
	{ 0xe3ec2f2b, "alloc_chrdev_region" },
	{ 0xa5684076, "ida_alloc_range" },
};

MODULE_INFO(depends, "libcomposite,udc-core");


MODULE_INFO(srcversion, "30D9DA98161CFA9ED735108");
