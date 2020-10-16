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
	{ 0xb0d904b7, "raid6_empty_zero_page" },
	{ 0x987c11c7, "__pv_phys_pfn_offset" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0x82099ffb, "async_tx_quiesce" },
	{ 0x21957e1, "raid6_datap_recov" },
	{ 0xf8a2742, "raid6_2data_recov" },
};

MODULE_INFO(depends, "raid6_pq,async_tx");


MODULE_INFO(srcversion, "4FF738371EB642F0A7D4AD8");
