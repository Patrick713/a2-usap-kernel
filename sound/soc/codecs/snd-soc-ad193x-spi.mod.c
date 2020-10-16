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
	{ 0x14cfded6, "__devm_regmap_init_spi" },
	{ 0x31655912, "__spi_register_driver" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0x145e0cf3, "ad193x_regmap_config" },
	{ 0x2faaad26, "ad193x_probe" },
	{ 0x85c6e59a, "driver_unregister" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x9d669763, "memcpy" },
	{ 0x5192d47f, "spi_get_device_id" },
	{ 0x8f678b07, "__stack_chk_guard" },
};

MODULE_INFO(depends, "regmap-spi,snd-soc-ad193x");

MODULE_ALIAS("spi:ad193x");
MODULE_ALIAS("spi:ad1933");
MODULE_ALIAS("spi:ad1934");
MODULE_ALIAS("spi:ad1938");
MODULE_ALIAS("spi:ad1939");
MODULE_ALIAS("spi:adau1328");

MODULE_INFO(srcversion, "962FBA0C48B2B2EA5D83F48");
