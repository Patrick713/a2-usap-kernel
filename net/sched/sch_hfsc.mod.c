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
	{ 0xb9a21d8e, "gen_new_estimator" },
	{ 0xebaa9dc8, "kmem_cache_alloc_trace" },
	{ 0xf4610713, "kmalloc_caches" },
	{ 0x2acfa402, "gen_replace_estimator" },
	{ 0x984ce9bd, "__nla_parse" },
	{ 0xe085e228, "__qdisc_calculate_pkt_len" },
	{ 0x2200e942, "tcf_classify" },
	{ 0x91a7b1da, "qdisc_class_hash_remove" },
	{ 0xb1e8970d, "qdisc_tree_reduce_backlog" },
	{ 0x8f3625fe, "_raw_spin_unlock_bh" },
	{ 0x2b5ab97d, "_raw_spin_lock_bh" },
	{ 0xc158ba02, "gnet_stats_copy_app" },
	{ 0x79d8fafe, "gnet_stats_copy_queue" },
	{ 0x634214dd, "gnet_stats_copy_rate_est" },
	{ 0x3d99bfc9, "gnet_stats_copy_basic" },
	{ 0x85670f1d, "rtnl_is_locked" },
	{ 0x10c3f57e, "__gnet_stats_copy_queue" },
	{ 0xcf3fac84, "cpumask_next" },
	{ 0x341dbfa3, "__per_cpu_offset" },
	{ 0x1e96f43d, "__cpu_possible_mask" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0xdf2c2742, "rb_last" },
	{ 0x69145d30, "qdisc_watchdog_schedule_ns" },
	{ 0xca9360b5, "rb_next" },
	{ 0xece784c2, "rb_first" },
	{ 0xb43f9365, "ktime_get" },
	{ 0x4d9b652b, "rb_erase" },
	{ 0xf53d4c26, "qdisc_class_hash_destroy" },
	{ 0x2cfde9a2, "warn_slowpath_fmt" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x65465214, "skb_trim" },
	{ 0xa5c2e213, "nla_put" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x59e5070d, "__do_div64" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0xa5526619, "rb_insert_color" },
	{ 0x133824b7, "qdisc_warn_nonwc" },
	{ 0xc8e55eef, "noop_qdisc" },
	{ 0x9471995a, "qdisc_class_hash_grow" },
	{ 0xc4212ab9, "qdisc_class_hash_insert" },
	{ 0xb9d3bc0a, "qdisc_hash_add" },
	{ 0xe8486e55, "qdisc_create_dflt" },
	{ 0xf88c2f67, "pfifo_qdisc_ops" },
	{ 0xa49539d9, "tcf_block_get" },
	{ 0x117093be, "qdisc_class_hash_init" },
	{ 0x3f9f7a87, "qdisc_watchdog_init" },
	{ 0xfab9ac3c, "qdisc_watchdog_cancel" },
	{ 0x203ae12b, "qdisc_reset" },
	{ 0x37a0cba, "kfree" },
	{ 0xded39a6b, "gen_kill_estimator" },
	{ 0x90407503, "qdisc_put" },
	{ 0x30a21c39, "tcf_block_put" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "5C100967B8A7CF1CF87B60A");
