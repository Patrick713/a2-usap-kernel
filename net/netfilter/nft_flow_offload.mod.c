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
	{ 0x9d0d6206, "unregister_netdevice_notifier" },
	{ 0x468fae3b, "nft_register_expr" },
	{ 0xd2da1048, "register_netdevice_notifier" },
	{ 0x49ebacbd, "_clear_bit" },
	{ 0x3bddc214, "flow_offload_free" },
	{ 0x9b73dda5, "skb_copy_bits" },
	{ 0xb545fc7c, "dst_release" },
	{ 0xffae2b57, "flow_offload_add" },
	{ 0xdea7c909, "flow_offload_alloc" },
	{ 0xca54fee, "_test_and_set_bit" },
	{ 0xa5c2e213, "nla_put" },
	{ 0x97255bdf, "strlen" },
	{ 0x350a19ca, "nf_flow_table_cleanup" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x53f8a723, "nf_route" },
	{ 0x5f754e5a, "memset" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xd8ba03c2, "nf_ct_netns_get" },
	{ 0x607c4b5, "nft_flowtable_lookup" },
	{ 0x955005b7, "nf_tables_deactivate_flowtable" },
	{ 0x20e1a7dd, "nf_ct_netns_put" },
	{ 0xf520177b, "nft_chain_validate_hooks" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

MODULE_INFO(depends, "nf_tables,nf_flow_table,nf_conntrack");


MODULE_INFO(srcversion, "153807335C2B8AEAAA83802");
