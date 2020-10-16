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
	{ 0x92849d17, "sock_init_data" },
	{ 0xf9a482f9, "msleep" },
	{ 0x76d11765, "mem_map" },
	{ 0xf509040f, "proc_create_seq_private" },
	{ 0xde004450, "from_kuid_munged" },
	{ 0xf07b6b1c, "sock_no_setsockopt" },
	{ 0xb96a6616, "unregister_net_sysctl_table" },
	{ 0xa2d19421, "sock_no_getsockopt" },
	{ 0xff2ae59e, "sock_gettstamp" },
	{ 0x5d7776e5, "seq_puts" },
	{ 0x86eb0c08, "proc_dointvec" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0x36f6c5e6, "skb_clone" },
	{ 0xf7802486, "__aeabi_uidivmod" },
	{ 0xb23c7123, "skb_copy" },
	{ 0xc8275115, "seq_printf" },
	{ 0xd2da1048, "register_netdevice_notifier" },
	{ 0x410b37e4, "sock_queue_rcv_skb" },
	{ 0xd1355a85, "skb_recv_datagram" },
	{ 0x987c11c7, "__pv_phys_pfn_offset" },
	{ 0x75bda77a, "seq_hlist_next" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xae353d77, "arm_copy_from_user" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x54fbd86c, "skb_realloc_headroom" },
	{ 0x526c3a6c, "jiffies" },
	{ 0x9d0d6206, "unregister_netdevice_notifier" },
	{ 0x51a910c0, "arm_copy_to_user" },
	{ 0x65465214, "skb_trim" },
	{ 0x60ba1462, "sock_no_sendpage" },
	{ 0x3bdc1db7, "__pskb_pull_tail" },
	{ 0x2478a81f, "sock_no_mmap" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0x2d9ecd4c, "skb_queue_purge" },
	{ 0x8ea569b7, "sock_no_socketpair" },
	{ 0xf617b198, "proc_mkdir" },
	{ 0x27073f33, "sk_alloc" },
	{ 0x7d80fa7, "skb_copy_datagram_iter" },
	{ 0xc5850110, "printk" },
	{ 0xdcb92140, "lock_sock_nested" },
	{ 0x3dfc897c, "seq_hlist_start_head" },
	{ 0x65923774, "sock_no_listen" },
	{ 0xf68b0045, "skb_push" },
	{ 0xdabddb4d, "sock_no_accept" },
	{ 0xecd247a4, "sk_free" },
	{ 0x82910dab, "dev_remove_pack" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0xc1e58a5f, "refcount_dec_and_test_checked" },
	{ 0x24d273d1, "add_timer" },
	{ 0x28f7fb79, "skb_pull" },
	{ 0xd2aeaa09, "init_net" },
	{ 0xd4cdca7d, "register_snap_client" },
	{ 0xdb30a522, "sock_no_shutdown" },
	{ 0xac6659eb, "skb_queue_tail" },
	{ 0xc6cbbc89, "capable" },
	{ 0x9adc4641, "proto_register" },
	{ 0xbc10dd97, "__put_user_4" },
	{ 0x22bf2ba1, "__alloc_skb" },
	{ 0xa8223179, "refcount_dec_checked" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xf56b644d, "datagram_poll" },
	{ 0xb28dc78c, "sock_register" },
	{ 0xd28c75bb, "kfree_skb" },
	{ 0x7c4749d7, "proto_unregister" },
	{ 0xe16c6b8b, "_copy_from_iter_full" },
	{ 0x5c5b2589, "alloc_netdev_mqs" },
	{ 0xf7f8211c, "sock_alloc_send_skb" },
	{ 0x77f7c399, "__dev_get_by_name" },
	{ 0xebaa9dc8, "kmem_cache_alloc_trace" },
	{ 0xc5c61eb, "remove_proc_subtree" },
	{ 0x1738c19e, "_raw_write_unlock_bh" },
	{ 0x2cfde9a2, "warn_slowpath_fmt" },
	{ 0x77f6c690, "_raw_read_lock_bh" },
	{ 0x9acb8066, "_raw_read_unlock_bh" },
	{ 0x37a0cba, "kfree" },
	{ 0x62737e1d, "sock_unregister" },
	{ 0x13a8e017, "unregister_snap_client" },
	{ 0xefb7bccf, "_raw_write_lock_bh" },
	{ 0x4ac49f05, "skb_dequeue" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x3c7af4b6, "dev_add_pack" },
	{ 0xa46a0f7a, "consume_skb" },
	{ 0x1ee8d6d4, "refcount_inc_checked" },
	{ 0x952da7ff, "dev_queue_xmit" },
	{ 0xa373e597, "register_net_sysctl" },
	{ 0xeab3fd69, "skb_put" },
	{ 0x61c76b3a, "proc_dointvec_jiffies" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0x8d4db28b, "sock_i_uid" },
	{ 0xf3d37bbe, "dev_mc_add_global" },
	{ 0xba4f7810, "skb_free_datagram" },
};

MODULE_INFO(depends, "psnap");


MODULE_INFO(srcversion, "4B087E7F6234A8AAE426C02");
