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
	{ 0x3eabc38c, "_dev_info" },
	{ 0x51a910c0, "arm_copy_to_user" },
	{ 0x356461c8, "rtc_time64_to_tm" },
	{ 0x4f2250ba, "rtc_tm_to_time64" },
	{ 0xf13f4b27, "rtc_update_irq" },
	{ 0xb6936ffe, "_bcd2bin" },
	{ 0xde45aa0d, "i2c_transfer" },
	{ 0x6e65de2d, "of_clk_add_provider" },
	{ 0x95aea956, "of_clk_src_simple_get" },
	{ 0xeb8e03e1, "devm_clk_register" },
	{ 0x34e942aa, "of_property_read_string" },
	{ 0x5f9ee03a, "__rtc_register_device" },
	{ 0xab26b88f, "devm_request_threaded_irq" },
	{ 0x6f94f4ae, "devm_rtc_allocate_device" },
	{ 0xe544be36, "devm_kmalloc" },
	{ 0x80ca5026, "_bin2bcd" },
	{ 0x7fa795f, "_dev_err" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xcb203516, "i2c_transfer_buffer_flags" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Cnxp,pcf8563");
MODULE_ALIAS("of:N*T*Cnxp,pcf8563C*");
MODULE_ALIAS("of:N*T*Cepson,rtc8564");
MODULE_ALIAS("of:N*T*Cepson,rtc8564C*");
MODULE_ALIAS("of:N*T*Cmicrocrystal,rv8564");
MODULE_ALIAS("of:N*T*Cmicrocrystal,rv8564C*");
MODULE_ALIAS("i2c:pcf8563");
MODULE_ALIAS("i2c:rtc8564");

MODULE_INFO(srcversion, "3348EF6C576B13BB999A646");
