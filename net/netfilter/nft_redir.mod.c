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
	{ 0x468fae3b, "nft_register_expr" },
	{ 0x2cfde9a2, "warn_slowpath_fmt" },
	{ 0xf520177b, "nft_chain_validate_hooks" },
	{ 0xe2840590, "nft_chain_validate_dependency" },
	{ 0xabf78831, "nf_nat_redirect_ipv4" },
	{ 0xc6473d45, "nf_nat_redirect_ipv6" },
	{ 0x5f754e5a, "memset" },
	{ 0xd8ba03c2, "nf_ct_netns_get" },
	{ 0x85430a76, "nft_validate_register_load" },
	{ 0x1e6b75a3, "nft_parse_register" },
	{ 0x20e1a7dd, "nf_ct_netns_put" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xa5c2e213, "nla_put" },
	{ 0x2b805a6, "nft_dump_register" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

MODULE_INFO(depends, "nf_tables,nf_nat,nf_conntrack");


MODULE_INFO(srcversion, "ECB06E1D2D2516DCEA59062");
