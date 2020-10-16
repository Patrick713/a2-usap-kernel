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
	{ 0xfe41fb0b, "param_ops_bool" },
	{ 0x2f357d74, "hid_unregister_driver" },
	{ 0x84ead130, "__hid_register_driver" },
	{ 0xd95a2cd, "device_create_file" },
	{ 0x7e968afc, "devm_kfree" },
	{ 0xdf9208c0, "alloc_workqueue" },
	{ 0xb1b939e, "kmemdup" },
	{ 0xe1f3be95, "input_ff_create" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0xf0ef52e8, "down" },
	{ 0x581cde4e, "up" },
	{ 0xf4e9c026, "hid_hw_start" },
	{ 0xf63fc023, "sysfs_create_group" },
	{ 0x5bbe49f4, "__init_waitqueue_head" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0xa219a88d, "hid_open_report" },
	{ 0xe544be36, "devm_kmalloc" },
	{ 0x2de4f87b, "input_free_device" },
	{ 0x7b0629e7, "input_register_device" },
	{ 0xebcbcc65, "devm_input_allocate_device" },
	{ 0x738f3a77, "devm_kasprintf" },
	{ 0xc358aaf8, "snprintf" },
	{ 0x2d6fcc06, "__kmalloc" },
	{ 0x2f1de84d, "power_supply_powers" },
	{ 0xcad472cf, "devm_power_supply_register" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xb6ec1fc4, "devm_kmemdup" },
	{ 0x8b13a8b8, "hid_snto32" },
	{ 0x424e1e62, "hid_field_extract" },
	{ 0x3dcf1ffa, "__wake_up" },
	{ 0x58f6d9ef, "hid_report_raw_event" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x7b7034ab, "power_supply_changed" },
	{ 0x735f33b0, "mutex_is_locked" },
	{ 0x4c2ae700, "strnstr" },
	{ 0x4209d0f9, "input_mt_sync_frame" },
	{ 0x2866f6d0, "input_mt_report_slot_state" },
	{ 0xa152e27b, "input_mt_get_slot_by_key" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x480a268d, "device_remove_file" },
	{ 0x3eabc38c, "_dev_info" },
	{ 0x314b20c8, "scnprintf" },
	{ 0x20000329, "simple_strtoul" },
	{ 0x84b183ae, "strncmp" },
	{ 0x85ae30c8, "power_supply_get_drvdata" },
	{ 0x37a0cba, "kfree" },
	{ 0x49970de8, "finish_wait" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x647af474, "prepare_to_wait_event" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0x5f754e5a, "memset" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0x7fa795f, "_dev_err" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xc5850110, "printk" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x5495392, "hid_debug" },
	{ 0xf65110e8, "_dev_warn" },
	{ 0xb2d48a2e, "queue_work_on" },
	{ 0x9d669763, "memcpy" },
	{ 0xebaa9dc8, "kmem_cache_alloc_trace" },
	{ 0xf4610713, "kmalloc_caches" },
	{ 0x66ab689e, "hid_hw_close" },
	{ 0x3dc9fce7, "hid_hw_open" },
	{ 0x4205ad24, "cancel_work_sync" },
	{ 0x4bbddbca, "hid_hw_stop" },
	{ 0xa4040d67, "sysfs_remove_group" },
	{ 0xd653b126, "sched_clock" },
	{ 0x38ea3b28, "input_event" },
	{ 0x2196324, "__aeabi_idiv" },
	{ 0x5b3e02e5, "input_mt_init_slots" },
	{ 0x643feb7f, "input_set_capability" },
	{ 0x724b676, "input_alloc_absinfo" },
	{ 0x297acc01, "input_set_abs_params" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("hid:b0003g0102v0000046Dp00004011");
MODULE_ALIAS("hid:b0003g0102v0000046Dp00004101");
MODULE_ALIAS("hid:b0005g*v0000046Dp0000B00C");
MODULE_ALIAS("hid:b0003g0102v0000046Dp00001017");
MODULE_ALIAS("hid:b0003g0102v0000046Dp00004010");
MODULE_ALIAS("hid:b0003g0102v0000046Dp00004050");
MODULE_ALIAS("hid:b0003g0102v0000046Dp00004007");
MODULE_ALIAS("hid:b0003g0102v0000046Dp0000402D");
MODULE_ALIAS("hid:b0003g0102v0000046Dp0000101B");
MODULE_ALIAS("hid:b0003g0102v0000046Dp0000406D");
MODULE_ALIAS("hid:b0003g0102v0000046Dp0000405E");
MODULE_ALIAS("hid:b0003g0102v0000046Dp0000404A");
MODULE_ALIAS("hid:b0003g0102v0000046Dp0000B013");
MODULE_ALIAS("hid:b0003g0102v0000046Dp0000B018");
MODULE_ALIAS("hid:b0003g0102v0000046Dp0000B01F");
MODULE_ALIAS("hid:b0003g0102v0000046Dp0000406A");
MODULE_ALIAS("hid:b0003g0102v0000046Dp00004041");
MODULE_ALIAS("hid:b0003g0102v0000046Dp00004060");
MODULE_ALIAS("hid:b0003g0102v0000046Dp00004071");
MODULE_ALIAS("hid:b0003g0102v0000046Dp00004069");
MODULE_ALIAS("hid:b0003g0102v0000046Dp0000101A");
MODULE_ALIAS("hid:b0003g0102v0000046Dp00004024");
MODULE_ALIAS("hid:b0003g0102v0000046Dp00004002");
MODULE_ALIAS("hid:b0003g0102v0000046Dp0000B305");
MODULE_ALIAS("hid:b0003g0102v0000046Dp0000B30B");
MODULE_ALIAS("hid:b0003g0102v0000046Dp*");
MODULE_ALIAS("hid:b0003g0104v0000046Dp00000049");
MODULE_ALIAS("hid:b0003g0104v0000046Dp00000057");
MODULE_ALIAS("hid:b0003g0104v0000046Dp0000005C");
MODULE_ALIAS("hid:b0003g0104v0000046Dp000000FE");
MODULE_ALIAS("hid:b0003g0104v0000046Dp*");
MODULE_ALIAS("hid:b0003g*v0000046Dp0000C082");
MODULE_ALIAS("hid:b0003g*v0000046Dp0000C087");
MODULE_ALIAS("hid:b0003g*v0000046Dp0000C090");
MODULE_ALIAS("hid:b0003g*v0000046Dp0000C081");
MODULE_ALIAS("hid:b0003g*v0000046Dp0000C086");
MODULE_ALIAS("hid:b0003g*v0000046Dp0000C091");
MODULE_ALIAS("hid:b0003g*v0000046Dp0000C262");
MODULE_ALIAS("hid:b0003g*v0000046Dp0000C088");
MODULE_ALIAS("hid:b0005g*v0000046Dp0000B305");
MODULE_ALIAS("hid:b0005g*v0000046Dp0000B30B");

MODULE_INFO(srcversion, "43818D2BCB9BF3DBC0844EA");
