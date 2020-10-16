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
	{ 0x5dc31eaa, "gpiod_get_value_cansleep" },
	{ 0xcf3487a1, "devm_gpiod_get_index" },
	{ 0xe544be36, "devm_kmalloc" },
	{ 0x76d0d88f, "devm_gpiod_get" },
	{ 0xe84e6f59, "devm_spi_register_controller" },
	{ 0xde147102, "get_device" },
	{ 0xb9b34d9e, "spi_bitbang_init" },
	{ 0x64a151a0, "spi_bitbang_setup_transfer" },
	{ 0x62182082, "devm_gpiod_get_optional" },
	{ 0xcb907ad6, "devm_add_action" },
	{ 0xe6d31bf7, "__spi_alloc_controller" },
	{ 0x3884d478, "of_match_device" },
	{ 0xebcc8bdd, "put_device" },
	{ 0xf22d9dcc, "spi_bitbang_setup" },
	{ 0x9f8e849c, "spi_bitbang_cleanup" },
	{ 0xee3bb34c, "gpiod_direction_output" },
	{ 0x8752ad47, "gpiod_direction_input" },
	{ 0x84b498ef, "gpiod_set_value_cansleep" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

MODULE_INFO(depends, "spi-bitbang");

MODULE_ALIAS("of:N*T*Cspi-gpio");
MODULE_ALIAS("of:N*T*Cspi-gpioC*");

MODULE_INFO(srcversion, "ADD917F979EFEB8E0EB3900");
