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
	{ 0xc4f0da12, "ktime_get_with_offset" },
	{ 0xda6c2db5, "register_pernet_device" },
	{ 0x2780df1d, "ip_tunnel_get_stats64" },
	{ 0x35563d55, "ip_tunnel_get_iflink" },
	{ 0xb545fc7c, "dst_release" },
	{ 0xc05aa870, "metadata_dst_alloc" },
	{ 0x523c1a44, "ipv4_update_pmtu" },
	{ 0x826f41d3, "ip_tunnel_lookup" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0x27edeed5, "__ip_tunnel_change_mtu" },
	{ 0xfe41fb0b, "param_ops_bool" },
	{ 0xae353d77, "arm_copy_from_user" },
	{ 0xffc3b6c4, "__icmp_send" },
	{ 0x5bc67f7f, "ip_tunnel_xmit" },
	{ 0x526c3a6c, "jiffies" },
	{ 0x51a910c0, "arm_copy_to_user" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x3bdc1db7, "__pskb_pull_tail" },
	{ 0x9bf8154b, "__iptunnel_pull_header" },
	{ 0xd1132a16, "ip_tunnel_setup" },
	{ 0x15e0632e, "ip_tunnel_dellink" },
	{ 0x5f754e5a, "memset" },
	{ 0x92aeea7b, "skb_checksum" },
	{ 0x9fdecc31, "unregister_netdevice_many" },
	{ 0x208ede95, "ip_tunnel_delete_nets" },
	{ 0xfe2d9177, "gre_add_protocol" },
	{ 0xf4e84281, "ip_tunnel_newlink" },
	{ 0xc5850110, "printk" },
	{ 0xfcf7a3d, "unregister_pernet_device" },
	{ 0xb58d91f8, "ip_tunnel_uninit" },
	{ 0xbadd1a4b, "free_netdev" },
	{ 0xa5c2e213, "nla_put" },
	{ 0x22dbce32, "gre_del_protocol" },
	{ 0xf68b0045, "skb_push" },
	{ 0xb796cc41, "ip_tunnel_init" },
	{ 0xea106e6f, "ip_tunnel_get_link_net" },
	{ 0x28f7fb79, "skb_pull" },
	{ 0x27c6bc4f, "__skb_get_hash" },
	{ 0x9cd4091f, "rtnl_link_unregister" },
	{ 0x82bb0642, "ip_tunnel_ioctl" },
	{ 0xc27b1528, "ip_md_tunnel_xmit" },
	{ 0x19762248, "ip_tunnel_changelink" },
	{ 0xf614d748, "rtnl_configure_link" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xd28c75bb, "kfree_skb" },
	{ 0x50456e2d, "ipv4_redirect" },
	{ 0xa748a031, "pskb_expand_head" },
	{ 0xabf7ad06, "ether_setup" },
	{ 0xd151a107, "ip_tunnel_init_net" },
	{ 0x8bc2a1b4, "iptunnel_handle_offloads" },
	{ 0xa3066230, "ip_route_output_flow" },
	{ 0xbdfbb977, "rtnl_create_link" },
	{ 0x12bc1f9d, "eth_validate_addr" },
	{ 0xec1e4453, "ip6_err_gen_icmpv6_unreach" },
	{ 0x9d669763, "memcpy" },
	{ 0xd4dc2129, "___pskb_trim" },
	{ 0xbc20d5eb, "rtnl_link_register" },
	{ 0xccd1b5b3, "ip_tunnel_encap_setup" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xe113bbbc, "csum_partial" },
	{ 0x247eabcb, "ip_tunnel_change_mtu" },
	{ 0xd52a670d, "eth_mac_addr" },
	{ 0x9738bc9f, "gre_parse_header" },
	{ 0x72b0734b, "ip_tunnel_rcv" },
};

MODULE_INFO(depends, "ip_tunnel,gre,ipv6");


MODULE_INFO(srcversion, "B456B8545B0EC0034496388");
