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
	{ 0x53fa945a, "can_rx_register" },
	{ 0xff2ae59e, "sock_gettstamp" },
	{ 0x80446f49, "can_proto_unregister" },
	{ 0x36f6c5e6, "skb_clone" },
	{ 0xd2da1048, "register_netdevice_notifier" },
	{ 0x410b37e4, "sock_queue_rcv_skb" },
	{ 0x353e3fa5, "__get_user_4" },
	{ 0xd1355a85, "skb_recv_datagram" },
	{ 0x50c89f23, "__alloc_percpu" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0xae353d77, "arm_copy_from_user" },
	{ 0xc9ec4e21, "free_percpu" },
	{ 0x9d0d6206, "unregister_netdevice_notifier" },
	{ 0x51a910c0, "arm_copy_to_user" },
	{ 0x60ba1462, "sock_no_sendpage" },
	{ 0x2478a81f, "sock_no_mmap" },
	{ 0x5f754e5a, "memset" },
	{ 0x8ea569b7, "sock_no_socketpair" },
	{ 0xc5850110, "printk" },
	{ 0xdcb92140, "lock_sock_nested" },
	{ 0x65923774, "sock_no_listen" },
	{ 0xdabddb4d, "sock_no_accept" },
	{ 0x437a0d6d, "__sock_tx_timestamp" },
	{ 0xecd247a4, "sk_free" },
	{ 0xd2584221, "dev_get_by_index" },
	{ 0xc1e58a5f, "refcount_dec_and_test_checked" },
	{ 0xdb30a522, "sock_no_shutdown" },
	{ 0xd330cc83, "can_send" },
	{ 0xb09dba87, "__sock_recv_ts_and_drops" },
	{ 0xbc10dd97, "__put_user_4" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xf56b644d, "datagram_poll" },
	{ 0xd28c75bb, "kfree_skb" },
	{ 0xe16c6b8b, "_copy_from_iter_full" },
	{ 0x185f4f58, "can_proto_register" },
	{ 0xf7f8211c, "sock_alloc_send_skb" },
	{ 0xdb9ca3c5, "_raw_spin_lock" },
	{ 0xcbf0386c, "sock_no_connect" },
	{ 0x1738c19e, "_raw_write_unlock_bh" },
	{ 0x2cfde9a2, "warn_slowpath_fmt" },
	{ 0x37a0cba, "kfree" },
	{ 0xefb7bccf, "_raw_write_lock_bh" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xe2e8065e, "memdup_user" },
	{ 0xf7e7aea9, "can_rx_unregister" },
	{ 0xeab3fd69, "skb_put" },
	{ 0xbb52456b, "_copy_to_iter" },
	{ 0xba4f7810, "skb_free_datagram" },
};

MODULE_INFO(depends, "can");


MODULE_INFO(srcversion, "62AFAADAE2DE76135AEB15F");
