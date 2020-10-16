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
	{ 0x9b73dda5, "skb_copy_bits" },
	{ 0xfda9581f, "prandom_u32" },
	{ 0x2200e942, "tcf_classify" },
	{ 0xb43f9365, "ktime_get" },
	{ 0xd28c75bb, "kfree_skb" },
	{ 0x55b078cd, "skb_get_hash_perturb" },
	{ 0xdb9ca3c5, "_raw_spin_lock" },
	{ 0xebaa9dc8, "kmem_cache_alloc_trace" },
	{ 0xf4610713, "kmalloc_caches" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x526c3a6c, "jiffies" },
	{ 0x8dfefc0d, "kvmalloc_node" },
	{ 0x8f3625fe, "_raw_spin_unlock_bh" },
	{ 0x2b68bd2f, "del_timer" },
	{ 0xb1e8970d, "qdisc_tree_reduce_backlog" },
	{ 0x7a5f490e, "rtnl_kfree_skbs" },
	{ 0xa965ca81, "reciprocal_value" },
	{ 0x2b5ab97d, "_raw_spin_lock_bh" },
	{ 0x85670f1d, "rtnl_is_locked" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0xa49539d9, "tcf_block_get" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0xc158ba02, "gnet_stats_copy_app" },
	{ 0x79d8fafe, "gnet_stats_copy_queue" },
	{ 0x37a0cba, "kfree" },
	{ 0x7aa1756e, "kvfree" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0x30a21c39, "tcf_block_put" },
	{ 0x2cfde9a2, "warn_slowpath_fmt" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x65465214, "skb_trim" },
	{ 0xa5c2e213, "nla_put" },
	{ 0x5f754e5a, "memset" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "4F07FF0D446FB3C5C62F3A8");
