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
	{ 0x2478a81f, "sock_no_mmap" },
	{ 0xdb30a522, "sock_no_shutdown" },
	{ 0x65923774, "sock_no_listen" },
	{ 0x989877e9, "pppox_ioctl" },
	{ 0xf56b644d, "datagram_poll" },
	{ 0xdabddb4d, "sock_no_accept" },
	{ 0x8ea569b7, "sock_no_socketpair" },
	{ 0x26dd6bb9, "sock_no_bind" },
	{ 0x337f2432, "l2tp_nl_unregister_ops" },
	{ 0xfcf7a3d, "unregister_pernet_device" },
	{ 0x7c4749d7, "proto_unregister" },
	{ 0xe0ff7a18, "unregister_pppox_proto" },
	{ 0xa84ad3f4, "l2tp_nl_register_ops" },
	{ 0x482398e1, "register_pppox_proto" },
	{ 0x9adc4641, "proto_register" },
	{ 0xda6c2db5, "register_pernet_device" },
	{ 0xa748a031, "pskb_expand_head" },
	{ 0x2cfde9a2, "warn_slowpath_fmt" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0x90ae163f, "l2tp_xmit_skb" },
	{ 0x31b9195c, "__local_bh_disable_ip" },
	{ 0xe16c6b8b, "_copy_from_iter_full" },
	{ 0xeab3fd69, "skb_put" },
	{ 0xeabb4eaa, "sock_wmalloc" },
	{ 0x28aa6a67, "call_rcu" },
	{ 0x1738c19e, "_raw_write_unlock_bh" },
	{ 0xefb7bccf, "_raw_write_lock_bh" },
	{ 0xef491ce0, "pppox_unbind_sock" },
	{ 0xae353d77, "arm_copy_from_user" },
	{ 0x51a910c0, "arm_copy_to_user" },
	{ 0xbc10dd97, "__put_user_4" },
	{ 0xc51610cf, "l2tp_session_set_header_len" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x353e3fa5, "__get_user_4" },
	{ 0xd7333104, "l2tp_session_delete" },
	{ 0x436a7d87, "ppp_register_net_channel" },
	{ 0xb545fc7c, "dst_release" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0x4b58fd7d, "l2tp_tunnel_delete" },
	{ 0x330ea75a, "l2tp_tunnel_get_session" },
	{ 0x960b8091, "l2tp_tunnel_register" },
	{ 0x97479026, "l2tp_tunnel_create" },
	{ 0x9bdaf73f, "l2tp_tunnel_get" },
	{ 0xb76b5caa, "release_sock" },
	{ 0xdcb92140, "lock_sock_nested" },
	{ 0x5d7776e5, "seq_puts" },
	{ 0xc4d72cc5, "ppp_dev_name" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0xc8275115, "seq_printf" },
	{ 0x1ee8d6d4, "refcount_inc_checked" },
	{ 0xe586a19d, "l2tp_session_get_nth" },
	{ 0xecd247a4, "sk_free" },
	{ 0x2d9ecd4c, "skb_queue_purge" },
	{ 0x2f19f539, "l2tp_session_free" },
	{ 0x33b586b4, "l2tp_tunnel_free" },
	{ 0xc1e58a5f, "refcount_dec_and_test_checked" },
	{ 0xf29b4940, "l2tp_tunnel_get_nth" },
	{ 0x3bdc1db7, "__pskb_pull_tail" },
	{ 0x28f7fb79, "skb_pull" },
	{ 0xc5850110, "printk" },
	{ 0x48b7c34, "ppp_input" },
	{ 0x410b37e4, "sock_queue_rcv_skb" },
	{ 0x1fe88ae5, "proc_create_net_data" },
	{ 0xae947aa3, "remove_proc_entry" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x7d80fa7, "skb_copy_datagram_iter" },
	{ 0xd1355a85, "skb_recv_datagram" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xd28c75bb, "kfree_skb" },
	{ 0x1ff142e4, "l2tp_udp_encap_recv" },
	{ 0x92849d17, "sock_init_data" },
	{ 0x27073f33, "sk_alloc" },
	{ 0x5f754e5a, "memset" },
	{ 0x37a0cba, "kfree" },
	{ 0x217754c2, "l2tp_session_register" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0x6871f07d, "l2tp_session_create" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

MODULE_INFO(depends, "pppox,l2tp_netlink,l2tp_core,ppp_generic");


MODULE_INFO(srcversion, "50DD0EB8FFA2D8CD831B777");
