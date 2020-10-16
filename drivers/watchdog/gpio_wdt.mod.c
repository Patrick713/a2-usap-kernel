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
	{ 0x8ad83553, "platform_driver_unregister" },
	{ 0x610b1492, "__platform_driver_register" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x8db1c66b, "devm_watchdog_register_device" },
	{ 0xe3644400, "watchdog_init_timeout" },
	{ 0x3c7ad7ac, "of_find_property" },
	{ 0xfc60f402, "of_property_read_variable_u32_array" },
	{ 0x76d0d88f, "devm_gpiod_get" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x34e942aa, "of_property_read_string" },
	{ 0xe544be36, "devm_kmalloc" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xee3bb34c, "gpiod_direction_output" },
	{ 0x8752ad47, "gpiod_direction_input" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0x8e865d3c, "arm_delay_ops" },
	{ 0x84b498ef, "gpiod_set_value_cansleep" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Clinux,wdt-gpio");
MODULE_ALIAS("of:N*T*Clinux,wdt-gpioC*");

MODULE_INFO(srcversion, "01163A0D9430CA4A42546FF");
