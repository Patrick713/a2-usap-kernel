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
	{ 0x2d3385d3, "system_wq" },
	{ 0x480a268d, "device_remove_file" },
	{ 0xf4610713, "kmalloc_caches" },
	{ 0x2d6fcc06, "__kmalloc" },
	{ 0x14d1b7f5, "generic_file_llseek" },
	{ 0xa219a88d, "hid_open_report" },
	{ 0xcd34ce55, "single_open" },
	{ 0x97255bdf, "strlen" },
	{ 0xe4e5c1d9, "input_ff_create_memless" },
	{ 0xf7c048ae, "single_release" },
	{ 0xf66ad8b2, "power_supply_unregister" },
	{ 0x1bdb8ad6, "kobject_uevent" },
	{ 0x20000329, "simple_strtoul" },
	{ 0xc8275115, "seq_printf" },
	{ 0x4205ad24, "cancel_work_sync" },
	{ 0x2f1de84d, "power_supply_powers" },
	{ 0xb1b939e, "kmemdup" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xae353d77, "arm_copy_from_user" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0x7c20652d, "debugfs_create_file" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xdc0adda3, "seq_read" },
	{ 0xd697e69a, "trace_hardirqs_on" },
	{ 0x526c3a6c, "jiffies" },
	{ 0x51a910c0, "arm_copy_to_user" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x297acc01, "input_set_abs_params" },
	{ 0xfb384d37, "kasprintf" },
	{ 0x38ea3b28, "input_event" },
	{ 0x5bbe49f4, "__init_waitqueue_head" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0xf65110e8, "_dev_warn" },
	{ 0x39a12ca7, "_raw_spin_unlock_irqrestore" },
	{ 0x85ae30c8, "power_supply_get_drvdata" },
	{ 0x3375510b, "mutex_lock_interruptible" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0x760a7600, "led_classdev_register_ext" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0x71c90087, "memcmp" },
	{ 0x66ab689e, "hid_hw_close" },
	{ 0xaafdc258, "strcasecmp" },
	{ 0x84b183ae, "strncmp" },
	{ 0x47915c30, "debugfs_remove" },
	{ 0x3dc9fce7, "hid_hw_open" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x81febe09, "simple_open" },
	{ 0x7fa795f, "_dev_err" },
	{ 0x2196324, "__aeabi_idiv" },
	{ 0xd95a2cd, "device_create_file" },
	{ 0x3eabc38c, "_dev_info" },
	{ 0xd9ce8f0c, "strnlen" },
	{ 0xebcc8bdd, "put_device" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x7b0629e7, "input_register_device" },
	{ 0x77f6f183, "kmalloc_order_trace" },
	{ 0x2da81bff, "_raw_spin_lock_irq" },
	{ 0x2de4f87b, "input_free_device" },
	{ 0xc104368b, "wait_for_completion_interruptible_timeout" },
	{ 0x4bbddbca, "hid_hw_stop" },
	{ 0xebaa9dc8, "kmem_cache_alloc_trace" },
	{ 0x5f849a69, "_raw_spin_lock_irqsave" },
	{ 0xde147102, "get_device" },
	{ 0x79727164, "led_classdev_unregister" },
	{ 0x2cfde9a2, "warn_slowpath_fmt" },
	{ 0x167c65ac, "seq_lseek" },
	{ 0x37a0cba, "kfree" },
	{ 0x9d669763, "memcpy" },
	{ 0xc0e66c25, "input_unregister_device" },
	{ 0x84ead130, "__hid_register_driver" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0xb2d48a2e, "queue_work_on" },
	{ 0xe6c12171, "complete" },
	{ 0xc358aaf8, "snprintf" },
	{ 0xf4e9c026, "hid_hw_start" },
	{ 0xbf0d88b8, "power_supply_register" },
	{ 0x2f357d74, "hid_unregister_driver" },
	{ 0xd83dc5e6, "wait_for_completion_timeout" },
	{ 0xea1c9521, "input_allocate_device" },
};

MODULE_INFO(depends, "ff-memless");

MODULE_ALIAS("hid:b0005g*v0000057Ep00000306");
MODULE_ALIAS("hid:b0005g*v0000057Ep00000330");

MODULE_INFO(srcversion, "41BA17F24F6AEA39692E68A");
