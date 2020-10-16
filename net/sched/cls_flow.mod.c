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
	{ 0xbcd58c7c, "unregister_tcf_proto_ops" },
	{ 0x2cf9b82c, "register_tcf_proto_ops" },
	{ 0x27c6bc4f, "__skb_get_hash" },
	{ 0xe9477645, "__skb_flow_dissect" },
	{ 0xc025016c, "flow_keys_dissector" },
	{ 0x5f754e5a, "memset" },
	{ 0xda9b3222, "__tcf_em_tree_match" },
	{ 0xac95141e, "from_kuid" },
	{ 0xe395d3eb, "from_kgid" },
	{ 0xdfc88ebf, "tcf_action_exec" },
	{ 0xbc3bdc7f, "flow_get_u32_src" },
	{ 0x8516c14a, "flow_get_u32_dst" },
	{ 0xf7802486, "__aeabi_uidivmod" },
	{ 0x9b73dda5, "skb_copy_bits" },
	{ 0x74e5cf80, "tcf_block_netif_keep_dst" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xfef75240, "tcf_exts_validate" },
	{ 0x143dbdbb, "tcf_em_tree_validate" },
	{ 0x37cc1f05, "init_user_ns" },
	{ 0x74c134b9, "__sw_hweight32" },
	{ 0x984ce9bd, "__nla_parse" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x2cfde9a2, "warn_slowpath_fmt" },
	{ 0x65465214, "skb_trim" },
	{ 0xccbf9c19, "tcf_exts_dump_stats" },
	{ 0xb4eb558d, "tcf_em_tree_dump" },
	{ 0xaac119a2, "tcf_exts_dump" },
	{ 0xa5c2e213, "nla_put" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x19f462ab, "kfree_call_rcu" },
	{ 0xebaa9dc8, "kmem_cache_alloc_trace" },
	{ 0xf4610713, "kmalloc_caches" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x526c3a6c, "jiffies" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0xbe0e3cba, "tcf_queue_work" },
	{ 0xe2b5e146, "refcount_inc_not_zero_checked" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0xc47638c, "__put_net" },
	{ 0x37a0cba, "kfree" },
	{ 0xc1e58a5f, "refcount_dec_and_test_checked" },
	{ 0xf55ca0cf, "tcf_em_tree_destroy" },
	{ 0x371d4a39, "tcf_exts_destroy" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "354D21925A7B10C95156D7F");
