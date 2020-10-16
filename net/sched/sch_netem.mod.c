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
	{ 0xa8cd6c47, "nla_put_64bit" },
	{ 0x65465214, "skb_trim" },
	{ 0xa5c2e213, "nla_put" },
	{ 0x10c3f57e, "__gnet_stats_copy_queue" },
	{ 0xcf3fac84, "cpumask_next" },
	{ 0x341dbfa3, "__per_cpu_offset" },
	{ 0x1e96f43d, "__cpu_possible_mask" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0x69145d30, "qdisc_watchdog_schedule_ns" },
	{ 0x26d6a1a0, "kfree_skb_list" },
	{ 0x575bdc45, "skb_checksum_help" },
	{ 0x9b73dda5, "skb_copy_bits" },
	{ 0xd28c75bb, "kfree_skb" },
	{ 0xb23c7123, "skb_copy" },
	{ 0xa46a0f7a, "consume_skb" },
	{ 0x1f486cd2, "__skb_gso_segment" },
	{ 0xf50689dd, "netif_skb_features" },
	{ 0x36f6c5e6, "skb_clone" },
	{ 0xb1e8970d, "qdisc_tree_reduce_backlog" },
	{ 0xe085e228, "__qdisc_calculate_pkt_len" },
	{ 0xa5526619, "rb_insert_color" },
	{ 0x60bffe6d, "div64_u64" },
	{ 0xdf2c2742, "rb_last" },
	{ 0xbd7416db, "skb_orphan_partial" },
	{ 0x3f9f7a87, "qdisc_watchdog_init" },
	{ 0xc5850110, "printk" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xa965ca81, "reciprocal_value" },
	{ 0xb43f9365, "ktime_get" },
	{ 0x984ce9bd, "__nla_parse" },
	{ 0xf1db1704, "nla_memcpy" },
	{ 0x5f754e5a, "memset" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xf7802486, "__aeabi_uidivmod" },
	{ 0xfda9581f, "prandom_u32" },
	{ 0x203ae12b, "qdisc_reset" },
	{ 0x7a5f490e, "rtnl_kfree_skbs" },
	{ 0x4d9b652b, "rb_erase" },
	{ 0xca9360b5, "rb_next" },
	{ 0xece784c2, "rb_first" },
	{ 0x90407503, "qdisc_put" },
	{ 0xfab9ac3c, "qdisc_watchdog_cancel" },
	{ 0x2cfde9a2, "warn_slowpath_fmt" },
	{ 0x7aa1756e, "kvfree" },
	{ 0x8f3625fe, "_raw_spin_unlock_bh" },
	{ 0x2b5ab97d, "_raw_spin_lock_bh" },
	{ 0x85670f1d, "rtnl_is_locked" },
	{ 0x8dfefc0d, "kvmalloc_node" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "0A89537B3FCE8134F3DE4E9");
