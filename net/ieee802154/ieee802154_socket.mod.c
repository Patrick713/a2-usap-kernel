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
	{ 0xa9db64c4, "dev_load" },
	{ 0x92849d17, "sock_init_data" },
	{ 0x76c95c3, "dev_getbyhwaddr_rcu" },
	{ 0xff2ae59e, "sock_gettstamp" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0x3b697738, "_raw_read_lock" },
	{ 0xb545fc7c, "dst_release" },
	{ 0x2b5ab97d, "_raw_spin_lock_bh" },
	{ 0x36f6c5e6, "skb_clone" },
	{ 0x98335fc9, "dev_get_by_name" },
	{ 0x873315f7, "sock_no_getname" },
	{ 0x410b37e4, "sock_queue_rcv_skb" },
	{ 0x353e3fa5, "__get_user_4" },
	{ 0xd1355a85, "skb_recv_datagram" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0xae353d77, "arm_copy_from_user" },
	{ 0x2ea1165b, "sk_common_release" },
	{ 0x51a910c0, "arm_copy_to_user" },
	{ 0xcd3d8a3b, "sock_common_recvmsg" },
	{ 0x60ba1462, "sock_no_sendpage" },
	{ 0x2478a81f, "sock_no_mmap" },
	{ 0x2b108dec, "ieee802154_hdr_pull" },
	{ 0x5f754e5a, "memset" },
	{ 0x8ea569b7, "sock_no_socketpair" },
	{ 0x27073f33, "sk_alloc" },
	{ 0x7d80fa7, "skb_copy_datagram_iter" },
	{ 0xc5850110, "printk" },
	{ 0x26dd6bb9, "sock_no_bind" },
	{ 0xdcb92140, "lock_sock_nested" },
	{ 0x4025fd3f, "ns_capable" },
	{ 0xae3058f8, "sock_prot_inuse_add" },
	{ 0x65923774, "sock_no_listen" },
	{ 0xf68b0045, "skb_push" },
	{ 0xdabddb4d, "sock_no_accept" },
	{ 0xd2584221, "dev_get_by_index" },
	{ 0x82910dab, "dev_remove_pack" },
	{ 0xd2aeaa09, "init_net" },
	{ 0xdb30a522, "sock_no_shutdown" },
	{ 0xb09dba87, "__sock_recv_ts_and_drops" },
	{ 0xc6cbbc89, "capable" },
	{ 0x9adc4641, "proto_register" },
	{ 0xbc10dd97, "__put_user_4" },
	{ 0xa8223179, "refcount_dec_checked" },
	{ 0x8f3625fe, "_raw_spin_unlock_bh" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xf56b644d, "datagram_poll" },
	{ 0xb28dc78c, "sock_register" },
	{ 0x9e76c299, "dev_getfirstbyhwtype" },
	{ 0xd28c75bb, "kfree_skb" },
	{ 0x7c4749d7, "proto_unregister" },
	{ 0xe16c6b8b, "_copy_from_iter_full" },
	{ 0xf7f8211c, "sock_alloc_send_skb" },
	{ 0x3d4c0713, "put_cmsg" },
	{ 0xdb9ca3c5, "_raw_spin_lock" },
	{ 0x87ed4522, "sock_common_setsockopt" },
	{ 0x1738c19e, "_raw_write_unlock_bh" },
	{ 0x2cfde9a2, "warn_slowpath_fmt" },
	{ 0x62737e1d, "sock_unregister" },
	{ 0xde68a212, "sock_common_getsockopt" },
	{ 0xefb7bccf, "_raw_write_lock_bh" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x3c7af4b6, "dev_add_pack" },
	{ 0xa46a0f7a, "consume_skb" },
	{ 0x1ee8d6d4, "refcount_inc_checked" },
	{ 0x952da7ff, "dev_queue_xmit" },
	{ 0xeab3fd69, "skb_put" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0xba4f7810, "skb_free_datagram" },
};

MODULE_INFO(depends, "ieee802154");


MODULE_INFO(srcversion, "070FD355343982AE1C48C2A");
