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
	{ 0x92849d17, "sock_init_data" },
	{ 0xff178f6, "__aeabi_idivmod" },
	{ 0xf509040f, "proc_create_seq_private" },
	{ 0x2b68bd2f, "del_timer" },
	{ 0x97255bdf, "strlen" },
	{ 0xde004450, "from_kuid_munged" },
	{ 0xad73041f, "autoremove_wake_function" },
	{ 0xb96a6616, "unregister_net_sysctl_table" },
	{ 0x52b6a509, "send_sig" },
	{ 0xff2ae59e, "sock_gettstamp" },
	{ 0x5d7776e5, "seq_puts" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0x3b697738, "_raw_read_lock" },
	{ 0x2b5ab97d, "_raw_spin_lock_bh" },
	{ 0x36f6c5e6, "skb_clone" },
	{ 0xf7802486, "__aeabi_uidivmod" },
	{ 0xb23c7123, "skb_copy" },
	{ 0xc8275115, "seq_printf" },
	{ 0xd2da1048, "register_netdevice_notifier" },
	{ 0xae947aa3, "remove_proc_entry" },
	{ 0x410b37e4, "sock_queue_rcv_skb" },
	{ 0x353e3fa5, "__get_user_4" },
	{ 0xb1b939e, "kmemdup" },
	{ 0xd1355a85, "skb_recv_datagram" },
	{ 0x75bda77a, "seq_hlist_next" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xae353d77, "arm_copy_from_user" },
	{ 0x5d4e7fad, "skb_set_owner_w" },
	{ 0x5b470551, "sock_i_ino" },
	{ 0x313e4801, "sock_rfree" },
	{ 0x54fbd86c, "skb_realloc_headroom" },
	{ 0x526c3a6c, "jiffies" },
	{ 0x9d0d6206, "unregister_netdevice_notifier" },
	{ 0x51a910c0, "arm_copy_to_user" },
	{ 0x927d2b0f, "netif_rx" },
	{ 0x60ba1462, "sock_no_sendpage" },
	{ 0x2478a81f, "sock_no_mmap" },
	{ 0xa7e08298, "skb_dequeue_tail" },
	{ 0x2d9ecd4c, "skb_queue_purge" },
	{ 0x5f754e5a, "memset" },
	{ 0x8ea569b7, "sock_no_socketpair" },
	{ 0x27073f33, "sk_alloc" },
	{ 0x7d80fa7, "skb_copy_datagram_iter" },
	{ 0xc5850110, "printk" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0xdcb92140, "lock_sock_nested" },
	{ 0x3dfc897c, "seq_hlist_start_head" },
	{ 0x543ef284, "seq_hlist_start" },
	{ 0x73e20c1c, "strlcpy" },
	{ 0xf68b0045, "skb_push" },
	{ 0x9425caca, "_raw_write_lock" },
	{ 0xecd247a4, "sk_free" },
	{ 0x82910dab, "dev_remove_pack" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0xc1e58a5f, "refcount_dec_and_test_checked" },
	{ 0x24d273d1, "add_timer" },
	{ 0x28f7fb79, "skb_pull" },
	{ 0xd2aeaa09, "init_net" },
	{ 0xac6659eb, "skb_queue_tail" },
	{ 0xc6cbbc89, "capable" },
	{ 0x9adc4641, "proto_register" },
	{ 0xbc10dd97, "__put_user_4" },
	{ 0x22bf2ba1, "__alloc_skb" },
	{ 0xb8886e84, "make_kuid" },
	{ 0x8f3625fe, "_raw_spin_unlock_bh" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xf56b644d, "datagram_poll" },
	{ 0xb28dc78c, "sock_register" },
	{ 0x1000e51, "schedule" },
	{ 0xd28c75bb, "kfree_skb" },
	{ 0x7c4749d7, "proto_unregister" },
	{ 0xe16c6b8b, "_copy_from_iter_full" },
	{ 0xf7f8211c, "sock_alloc_send_skb" },
	{ 0x77f7c399, "__dev_get_by_name" },
	{ 0xebaa9dc8, "kmem_cache_alloc_trace" },
	{ 0xdb9ca3c5, "_raw_spin_lock" },
	{ 0x1738c19e, "_raw_write_unlock_bh" },
	{ 0x31b9195c, "__local_bh_disable_ip" },
	{ 0x2cfde9a2, "warn_slowpath_fmt" },
	{ 0x77f6c690, "_raw_read_lock_bh" },
	{ 0x9acb8066, "_raw_read_unlock_bh" },
	{ 0x37a0cba, "kfree" },
	{ 0x9d669763, "memcpy" },
	{ 0x6578533e, "prepare_to_wait" },
	{ 0x62737e1d, "sock_unregister" },
	{ 0xefb7bccf, "_raw_write_lock_bh" },
	{ 0x49970de8, "finish_wait" },
	{ 0x4ac49f05, "skb_dequeue" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xc358aaf8, "snprintf" },
	{ 0x3c7af4b6, "dev_add_pack" },
	{ 0xa46a0f7a, "consume_skb" },
	{ 0x1ee8d6d4, "refcount_inc_checked" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x952da7ff, "dev_queue_xmit" },
	{ 0xa373e597, "register_net_sysctl" },
	{ 0xeab3fd69, "skb_put" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0xba4f7810, "skb_free_datagram" },
	{ 0xda10ec3, "security_sock_graft" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "2C1A0F89241A7889C312C00");
