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
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0xb9d3bc0a, "qdisc_hash_add" },
	{ 0xddbc9c4c, "fifo_create_dflt" },
	{ 0xf88c2f67, "pfifo_qdisc_ops" },
	{ 0x984ce9bd, "__nla_parse" },
	{ 0x8f3625fe, "_raw_spin_unlock_bh" },
	{ 0xb1e8970d, "qdisc_tree_reduce_backlog" },
	{ 0x10c3f57e, "__gnet_stats_copy_queue" },
	{ 0xcf3fac84, "cpumask_next" },
	{ 0x341dbfa3, "__per_cpu_offset" },
	{ 0x1e96f43d, "__cpu_possible_mask" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0x2b5ab97d, "_raw_spin_lock_bh" },
	{ 0x85670f1d, "rtnl_is_locked" },
	{ 0xc8e55eef, "noop_qdisc" },
	{ 0x9b73dda5, "skb_copy_bits" },
	{ 0xd28c75bb, "kfree_skb" },
	{ 0x55b078cd, "skb_get_hash_perturb" },
	{ 0xe085e228, "__qdisc_calculate_pkt_len" },
	{ 0xfda9581f, "prandom_u32" },
	{ 0x70002fe8, "siphash_1u32" },
	{ 0x2200e942, "tcf_classify" },
	{ 0x526c3a6c, "jiffies" },
	{ 0x90407503, "qdisc_put" },
	{ 0x30a21c39, "tcf_block_put" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0x5f754e5a, "memset" },
	{ 0x203ae12b, "qdisc_reset" },
	{ 0x2cfde9a2, "warn_slowpath_fmt" },
	{ 0x65465214, "skb_trim" },
	{ 0xa5c2e213, "nla_put" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xc158ba02, "gnet_stats_copy_app" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "1F72A29422F108B7242F777");
