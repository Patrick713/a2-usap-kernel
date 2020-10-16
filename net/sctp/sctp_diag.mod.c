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
	{ 0xb76b5caa, "release_sock" },
	{ 0x700c4e9e, "sctp_transport_lookup_process" },
	{ 0x61d6cd4b, "inet_diag_unregister" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0x364cd51b, "inet_diag_msg_attrs_fill" },
	{ 0x526c3a6c, "jiffies" },
	{ 0x65465214, "skb_trim" },
	{ 0x5f754e5a, "memset" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0xdcb92140, "lock_sock_nested" },
	{ 0xa5c2e213, "nla_put" },
	{ 0xf918f903, "netlink_unicast" },
	{ 0x5807e2d3, "nla_reserve_64bit" },
	{ 0x791ebeed, "inet_diag_msg_common_fill" },
	{ 0x22bf2ba1, "__alloc_skb" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xd28c75bb, "kfree_skb" },
	{ 0x2cfde9a2, "warn_slowpath_fmt" },
	{ 0x50f4f241, "sctp_for_each_transport" },
	{ 0xc98565c6, "sock_diag_check_cookie" },
	{ 0x195dac30, "sock_diag_save_cookie" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x7fba2430, "nla_reserve" },
	{ 0x99d8e969, "inet_diag_register" },
	{ 0x94499ccd, "__nlmsg_put" },
	{ 0xe9edd311, "sctp_get_sctp_info" },
	{ 0xe3afef7, "sctp_for_each_endpoint" },
	{ 0x9aed8ccb, "netlink_net_capable" },
};

MODULE_INFO(depends, "sctp,inet_diag");


MODULE_INFO(srcversion, "E77C0C19E2DB0D042E35317");
