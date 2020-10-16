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
	{ 0x88161187, "i2c_del_driver" },
	{ 0xbdae2e40, "i2c_register_driver" },
	{ 0xe4f477be, "regmap_update_bits_base" },
	{ 0x5f9ee03a, "__rtc_register_device" },
	{ 0x6f94f4ae, "devm_rtc_allocate_device" },
	{ 0xac511bf1, "__devm_regmap_init_i2c" },
	{ 0xe544be36, "devm_kmalloc" },
	{ 0xb6936ffe, "_bcd2bin" },
	{ 0xf0cacea3, "regmap_bulk_read" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x7fa795f, "_dev_err" },
	{ 0x30ddcad4, "regmap_bulk_write" },
	{ 0x80ca5026, "_bin2bcd" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

MODULE_INFO(depends, "regmap-i2c");

MODULE_ALIAS("of:N*T*Cwhwave,sd3078");
MODULE_ALIAS("of:N*T*Cwhwave,sd3078C*");
MODULE_ALIAS("i2c:sd3078");

MODULE_INFO(srcversion, "E86323653139D50239717A3");
