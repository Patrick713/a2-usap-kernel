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
	{ 0x2d3385d3, "system_wq" },
	{ 0xf4610713, "kmalloc_caches" },
	{ 0x2d6fcc06, "__kmalloc" },
	{ 0xf9a482f9, "msleep" },
	{ 0x528c709d, "simple_read_from_buffer" },
	{ 0x14d1b7f5, "generic_file_llseek" },
	{ 0x93b18eee, "debugfs_create_dir" },
	{ 0x460ff3f3, "wimax_dev_init" },
	{ 0x349cba85, "strchr" },
	{ 0xa47a878, "debugfs_create_u8" },
	{ 0x9a152689, "param_ops_int" },
	{ 0x97255bdf, "strlen" },
	{ 0xad573f8f, "wimax_report_rfkill_sw" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0x56c2bc1a, "wimax_msg_data" },
	{ 0xa513fc17, "netif_carrier_on" },
	{ 0x36f6c5e6, "skb_clone" },
	{ 0xa35dc8c8, "netif_carrier_off" },
	{ 0x70a7def4, "wimax_state_change" },
	{ 0x4205ad24, "cancel_work_sync" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0x85df9b6c, "strsep" },
	{ 0x7c20652d, "debugfs_create_file" },
	{ 0x35edc130, "debugfs_remove_recursive" },
	{ 0xa4040d67, "sysfs_remove_group" },
	{ 0x2d39b0a7, "kstrdup" },
	{ 0x18e4bb51, "wimax_msg_send" },
	{ 0x526c3a6c, "jiffies" },
	{ 0xdd4ffa9b, "mutex_trylock" },
	{ 0x65465214, "skb_trim" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x47e15834, "simple_attr_read" },
	{ 0xe482a5a0, "param_ops_string" },
	{ 0x718ae3f2, "__netdev_alloc_skb" },
	{ 0x5bbe49f4, "__init_waitqueue_head" },
	{ 0x243ce92a, "debugfs_create_u32" },
	{ 0xf65110e8, "_dev_warn" },
	{ 0x5f754e5a, "memset" },
	{ 0x80df3806, "netif_rx_ni" },
	{ 0x83673cbf, "default_llseek" },
	{ 0x7d6174de, "netif_tx_wake_queue" },
	{ 0x53596f3f, "wimax_msg_data_len" },
	{ 0x39a12ca7, "_raw_spin_unlock_irqrestore" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0x6d0a78c4, "ethtool_op_get_link" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0xf63fc023, "sysfs_create_group" },
	{ 0x71c90087, "memcmp" },
	{ 0xde31e14c, "debugfs_create_size_t" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0xcc7044cf, "register_netdev" },
	{ 0x9534454c, "wimax_state_get" },
	{ 0x73e20c1c, "strlcpy" },
	{ 0xf68b0045, "skb_push" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0xc1e58a5f, "refcount_dec_and_test_checked" },
	{ 0xc884c9b8, "simple_attr_release" },
	{ 0x28f7fb79, "skb_pull" },
	{ 0x81febe09, "simple_open" },
	{ 0x7fa795f, "_dev_err" },
	{ 0x42160169, "flush_workqueue" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xa9e56372, "wimax_report_rfkill_hw" },
	{ 0x4059792f, "print_hex_dump" },
	{ 0x3eabc38c, "_dev_info" },
	{ 0xa1266d3c, "wimax_msg_alloc" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xddba8480, "wimax_dev_add" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x77f6f183, "kmalloc_order_trace" },
	{ 0xd28c75bb, "kfree_skb" },
	{ 0xc104368b, "wait_for_completion_interruptible_timeout" },
	{ 0x76d31a13, "dev_driver_string" },
	{ 0xa748a031, "pskb_expand_head" },
	{ 0xabf7ad06, "ether_setup" },
	{ 0xebaa9dc8, "kmem_cache_alloc_trace" },
	{ 0xdb9ca3c5, "_raw_spin_lock" },
	{ 0x5f849a69, "_raw_spin_lock_irqsave" },
	{ 0x3dcf1ffa, "__wake_up" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0xe5f2008, "wimax_dev_rm" },
	{ 0x647af474, "prepare_to_wait_event" },
	{ 0x31b9195c, "__local_bh_disable_ip" },
	{ 0x2cfde9a2, "warn_slowpath_fmt" },
	{ 0x37a0cba, "kfree" },
	{ 0x9d669763, "memcpy" },
	{ 0x176e63d8, "wimax_msg" },
	{ 0x6128b5fc, "__printk_ratelimit" },
	{ 0x836b5cfc, "request_firmware" },
	{ 0x49970de8, "finish_wait" },
	{ 0xdea8fa68, "unregister_netdev" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0xb2d48a2e, "queue_work_on" },
	{ 0xe6c12171, "complete" },
	{ 0xc358aaf8, "snprintf" },
	{ 0x99bb8806, "memmove" },
	{ 0xa46a0f7a, "consume_skb" },
	{ 0x1ee8d6d4, "refcount_inc_checked" },
	{ 0xeab3fd69, "skb_put" },
	{ 0xd83dc5e6, "wait_for_completion_timeout" },
	{ 0xdf9208c0, "alloc_workqueue" },
	{ 0xc1a56bd4, "simple_attr_open" },
	{ 0x8b6486ce, "release_firmware" },
	{ 0x9e81a568, "simple_attr_write" },
	{ 0x421d4dcf, "krealloc" },
};

MODULE_INFO(depends, "wimax");


MODULE_INFO(srcversion, "C2CAB1DE77BBFF967A6FF92");
