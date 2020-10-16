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
	{ 0x8dfefc0d, "kvmalloc_node" },
	{ 0xa49539d9, "tcf_block_get" },
	{ 0x984ce9bd, "__nla_parse" },
	{ 0x9b73dda5, "skb_copy_bits" },
	{ 0x79d8fafe, "gnet_stats_copy_queue" },
	{ 0x2cfde9a2, "warn_slowpath_fmt" },
	{ 0xc158ba02, "gnet_stats_copy_app" },
	{ 0x8f3625fe, "_raw_spin_unlock_bh" },
	{ 0x2b5ab97d, "_raw_spin_lock_bh" },
	{ 0x85670f1d, "rtnl_is_locked" },
	{ 0xa5c2e213, "nla_put" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x27c6bc4f, "__skb_get_hash" },
	{ 0xb1e8970d, "qdisc_tree_reduce_backlog" },
	{ 0xb43f9365, "ktime_get" },
	{ 0x2200e942, "tcf_classify" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xd28c75bb, "kfree_skb" },
	{ 0x5f754e5a, "memset" },
	{ 0x7a5f490e, "rtnl_kfree_skbs" },
	{ 0x7aa1756e, "kvfree" },
	{ 0x30a21c39, "tcf_block_put" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "1ED0424B9461B3B41EF4A0A");
