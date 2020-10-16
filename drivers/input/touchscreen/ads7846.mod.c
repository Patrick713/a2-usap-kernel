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
	{ 0x85c6e59a, "driver_unregister" },
	{ 0x31655912, "__spi_register_driver" },
	{ 0x7e968afc, "devm_kfree" },
	{ 0x7b0629e7, "input_register_device" },
	{ 0xf63fc023, "sysfs_create_group" },
	{ 0x3eabc38c, "_dev_info" },
	{ 0xf65110e8, "_dev_warn" },
	{ 0x5bdcebf5, "of_get_named_gpio_flags" },
	{ 0xfc60f402, "of_property_read_variable_u32_array" },
	{ 0x3c7ad7ac, "of_find_property" },
	{ 0xfc07b551, "of_property_read_variable_u16_array" },
	{ 0xe544be36, "devm_kmalloc" },
	{ 0x3884d478, "of_match_device" },
	{ 0xf0cc01cd, "gpiod_set_debounce" },
	{ 0x403f9529, "gpio_request_one" },
	{ 0xc83cb3a9, "hwmon_device_register_with_groups" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x5a894d1d, "regulator_get" },
	{ 0x36e24524, "touchscreen_parse_properties" },
	{ 0x297acc01, "input_set_abs_params" },
	{ 0xc358aaf8, "snprintf" },
	{ 0x5bbe49f4, "__init_waitqueue_head" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0x2de4f87b, "input_free_device" },
	{ 0xea1c9521, "input_allocate_device" },
	{ 0x6663995b, "spi_setup" },
	{ 0x67b83f59, "regulator_enable" },
	{ 0x3b6c41ea, "kstrtouint" },
	{ 0x7fa795f, "_dev_err" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x49970de8, "finish_wait" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x647af474, "prepare_to_wait_event" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x38ea3b28, "input_event" },
	{ 0x127a1e8b, "touchscreen_report_pos" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0xf9a482f9, "msleep" },
	{ 0x8e865d3c, "arm_delay_ops" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0x5a5b9ee7, "gpiod_get_raw_value" },
	{ 0x4decaf39, "gpio_to_desc" },
	{ 0xfcec0987, "enable_irq" },
	{ 0x5d2f2b13, "spi_sync" },
	{ 0x5f754e5a, "memset" },
	{ 0xebaa9dc8, "kmem_cache_alloc_trace" },
	{ 0xf4610713, "kmalloc_caches" },
	{ 0xfe990052, "gpio_free" },
	{ 0x37a0cba, "kfree" },
	{ 0x401a8f02, "regulator_put" },
	{ 0x858622da, "hwmon_device_unregister" },
	{ 0xc0e66c25, "input_unregister_device" },
	{ 0xc1514a3b, "free_irq" },
	{ 0xa4040d67, "sysfs_remove_group" },
	{ 0x7238966a, "regulator_disable" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0x3ce4ca6f, "disable_irq" },
	{ 0x3dcf1ffa, "__wake_up" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Cti,tsc2046");
MODULE_ALIAS("of:N*T*Cti,tsc2046C*");
MODULE_ALIAS("of:N*T*Cti,ads7843");
MODULE_ALIAS("of:N*T*Cti,ads7843C*");
MODULE_ALIAS("of:N*T*Cti,ads7845");
MODULE_ALIAS("of:N*T*Cti,ads7845C*");
MODULE_ALIAS("of:N*T*Cti,ads7846");
MODULE_ALIAS("of:N*T*Cti,ads7846C*");
MODULE_ALIAS("of:N*T*Cti,ads7873");
MODULE_ALIAS("of:N*T*Cti,ads7873C*");

MODULE_INFO(srcversion, "C78A5971FCCC1DF7E9415AE");
