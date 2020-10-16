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
	{ 0x51a910c0, "arm_copy_to_user" },
	{ 0xae2c61e9, "regmap_read" },
	{ 0x92952c56, "__devm_regmap_init" },
	{ 0x5192d47f, "spi_get_device_id" },
	{ 0x14cfded6, "__devm_regmap_init_spi" },
	{ 0x46637278, "rtc_nvmem_register" },
	{ 0x5f754e5a, "memset" },
	{ 0x5f9ee03a, "__rtc_register_device" },
	{ 0xff440b0a, "rtc_add_group" },
	{ 0x8db1c66b, "devm_watchdog_register_device" },
	{ 0x6f94f4ae, "devm_rtc_allocate_device" },
	{ 0xe544be36, "devm_kmalloc" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x4f2250ba, "rtc_tm_to_time64" },
	{ 0x5838f6c9, "rtc_valid_tm" },
	{ 0xe4f477be, "regmap_update_bits_base" },
	{ 0xf65110e8, "_dev_warn" },
	{ 0xb6936ffe, "_bcd2bin" },
	{ 0x3eabc38c, "_dev_info" },
	{ 0xf0cacea3, "regmap_bulk_read" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x7fa795f, "_dev_err" },
	{ 0x30ddcad4, "regmap_bulk_write" },
	{ 0x80ca5026, "_bin2bcd" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xc73c0dfd, "regmap_write" },
	{ 0x37a0cba, "kfree" },
	{ 0x9d669763, "memcpy" },
	{ 0x2d6fcc06, "__kmalloc" },
	{ 0x2cfde9a2, "warn_slowpath_fmt" },
	{ 0xcb203516, "i2c_transfer_buffer_flags" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

MODULE_INFO(depends, "regmap-spi");

MODULE_ALIAS("spi:pcf2127");
MODULE_ALIAS("spi:pcf2129");
MODULE_ALIAS("i2c:pcf2127");
MODULE_ALIAS("i2c:pcf2129");
MODULE_ALIAS("of:N*T*Cnxp,pcf2127");
MODULE_ALIAS("of:N*T*Cnxp,pcf2127C*");
MODULE_ALIAS("of:N*T*Cnxp,pcf2129");
MODULE_ALIAS("of:N*T*Cnxp,pcf2129C*");

MODULE_INFO(srcversion, "7765336F7F7AA39AD9B4E6F");
