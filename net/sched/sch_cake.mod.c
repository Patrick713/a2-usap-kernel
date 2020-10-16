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
	{ 0x2e700e5f, "unregister_qdisc" },
	{ 0x147b80ff, "register_qdisc" },
	{ 0x79d8fafe, "gnet_stats_copy_queue" },
	{ 0x65465214, "skb_trim" },
	{ 0x1f486cd2, "__skb_gso_segment" },
	{ 0xf50689dd, "netif_skb_features" },
	{ 0xa46a0f7a, "consume_skb" },
	{ 0x2200e942, "tcf_classify" },
	{ 0x71c90087, "memcmp" },
	{ 0x69145d30, "qdisc_watchdog_schedule_ns" },
	{ 0xb1e8970d, "qdisc_tree_reduce_backlog" },
	{ 0xfda9581f, "prandom_u32" },
	{ 0xb43f9365, "ktime_get" },
	{ 0x3bdc1db7, "__pskb_pull_tail" },
	{ 0xa748a031, "pskb_expand_head" },
	{ 0x8dfefc0d, "kvmalloc_node" },
	{ 0xa49539d9, "tcf_block_get" },
	{ 0x3f9f7a87, "qdisc_watchdog_init" },
	{ 0x2196324, "__aeabi_idiv" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0x8f3625fe, "_raw_spin_unlock_bh" },
	{ 0x2b5ab97d, "_raw_spin_lock_bh" },
	{ 0x85670f1d, "rtnl_is_locked" },
	{ 0xf1db1704, "nla_memcpy" },
	{ 0x984ce9bd, "__nla_parse" },
	{ 0x2cfde9a2, "warn_slowpath_fmt" },
	{ 0x9b73dda5, "skb_copy_bits" },
	{ 0x109c5a19, "nf_ct_get_tuple_skb" },
	{ 0xafa375ab, "flow_hash_from_keys" },
	{ 0xe9477645, "__skb_flow_dissect" },
	{ 0xc025016c, "flow_keys_dissector" },
	{ 0x5f754e5a, "memset" },
	{ 0x7aa1756e, "kvfree" },
	{ 0x30a21c39, "tcf_block_put" },
	{ 0xfab9ac3c, "qdisc_watchdog_cancel" },
	{ 0xd28c75bb, "kfree_skb" },
	{ 0x60bffe6d, "div64_u64" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xa8cd6c47, "nla_put_64bit" },
	{ 0xa5c2e213, "nla_put" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "904AA1FB994227DF052D92A");
