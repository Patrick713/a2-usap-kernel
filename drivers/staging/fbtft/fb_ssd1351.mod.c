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
	{ 0x3eabc38c, "_dev_info" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x7fa795f, "_dev_err" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x92cb82b3, "fbtft_probe_common" },
	{ 0x8253d87a, "fbtft_remove_common" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

MODULE_INFO(depends, "fbtft");

MODULE_ALIAS("of:N*T*Csolomon,ssd1351");
MODULE_ALIAS("of:N*T*Csolomon,ssd1351C*");

MODULE_INFO(srcversion, "A5202D91BB27061E3DED93A");
