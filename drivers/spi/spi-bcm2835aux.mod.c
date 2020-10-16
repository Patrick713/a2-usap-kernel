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
	{ 0x8a331d2b, "param_ops_uint" },
	{ 0x8ad83553, "platform_driver_unregister" },
	{ 0x610b1492, "__platform_driver_register" },
	{ 0x526c3a6c, "jiffies" },
	{ 0x2196324, "__aeabi_idiv" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0xe6c12171, "complete" },
	{ 0xf65110e8, "_dev_warn" },
	{ 0xf5142424, "gpiod_direction_output_raw" },
	{ 0x4decaf39, "gpio_to_desc" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x7fa795f, "_dev_err" },
	{ 0x795d37b, "debugfs_create_u64" },
	{ 0x93b18eee, "debugfs_create_dir" },
	{ 0xc358aaf8, "snprintf" },
	{ 0x26952493, "spi_register_controller" },
	{ 0xab26b88f, "devm_request_threaded_irq" },
	{ 0x556e4390, "clk_get_rate" },
	{ 0x815588a6, "clk_enable" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0x6c22925c, "platform_get_irq" },
	{ 0xd77f2380, "devm_clk_get" },
	{ 0xebcc8bdd, "put_device" },
	{ 0xff3dab98, "devm_platform_ioremap_resource" },
	{ 0xe6d31bf7, "__spi_alloc_controller" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xb077e70a, "clk_unprepare" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0xd2d56cac, "spi_unregister_controller" },
	{ 0x35edc130, "debugfs_remove_recursive" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Cbrcm,bcm2835-aux-spi");
MODULE_ALIAS("of:N*T*Cbrcm,bcm2835-aux-spiC*");

MODULE_INFO(srcversion, "E92A2F15219807FEA2D0CC4");
