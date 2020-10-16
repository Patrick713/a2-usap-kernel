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
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

static const struct modversion_info ____versions[]
__used __section(__versions) = {
	{ 0xe9942317, "module_layout" },
	{ 0xd52a670d, "eth_mac_addr" },
	{ 0x9d0d6206, "unregister_netdevice_notifier" },
	{ 0x65e2bb05, "unregister_pernet_subsys" },
	{ 0xbc20d5eb, "rtnl_link_register" },
	{ 0xb041ec8d, "register_pernet_subsys" },
	{ 0xd2da1048, "register_netdevice_notifier" },
	{ 0x77d404e1, "inet_select_addr" },
	{ 0x147e3a48, "ip6_dst_lookup_flow" },
	{ 0x3bdc1db7, "__pskb_pull_tail" },
	{ 0xa3066230, "ip_route_output_flow" },
	{ 0x5f754e5a, "memset" },
	{ 0x9b73dda5, "skb_copy_bits" },
	{ 0xd542439, "__ipv6_addr_type" },
	{ 0xf5cdf088, "nf_hook_slow" },
	{ 0x422678a0, "nf_hooks_needed" },
	{ 0x814fb952, "nd_tbl" },
	{ 0x2cfde9a2, "warn_slowpath_fmt" },
	{ 0xe6e04598, "ipv6_stub" },
	{ 0x9d669763, "memcpy" },
	{ 0x952da7ff, "dev_queue_xmit" },
	{ 0x6ab6c6ff, "__neigh_create" },
	{ 0xa46a0f7a, "consume_skb" },
	{ 0x5d4e7fad, "skb_set_owner_w" },
	{ 0x54fbd86c, "skb_realloc_headroom" },
	{ 0x2a18c74, "nf_conntrack_destroy" },
	{ 0x526c3a6c, "jiffies" },
	{ 0xe154e316, "arp_tbl" },
	{ 0xf6c8eae0, "register_netdevice" },
	{ 0x27ffe1e3, "fib_nl_delrule" },
	{ 0x2fe5a30, "fib_nl_newrule" },
	{ 0x94499ccd, "__nlmsg_put" },
	{ 0x22bf2ba1, "__alloc_skb" },
	{ 0x927d2b0f, "netif_rx" },
	{ 0xc4e588b, "eth_type_trans" },
	{ 0x28f7fb79, "skb_pull" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0xba3d699, "dev_queue_xmit_nit" },
	{ 0x31b9195c, "__local_bh_disable_ip" },
	{ 0xf68b0045, "skb_push" },
	{ 0x28595189, "netdev_master_upper_dev_link" },
	{ 0x4c90dc00, "netdev_master_upper_dev_get" },
	{ 0x4d0ad59d, "unregister_netdevice_queue" },
	{ 0x7f4d03da, "netdev_lower_get_next" },
	{ 0x8dfa946, "netdev_upper_dev_unlink" },
	{ 0x2404021a, "netdev_err" },
	{ 0x8fa9c025, "dev_change_flags" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0xabf7ad06, "ether_setup" },
	{ 0x37b5f04a, "ip6_dst_alloc" },
	{ 0xee0a0869, "fib6_new_table" },
	{ 0x437eb1df, "ipv6_mod_enabled" },
	{ 0xa65f509e, "rt_dst_alloc" },
	{ 0x741a2c41, "fib_new_table" },
	{ 0xcef4d5b4, "__alloc_percpu_gfp" },
	{ 0xc9ec4e21, "free_percpu" },
	{ 0xb545fc7c, "dst_release" },
	{ 0x6091797f, "synchronize_rcu" },
	{ 0xcf3fac84, "cpumask_next" },
	{ 0x341dbfa3, "__per_cpu_offset" },
	{ 0x1e96f43d, "__cpu_possible_mask" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0x60467c25, "ip6_pol_route" },
	{ 0x73e20c1c, "strlcpy" },
	{ 0xd28c75bb, "kfree_skb" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xa5c2e213, "nla_put" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

MODULE_INFO(depends, "ipv6");


MODULE_INFO(srcversion, "3C0B77D675A576BED9E544E");
