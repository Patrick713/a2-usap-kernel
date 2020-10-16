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
	{ 0xfe41fb0b, "param_ops_bool" },
	{ 0xea106e6f, "ip_tunnel_get_link_net" },
	{ 0x35563d55, "ip_tunnel_get_iflink" },
	{ 0x2780df1d, "ip_tunnel_get_stats64" },
	{ 0xbc20d5eb, "rtnl_link_register" },
	{ 0xa46d5a85, "xfrm4_tunnel_register" },
	{ 0xda6c2db5, "register_pernet_device" },
	{ 0x60a13e90, "rcu_barrier" },
	{ 0xfcf7a3d, "unregister_pernet_device" },
	{ 0xbc98b21a, "xfrm4_tunnel_deregister" },
	{ 0x9cd4091f, "rtnl_link_unregister" },
	{ 0xebaa9dc8, "kmem_cache_alloc_trace" },
	{ 0xf4610713, "kmalloc_caches" },
	{ 0xbc10dd97, "__put_user_4" },
	{ 0x2d6fcc06, "__kmalloc" },
	{ 0xc6cbbc89, "capable" },
	{ 0x51a910c0, "arm_copy_to_user" },
	{ 0xae353d77, "arm_copy_from_user" },
	{ 0x4025fd3f, "ns_capable" },
	{ 0x3f0307fe, "icmpv6_send" },
	{ 0x9bb94a4b, "dst_cache_set_ip4" },
	{ 0xd542439, "__ipv6_addr_type" },
	{ 0x4093a871, "iptunnel_xmit" },
	{ 0x1975d9d2, "iptun_encaps" },
	{ 0xa46a0f7a, "consume_skb" },
	{ 0x5d4e7fad, "skb_set_owner_w" },
	{ 0x54fbd86c, "skb_realloc_headroom" },
	{ 0xb6595a42, "dst_cache_get_ip4" },
	{ 0x76dbda3b, "neigh_destroy" },
	{ 0xc1e58a5f, "refcount_dec_and_test_checked" },
	{ 0x3bdc1db7, "__pskb_pull_tail" },
	{ 0x4bfb0a3d, "ipv6_chk_prefix" },
	{ 0x9b73dda5, "skb_copy_bits" },
	{ 0x927d2b0f, "netif_rx" },
	{ 0xc5850110, "printk" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0xfaea583f, "ipv6_chk_custom_prefix" },
	{ 0xae39f80e, "dst_cache_init" },
	{ 0xcf3fac84, "cpumask_next" },
	{ 0x341dbfa3, "__per_cpu_offset" },
	{ 0x1e96f43d, "__cpu_possible_mask" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0xcef4d5b4, "__alloc_percpu_gfp" },
	{ 0x609f1c7e, "synchronize_net" },
	{ 0xb545fc7c, "dst_release" },
	{ 0xa3066230, "ip_route_output_flow" },
	{ 0xb8886e84, "make_kuid" },
	{ 0x12d56b7, "__dev_get_by_index" },
	{ 0x9e0b62ae, "__xfrm_policy_check" },
	{ 0x72b0734b, "ip_tunnel_rcv" },
	{ 0x9bf8154b, "__iptunnel_pull_header" },
	{ 0x71c90087, "memcmp" },
	{ 0xd28c75bb, "kfree_skb" },
	{ 0x5bc67f7f, "ip_tunnel_xmit" },
	{ 0x8bc2a1b4, "iptunnel_handle_offloads" },
	{ 0xe914e41e, "strcpy" },
	{ 0xcc7044cf, "register_netdev" },
	{ 0x9cdfb3f7, "sysctl_fb_tunnels_only_for_init_net" },
	{ 0xd2aeaa09, "init_net" },
	{ 0xccd1b5b3, "ip_tunnel_encap_setup" },
	{ 0xbadd1a4b, "free_netdev" },
	{ 0x73e20c1c, "strlcpy" },
	{ 0x62849ac7, "dev_valid_name" },
	{ 0x5c5b2589, "alloc_netdev_mqs" },
	{ 0xf6c8eae0, "register_netdevice" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0x9fdecc31, "unregister_netdevice_many" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0x50456e2d, "ipv4_redirect" },
	{ 0x523c1a44, "ipv4_update_pmtu" },
	{ 0xec1e4453, "ip6_err_gen_icmpv6_unreach" },
	{ 0x2cfde9a2, "warn_slowpath_fmt" },
	{ 0x19f462ab, "kfree_call_rcu" },
	{ 0x28aa6a67, "call_rcu" },
	{ 0x85670f1d, "rtnl_is_locked" },
	{ 0x37a0cba, "kfree" },
	{ 0xc9ec4e21, "free_percpu" },
	{ 0xada38766, "dst_cache_destroy" },
	{ 0x81025e51, "netdev_state_change" },
	{ 0x526c3a6c, "jiffies" },
	{ 0x9d669763, "memcpy" },
	{ 0xf1db1704, "nla_memcpy" },
	{ 0x5f754e5a, "memset" },
	{ 0x4d0ad59d, "unregister_netdevice_queue" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xa5c2e213, "nla_put" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

MODULE_INFO(depends, "ip_tunnel,tunnel4,ipv6");


MODULE_INFO(srcversion, "CF3D9714B0344C39A71FFF9");
