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
	{ 0xb077e70a, "clk_unprepare" },
	{ 0xee4d1bfd, "sg_init_table" },
	{ 0x815588a6, "clk_enable" },
	{ 0x76d11765, "mem_map" },
	{ 0x6cd901c4, "arm_dma_ops" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0x6562d506, "devm_ioremap_resource" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0x610b1492, "__platform_driver_register" },
	{ 0x39303172, "dma_request_slave_channel" },
	{ 0xc2bb1e6d, "dma_direct_map_page" },
	{ 0x9ec75761, "platform_get_resource" },
	{ 0x7fa795f, "_dev_err" },
	{ 0x6816b6a8, "of_get_address" },
	{ 0x3eabc38c, "_dev_info" },
	{ 0x8a7d1c31, "high_memory" },
	{ 0x6b2dc060, "dump_stack" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0x76d31a13, "dev_driver_string" },
	{ 0xd77f2380, "devm_clk_get" },
	{ 0xdb9ca3c5, "_raw_spin_lock" },
	{ 0x2cfde9a2, "warn_slowpath_fmt" },
	{ 0xa388248, "dma_release_channel" },
	{ 0x37a0cba, "kfree" },
	{ 0xfb58ca73, "dma_wait_for_async_tx" },
	{ 0x581cde4e, "up" },
	{ 0xa32230b4, "dmam_alloc_attrs" },
	{ 0xaa55b7e1, "of_find_device_by_node" },
	{ 0x8ad83553, "platform_driver_unregister" },
	{ 0xe544be36, "devm_kmalloc" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Cbrcm,bcm2835-smi");
MODULE_ALIAS("of:N*T*Cbrcm,bcm2835-smiC*");

MODULE_INFO(srcversion, "BD4D3197D66512576DCCB4D");
