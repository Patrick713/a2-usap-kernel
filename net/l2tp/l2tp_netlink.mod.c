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
	{ 0x2f19f539, "l2tp_session_free" },
	{ 0xa24f23d8, "__request_module" },
	{ 0xf29b4940, "l2tp_tunnel_get_nth" },
	{ 0x2b9da7a4, "genl_lock" },
	{ 0xc5688156, "genl_register_family" },
	{ 0x330ea75a, "l2tp_tunnel_get_session" },
	{ 0x97255bdf, "strlen" },
	{ 0x33b586b4, "l2tp_tunnel_free" },
	{ 0x46ae4a33, "genl_unregister_family" },
	{ 0x960b8091, "l2tp_tunnel_register" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0x65465214, "skb_trim" },
	{ 0xf1db1704, "nla_memcpy" },
	{ 0x5f754e5a, "memset" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0xc5850110, "printk" },
	{ 0xa5c2e213, "nla_put" },
	{ 0xf918f903, "netlink_unicast" },
	{ 0xc1e58a5f, "refcount_dec_and_test_checked" },
	{ 0x97479026, "l2tp_tunnel_create" },
	{ 0x9bdaf73f, "l2tp_tunnel_get" },
	{ 0x22bf2ba1, "__alloc_skb" },
	{ 0xe586a19d, "l2tp_session_get_nth" },
	{ 0x2d140a58, "genl_unlock" },
	{ 0x72e5b9b0, "l2tp_session_get_by_ifname" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xd28c75bb, "kfree_skb" },
	{ 0x6893633e, "genlmsg_multicast_allns" },
	{ 0x2cfde9a2, "warn_slowpath_fmt" },
	{ 0x37a0cba, "kfree" },
	{ 0x9d669763, "memcpy" },
	{ 0xf45f59f7, "genlmsg_put" },
	{ 0x4b58fd7d, "l2tp_tunnel_delete" },
	{ 0xa8cd6c47, "nla_put_64bit" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x1ee8d6d4, "refcount_inc_checked" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0xc51610cf, "l2tp_session_set_header_len" },
};

MODULE_INFO(depends, "l2tp_core");


MODULE_INFO(srcversion, "0C4AD0ACD0CEB9DC5BCAD84");
