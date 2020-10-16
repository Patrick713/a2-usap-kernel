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
	{ 0x97255bdf, "strlen" },
	{ 0x1975d9d2, "iptun_encaps" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0xb545fc7c, "dst_release" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0xb6595a42, "dst_cache_get_ip4" },
	{ 0x76dbda3b, "neigh_destroy" },
	{ 0xffc3b6c4, "__icmp_send" },
	{ 0x5f38429a, "skb_scrub_packet" },
	{ 0x526c3a6c, "jiffies" },
	{ 0xc9ec4e21, "free_percpu" },
	{ 0xcf3fac84, "cpumask_next" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0x5f754e5a, "memset" },
	{ 0x1e96f43d, "__cpu_possible_mask" },
	{ 0x9fdecc31, "unregister_netdevice_many" },
	{ 0xc5850110, "printk" },
	{ 0x4025fd3f, "ns_capable" },
	{ 0x62849ac7, "dev_valid_name" },
	{ 0xbadd1a4b, "free_netdev" },
	{ 0x73e20c1c, "strlcpy" },
	{ 0x4093a871, "iptunnel_xmit" },
	{ 0xa082632a, "gro_cells_receive" },
	{ 0xc1e58a5f, "refcount_dec_and_test_checked" },
	{ 0xd2aeaa09, "init_net" },
	{ 0x27c6bc4f, "__skb_get_hash" },
	{ 0x12d56b7, "__dev_get_by_index" },
	{ 0xcef4d5b4, "__alloc_percpu_gfp" },
	{ 0xae39f80e, "dst_cache_init" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xd28c75bb, "kfree_skb" },
	{ 0xada38766, "dst_cache_destroy" },
	{ 0x5c5b2589, "alloc_netdev_mqs" },
	{ 0xc4e588b, "eth_type_trans" },
	{ 0xa748a031, "pskb_expand_head" },
	{ 0x81025e51, "netdev_state_change" },
	{ 0x9f54ead7, "gro_cells_destroy" },
	{ 0x341dbfa3, "__per_cpu_offset" },
	{ 0x4d0ad59d, "unregister_netdevice_queue" },
	{ 0xa3066230, "ip_route_output_flow" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0x9a45fc12, "gro_cells_init" },
	{ 0x2cfde9a2, "warn_slowpath_fmt" },
	{ 0x9cdfb3f7, "sysctl_fb_tunnels_only_for_init_net" },
	{ 0x9d669763, "memcpy" },
	{ 0x9bb94a4b, "dst_cache_set_ip4" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xe113bbbc, "csum_partial" },
	{ 0x85670f1d, "rtnl_is_locked" },
	{ 0x9b73dda5, "skb_copy_bits" },
	{ 0xd542439, "__ipv6_addr_type" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0x8e926f59, "dev_set_mtu" },
	{ 0xe914e41e, "strcpy" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "3A36E6307F00913BDAD4B45");
