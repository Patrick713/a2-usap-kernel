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
	{ 0x88161187, "i2c_del_driver" },
	{ 0x31655912, "__spi_register_driver" },
	{ 0xc5850110, "printk" },
	{ 0xbdae2e40, "i2c_register_driver" },
	{ 0x3eabc38c, "_dev_info" },
	{ 0x6663995b, "spi_setup" },
	{ 0x14cfded6, "__devm_regmap_init_spi" },
	{ 0xac511bf1, "__devm_regmap_init_i2c" },
	{ 0xab26b88f, "devm_request_threaded_irq" },
	{ 0x46637278, "rtc_nvmem_register" },
	{ 0xf2dee791, "devm_rtc_device_register" },
	{ 0x7fa795f, "_dev_err" },
	{ 0xd091413c, "devm_hwmon_device_register_with_info" },
	{ 0xe544be36, "devm_kmalloc" },
	{ 0x5f754e5a, "memset" },
	{ 0xb6936ffe, "_bcd2bin" },
	{ 0xf0cacea3, "regmap_bulk_read" },
	{ 0x30ddcad4, "regmap_bulk_write" },
	{ 0x80ca5026, "_bin2bcd" },
	{ 0xf65110e8, "_dev_warn" },
	{ 0xf13f4b27, "rtc_update_irq" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xc73c0dfd, "regmap_write" },
	{ 0xae2c61e9, "regmap_read" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

MODULE_INFO(depends, "regmap-spi,regmap-i2c");

MODULE_ALIAS("of:N*T*Cdallas,ds3232");
MODULE_ALIAS("of:N*T*Cdallas,ds3232C*");
MODULE_ALIAS("i2c:ds3232");

MODULE_INFO(srcversion, "0C4A63875213CDA8BDEC6BF");
