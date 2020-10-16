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
	{ 0xf4610713, "kmalloc_caches" },
	{ 0x2d6fcc06, "__kmalloc" },
	{ 0x53fa945a, "can_rx_register" },
	{ 0x7fa720a6, "hrtimer_active" },
	{ 0xcc20ac52, "hrtimer_forward" },
	{ 0xf07b6b1c, "sock_no_setsockopt" },
	{ 0xa2d19421, "sock_no_getsockopt" },
	{ 0xff2ae59e, "sock_gettstamp" },
	{ 0x4cf17d9a, "hrtimer_cancel" },
	{ 0x80446f49, "can_proto_unregister" },
	{ 0xf7802486, "__aeabi_uidivmod" },
	{ 0x12b6921, "proc_create_net_single" },
	{ 0xc8275115, "seq_printf" },
	{ 0xd2da1048, "register_netdevice_notifier" },
	{ 0x873315f7, "sock_no_getname" },
	{ 0xb43f9365, "ktime_get" },
	{ 0xae947aa3, "remove_proc_entry" },
	{ 0x410b37e4, "sock_queue_rcv_skb" },
	{ 0xd1355a85, "skb_recv_datagram" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0x5b470551, "sock_i_ino" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x9d0d6206, "unregister_netdevice_notifier" },
	{ 0x60ba1462, "sock_no_sendpage" },
	{ 0x2478a81f, "sock_no_mmap" },
	{ 0x7d518e2b, "PDE_DATA" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0xd04e2845, "sock_efree" },
	{ 0xe6d81d31, "hrtimer_start_range_ns" },
	{ 0x5f754e5a, "memset" },
	{ 0x8ea569b7, "sock_no_socketpair" },
	{ 0x65e2bb05, "unregister_pernet_subsys" },
	{ 0xc5850110, "printk" },
	{ 0x26dd6bb9, "sock_no_bind" },
	{ 0xdcb92140, "lock_sock_nested" },
	{ 0x17a7462, "seq_putc" },
	{ 0x65923774, "sock_no_listen" },
	{ 0x195e2e01, "proc_mkdir_data" },
	{ 0xdabddb4d, "sock_no_accept" },
	{ 0x2f780b39, "dev_get_by_index_rcu" },
	{ 0xecd247a4, "sk_free" },
	{ 0xd2584221, "dev_get_by_index" },
	{ 0xc1e58a5f, "refcount_dec_and_test_checked" },
	{ 0xdb30a522, "sock_no_shutdown" },
	{ 0xd330cc83, "can_send" },
	{ 0xb09dba87, "__sock_recv_ts_and_drops" },
	{ 0x22bf2ba1, "__alloc_skb" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xf56b644d, "datagram_poll" },
	{ 0xd28c75bb, "kfree_skb" },
	{ 0xe16c6b8b, "_copy_from_iter_full" },
	{ 0x185f4f58, "can_proto_register" },
	{ 0xb041ec8d, "register_pernet_subsys" },
	{ 0xebaa9dc8, "kmem_cache_alloc_trace" },
	{ 0xdb9ca3c5, "_raw_spin_lock" },
	{ 0x1738c19e, "_raw_write_unlock_bh" },
	{ 0x2cfde9a2, "warn_slowpath_fmt" },
	{ 0x37a0cba, "kfree" },
	{ 0x9d669763, "memcpy" },
	{ 0x18ddfa86, "hrtimer_init" },
	{ 0xefb7bccf, "_raw_write_lock_bh" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xf7e7aea9, "can_rx_unregister" },
	{ 0x1ee8d6d4, "refcount_inc_checked" },
	{ 0xeab3fd69, "skb_put" },
	{ 0xbb52456b, "_copy_to_iter" },
	{ 0xe914e41e, "strcpy" },
	{ 0xba4f7810, "skb_free_datagram" },
};

MODULE_INFO(depends, "can");


MODULE_INFO(srcversion, "43A766B5E768811CA7701A5");
