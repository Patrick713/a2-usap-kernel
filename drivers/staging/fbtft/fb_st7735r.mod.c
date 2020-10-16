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

MODULE_INFO(staging, "Y");

static const struct modversion_info ____versions[]
__used __section(__versions) = {
	{ 0xe9942317, "module_layout" },
	{ 0x8ad83553, "platform_driver_unregister" },
	{ 0x85c6e59a, "driver_unregister" },
	{ 0x610b1492, "__platform_driver_register" },
	{ 0x31655912, "__spi_register_driver" },
	{ 0x92cb82b3, "fbtft_probe_common" },
	{ 0x8253d87a, "fbtft_remove_common" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

MODULE_INFO(depends, "fbtft");

MODULE_ALIAS("of:N*T*Csitronix,st7735r");
MODULE_ALIAS("of:N*T*Csitronix,st7735rC*");
MODULE_ALIAS("of:N*T*Cfbtft,sainsmart18");
MODULE_ALIAS("of:N*T*Cfbtft,sainsmart18C*");
MODULE_ALIAS("of:N*T*Cfbtft,adafruit18");
MODULE_ALIAS("of:N*T*Cfbtft,adafruit18C*");
MODULE_ALIAS("of:N*T*Cfbtft,adafruit18_green");
MODULE_ALIAS("of:N*T*Cfbtft,adafruit18_greenC*");

MODULE_INFO(srcversion, "BC9313FA37E7207F213A6AC");
