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
	{ 0x2cfde9a2, "warn_slowpath_fmt" },
	{ 0x76d31a13, "dev_driver_string" },
	{ 0xc2bb1e6d, "dma_direct_map_page" },
	{ 0x815588a6, "clk_enable" },
	{ 0x795d37b, "debugfs_create_u64" },
	{ 0x93b18eee, "debugfs_create_dir" },
	{ 0xc358aaf8, "snprintf" },
	{ 0x26952493, "spi_register_controller" },
	{ 0xab26b88f, "devm_request_threaded_irq" },
	{ 0x76d11765, "mem_map" },
	{ 0x8a7d1c31, "high_memory" },
	{ 0x7f0efe5d, "dma_get_slave_caps" },
	{ 0x1966bade, "empty_zero_page" },
	{ 0x39303172, "dma_request_slave_channel" },
	{ 0x6816b6a8, "of_get_address" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0x6c22925c, "platform_get_irq" },
	{ 0xd77f2380, "devm_clk_get" },
	{ 0xebcc8bdd, "put_device" },
	{ 0xff3dab98, "devm_platform_ioremap_resource" },
	{ 0xe6d31bf7, "__spi_alloc_controller" },
	{ 0xb077e70a, "clk_unprepare" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0xd2d56cac, "spi_unregister_controller" },
	{ 0x35edc130, "debugfs_remove_recursive" },
	{ 0xa388248, "dma_release_channel" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x9d669763, "memcpy" },
	{ 0x526c3a6c, "jiffies" },
	{ 0x556e4390, "clk_get_rate" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x7fa795f, "_dev_err" },
	{ 0x6cd901c4, "arm_dma_ops" },
	{ 0x3eabc38c, "_dev_info" },
	{ 0x1c584b9c, "gpiochip_request_own_desc" },
	{ 0x3c7ad7ac, "of_find_property" },
	{ 0xb056d3a4, "gpiochip_find" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xc79c5e58, "spi_split_transfers_maxsize" },
	{ 0xe6c12171, "complete" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Cbrcm,bcm2835-spi");
MODULE_ALIAS("of:N*T*Cbrcm,bcm2835-spiC*");

MODULE_INFO(srcversion, "969B080F1FE1F03E2EA10AF");
