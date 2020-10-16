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
	{ 0xf6c8eae0, "register_netdevice" },
	{ 0x609f1c7e, "synchronize_net" },
	{ 0x3f0307fe, "icmpv6_send" },
	{ 0x1365b114, "xfrm6_tunnel_deregister" },
	{ 0xda6c2db5, "register_pernet_device" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0xb545fc7c, "dst_release" },
	{ 0xc05aa870, "metadata_dst_alloc" },
	{ 0x36f6c5e6, "skb_clone" },
	{ 0x3358228a, "dst_cache_set_ip6" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0xfe41fb0b, "param_ops_bool" },
	{ 0xae353d77, "arm_copy_from_user" },
	{ 0x5d4e7fad, "skb_set_owner_w" },
	{ 0x76dbda3b, "neigh_destroy" },
	{ 0xffc3b6c4, "__icmp_send" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x54fbd86c, "skb_realloc_headroom" },
	{ 0x5f38429a, "skb_scrub_packet" },
	{ 0x526c3a6c, "jiffies" },
	{ 0xc9ec4e21, "free_percpu" },
	{ 0x51a910c0, "arm_copy_to_user" },
	{ 0xcf3fac84, "cpumask_next" },
	{ 0xe75a6fd8, "ip6_redirect" },
	{ 0x3bdc1db7, "__pskb_pull_tail" },
	{ 0x9bf8154b, "__iptunnel_pull_header" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0xf1db1704, "nla_memcpy" },
	{ 0x5f754e5a, "memset" },
	{ 0x1e96f43d, "__cpu_possible_mask" },
	{ 0x9fdecc31, "unregister_netdevice_many" },
	{ 0xc5850110, "printk" },
	{ 0xfcf7a3d, "unregister_pernet_device" },
	{ 0x452ba683, "ipv6_ext_hdr" },
	{ 0x4025fd3f, "ns_capable" },
	{ 0x62849ac7, "dev_valid_name" },
	{ 0xbadd1a4b, "free_netdev" },
	{ 0xcc7044cf, "register_netdev" },
	{ 0xa5c2e213, "nla_put" },
	{ 0x73e20c1c, "strlcpy" },
	{ 0x1fc96671, "dst_cache_get" },
	{ 0xf68b0045, "skb_push" },
	{ 0xa082632a, "gro_cells_receive" },
	{ 0x2f780b39, "dev_get_by_index_rcu" },
	{ 0xc1e58a5f, "refcount_dec_and_test_checked" },
	{ 0x28f7fb79, "skb_pull" },
	{ 0xd2aeaa09, "init_net" },
	{ 0x9cd4091f, "rtnl_link_unregister" },
	{ 0xcef4d5b4, "__alloc_percpu_gfp" },
	{ 0xdc9ffd3a, "ipv6_dev_get_saddr" },
	{ 0x437eb1df, "ipv6_mod_enabled" },
	{ 0x95800620, "ip_route_input_noref" },
	{ 0x72d57695, "ipv6_chk_addr_and_flags" },
	{ 0xae39f80e, "dst_cache_init" },
	{ 0xd4432741, "ip6_route_output_flags" },
	{ 0xb8886e84, "make_kuid" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xd28c75bb, "kfree_skb" },
	{ 0xada38766, "dst_cache_destroy" },
	{ 0x5c5b2589, "alloc_netdev_mqs" },
	{ 0xf3509719, "__get_hash_from_flowi6" },
	{ 0xc4e588b, "eth_type_trans" },
	{ 0x5c289110, "ip6_update_pmtu" },
	{ 0x81025e51, "netdev_state_change" },
	{ 0x9f54ead7, "gro_cells_destroy" },
	{ 0x8bc2a1b4, "iptunnel_handle_offloads" },
	{ 0x341dbfa3, "__per_cpu_offset" },
	{ 0x4d0ad59d, "unregister_netdevice_queue" },
	{ 0xa3066230, "ip_route_output_flow" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0x9a45fc12, "gro_cells_init" },
	{ 0x9e0b62ae, "__xfrm_policy_check" },
	{ 0x2cfde9a2, "warn_slowpath_fmt" },
	{ 0x9cdfb3f7, "sysctl_fb_tunnels_only_for_init_net" },
	{ 0x8c7face6, "rt6_lookup" },
	{ 0x9d669763, "memcpy" },
	{ 0xaec6bc12, "ip6tun_encaps" },
	{ 0xbc20d5eb, "rtnl_link_register" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xe113bbbc, "csum_partial" },
	{ 0x2bf8ed1d, "ip6_local_out" },
	{ 0xa46a0f7a, "consume_skb" },
	{ 0xc3d6d391, "ip6_dst_hoplimit" },
	{ 0x20ddad21, "xfrm6_tunnel_register" },
	{ 0xcd030bb7, "xfrm_lookup" },
	{ 0x9b73dda5, "skb_copy_bits" },
	{ 0xb5ebaab3, "ipv6_push_frag_opts" },
	{ 0xd542439, "__ipv6_addr_type" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0xe914e41e, "strcpy" },
};

MODULE_INFO(depends, "tunnel6,ipv6");


MODULE_INFO(srcversion, "EC003C15B9FF5168041CFF4");
