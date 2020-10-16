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
	{ 0x793ec61d, "nft_unregister_expr" },
	{ 0x30a34053, "nft_unregister_obj" },
	{ 0x468fae3b, "nft_register_expr" },
	{ 0xb12e4cd9, "nft_register_obj" },
	{ 0x5a6cdb52, "nf_ct_zone_dflt" },
	{ 0xdc85a578, "nf_ct_get_tuplepr" },
	{ 0x82b2d089, "nf_conncount_add" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xa5c2e213, "nla_put" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xd8ba03c2, "nf_ct_netns_get" },
	{ 0xbe03a217, "nf_conncount_list_init" },
	{ 0x20e1a7dd, "nf_ct_netns_put" },
	{ 0x268a4802, "nf_conncount_cache_free" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0x2e9636a, "nf_conncount_gc_list" },
	{ 0x31b9195c, "__local_bh_disable_ip" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

MODULE_INFO(depends, "nf_tables,nf_conntrack,nf_conncount");


MODULE_INFO(srcversion, "5D2E3E18D232A615A25BAFB");
