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
	{ 0x2d3385d3, "system_wq" },
	{ 0x480a268d, "device_remove_file" },
	{ 0xf4610713, "kmalloc_caches" },
	{ 0x2d6fcc06, "__kmalloc" },
	{ 0x13d0adf7, "__kfifo_out" },
	{ 0xa219a88d, "hid_open_report" },
	{ 0x97255bdf, "strlen" },
	{ 0xd39fa6ab, "__kfifo_alloc" },
	{ 0xaf215b9b, "led_trigger_event" },
	{ 0x724b676, "input_alloc_absinfo" },
	{ 0xf7802486, "__aeabi_uidivmod" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x4205ad24, "cancel_work_sync" },
	{ 0xf1941f1b, "sysfs_create_files" },
	{ 0x2f1de84d, "power_supply_powers" },
	{ 0xe93e49c3, "devres_free" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0x5c8bdf32, "__hid_request" },
	{ 0xfe41fb0b, "param_ops_bool" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x29d9f26e, "cancel_delayed_work_sync" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0x4c446740, "devm_led_trigger_register" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xa4040d67, "sysfs_remove_group" },
	{ 0x7b113694, "devres_alloc_node" },
	{ 0x738f3a77, "devm_kasprintf" },
	{ 0x11aa29ed, "hid_input_report" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xaf22ee50, "kobject_create_and_add" },
	{ 0x58f6d9ef, "hid_report_raw_event" },
	{ 0x297acc01, "input_set_abs_params" },
	{ 0xeb55a931, "__kfifo_max_r" },
	{ 0x7b7034ab, "power_supply_changed" },
	{ 0x38ea3b28, "input_event" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0xf65110e8, "_dev_warn" },
	{ 0x5f754e5a, "memset" },
	{ 0x4b4bac30, "devm_led_classdev_register_ext" },
	{ 0x6a6e05bf, "kstrtou8" },
	{ 0x39a12ca7, "_raw_spin_unlock_irqrestore" },
	{ 0x85ae30c8, "power_supply_get_drvdata" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0xf63fc023, "sysfs_create_group" },
	{ 0x677adc55, "devres_open_group" },
	{ 0x66ab689e, "hid_hw_close" },
	{ 0x84b183ae, "strncmp" },
	{ 0x73e20c1c, "strlcpy" },
	{ 0x3dc9fce7, "hid_hw_open" },
	{ 0x643feb7f, "input_set_capability" },
	{ 0x33a4471e, "usb_hid_driver" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0x683c2234, "hid_compare_device_paths" },
	{ 0x1e6d26a8, "strstr" },
	{ 0x5b3e02e5, "input_mt_init_slots" },
	{ 0xc1e58a5f, "refcount_dec_and_test_checked" },
	{ 0x7fa795f, "_dev_err" },
	{ 0x2196324, "__aeabi_idiv" },
	{ 0xd95a2cd, "device_create_file" },
	{ 0xcb907ad6, "devm_add_action" },
	{ 0xe816fde9, "hid_alloc_report_buf" },
	{ 0x3eabc38c, "_dev_info" },
	{ 0x424e1e62, "hid_field_extract" },
	{ 0x6e6d6430, "hidinput_calc_abs_res" },
	{ 0x93215e1d, "__kfifo_skip_r" },
	{ 0xcf86cdac, "queue_delayed_work_on" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x7b0629e7, "input_register_device" },
	{ 0x2de4f87b, "input_free_device" },
	{ 0x2ec524ad, "__kfifo_in_r" },
	{ 0xb678366f, "int_sqrt" },
	{ 0x4bbddbca, "hid_hw_stop" },
	{ 0x915b35eb, "devres_add" },
	{ 0xebaa9dc8, "kmem_cache_alloc_trace" },
	{ 0x5f849a69, "_raw_spin_lock_irqsave" },
	{ 0xdb760f52, "__kfifo_free" },
	{ 0xcad472cf, "devm_power_supply_register" },
	{ 0xa152e27b, "input_mt_get_slot_by_key" },
	{ 0x37a0cba, "kfree" },
	{ 0x3b6c41ea, "kstrtouint" },
	{ 0x9d669763, "memcpy" },
	{ 0xebcbcc65, "devm_input_allocate_device" },
	{ 0x2866f6d0, "input_mt_report_slot_state" },
	{ 0x84ead130, "__hid_register_driver" },
	{ 0x314b20c8, "scnprintf" },
	{ 0x4209d0f9, "input_mt_sync_frame" },
	{ 0xf23fcb99, "__kfifo_in" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0xb2d48a2e, "queue_work_on" },
	{ 0xc358aaf8, "snprintf" },
	{ 0x99bb8806, "memmove" },
	{ 0xf4e9c026, "hid_hw_start" },
	{ 0x1ee8d6d4, "refcount_inc_checked" },
	{ 0x2f357d74, "hid_unregister_driver" },
	{ 0xe544be36, "devm_kmalloc" },
	{ 0x2f90f86f, "devres_close_group" },
	{ 0x69a290e3, "devres_release_group" },
	{ 0xaa6901ac, "__kfifo_out_r" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("hid:b0003g0101v0000056Ap00000000");
MODULE_ALIAS("hid:b0003g0101v0000056Ap00000003");
MODULE_ALIAS("hid:b0003g0101v0000056Ap00000010");
MODULE_ALIAS("hid:b0003g0101v0000056Ap00000011");
MODULE_ALIAS("hid:b0003g0101v0000056Ap00000012");
MODULE_ALIAS("hid:b0003g0101v0000056Ap00000013");
MODULE_ALIAS("hid:b0003g0101v0000056Ap00000014");
MODULE_ALIAS("hid:b0003g0101v0000056Ap00000015");
MODULE_ALIAS("hid:b0003g0101v0000056Ap00000016");
MODULE_ALIAS("hid:b0003g0101v0000056Ap00000017");
MODULE_ALIAS("hid:b0003g0101v0000056Ap00000018");
MODULE_ALIAS("hid:b0003g0101v0000056Ap00000019");
MODULE_ALIAS("hid:b0003g0101v0000056Ap00000020");
MODULE_ALIAS("hid:b0003g0101v0000056Ap00000021");
MODULE_ALIAS("hid:b0003g0101v0000056Ap00000022");
MODULE_ALIAS("hid:b0003g0101v0000056Ap00000023");
MODULE_ALIAS("hid:b0003g0101v0000056Ap00000024");
MODULE_ALIAS("hid:b0003g0101v0000056Ap00000026");
MODULE_ALIAS("hid:b0003g0101v0000056Ap00000027");
MODULE_ALIAS("hid:b0003g0101v0000056Ap00000028");
MODULE_ALIAS("hid:b0003g0101v0000056Ap00000029");
MODULE_ALIAS("hid:b0003g0101v0000056Ap0000002A");
MODULE_ALIAS("hid:b0003g0101v0000056Ap00000030");
MODULE_ALIAS("hid:b0003g0101v0000056Ap00000031");
MODULE_ALIAS("hid:b0003g0101v0000056Ap00000032");
MODULE_ALIAS("hid:b0003g0101v0000056Ap00000033");
MODULE_ALIAS("hid:b0003g0101v0000056Ap00000034");
MODULE_ALIAS("hid:b0003g0101v0000056Ap00000035");
MODULE_ALIAS("hid:b0003g0101v0000056Ap00000037");
MODULE_ALIAS("hid:b0003g0101v0000056Ap00000038");
MODULE_ALIAS("hid:b0003g0101v0000056Ap00000039");
MODULE_ALIAS("hid:b0003g0101v0000056Ap0000003F");
MODULE_ALIAS("hid:b0003g0101v0000056Ap00000041");
MODULE_ALIAS("hid:b0003g0101v0000056Ap00000042");
MODULE_ALIAS("hid:b0003g0101v0000056Ap00000043");
MODULE_ALIAS("hid:b0003g0101v0000056Ap00000044");
MODULE_ALIAS("hid:b0003g0101v0000056Ap00000045");
MODULE_ALIAS("hid:b0003g0101v0000056Ap00000047");
MODULE_ALIAS("hid:b0003g0101v0000056Ap00000057");
MODULE_ALIAS("hid:b0003g0101v0000056Ap00000059");
MODULE_ALIAS("hid:b0003g0101v0000056Ap0000005B");
MODULE_ALIAS("hid:b0003g0101v0000056Ap0000005D");
MODULE_ALIAS("hid:b0003g0101v0000056Ap0000005E");
MODULE_ALIAS("hid:b0003g0101v0000056Ap00000060");
MODULE_ALIAS("hid:b0003g0101v0000056Ap00000061");
MODULE_ALIAS("hid:b0003g0101v0000056Ap00000062");
MODULE_ALIAS("hid:b0003g0101v0000056Ap00000063");
MODULE_ALIAS("hid:b0003g0101v0000056Ap00000064");
MODULE_ALIAS("hid:b0003g0101v0000056Ap00000065");
MODULE_ALIAS("hid:b0003g0101v0000056Ap00000069");
MODULE_ALIAS("hid:b0003g0101v0000056Ap0000006A");
MODULE_ALIAS("hid:b0003g0101v0000056Ap0000006B");
MODULE_ALIAS("hid:b0005g0101v0000056Ap00000081");
MODULE_ALIAS("hid:b0003g0101v0000056Ap00000084");
MODULE_ALIAS("hid:b0003g0101v0000056Ap00000090");
MODULE_ALIAS("hid:b0003g0101v0000056Ap00000093");
MODULE_ALIAS("hid:b0003g0101v0000056Ap00000097");
MODULE_ALIAS("hid:b0003g0101v0000056Ap0000009A");
MODULE_ALIAS("hid:b0003g0101v0000056Ap0000009F");
MODULE_ALIAS("hid:b0003g0101v0000056Ap000000B0");
MODULE_ALIAS("hid:b0003g0101v0000056Ap000000B1");
MODULE_ALIAS("hid:b0003g0101v0000056Ap000000B2");
MODULE_ALIAS("hid:b0003g0101v0000056Ap000000B3");
MODULE_ALIAS("hid:b0003g0101v0000056Ap000000B4");
MODULE_ALIAS("hid:b0003g0101v0000056Ap000000B5");
MODULE_ALIAS("hid:b0003g0101v0000056Ap000000B7");
MODULE_ALIAS("hid:b0003g0101v0000056Ap000000B8");
MODULE_ALIAS("hid:b0003g0101v0000056Ap000000B9");
MODULE_ALIAS("hid:b0003g0101v0000056Ap000000BA");
MODULE_ALIAS("hid:b0003g0101v0000056Ap000000BB");
MODULE_ALIAS("hid:b0003g0101v0000056Ap000000BC");
MODULE_ALIAS("hid:b0005g0101v0000056Ap000000BD");
MODULE_ALIAS("hid:b0003g0101v0000056Ap000000C0");
MODULE_ALIAS("hid:b0003g0101v0000056Ap000000C2");
MODULE_ALIAS("hid:b0003g0101v0000056Ap000000C4");
MODULE_ALIAS("hid:b0003g0101v0000056Ap000000C5");
MODULE_ALIAS("hid:b0003g0101v0000056Ap000000C6");
MODULE_ALIAS("hid:b0003g0101v0000056Ap000000C7");
MODULE_ALIAS("hid:b0003g0101v0000056Ap000000CC");
MODULE_ALIAS("hid:b0003g0101v0000056Ap000000CE");
MODULE_ALIAS("hid:b0003g0101v0000056Ap000000D0");
MODULE_ALIAS("hid:b0003g0101v0000056Ap000000D1");
MODULE_ALIAS("hid:b0003g0101v0000056Ap000000D2");
MODULE_ALIAS("hid:b0003g0101v0000056Ap000000D3");
MODULE_ALIAS("hid:b0003g0101v0000056Ap000000D4");
MODULE_ALIAS("hid:b0003g0101v0000056Ap000000D5");
MODULE_ALIAS("hid:b0003g0101v0000056Ap000000D6");
MODULE_ALIAS("hid:b0003g0101v0000056Ap000000D7");
MODULE_ALIAS("hid:b0003g0101v0000056Ap000000D8");
MODULE_ALIAS("hid:b0003g0101v0000056Ap000000DA");
MODULE_ALIAS("hid:b0003g0101v0000056Ap000000DB");
MODULE_ALIAS("hid:b0003g0101v0000056Ap000000DD");
MODULE_ALIAS("hid:b0003g0101v0000056Ap000000DE");
MODULE_ALIAS("hid:b0003g0101v0000056Ap000000DF");
MODULE_ALIAS("hid:b0003g0101v0000056Ap000000E2");
MODULE_ALIAS("hid:b0003g0101v0000056Ap000000E3");
MODULE_ALIAS("hid:b0003g0101v0000056Ap000000E5");
MODULE_ALIAS("hid:b0003g0101v0000056Ap000000E6");
MODULE_ALIAS("hid:b0003g0101v0000056Ap000000EC");
MODULE_ALIAS("hid:b0003g0101v0000056Ap000000ED");
MODULE_ALIAS("hid:b0003g0101v0000056Ap000000EF");
MODULE_ALIAS("hid:b0003g0101v0000056Ap000000F0");
MODULE_ALIAS("hid:b0003g0101v0000056Ap000000F4");
MODULE_ALIAS("hid:b0003g0101v0000056Ap000000F6");
MODULE_ALIAS("hid:b0003g0101v0000056Ap000000F8");
MODULE_ALIAS("hid:b0003g0101v0000056Ap000000FA");
MODULE_ALIAS("hid:b0003g0101v0000056Ap000000FB");
MODULE_ALIAS("hid:b0003g0101v0000056Ap00000100");
MODULE_ALIAS("hid:b0003g0101v0000056Ap00000101");
MODULE_ALIAS("hid:b0003g0101v0000056Ap0000010D");
MODULE_ALIAS("hid:b0003g0101v0000056Ap0000010E");
MODULE_ALIAS("hid:b0003g0101v0000056Ap0000010F");
MODULE_ALIAS("hid:b0003g0101v0000056Ap00000116");
MODULE_ALIAS("hid:b0003g0101v0000056Ap0000012C");
MODULE_ALIAS("hid:b0003g0101v0000056Ap00000300");
MODULE_ALIAS("hid:b0003g0101v0000056Ap00000301");
MODULE_ALIAS("hid:b0003g0101v0000056Ap00000302");
MODULE_ALIAS("hid:b0003g0101v0000056Ap00000303");
MODULE_ALIAS("hid:b0003g0101v0000056Ap00000304");
MODULE_ALIAS("hid:b0003g0101v0000056Ap00000307");
MODULE_ALIAS("hid:b0003g0101v0000056Ap00000309");
MODULE_ALIAS("hid:b0003g0101v0000056Ap0000030A");
MODULE_ALIAS("hid:b0003g0101v0000056Ap0000030C");
MODULE_ALIAS("hid:b0003g0101v0000056Ap0000030E");
MODULE_ALIAS("hid:b0003g0101v0000056Ap00000314");
MODULE_ALIAS("hid:b0003g0101v0000056Ap00000315");
MODULE_ALIAS("hid:b0003g0101v0000056Ap00000317");
MODULE_ALIAS("hid:b0003g0101v0000056Ap00000318");
MODULE_ALIAS("hid:b0003g0101v0000056Ap00000319");
MODULE_ALIAS("hid:b0003g0101v0000056Ap00000323");
MODULE_ALIAS("hid:b0003g0101v0000056Ap00000325");
MODULE_ALIAS("hid:b0003g0101v0000056Ap00000326");
MODULE_ALIAS("hid:b0003g0101v0000056Ap0000032A");
MODULE_ALIAS("hid:b0003g0101v0000056Ap0000032B");
MODULE_ALIAS("hid:b0003g0101v0000056Ap0000032C");
MODULE_ALIAS("hid:b0003g0101v0000056Ap0000032F");
MODULE_ALIAS("hid:b0003g0101v0000056Ap00000331");
MODULE_ALIAS("hid:b0003g0101v0000056Ap00000333");
MODULE_ALIAS("hid:b0003g0101v0000056Ap00000335");
MODULE_ALIAS("hid:b0003g0101v0000056Ap00000336");
MODULE_ALIAS("hid:b0003g0101v0000056Ap0000033B");
MODULE_ALIAS("hid:b0003g0101v0000056Ap0000033C");
MODULE_ALIAS("hid:b0003g0101v0000056Ap0000033D");
MODULE_ALIAS("hid:b0003g0101v0000056Ap0000033E");
MODULE_ALIAS("hid:b0003g0101v0000056Ap00000343");
MODULE_ALIAS("hid:b0005g0101v0000056Ap00000360");
MODULE_ALIAS("hid:b0005g0101v0000056Ap00000361");
MODULE_ALIAS("hid:b0005g0101v0000056Ap00000377");
MODULE_ALIAS("hid:b0005g0101v0000056Ap00000379");
MODULE_ALIAS("hid:b0003g0101v0000056Ap0000037A");
MODULE_ALIAS("hid:b0003g0101v0000056Ap0000037B");
MODULE_ALIAS("hid:b0005g0101v0000056Ap00000393");
MODULE_ALIAS("hid:b0003g0101v0000056Ap00004001");
MODULE_ALIAS("hid:b0003g0101v0000056Ap00004004");
MODULE_ALIAS("hid:b0003g0101v0000056Ap00005000");
MODULE_ALIAS("hid:b0003g0101v0000056Ap00005002");
MODULE_ALIAS("hid:b0003g*v000017EFp00006004");
MODULE_ALIAS("hid:b0003g0101v0000056Ap*");
MODULE_ALIAS("hid:b0018g0101v0000056Ap*");
MODULE_ALIAS("hid:b0005g0101v0000056Ap*");

MODULE_INFO(srcversion, "D2922491EA8A40046FE52F5");