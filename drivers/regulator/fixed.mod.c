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
	{ 0x8ad83553, "platform_driver_unregister" },
	{ 0x610b1492, "__platform_driver_register" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xd77f2380, "devm_clk_get" },
	{ 0x7fa795f, "_dev_err" },
	{ 0xeeb4369f, "devm_regulator_register" },
	{ 0x7e71294b, "gpiod_get_optional" },
	{ 0xbcc16e32, "devm_kstrdup" },
	{ 0x3c7ad7ac, "of_find_property" },
	{ 0xfc60f402, "of_property_read_variable_u32_array" },
	{ 0x825e07ca, "of_get_regulator_init_data" },
	{ 0xe544be36, "devm_kmalloc" },
	{ 0xbec6d8a3, "of_device_get_match_data" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x815588a6, "clk_enable" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0xb077e70a, "clk_unprepare" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0xf2c1a14a, "rdev_get_drvdata" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Cregulator-fixed");
MODULE_ALIAS("of:N*T*Cregulator-fixedC*");
MODULE_ALIAS("of:N*T*Cregulator-fixed-clock");
MODULE_ALIAS("of:N*T*Cregulator-fixed-clockC*");

MODULE_INFO(srcversion, "5B069F3E2750F7A978B9349");
