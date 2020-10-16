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
	{ 0xa2d19421, "sock_no_getsockopt" },
	{ 0xf07b6b1c, "sock_no_setsockopt" },
	{ 0xdb30a522, "sock_no_shutdown" },
	{ 0x65923774, "sock_no_listen" },
	{ 0x989877e9, "pppox_ioctl" },
	{ 0xf56b644d, "datagram_poll" },
	{ 0xdabddb4d, "sock_no_accept" },
	{ 0x8ea569b7, "sock_no_socketpair" },
	{ 0x26dd6bb9, "sock_no_bind" },
	{ 0xe0ff7a18, "unregister_pppox_proto" },
	{ 0x82910dab, "dev_remove_pack" },
	{ 0x9d0d6206, "unregister_netdevice_notifier" },
	{ 0xfcf7a3d, "unregister_pernet_device" },
	{ 0xd2da1048, "register_netdevice_notifier" },
	{ 0x3c7af4b6, "dev_add_pack" },
	{ 0x7c4749d7, "proto_unregister" },
	{ 0x482398e1, "register_pppox_proto" },
	{ 0x9adc4641, "proto_register" },
	{ 0xda6c2db5, "register_pernet_device" },
	{ 0x436a7d87, "ppp_register_net_channel" },
	{ 0x98335fc9, "dev_get_by_name" },
	{ 0xa7e816fb, "pskb_trim_rcsum_slow" },
	{ 0xa50a27f5, "__sk_receive_skb" },
	{ 0x1555017a, "skb_pull_rcsum" },
	{ 0x3bdc1db7, "__pskb_pull_tail" },
	{ 0x36f6c5e6, "skb_clone" },
	{ 0xb2d48a2e, "queue_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x48b7c34, "ppp_input" },
	{ 0x410b37e4, "sock_queue_rcv_skb" },
	{ 0x2d9ecd4c, "skb_queue_purge" },
	{ 0x1738c19e, "_raw_write_unlock_bh" },
	{ 0xefb7bccf, "_raw_write_lock_bh" },
	{ 0x1fe88ae5, "proc_create_net_data" },
	{ 0x5f754e5a, "memset" },
	{ 0x9acb8066, "_raw_read_unlock_bh" },
	{ 0x1ee8d6d4, "refcount_inc_checked" },
	{ 0x77f6c690, "_raw_read_lock_bh" },
	{ 0xa5dd9f5e, "dev_get_by_name_rcu" },
	{ 0xae353d77, "arm_copy_from_user" },
	{ 0x353e3fa5, "__get_user_4" },
	{ 0xbc10dd97, "__put_user_4" },
	{ 0xecd247a4, "sk_free" },
	{ 0xc1e58a5f, "refcount_dec_and_test_checked" },
	{ 0xef491ce0, "pppox_unbind_sock" },
	{ 0x5d7776e5, "seq_puts" },
	{ 0xc8275115, "seq_printf" },
	{ 0xae947aa3, "remove_proc_entry" },
	{ 0x2cfde9a2, "warn_slowpath_fmt" },
	{ 0xb76b5caa, "release_sock" },
	{ 0xe16c6b8b, "_copy_from_iter_full" },
	{ 0xeab3fd69, "skb_put" },
	{ 0xeabb4eaa, "sock_wmalloc" },
	{ 0xdcb92140, "lock_sock_nested" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xa46a0f7a, "consume_skb" },
	{ 0x7d80fa7, "skb_copy_datagram_iter" },
	{ 0xd1355a85, "skb_recv_datagram" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xa748a031, "pskb_expand_head" },
	{ 0x952da7ff, "dev_queue_xmit" },
	{ 0xd28c75bb, "kfree_skb" },
	{ 0x92849d17, "sock_init_data" },
	{ 0x27073f33, "sk_alloc" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

MODULE_INFO(depends, "pppox,ppp_generic");


MODULE_INFO(srcversion, "C5102176E4C284535947129");
