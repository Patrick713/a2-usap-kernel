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
	{ 0xa49539d9, "tcf_block_get" },
	{ 0xc8e55eef, "noop_qdisc" },
	{ 0xb9d3bc0a, "qdisc_hash_add" },
	{ 0xe8486e55, "qdisc_create_dflt" },
	{ 0xf88c2f67, "pfifo_qdisc_ops" },
	{ 0x7bee57ac, "qdisc_offload_graft_helper" },
	{ 0x8f3625fe, "_raw_spin_unlock_bh" },
	{ 0xb1e8970d, "qdisc_tree_reduce_backlog" },
	{ 0x10c3f57e, "__gnet_stats_copy_queue" },
	{ 0x2b5ab97d, "_raw_spin_lock_bh" },
	{ 0x79d8fafe, "gnet_stats_copy_queue" },
	{ 0xcf3fac84, "cpumask_next" },
	{ 0x341dbfa3, "__per_cpu_offset" },
	{ 0x1e96f43d, "__cpu_possible_mask" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0x3d99bfc9, "gnet_stats_copy_basic" },
	{ 0x85670f1d, "rtnl_is_locked" },
	{ 0x2200e942, "tcf_classify" },
	{ 0xe085e228, "__qdisc_calculate_pkt_len" },
	{ 0x203ae12b, "qdisc_reset" },
	{ 0x90407503, "qdisc_put" },
	{ 0x30a21c39, "tcf_block_put" },
	{ 0x2cfde9a2, "warn_slowpath_fmt" },
	{ 0x65465214, "skb_trim" },
	{ 0xa5c2e213, "nla_put" },
	{ 0x74084b87, "qdisc_offload_dump_helper" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x5f754e5a, "memset" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "D43D32B3F11B73E0A761B89");
