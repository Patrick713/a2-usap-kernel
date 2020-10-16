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
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

static const struct modversion_info ____versions[]
__used __section(__versions) = {
	{ 0xe9942317, "module_layout" },
	{ 0x76d11765, "mem_map" },
	{ 0x6cd901c4, "arm_dma_ops" },
	{ 0x987c11c7, "__pv_phys_pfn_offset" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0x171fc10e, "dmaengine_unmap_put" },
	{ 0x5f754e5a, "memset" },
	{ 0x8dfd1904, "async_tx_submit" },
	{ 0x5b6c00e6, "xor_blocks" },
	{ 0x9ef88491, "dmaengine_get_unmap_data" },
	{ 0xc2bb1e6d, "dma_direct_map_page" },
	{ 0x7505bdef, "memchr_inv" },
	{ 0x2c02de65, "__async_tx_find_channel" },
	{ 0x82099ffb, "async_tx_quiesce" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x2cfde9a2, "warn_slowpath_fmt" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x1ee8d6d4, "refcount_inc_checked" },
};

MODULE_INFO(depends, "async_tx,xor");


MODULE_INFO(srcversion, "9DB4B7810A4C806F8FEB2B0");
