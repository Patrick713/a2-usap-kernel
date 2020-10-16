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
	{ 0xea106e6f, "ip_tunnel_get_link_net" },
	{ 0x15e0632e, "ip_tunnel_dellink" },
	{ 0x35563d55, "ip_tunnel_get_iflink" },
	{ 0x2780df1d, "ip_tunnel_get_stats64" },
	{ 0x247eabcb, "ip_tunnel_change_mtu" },
	{ 0xb58d91f8, "ip_tunnel_uninit" },
	{ 0x9cd4091f, "rtnl_link_unregister" },
	{ 0xfcf7a3d, "unregister_pernet_device" },
	{ 0xd54f1913, "xfrm4_protocol_deregister" },
	{ 0xbc98b21a, "xfrm4_tunnel_deregister" },
	{ 0xbc20d5eb, "rtnl_link_register" },
	{ 0xa46d5a85, "xfrm4_tunnel_register" },
	{ 0x160ab7dd, "xfrm4_protocol_register" },
	{ 0xda6c2db5, "register_pernet_device" },
	{ 0xc5850110, "printk" },
	{ 0x72b0734b, "ip_tunnel_rcv" },
	{ 0x9bf8154b, "__iptunnel_pull_header" },
	{ 0x8d2f4deb, "xfrm_input" },
	{ 0xffc3b6c4, "__icmp_send" },
	{ 0x2cfde9a2, "warn_slowpath_fmt" },
	{ 0x3f0307fe, "icmpv6_send" },
	{ 0x6bdca94a, "ip_route_output_key_hash" },
	{ 0xb545fc7c, "dst_release" },
	{ 0xcd030bb7, "xfrm_lookup" },
	{ 0xd4432741, "ip6_route_output_flags" },
	{ 0xd28c75bb, "kfree_skb" },
	{ 0x7d8723e5, "__xfrm_decode_session" },
	{ 0x3bdc1db7, "__pskb_pull_tail" },
	{ 0x51a910c0, "arm_copy_to_user" },
	{ 0x82bb0642, "ip_tunnel_ioctl" },
	{ 0xae353d77, "arm_copy_from_user" },
	{ 0x9e0b62ae, "__xfrm_policy_check" },
	{ 0x5f38429a, "skb_scrub_packet" },
	{ 0xd151a107, "ip_tunnel_init_net" },
	{ 0x208ede95, "ip_tunnel_delete_nets" },
	{ 0x4c3275a, "__xfrm_state_destroy" },
	{ 0x523c1a44, "ipv4_update_pmtu" },
	{ 0xc1e58a5f, "refcount_dec_and_test_checked" },
	{ 0x50456e2d, "ipv4_redirect" },
	{ 0xa83a35ad, "xfrm_state_lookup" },
	{ 0x826f41d3, "ip_tunnel_lookup" },
	{ 0xb796cc41, "ip_tunnel_init" },
	{ 0xd1132a16, "ip_tunnel_setup" },
	{ 0xf4e84281, "ip_tunnel_newlink" },
	{ 0x19762248, "ip_tunnel_changelink" },
	{ 0x5f754e5a, "memset" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xa5c2e213, "nla_put" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

MODULE_INFO(depends, "ip_tunnel,tunnel4,ipv6");


MODULE_INFO(srcversion, "E0011F03B3DE39875F93978");
