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
	{ 0x1f5641f1, "neigh_xmit" },
	{ 0x2f780b39, "dev_get_by_index_rcu" },
	{ 0xa748a031, "pskb_expand_head" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xa5c2e213, "nla_put" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x2962cd4e, "nf_fwd_netdev_egress" },
	{ 0x85430a76, "nft_validate_register_load" },
	{ 0x1e6b75a3, "nft_parse_register" },
	{ 0x2b805a6, "nft_dump_register" },
	{ 0xf520177b, "nft_chain_validate_hooks" },
	{ 0xb79a0022, "nft_fwd_dup_netdev_offload" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

MODULE_INFO(depends, "nf_tables,nf_dup_netdev");


MODULE_INFO(srcversion, "EB58DA6234B5AF61D6E379A");
