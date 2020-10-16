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
	{ 0x6d89b199, "proc_dointvec_minmax" },
	{ 0x4199fd5c, "skb_queue_head" },
	{ 0xb76b5caa, "release_sock" },
	{ 0xf4610713, "kmalloc_caches" },
	{ 0x2d6fcc06, "__kmalloc" },
	{ 0x92849d17, "sock_init_data" },
	{ 0xf509040f, "proc_create_seq_private" },
	{ 0xee0215c8, "skb_append" },
	{ 0x9a152689, "param_ops_int" },
	{ 0x2b68bd2f, "del_timer" },
	{ 0x4502c65a, "asc2ax" },
	{ 0x97255bdf, "strlen" },
	{ 0xad73041f, "autoremove_wake_function" },
	{ 0xb96a6616, "unregister_net_sysctl_table" },
	{ 0x52b6a509, "send_sig" },
	{ 0xff2ae59e, "sock_gettstamp" },
	{ 0x5d7776e5, "seq_puts" },
	{ 0x2b5ab97d, "_raw_spin_lock_bh" },
	{ 0x36f6c5e6, "skb_clone" },
	{ 0xc8275115, "seq_printf" },
	{ 0xd2da1048, "register_netdevice_notifier" },
	{ 0xae947aa3, "remove_proc_entry" },
	{ 0x353e3fa5, "__get_user_4" },
	{ 0xe4610eb2, "ax25_linkfail_release" },
	{ 0xd1355a85, "skb_recv_datagram" },
	{ 0x75bda77a, "seq_hlist_next" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xae353d77, "arm_copy_from_user" },
	{ 0x5d4e7fad, "skb_set_owner_w" },
	{ 0xcde585e, "ax25_register_pid" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x526c3a6c, "jiffies" },
	{ 0x9d0d6206, "unregister_netdevice_notifier" },
	{ 0x51a910c0, "arm_copy_to_user" },
	{ 0x60ba1462, "sock_no_sendpage" },
	{ 0x2478a81f, "sock_no_mmap" },
	{ 0x2d9ecd4c, "skb_queue_purge" },
	{ 0x5f754e5a, "memset" },
	{ 0x8ea569b7, "sock_no_socketpair" },
	{ 0xfa85d69e, "__sock_queue_rcv_skb" },
	{ 0x27073f33, "sk_alloc" },
	{ 0x695abde8, "ax25_find_cb" },
	{ 0x7d80fa7, "skb_copy_datagram_iter" },
	{ 0xc5850110, "printk" },
	{ 0xdcb92140, "lock_sock_nested" },
	{ 0x5ee2a21c, "ax25_listen_release" },
	{ 0x71c90087, "memcmp" },
	{ 0x3dfc897c, "seq_hlist_start_head" },
	{ 0xbadd1a4b, "free_netdev" },
	{ 0xd43ecbf1, "null_ax25_address" },
	{ 0xcc7044cf, "register_netdev" },
	{ 0x84b183ae, "strncmp" },
	{ 0xf68b0045, "skb_push" },
	{ 0xecd247a4, "sk_free" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x242852b9, "ax25_uid_policy" },
	{ 0xc1e58a5f, "refcount_dec_and_test_checked" },
	{ 0x24d273d1, "add_timer" },
	{ 0x28f7fb79, "skb_pull" },
	{ 0xd2aeaa09, "init_net" },
	{ 0xec6d97d2, "sk_filter_trim_cap" },
	{ 0xdb30a522, "sock_no_shutdown" },
	{ 0xac6659eb, "skb_queue_tail" },
	{ 0xc6cbbc89, "capable" },
	{ 0xf5cbda1c, "ax25_send_frame" },
	{ 0x9adc4641, "proto_register" },
	{ 0xbc10dd97, "__put_user_4" },
	{ 0x22bf2ba1, "__alloc_skb" },
	{ 0xa8223179, "refcount_dec_checked" },
	{ 0x8f3625fe, "_raw_spin_unlock_bh" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xf56b644d, "datagram_poll" },
	{ 0xb28dc78c, "sock_register" },
	{ 0x1000e51, "schedule" },
	{ 0xd28c75bb, "kfree_skb" },
	{ 0x7c4749d7, "proto_unregister" },
	{ 0xe16c6b8b, "_copy_from_iter_full" },
	{ 0x5c5b2589, "alloc_netdev_mqs" },
	{ 0xf7f8211c, "sock_alloc_send_skb" },
	{ 0x77f7c399, "__dev_get_by_name" },
	{ 0xebaa9dc8, "kmem_cache_alloc_trace" },
	{ 0xdb9ca3c5, "_raw_spin_lock" },
	{ 0x1738c19e, "_raw_write_unlock_bh" },
	{ 0x2cfde9a2, "warn_slowpath_fmt" },
	{ 0x8ede9e26, "ax25_protocol_release" },
	{ 0x37a0cba, "kfree" },
	{ 0x9d669763, "memcpy" },
	{ 0x6578533e, "prepare_to_wait" },
	{ 0xb0c215aa, "ax25_listen_register" },
	{ 0x62737e1d, "sock_unregister" },
	{ 0xefb7bccf, "_raw_write_lock_bh" },
	{ 0x49970de8, "finish_wait" },
	{ 0x4ac49f05, "skb_dequeue" },
	{ 0xdea8fa68, "unregister_netdev" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0xa46a0f7a, "consume_skb" },
	{ 0x1ee8d6d4, "refcount_inc_checked" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x14cecd59, "ax25_display_timer" },
	{ 0xc1444946, "ax25cmp" },
	{ 0xa373e597, "register_net_sysctl" },
	{ 0x49ebacbd, "_clear_bit" },
	{ 0xeab3fd69, "skb_put" },
	{ 0xee02e420, "ax25_findbyuid" },
	{ 0x8513bc16, "ax25_linkfail_register" },
	{ 0x53dea1ff, "ax2asc" },
	{ 0xba4f7810, "skb_free_datagram" },
	{ 0xda10ec3, "security_sock_graft" },
};

MODULE_INFO(depends, "ax25");


MODULE_INFO(srcversion, "A3989B16DBD4DD13FD36F6A");
