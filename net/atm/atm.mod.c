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
	{ 0xa24f23d8, "__request_module" },
	{ 0x480a268d, "device_remove_file" },
	{ 0xf4610713, "kmalloc_caches" },
	{ 0x2d6fcc06, "__kmalloc" },
	{ 0x92849d17, "sock_init_data" },
	{ 0xf09b5d9a, "get_zeroed_page" },
	{ 0xf509040f, "proc_create_seq_private" },
	{ 0x97255bdf, "strlen" },
	{ 0xad73041f, "autoremove_wake_function" },
	{ 0x7481b148, "refcount_add_checked" },
	{ 0x52b6a509, "send_sig" },
	{ 0xff2ae59e, "sock_gettstamp" },
	{ 0x5d7776e5, "seq_puts" },
	{ 0x3b697738, "_raw_read_lock" },
	{ 0xc8275115, "seq_printf" },
	{ 0xae947aa3, "remove_proc_entry" },
	{ 0x353e3fa5, "__get_user_4" },
	{ 0xd1355a85, "skb_recv_datagram" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0xf9e956fe, "__dev_kfree_skb_any" },
	{ 0xae353d77, "arm_copy_from_user" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0x6122337, "atomic_notifier_chain_unregister" },
	{ 0xd697e69a, "trace_hardirqs_on" },
	{ 0x51a910c0, "arm_copy_to_user" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xfb384d37, "kasprintf" },
	{ 0x60ba1462, "sock_no_sendpage" },
	{ 0x2478a81f, "sock_no_mmap" },
	{ 0xfe0bbbd2, "atomic_notifier_call_chain" },
	{ 0x7d518e2b, "PDE_DATA" },
	{ 0x2d9ecd4c, "skb_queue_purge" },
	{ 0x5f754e5a, "memset" },
	{ 0x8ea569b7, "sock_no_socketpair" },
	{ 0xc1c73f49, "device_del" },
	{ 0x5c2640cb, "device_register" },
	{ 0x27073f33, "sk_alloc" },
	{ 0x39a12ca7, "_raw_spin_unlock_irqrestore" },
	{ 0x7d80fa7, "skb_copy_datagram_iter" },
	{ 0xc5850110, "printk" },
	{ 0xdcb92140, "lock_sock_nested" },
	{ 0x71c90087, "memcmp" },
	{ 0xe4c122d0, "class_unregister" },
	{ 0x17a7462, "seq_putc" },
	{ 0x65923774, "sock_no_listen" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0x195e2e01, "proc_mkdir_data" },
	{ 0xdabddb4d, "sock_no_accept" },
	{ 0x941ffd9c, "sock_wake_async" },
	{ 0xecd247a4, "sk_free" },
	{ 0x36ac7fd0, "noop_llseek" },
	{ 0xc1e58a5f, "refcount_dec_and_test_checked" },
	{ 0xd2aeaa09, "init_net" },
	{ 0x621255c5, "__class_register" },
	{ 0xd95a2cd, "device_create_file" },
	{ 0xb09dba87, "__sock_recv_ts_and_drops" },
	{ 0x12b548f6, "module_put" },
	{ 0xac6659eb, "skb_queue_tail" },
	{ 0xc6cbbc89, "capable" },
	{ 0x9adc4641, "proto_register" },
	{ 0xbc10dd97, "__put_user_4" },
	{ 0x22bf2ba1, "__alloc_skb" },
	{ 0xebcc8bdd, "put_device" },
	{ 0xa8223179, "refcount_dec_checked" },
	{ 0x33e9e0a2, "atomic_notifier_chain_register" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xb28dc78c, "sock_register" },
	{ 0x1000e51, "schedule" },
	{ 0xd28c75bb, "kfree_skb" },
	{ 0x7c4749d7, "proto_unregister" },
	{ 0xe16c6b8b, "_copy_from_iter_full" },
	{ 0x4d634803, "_raw_write_lock_irq" },
	{ 0xc6de36ef, "refcount_sub_and_test_checked" },
	{ 0xebaa9dc8, "kmem_cache_alloc_trace" },
	{ 0xdb9ca3c5, "_raw_spin_lock" },
	{ 0x5f849a69, "_raw_spin_lock_irqsave" },
	{ 0x4302d0eb, "free_pages" },
	{ 0x3dcf1ffa, "__wake_up" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0xc5c61eb, "remove_proc_subtree" },
	{ 0x2e2d9410, "proc_create_data" },
	{ 0x2cfde9a2, "warn_slowpath_fmt" },
	{ 0x37a0cba, "kfree" },
	{ 0x9d669763, "memcpy" },
	{ 0x6578533e, "prepare_to_wait" },
	{ 0x62737e1d, "sock_unregister" },
	{ 0x314b20c8, "scnprintf" },
	{ 0x49970de8, "finish_wait" },
	{ 0x4ac49f05, "skb_dequeue" },
	{ 0xf346231f, "seq_list_start_head" },
	{ 0x95dbe078, "__get_user_2" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0xe7d4daac, "seq_list_next" },
	{ 0xa46a0f7a, "consume_skb" },
	{ 0xe54dbfa5, "dev_set_name" },
	{ 0x1ee8d6d4, "refcount_inc_checked" },
	{ 0x49ebacbd, "_clear_bit" },
	{ 0xeab3fd69, "skb_put" },
	{ 0x717bcdac, "try_module_get" },
	{ 0xba4f7810, "skb_free_datagram" },
	{ 0x719e0e44, "add_uevent_var" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "FC78AF5FACF3800643605C7");
