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
	{ 0xf2dee791, "devm_rtc_device_register" },
	{ 0xe544be36, "devm_kmalloc" },
	{ 0xb6936ffe, "_bcd2bin" },
	{ 0xf65110e8, "_dev_warn" },
	{ 0x3eabc38c, "_dev_info" },
	{ 0x80ca5026, "_bin2bcd" },
	{ 0xcb203516, "i2c_transfer_buffer_flags" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x7fa795f, "_dev_err" },
	{ 0xde45aa0d, "i2c_transfer" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("i2c:isl12022");
MODULE_ALIAS("of:N*T*Cisl,isl12022");
MODULE_ALIAS("of:N*T*Cisl,isl12022C*");
MODULE_ALIAS("of:N*T*Cisil,isl12022");
MODULE_ALIAS("of:N*T*Cisil,isl12022C*");

MODULE_INFO(srcversion, "429660F7D8705BCDB3979C0");
