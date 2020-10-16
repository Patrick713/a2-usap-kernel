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
	{ 0xf6c8eae0, "register_netdevice" },
	{ 0x92b57248, "flush_work" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x83115af2, "iw_handler_set_thrspy" },
	{ 0xa24f23d8, "__request_module" },
	{ 0xf4610713, "kmalloc_caches" },
	{ 0x2d6fcc06, "__kmalloc" },
	{ 0x14d1b7f5, "generic_file_llseek" },
	{ 0xf509040f, "proc_create_seq_private" },
	{ 0x9a152689, "param_ops_int" },
	{ 0x2b68bd2f, "del_timer" },
	{ 0x97255bdf, "strlen" },
	{ 0x5ca18a2, "_raw_write_lock_irqsave" },
	{ 0x53adbbd1, "proc_create_single_data" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0x5d7776e5, "seq_puts" },
	{ 0x983ac031, "remove_wait_queue" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0xa513fc17, "netif_carrier_on" },
	{ 0x2b5ab97d, "_raw_spin_lock_bh" },
	{ 0x36f6c5e6, "skb_clone" },
	{ 0xb23c7123, "skb_copy" },
	{ 0xeb41ea45, "lib80211_crypt_delayed_deinit" },
	{ 0x2a3aa678, "_test_and_clear_bit" },
	{ 0xc8275115, "seq_printf" },
	{ 0xa35dc8c8, "netif_carrier_off" },
	{ 0x4205ad24, "cancel_work_sync" },
	{ 0xae947aa3, "remove_proc_entry" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0xf9e956fe, "__dev_kfree_skb_any" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x54fbd86c, "skb_realloc_headroom" },
	{ 0x526c3a6c, "jiffies" },
	{ 0x51a910c0, "arm_copy_to_user" },
	{ 0x65465214, "skb_trim" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xaafd9237, "_raw_write_unlock_irqrestore" },
	{ 0x31709530, "proc_remove" },
	{ 0x718ae3f2, "__netdev_alloc_skb" },
	{ 0x927d2b0f, "netif_rx" },
	{ 0x6583b73d, "wireless_spy_update" },
	{ 0xaad8c7d6, "default_wake_function" },
	{ 0x7d518e2b, "PDE_DATA" },
	{ 0x8249512, "iwe_stream_add_point" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0x2d9ecd4c, "skb_queue_purge" },
	{ 0x5f754e5a, "memset" },
	{ 0xf617b198, "proc_mkdir" },
	{ 0x39a12ca7, "_raw_spin_unlock_irqrestore" },
	{ 0xc5850110, "printk" },
	{ 0x71c90087, "memcmp" },
	{ 0x477cce43, "iw_handler_get_spy" },
	{ 0xbadd1a4b, "free_netdev" },
	{ 0x328a05f1, "strncpy" },
	{ 0x17a7462, "seq_putc" },
	{ 0x9cdcc15f, "wireless_send_event" },
	{ 0x73e20c1c, "strlcpy" },
	{ 0xf68b0045, "skb_push" },
	{ 0x89ea10c3, "dev_close" },
	{ 0x24d273d1, "add_timer" },
	{ 0x8e865d3c, "arm_delay_ops" },
	{ 0x28f7fb79, "skb_pull" },
	{ 0xd2aeaa09, "init_net" },
	{ 0x2196324, "__aeabi_idiv" },
	{ 0xa356e88f, "dev_open" },
	{ 0x12b548f6, "module_put" },
	{ 0x8bf20bc, "lib80211_get_crypto_ops" },
	{ 0xac6659eb, "skb_queue_tail" },
	{ 0xc6cbbc89, "capable" },
	{ 0x72be7bfc, "netif_device_attach" },
	{ 0x49ebe9fd, "netif_device_detach" },
	{ 0x2b4b6151, "eth_header_cache_update" },
	{ 0x8f3625fe, "_raw_spin_unlock_bh" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0xeb6e22c4, "iw_handler_get_thrspy" },
	{ 0xd28c75bb, "kfree_skb" },
	{ 0xc4e588b, "eth_type_trans" },
	{ 0xa748a031, "pskb_expand_head" },
	{ 0xabf7ad06, "ether_setup" },
	{ 0xebaa9dc8, "kmem_cache_alloc_trace" },
	{ 0xdb9ca3c5, "_raw_spin_lock" },
	{ 0x5f849a69, "_raw_spin_lock_irqsave" },
	{ 0x4d0ad59d, "unregister_netdevice_queue" },
	{ 0x3dcf1ffa, "__wake_up" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0xff1e9dd8, "seq_list_start" },
	{ 0x2e2d9410, "proc_create_data" },
	{ 0x12bc1f9d, "eth_validate_addr" },
	{ 0x2cfde9a2, "warn_slowpath_fmt" },
	{ 0xa17bd3fc, "add_wait_queue" },
	{ 0x4425ad68, "iw_handler_set_spy" },
	{ 0x77f6c690, "_raw_read_lock_bh" },
	{ 0x9acb8066, "_raw_read_unlock_bh" },
	{ 0x37a0cba, "kfree" },
	{ 0x9d669763, "memcpy" },
	{ 0x51b82b2d, "eth_header_cache" },
	{ 0x36138fcf, "param_array_ops" },
	{ 0x4ac49f05, "skb_dequeue" },
	{ 0xf346231f, "seq_list_start_head" },
	{ 0xdea8fa68, "unregister_netdev" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xe2e8065e, "memdup_user" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0xb2d48a2e, "queue_work_on" },
	{ 0xc358aaf8, "snprintf" },
	{ 0xe7d4daac, "seq_list_next" },
	{ 0xa46a0f7a, "consume_skb" },
	{ 0x4cba441d, "iwe_stream_add_event" },
	{ 0x952da7ff, "dev_queue_xmit" },
	{ 0x49ebacbd, "_clear_bit" },
	{ 0xeab3fd69, "skb_put" },
	{ 0xc41bc980, "iwe_stream_add_value" },
	{ 0x3a4f15a3, "eth_header" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0x717bcdac, "try_module_get" },
	{ 0xe914e41e, "strcpy" },
	{ 0x4c03b680, "alloc_etherdev_mqs" },
};

MODULE_INFO(depends, "lib80211");


MODULE_INFO(srcversion, "969409F733A1E3F5E0F5B6F");
