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
	{ 0x5dc31eaa, "gpiod_get_value_cansleep" },
	{ 0x4decaf39, "gpio_to_desc" },
	{ 0x5cdc4c99, "devm_gpio_request_one" },
	{ 0x13b116b8, "gpiod_get_direction" },
	{ 0x7fa795f, "_dev_err" },
	{ 0xee3bb34c, "gpiod_direction_output" },
	{ 0x7d7c7b2e, "devm_backlight_device_register" },
	{ 0x76d0d88f, "devm_gpiod_get" },
	{ 0x8630a932, "device_property_present" },
	{ 0xe544be36, "devm_kmalloc" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x84b498ef, "gpiod_set_value_cansleep" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

MODULE_INFO(depends, "backlight");

MODULE_ALIAS("of:N*T*Cgpio-backlight");
MODULE_ALIAS("of:N*T*Cgpio-backlightC*");

MODULE_INFO(srcversion, "190BF6E0CF270F0DDFB6722");
