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
	{ 0x65465214, "skb_trim" },
	{ 0xa5c2e213, "nla_put" },
	{ 0x2cfde9a2, "warn_slowpath_fmt" },
	{ 0x85670f1d, "rtnl_is_locked" },
	{ 0x79d8fafe, "gnet_stats_copy_queue" },
	{ 0x3d99bfc9, "gnet_stats_copy_basic" },
	{ 0x10c3f57e, "__gnet_stats_copy_queue" },
	{ 0x7ff3b187, "__gnet_stats_copy_basic" },
	{ 0xcf3fac84, "cpumask_next" },
	{ 0x1e96f43d, "__cpu_possible_mask" },
	{ 0x2b5ab97d, "_raw_spin_lock_bh" },
	{ 0x341dbfa3, "__per_cpu_offset" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0x8f3625fe, "_raw_spin_unlock_bh" },
	{ 0x2dd86e92, "netdev_set_tc_queue" },
	{ 0x984ce9bd, "__nla_parse" },
	{ 0x9d669763, "memcpy" },
	{ 0xe8486e55, "qdisc_create_dflt" },
	{ 0xdced6c14, "default_qdisc_ops" },
	{ 0x38a45106, "pfifo_fast_ops" },
	{ 0x2d6fcc06, "__kmalloc" },
	{ 0x65ff6f23, "dev_deactivate" },
	{ 0x66452bee, "dev_activate" },
	{ 0x2121808b, "netdev_txq_to_tc" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x5aea70d3, "netdev_set_num_tc" },
	{ 0x5f754e5a, "memset" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x37a0cba, "kfree" },
	{ 0xb9d3bc0a, "qdisc_hash_add" },
	{ 0x90407503, "qdisc_put" },
	{ 0x2834dee9, "dev_graft_qdisc" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "A5815CD0A2686C58EAFE30A");
