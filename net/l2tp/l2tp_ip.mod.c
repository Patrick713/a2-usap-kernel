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
	{ 0x2f19f539, "l2tp_session_free" },
	{ 0x4f2a4fb0, "ip_getsockopt" },
	{ 0xb092b1f6, "ip_setsockopt" },
	{ 0xd24c516c, "sk_setup_caps" },
	{ 0xff2ae59e, "sock_gettstamp" },
	{ 0xb545fc7c, "dst_release" },
	{ 0x2b5ab97d, "_raw_spin_lock_bh" },
	{ 0x8e968f87, "l2tp_recv_common" },
	{ 0x410b37e4, "sock_queue_rcv_skb" },
	{ 0xd1355a85, "skb_recv_datagram" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0x6a321477, "inet_sendmsg" },
	{ 0x7b0bdea4, "inet_del_protocol" },
	{ 0x2ea1165b, "sk_common_release" },
	{ 0x82e828ec, "inet_dgram_connect" },
	{ 0xcd3d8a3b, "sock_common_recvmsg" },
	{ 0x60ba1462, "sock_no_sendpage" },
	{ 0x3bdc1db7, "__pskb_pull_tail" },
	{ 0x2478a81f, "sock_no_mmap" },
	{ 0x8ea569b7, "sock_no_socketpair" },
	{ 0x79b43c57, "__sock_recv_wifi_status" },
	{ 0x7d80fa7, "skb_copy_datagram_iter" },
	{ 0xf0875158, "security_sk_classify_flow" },
	{ 0xc5850110, "printk" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0x4f9db95e, "inet_addr_type" },
	{ 0xdcb92140, "lock_sock_nested" },
	{ 0x65923774, "sock_no_listen" },
	{ 0x61cfa655, "__ip_queue_xmit" },
	{ 0xdabddb4d, "sock_no_accept" },
	{ 0xecd247a4, "sk_free" },
	{ 0xdb9dc4e1, "inet_shutdown" },
	{ 0x5d6cd9a7, "inet_add_protocol" },
	{ 0xc1e58a5f, "refcount_dec_and_test_checked" },
	{ 0x7fa0d2e0, "__sock_recv_timestamp" },
	{ 0xbd4120fa, "inet_ioctl" },
	{ 0xa50a27f5, "__sk_receive_skb" },
	{ 0xa6100752, "ip_cmsg_recv_offset" },
	{ 0x9adc4641, "proto_register" },
	{ 0x9057db0b, "__sk_dst_check" },
	{ 0x67f315d1, "inet_release" },
	{ 0xbc10dd97, "__put_user_4" },
	{ 0xb8886e84, "make_kuid" },
	{ 0xa8223179, "refcount_dec_checked" },
	{ 0x8f3625fe, "_raw_spin_unlock_bh" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xf56b644d, "datagram_poll" },
	{ 0xd28c75bb, "kfree_skb" },
	{ 0x7c4749d7, "proto_unregister" },
	{ 0xe16c6b8b, "_copy_from_iter_full" },
	{ 0xdb9ca3c5, "_raw_spin_lock" },
	{ 0x2a18c74, "nf_conntrack_destroy" },
	{ 0xa3066230, "ip_route_output_flow" },
	{ 0x87ed4522, "sock_common_setsockopt" },
	{ 0x1738c19e, "_raw_write_unlock_bh" },
	{ 0x31b9195c, "__local_bh_disable_ip" },
	{ 0x9e0b62ae, "__xfrm_policy_check" },
	{ 0x2cfde9a2, "warn_slowpath_fmt" },
	{ 0x77f6c690, "_raw_read_lock_bh" },
	{ 0x9acb8066, "_raw_read_unlock_bh" },
	{ 0xc72c2676, "inet_register_protosw" },
	{ 0xc9991339, "__udp_disconnect" },
	{ 0x4b58fd7d, "l2tp_tunnel_delete" },
	{ 0x2b07cdb8, "inet_bind" },
	{ 0xde68a212, "sock_common_getsockopt" },
	{ 0xefb7bccf, "_raw_write_lock_bh" },
	{ 0xcc8bf283, "__ip4_datagram_connect" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xeabb4eaa, "sock_wmalloc" },
	{ 0xad5be856, "l2tp_session_get" },
	{ 0x1ee8d6d4, "refcount_inc_checked" },
	{ 0xeab3fd69, "skb_put" },
	{ 0x7960f02, "inet_unregister_protosw" },
	{ 0xba4f7810, "skb_free_datagram" },
};

MODULE_INFO(depends, "l2tp_core");


MODULE_INFO(srcversion, "2A6F1C47095F0CB6065A320");
