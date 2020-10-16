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
	{ 0x60a13e90, "rcu_barrier" },
	{ 0x9d0d6206, "unregister_netdevice_notifier" },
	{ 0x65e2bb05, "unregister_pernet_subsys" },
	{ 0xdf54a8f7, "netlink_unregister_notifier" },
	{ 0x89b8eb05, "nfnetlink_subsys_unregister" },
	{ 0xd2da1048, "register_netdevice_notifier" },
	{ 0xcfaabdb3, "nfnetlink_subsys_register" },
	{ 0xfa599bb2, "netlink_register_notifier" },
	{ 0xb041ec8d, "register_pernet_subsys" },
	{ 0xdb5f4728, "nf_queue_entry_release_refs" },
	{ 0xb1b939e, "kmemdup" },
	{ 0x88bc341e, "nf_queue_entry_get_refs" },
	{ 0x1f486cd2, "__skb_gso_segment" },
	{ 0xc5850110, "printk" },
	{ 0x8d0e3603, "nfnetlink_unicast" },
	{ 0x575bdc45, "skb_checksum_help" },
	{ 0x1e1e140e, "ns_to_timespec64" },
	{ 0xbe52600f, "from_kgid_munged" },
	{ 0xde004450, "from_kuid_munged" },
	{ 0x37cc1f05, "init_user_ns" },
	{ 0x77f6c690, "_raw_read_lock_bh" },
	{ 0x89498a8e, "skb_zerocopy_headlen" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0x9acb8066, "_raw_read_unlock_bh" },
	{ 0xb22034f8, "skb_tx_error" },
	{ 0xb761b61e, "skb_zerocopy" },
	{ 0xa5c2e213, "nla_put" },
	{ 0xa5d2af8, "__nla_reserve" },
	{ 0x94499ccd, "__nlmsg_put" },
	{ 0x22bf2ba1, "__alloc_skb" },
	{ 0xc8275115, "seq_printf" },
	{ 0x3fb9456d, "nf_register_queue_handler" },
	{ 0x1fe88ae5, "proc_create_net_data" },
	{ 0x2cfde9a2, "warn_slowpath_fmt" },
	{ 0xae947aa3, "remove_proc_entry" },
	{ 0xccae9896, "nf_unregister_queue_handler" },
	{ 0x6091797f, "synchronize_rcu" },
	{ 0xd4dc2129, "___pskb_trim" },
	{ 0x9d669763, "memcpy" },
	{ 0x76c4b4a2, "skb_ensure_writable" },
	{ 0x984ce9bd, "__nla_parse" },
	{ 0xeab3fd69, "skb_put" },
	{ 0xd28c75bb, "kfree_skb" },
	{ 0x8a4d2069, "skb_copy_expand" },
	{ 0x12b548f6, "module_put" },
	{ 0x37a0cba, "kfree" },
	{ 0x28aa6a67, "call_rcu" },
	{ 0x717bcdac, "try_module_get" },
	{ 0xebaa9dc8, "kmem_cache_alloc_trace" },
	{ 0xf4610713, "kmalloc_caches" },
	{ 0x5ce3b588, "nfnl_lock" },
	{ 0xa24f23d8, "__request_module" },
	{ 0xdb065657, "nfnl_unlock" },
	{ 0xe805d2ea, "nfnl_ct_hook" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x8f3625fe, "_raw_spin_unlock_bh" },
	{ 0x2b5ab97d, "_raw_spin_lock_bh" },
	{ 0xb18453a7, "nf_reinject" },
	{ 0xc48b798f, "nf_ct_hook" },
	{ 0xdb9ca3c5, "_raw_spin_lock" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

MODULE_INFO(depends, "nfnetlink");


MODULE_INFO(srcversion, "C7D13EC4582B687F2AD48AA");
