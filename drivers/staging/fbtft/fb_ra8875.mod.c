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
	{ 0x5d2f2b13, "spi_sync" },
	{ 0x5f754e5a, "memset" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x416f3dc5, "fbtft_dbg_hex" },
	{ 0x33a36661, "fbtft_write_spi" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x3eabc38c, "_dev_info" },
	{ 0x7fa795f, "_dev_err" },
	{ 0x8e865d3c, "arm_delay_ops" },
	{ 0xfb5d3e3c, "gpiod_set_value" },
	{ 0x92cb82b3, "fbtft_probe_common" },
	{ 0x8253d87a, "fbtft_remove_common" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

MODULE_INFO(depends, "fbtft");

MODULE_ALIAS("of:N*T*Craio,ra8875");
MODULE_ALIAS("of:N*T*Craio,ra8875C*");

MODULE_INFO(srcversion, "02184DF297EA3E956834B2A");
