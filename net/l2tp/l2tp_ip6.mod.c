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
	{ 0xd36bf9fe, "ipv6_getsockopt" },
	{ 0xa5de27d9, "ipv6_setsockopt" },
	{ 0x90552301, "l2tp_ioctl" },
	{ 0x60ba1462, "sock_no_sendpage" },
	{ 0x2478a81f, "sock_no_mmap" },
	{ 0xcd3d8a3b, "sock_common_recvmsg" },
	{ 0x6a321477, "inet_sendmsg" },
	{ 0xde68a212, "sock_common_getsockopt" },
	{ 0x87ed4522, "sock_common_setsockopt" },
	{ 0xdb9dc4e1, "inet_shutdown" },
	{ 0x65923774, "sock_no_listen" },
	{ 0xff2ae59e, "sock_gettstamp" },
	{ 0x5fd6f06b, "inet6_ioctl" },
	{ 0xf56b644d, "datagram_poll" },
	{ 0xdabddb4d, "sock_no_accept" },
	{ 0x8ea569b7, "sock_no_socketpair" },
	{ 0x82e828ec, "inet_dgram_connect" },
	{ 0x49f322dc, "inet6_bind" },
	{ 0xe63d39a4, "inet6_release" },
	{ 0x690e8c76, "inet6_del_protocol" },
	{ 0x7435380b, "inet6_unregister_protosw" },
	{ 0x65880b3e, "inet6_register_protosw" },
	{ 0x7c4749d7, "proto_unregister" },
	{ 0x83a0f25a, "inet6_add_protocol" },
	{ 0x9adc4641, "proto_register" },
	{ 0xc5850110, "printk" },
	{ 0x2a18c74, "nf_conntrack_destroy" },
	{ 0x3bdc1db7, "__pskb_pull_tail" },
	{ 0xa50a27f5, "__sk_receive_skb" },
	{ 0x9acb8066, "_raw_read_unlock_bh" },
	{ 0x77f6c690, "_raw_read_lock_bh" },
	{ 0xecd247a4, "sk_free" },
	{ 0x9e0b62ae, "__xfrm_policy_check" },
	{ 0x2f19f539, "l2tp_session_free" },
	{ 0x8e968f87, "l2tp_recv_common" },
	{ 0xad5be856, "l2tp_session_get" },
	{ 0x4414d99a, "__fl6_sock_lookup" },
	{ 0x11e85f6a, "ip6_push_pending_frames" },
	{ 0x19f462ab, "kfree_call_rcu" },
	{ 0xc3d6d391, "ip6_dst_hoplimit" },
	{ 0xe9f916ee, "ip6_datagram_send_ctl" },
	{ 0x41776c14, "ipv6_flowlabel_exclusive" },
	{ 0xc1e58a5f, "refcount_dec_and_test_checked" },
	{ 0xb545fc7c, "dst_release" },
	{ 0x5a0ae0fc, "ip6_append_data" },
	{ 0xa38cd121, "ip_generic_getfrag" },
	{ 0x147e3a48, "ip6_dst_lookup_flow" },
	{ 0xf0875158, "security_sk_classify_flow" },
	{ 0x507ebc7d, "fl6_update_dst" },
	{ 0x573b5453, "ipv6_fixup_options" },
	{ 0x62ce7823, "fl6_merge_options" },
	{ 0xe2b5e146, "refcount_inc_not_zero_checked" },
	{ 0x5f754e5a, "memset" },
	{ 0x2ea1165b, "sk_common_release" },
	{ 0xd28c75bb, "kfree_skb" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0x31b9195c, "__local_bh_disable_ip" },
	{ 0x410b37e4, "sock_queue_rcv_skb" },
	{ 0x2cfde9a2, "warn_slowpath_fmt" },
	{ 0xa8223179, "refcount_dec_checked" },
	{ 0xa45cb23e, "ipv6_chk_addr" },
	{ 0x2f780b39, "dev_get_by_index_rcu" },
	{ 0x1ee8d6d4, "refcount_inc_checked" },
	{ 0x1738c19e, "_raw_write_unlock_bh" },
	{ 0xefb7bccf, "_raw_write_lock_bh" },
	{ 0x37bec56, "__ip6_datagram_connect" },
	{ 0xc9991339, "__udp_disconnect" },
	{ 0xc9464b9a, "inet6_destroy_sock" },
	{ 0x4b58fd7d, "l2tp_tunnel_delete" },
	{ 0xb76b5caa, "release_sock" },
	{ 0x88972241, "ip6_flush_pending_frames" },
	{ 0xdcb92140, "lock_sock_nested" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x79b43c57, "__sock_recv_wifi_status" },
	{ 0x4c67272b, "ip6_datagram_recv_ctl" },
	{ 0x7fa0d2e0, "__sock_recv_timestamp" },
	{ 0xdb9ca3c5, "_raw_spin_lock" },
	{ 0x9dca8eb6, "ipv6_recv_error" },
	{ 0xba4f7810, "skb_free_datagram" },
	{ 0x7d80fa7, "skb_copy_datagram_iter" },
	{ 0xd1355a85, "skb_recv_datagram" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xd542439, "__ipv6_addr_type" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

MODULE_INFO(depends, "ipv6,l2tp_ip,l2tp_core");


MODULE_INFO(srcversion, "23763C14F1D2E93A05CFBB6");
