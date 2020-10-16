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
	{ 0x480a268d, "device_remove_file" },
	{ 0xf4610713, "kmalloc_caches" },
	{ 0x7129e5f8, "hex_asc" },
	{ 0x14d1b7f5, "generic_file_llseek" },
	{ 0xa219a88d, "hid_open_report" },
	{ 0xcd34ce55, "single_open" },
	{ 0xf7c048ae, "single_release" },
	{ 0xc8275115, "seq_printf" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0x5c8bdf32, "__hid_request" },
	{ 0xae353d77, "arm_copy_from_user" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0x7c20652d, "debugfs_create_file" },
	{ 0xdc0adda3, "seq_read" },
	{ 0xd94a75e0, "hid_debug_event" },
	{ 0x5495392, "hid_debug" },
	{ 0x51a910c0, "arm_copy_to_user" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x38ea3b28, "input_event" },
	{ 0x5bbe49f4, "__init_waitqueue_head" },
	{ 0xf65110e8, "_dev_warn" },
	{ 0x5f754e5a, "memset" },
	{ 0x39a12ca7, "_raw_spin_unlock_irqrestore" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0x71c90087, "memcmp" },
	{ 0x66ab689e, "hid_hw_close" },
	{ 0x47915c30, "debugfs_remove" },
	{ 0x3dc9fce7, "hid_hw_open" },
	{ 0x643feb7f, "input_set_capability" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0x7328366a, "hid_set_field" },
	{ 0x81febe09, "simple_open" },
	{ 0x7fa795f, "_dev_err" },
	{ 0xd95a2cd, "device_create_file" },
	{ 0xe816fde9, "hid_alloc_report_buf" },
	{ 0x3eabc38c, "_dev_info" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x7b0629e7, "input_register_device" },
	{ 0x2de4f87b, "input_free_device" },
	{ 0xc104368b, "wait_for_completion_interruptible_timeout" },
	{ 0x4bbddbca, "hid_hw_stop" },
	{ 0xebaa9dc8, "kmem_cache_alloc_trace" },
	{ 0x5f849a69, "_raw_spin_lock_irqsave" },
	{ 0x3dcf1ffa, "__wake_up" },
	{ 0x167c65ac, "seq_lseek" },
	{ 0x37a0cba, "kfree" },
	{ 0x9d669763, "memcpy" },
	{ 0xc0e66c25, "input_unregister_device" },
	{ 0x84ead130, "__hid_register_driver" },
	{ 0x222e7ce2, "sysfs_streq" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0xe6c12171, "complete" },
	{ 0xc358aaf8, "snprintf" },
	{ 0xf4e9c026, "hid_hw_start" },
	{ 0x2f357d74, "hid_unregister_driver" },
	{ 0x75c20282, "hid_output_report" },
	{ 0xea1c9521, "input_allocate_device" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("hid:b0003g*v000004D8p0000C002");
MODULE_ALIAS("hid:b0003g*v000004D8p0000F002");

MODULE_INFO(srcversion, "2725B740118B3CBE8874FB9");
