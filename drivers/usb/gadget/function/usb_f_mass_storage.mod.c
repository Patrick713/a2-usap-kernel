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
	{ 0x7906b13f, "kernel_write" },
	{ 0xf4610713, "kmalloc_caches" },
	{ 0x2d6fcc06, "__kmalloc" },
	{ 0xe1d9cb60, "usb_gstrings_attach" },
	{ 0x3b917bbf, "complete_and_exit" },
	{ 0xa7b3181c, "up_read" },
	{ 0x4e412961, "usb_free_all_descriptors" },
	{ 0x186f1f88, "dequeue_signal" },
	{ 0x349cba85, "strchr" },
	{ 0x4d127d75, "usb_ep_disable" },
	{ 0xcdbf753d, "usb_ep_enable" },
	{ 0x97255bdf, "strlen" },
	{ 0x1bee5592, "usb_ep_queue" },
	{ 0x7ab88a45, "system_freezing_cnt" },
	{ 0xf7802486, "__aeabi_uidivmod" },
	{ 0xcc34eccd, "usb_ep_set_wedge" },
	{ 0x2a3aa678, "_test_and_clear_bit" },
	{ 0x9f0846da, "config_item_put" },
	{ 0x1f9cf033, "file_path" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0xbbf8788c, "vfs_fsync" },
	{ 0x9232c06c, "usb_ep_set_halt" },
	{ 0xb0a0bfe8, "usb_ep_alloc_request" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xf6dc7e70, "usb_function_unregister" },
	{ 0xd697e69a, "trace_hardirqs_on" },
	{ 0xdd34010a, "kthread_create_on_node" },
	{ 0xfb1d7438, "down_read" },
	{ 0x5bbe49f4, "__init_waitqueue_head" },
	{ 0xb561ac5b, "wait_for_completion" },
	{ 0x68a5ef6, "kernel_read" },
	{ 0xf65110e8, "_dev_warn" },
	{ 0x5f754e5a, "memset" },
	{ 0x124bad4d, "kstrtobool" },
	{ 0x5c2640cb, "device_register" },
	{ 0x7592e5b, "usb_put_function_instance" },
	{ 0x6a6e05bf, "kstrtou8" },
	{ 0x39a12ca7, "_raw_spin_unlock_irqrestore" },
	{ 0x86dbf1e, "freezing_slow_path" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0x59d23839, "unregister_gadget_item" },
	{ 0xc5850110, "printk" },
	{ 0xaea4b69b, "usb_ep_autoconfig" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0xc847167e, "config_group_init_type_name" },
	{ 0x4750e85c, "usb_ep_clear_halt" },
	{ 0x7e0ce0c3, "up_write" },
	{ 0x7fa795f, "_dev_err" },
	{ 0x4253aa7e, "down_write" },
	{ 0xa92173df, "fput" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x38aa9a6c, "usb_function_register" },
	{ 0x15c41786, "usb_composite_setup_continue" },
	{ 0xbbbb2921, "usb_ep_dequeue" },
	{ 0xebcc8bdd, "put_device" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x1000e51, "schedule" },
	{ 0x77f6f183, "kmalloc_order_trace" },
	{ 0x2da81bff, "_raw_spin_lock_irq" },
	{ 0x4482cdb, "__refrigerator" },
	{ 0x53ff8a7d, "config_ep_by_speed" },
	{ 0xb35d51ab, "wake_up_process" },
	{ 0x81cbdd08, "usb_ep_free_request" },
	{ 0xcc5005fe, "msleep_interruptible" },
	{ 0xebaa9dc8, "kmem_cache_alloc_trace" },
	{ 0xdb9ca3c5, "_raw_spin_lock" },
	{ 0x5f849a69, "_raw_spin_lock_irqsave" },
	{ 0x3dcf1ffa, "__wake_up" },
	{ 0x647af474, "prepare_to_wait_event" },
	{ 0x2cfde9a2, "warn_slowpath_fmt" },
	{ 0x37a0cba, "kfree" },
	{ 0x9d669763, "memcpy" },
	{ 0x6df1aaf1, "kernel_sigaction" },
	{ 0xc64804e4, "send_sig_info" },
	{ 0x9e61bb05, "set_freezable" },
	{ 0x43b2460b, "invalidate_mapping_pages" },
	{ 0xf43cbd3, "usb_assign_descriptors" },
	{ 0x49970de8, "finish_wait" },
	{ 0xc4bd6698, "usb_interface_id" },
	{ 0x9d6eee2e, "device_unregister" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0xc358aaf8, "snprintf" },
	{ 0x99bb8806, "memmove" },
	{ 0xe54dbfa5, "dev_set_name" },
	{ 0xcbfc50b, "usb_ep_fifo_flush" },
	{ 0x49ebacbd, "_clear_bit" },
	{ 0x6f013ecd, "__init_rwsem" },
	{ 0x93b6908b, "filp_open" },
};

MODULE_INFO(depends, "libcomposite,udc-core");


MODULE_INFO(srcversion, "BD8A056D384105E9FDAE8CC");
