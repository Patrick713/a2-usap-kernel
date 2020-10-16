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
	{ 0xe1b3ee1f, "arizona_pm_ops" },
	{ 0x3dc526a9, "arizona_of_match" },
	{ 0x85c6e59a, "driver_unregister" },
	{ 0x31655912, "__spi_register_driver" },
	{ 0x7fa795f, "_dev_err" },
	{ 0xeb9fd5ca, "arizona_dev_init" },
	{ 0x14cfded6, "__devm_regmap_init_spi" },
	{ 0xe544be36, "devm_kmalloc" },
	{ 0x99d34523, "wm5102_spi_regmap" },
	{ 0x8e2b5e05, "arizona_of_get_type" },
	{ 0x5192d47f, "spi_get_device_id" },
	{ 0x12ff763f, "arizona_dev_exit" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

MODULE_INFO(depends, "regmap-spi");

MODULE_ALIAS("spi:wm5102");
MODULE_ALIAS("spi:wm5110");
MODULE_ALIAS("spi:wm8280");
MODULE_ALIAS("spi:wm1831");
MODULE_ALIAS("spi:cs47l24");

MODULE_INFO(srcversion, "88B10CC70043E42F5B598E3");
