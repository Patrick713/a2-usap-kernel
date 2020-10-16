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
	{ 0xb12e4cd9, "nft_register_obj" },
	{ 0x468fae3b, "nft_register_expr" },
	{ 0x97255bdf, "strlen" },
	{ 0xcc059efb, "nf_connlabels_replace" },
	{ 0xb6f126c2, "nf_ct_ext_add" },
	{ 0x178b235b, "nf_connlabels_put" },
	{ 0x74378e55, "nf_connlabels_get" },
	{ 0xd2aeaa09, "init_net" },
	{ 0x85430a76, "nft_validate_register_load" },
	{ 0x9d669763, "memcpy" },
	{ 0x60bffe6d, "div64_u64" },
	{ 0x328a05f1, "strncpy" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0x317abc75, "nf_ct_get_id" },
	{ 0x7e5cb191, "nft_validate_register_store" },
	{ 0x1e6b75a3, "nft_parse_register" },
	{ 0x4cbe5db1, "nf_ct_tmpl_alloc" },
	{ 0x2a18c74, "nf_conntrack_destroy" },
	{ 0xcf3fac84, "cpumask_next" },
	{ 0x341dbfa3, "__per_cpu_offset" },
	{ 0x1e96f43d, "__cpu_possible_mask" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0x2b805a6, "nft_dump_register" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0x2cfde9a2, "warn_slowpath_fmt" },
	{ 0x3294371a, "nf_conntrack_helper_try_module_get" },
	{ 0x6cdc5c6b, "nla_strlcpy" },
	{ 0x23642cb6, "nf_conntrack_helper_put" },
	{ 0x6044bb2c, "nf_ct_helper_ext_add" },
	{ 0x8525bff4, "nf_ct_expect_related_report" },
	{ 0x526c3a6c, "jiffies" },
	{ 0x4a3bee79, "nf_ct_expect_init" },
	{ 0xc1769b54, "nf_ct_expect_alloc" },
	{ 0xd8ba03c2, "nf_ct_netns_get" },
	{ 0x20e1a7dd, "nf_ct_netns_put" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xa5c2e213, "nla_put" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

MODULE_INFO(depends, "nf_tables,nf_conntrack");


MODULE_INFO(srcversion, "EDC5A93AFD8791A3F734317");
