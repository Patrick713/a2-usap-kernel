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
	{ 0x4756260d, "ida_destroy" },
	{ 0x2f357d74, "hid_unregister_driver" },
	{ 0x84ead130, "__hid_register_driver" },
	{ 0x5495392, "hid_debug" },
	{ 0xc5850110, "printk" },
	{ 0xee43fd9b, "___ratelimit" },
	{ 0x49ebacbd, "_clear_bit" },
	{ 0xd95a2cd, "device_create_file" },
	{ 0x66def207, "hid_validate_values" },
	{ 0xe4e5c1d9, "input_ff_create_memless" },
	{ 0x643feb7f, "input_set_capability" },
	{ 0x3dc9fce7, "hid_hw_open" },
	{ 0x2f1de84d, "power_supply_powers" },
	{ 0xcad472cf, "devm_power_supply_register" },
	{ 0x738f3a77, "devm_kasprintf" },
	{ 0x4b4bac30, "devm_led_classdev_register_ext" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0xa5684076, "ida_alloc_range" },
	{ 0x71c90087, "memcmp" },
	{ 0x5c8bdf32, "__hid_request" },
	{ 0xb2d48a2e, "queue_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x6a6e05bf, "kstrtou8" },
	{ 0x480a268d, "device_remove_file" },
	{ 0x4205ad24, "cancel_work_sync" },
	{ 0xa24491bf, "ida_free" },
	{ 0x66ab689e, "hid_hw_close" },
	{ 0x4209d0f9, "input_mt_sync_frame" },
	{ 0x2866f6d0, "input_mt_report_slot_state" },
	{ 0x38ea3b28, "input_event" },
	{ 0x2196324, "__aeabi_idiv" },
	{ 0xff178f6, "__aeabi_idivmod" },
	{ 0x5b3e02e5, "input_mt_init_slots" },
	{ 0x4bbddbca, "hid_hw_stop" },
	{ 0xf4e9c026, "hid_hw_start" },
	{ 0xa219a88d, "hid_open_report" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x85ae30c8, "power_supply_get_drvdata" },
	{ 0x724b676, "input_alloc_absinfo" },
	{ 0x297acc01, "input_set_abs_params" },
	{ 0x7b0629e7, "input_register_device" },
	{ 0xe544be36, "devm_kmalloc" },
	{ 0x97255bdf, "strlen" },
	{ 0xebcbcc65, "devm_input_allocate_device" },
	{ 0xb1b939e, "kmemdup" },
	{ 0xc358aaf8, "snprintf" },
	{ 0x39a12ca7, "_raw_spin_unlock_irqrestore" },
	{ 0x5f849a69, "_raw_spin_lock_irqsave" },
	{ 0xf65110e8, "_dev_warn" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x80c4c319, "crc32_le" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x5f754e5a, "memset" },
	{ 0x37a0cba, "kfree" },
	{ 0xebaa9dc8, "kmem_cache_alloc_trace" },
	{ 0xf4610713, "kmalloc_caches" },
	{ 0x3eabc38c, "_dev_info" },
	{ 0x7fa795f, "_dev_err" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

MODULE_INFO(depends, "ff-memless");

MODULE_ALIAS("hid:b0003g*v0000054Cp00000268");
MODULE_ALIAS("hid:b0003g*v0000054Cp0000042F");
MODULE_ALIAS("hid:b0005g*v0000054Cp0000042F");
MODULE_ALIAS("hid:b0003g*v0000054Cp000003D5");
MODULE_ALIAS("hid:b0005g*v0000054Cp000003D5");
MODULE_ALIAS("hid:b0005g*v0000054Cp00000268");
MODULE_ALIAS("hid:b0003g*v0000054Cp0000024B");
MODULE_ALIAS("hid:b0003g*v0000054Cp00000374");
MODULE_ALIAS("hid:b0003g*v0000054Cp00000002");
MODULE_ALIAS("hid:b0003g*v0000054Cp00001000");
MODULE_ALIAS("hid:b0005g*v0000054Cp00000306");
MODULE_ALIAS("hid:b0005g*v0000046Dp00000306");
MODULE_ALIAS("hid:b0005g*v00000609p00000306");
MODULE_ALIAS("hid:b0003g*v0000054Cp000005C4");
MODULE_ALIAS("hid:b0005g*v0000054Cp000005C4");
MODULE_ALIAS("hid:b0003g*v0000054Cp000009CC");
MODULE_ALIAS("hid:b0005g*v0000054Cp000009CC");
MODULE_ALIAS("hid:b0003g*v0000054Cp00000BA0");
MODULE_ALIAS("hid:b0003g*v00001345p00003008");
MODULE_ALIAS("hid:b0005g*v00000609p00000368");
MODULE_ALIAS("hid:b0005g*v00000609p00000369");

MODULE_INFO(srcversion, "493DEC3DACB831AD23DD8C7");
