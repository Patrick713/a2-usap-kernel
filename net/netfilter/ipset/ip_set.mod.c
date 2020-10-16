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
	{ 0x609f1c7e, "synchronize_net" },
	{ 0xa24f23d8, "__request_module" },
	{ 0xf4610713, "kmalloc_caches" },
	{ 0x2d6fcc06, "__kmalloc" },
	{ 0xd6ee688f, "vmalloc" },
	{ 0x7aa1756e, "kvfree" },
	{ 0x9a152689, "param_ops_int" },
	{ 0x984ce9bd, "__nla_parse" },
	{ 0x97255bdf, "strlen" },
	{ 0x60a13e90, "rcu_barrier" },
	{ 0x19f462ab, "kfree_call_rcu" },
	{ 0x2b5ab97d, "_raw_spin_lock_bh" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0xae353d77, "arm_copy_from_user" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0x5ce3b588, "nfnl_lock" },
	{ 0x999e8297, "vfree" },
	{ 0xeea0399, "strscpy" },
	{ 0x526c3a6c, "jiffies" },
	{ 0x51a910c0, "arm_copy_to_user" },
	{ 0x65465214, "skb_trim" },
	{ 0x89b8eb05, "nfnetlink_subsys_unregister" },
	{ 0xf1db1704, "nla_memcpy" },
	{ 0x5f754e5a, "memset" },
	{ 0x65e2bb05, "unregister_pernet_subsys" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0xc5850110, "printk" },
	{ 0xdb065657, "nfnl_unlock" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0x4025fd3f, "ns_capable" },
	{ 0x328a05f1, "strncpy" },
	{ 0xa5c2e213, "nla_put" },
	{ 0x84b183ae, "strncmp" },
	{ 0x73e20c1c, "strlcpy" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0xf918f903, "netlink_unicast" },
	{ 0x6091797f, "synchronize_rcu" },
	{ 0x8dfefc0d, "kvmalloc_node" },
	{ 0x12b548f6, "module_put" },
	{ 0x40a9b349, "vzalloc" },
	{ 0x22bf2ba1, "__alloc_skb" },
	{ 0xd9fcfa3e, "ipv6_skip_exthdr" },
	{ 0x8f3625fe, "_raw_spin_unlock_bh" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x654849ea, "nf_unregister_sockopt" },
	{ 0xd28c75bb, "kfree_skb" },
	{ 0xb041ec8d, "register_pernet_subsys" },
	{ 0x4014ccb4, "netlink_ack" },
	{ 0xebaa9dc8, "kmem_cache_alloc_trace" },
	{ 0x1738c19e, "_raw_write_unlock_bh" },
	{ 0x31b9195c, "__local_bh_disable_ip" },
	{ 0x2cfde9a2, "warn_slowpath_fmt" },
	{ 0x77f6c690, "_raw_read_lock_bh" },
	{ 0xcfaabdb3, "nfnetlink_subsys_register" },
	{ 0x9acb8066, "_raw_read_unlock_bh" },
	{ 0x37a0cba, "kfree" },
	{ 0x9d669763, "memcpy" },
	{ 0xefb7bccf, "_raw_write_lock_bh" },
	{ 0xa8cd6c47, "nla_put_64bit" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x264ad5e, "nf_register_sockopt" },
	{ 0x94499ccd, "__nlmsg_put" },
	{ 0x9b73dda5, "skb_copy_bits" },
	{ 0x717bcdac, "try_module_get" },
	{ 0x143ab15f, "__netlink_dump_start" },
};

MODULE_INFO(depends, "nfnetlink");


MODULE_INFO(srcversion, "79B3868DE2B28D450BE19A0");
