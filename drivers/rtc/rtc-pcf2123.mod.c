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
	{ 0x5f9ee03a, "__rtc_register_device" },
	{ 0xab26b88f, "devm_request_threaded_irq" },
	{ 0x6f94f4ae, "devm_rtc_allocate_device" },
	{ 0x7fa795f, "_dev_err" },
	{ 0x14cfded6, "__devm_regmap_init_spi" },
	{ 0xe544be36, "devm_kmalloc" },
	{ 0xf13f4b27, "rtc_update_irq" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0x3eabc38c, "_dev_info" },
	{ 0xb6936ffe, "_bcd2bin" },
	{ 0xf0cacea3, "regmap_bulk_read" },
	{ 0x30ddcad4, "regmap_bulk_write" },
	{ 0x80ca5026, "_bin2bcd" },
	{ 0xe4f477be, "regmap_update_bits_base" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xae2c61e9, "regmap_read" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xc73c0dfd, "regmap_write" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

MODULE_INFO(depends, "regmap-spi");

MODULE_ALIAS("of:N*T*Cnxp,pcf2123");
MODULE_ALIAS("of:N*T*Cnxp,pcf2123C*");
MODULE_ALIAS("of:N*T*Cmicrocrystal,rv2123");
MODULE_ALIAS("of:N*T*Cmicrocrystal,rv2123C*");
MODULE_ALIAS("of:N*T*Cnxp,rtc-pcf2123");
MODULE_ALIAS("of:N*T*Cnxp,rtc-pcf2123C*");

MODULE_INFO(srcversion, "5A22D860905657B3982F4C1");