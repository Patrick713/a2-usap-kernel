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
	{ 0x6b0d8f8, "nf_log_unregister" },
	{ 0x65e2bb05, "unregister_pernet_subsys" },
	{ 0xdf54a8f7, "netlink_unregister_notifier" },
	{ 0x89b8eb05, "nfnetlink_subsys_unregister" },
	{ 0x9764afbc, "nf_log_register" },
	{ 0xcfaabdb3, "nfnetlink_subsys_register" },
	{ 0xfa599bb2, "netlink_register_notifier" },
	{ 0xb041ec8d, "register_pernet_subsys" },
	{ 0x24d273d1, "add_timer" },
	{ 0x526c3a6c, "jiffies" },
	{ 0x22bf2ba1, "__alloc_skb" },
	{ 0x97255bdf, "strlen" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x1e1e140e, "ns_to_timespec64" },
	{ 0x9acb8066, "_raw_read_unlock_bh" },
	{ 0xbe52600f, "from_kgid_munged" },
	{ 0xde004450, "from_kuid_munged" },
	{ 0x77f6c690, "_raw_read_lock_bh" },
	{ 0x9b73dda5, "skb_copy_bits" },
	{ 0xeab3fd69, "skb_put" },
	{ 0xc5850110, "printk" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0xa5c2e213, "nla_put" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x1ee8d6d4, "refcount_inc_checked" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x717bcdac, "try_module_get" },
	{ 0xebaa9dc8, "kmem_cache_alloc_trace" },
	{ 0xf4610713, "kmalloc_caches" },
	{ 0x5ce3b588, "nfnl_lock" },
	{ 0xa24f23d8, "__request_module" },
	{ 0xdb065657, "nfnl_unlock" },
	{ 0xba0b95d2, "nf_log_bind_pf" },
	{ 0xe805d2ea, "nfnl_ct_hook" },
	{ 0xe3be5cad, "nf_log_unbind_pf" },
	{ 0x8f3625fe, "_raw_spin_unlock_bh" },
	{ 0x2b5ab97d, "_raw_spin_lock_bh" },
	{ 0xdb9ca3c5, "_raw_spin_lock" },
	{ 0x2b68bd2f, "del_timer" },
	{ 0xd28c75bb, "kfree_skb" },
	{ 0x8d0e3603, "nfnetlink_unicast" },
	{ 0x94499ccd, "__nlmsg_put" },
	{ 0x28aa6a67, "call_rcu" },
	{ 0xc8275115, "seq_printf" },
	{ 0x9eb8f369, "proc_set_user" },
	{ 0x2e43d7c1, "make_kgid" },
	{ 0xb8886e84, "make_kuid" },
	{ 0x1fe88ae5, "proc_create_net_data" },
	{ 0x2cfde9a2, "warn_slowpath_fmt" },
	{ 0xfc67d60e, "nf_log_unset" },
	{ 0xae947aa3, "remove_proc_entry" },
	{ 0xc47638c, "__put_net" },
	{ 0x12b548f6, "module_put" },
	{ 0x37a0cba, "kfree" },
	{ 0xc1e58a5f, "refcount_dec_and_test_checked" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0xe2b5e146, "refcount_inc_not_zero_checked" },
	{ 0x31b9195c, "__local_bh_disable_ip" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

MODULE_INFO(depends, "nfnetlink");


MODULE_INFO(srcversion, "8D39DCE5CBE2FC781DF5117");
