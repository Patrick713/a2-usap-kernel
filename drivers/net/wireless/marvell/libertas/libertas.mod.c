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
	{ 0x6339eaf6, "netdev_info" },
	{ 0xf4610713, "kmalloc_caches" },
	{ 0x2d6fcc06, "__kmalloc" },
	{ 0x2bd25af4, "ieee80211_get_num_supported_channels" },
	{ 0xf09b5d9a, "get_zeroed_page" },
	{ 0xc054b169, "wiphy_free" },
	{ 0x13d0adf7, "__kfifo_out" },
	{ 0x5c32a221, "cfg80211_connect_done" },
	{ 0x528c709d, "simple_read_from_buffer" },
	{ 0x14d1b7f5, "generic_file_llseek" },
	{ 0x93b18eee, "debugfs_create_dir" },
	{ 0x9a152689, "param_ops_int" },
	{ 0x275867e8, "ieee80211_bss_get_elem" },
	{ 0x2b68bd2f, "del_timer" },
	{ 0xd39fa6ab, "__kfifo_alloc" },
	{ 0xd87c7d64, "cfg80211_inform_bss_data" },
	{ 0x983ac031, "remove_wait_queue" },
	{ 0xa513fc17, "netif_carrier_on" },
	{ 0x2b5ab97d, "_raw_spin_lock_bh" },
	{ 0x20000329, "simple_strtoul" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xa35dc8c8, "netif_carrier_off" },
	{ 0x4205ad24, "cancel_work_sync" },
	{ 0x9791d2e6, "ieee80211_channel_to_frequency" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0xf9e956fe, "__dev_kfree_skb_any" },
	{ 0x97106714, "memdup_user_nul" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x29d9f26e, "cancel_delayed_work_sync" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0x7c20652d, "debugfs_create_file" },
	{ 0xd697e69a, "trace_hardirqs_on" },
	{ 0xdd34010a, "kthread_create_on_node" },
	{ 0x21d918c5, "netdev_alert" },
	{ 0x526c3a6c, "jiffies" },
	{ 0x927d2b0f, "netif_rx" },
	{ 0x5bbe49f4, "__init_waitqueue_head" },
	{ 0xaad8c7d6, "default_wake_function" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0x5f754e5a, "memset" },
	{ 0x80df3806, "netif_rx_ni" },
	{ 0xa15d0131, "cancel_delayed_work" },
	{ 0x7d6174de, "netif_tx_wake_queue" },
	{ 0x39a12ca7, "_raw_spin_unlock_irqrestore" },
	{ 0x8c9c5f5c, "cfg80211_get_bss" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0x7bfbe88e, "kthread_stop" },
	{ 0x71c90087, "memcmp" },
	{ 0xbadd1a4b, "free_netdev" },
	{ 0xb11cef3a, "wiphy_unregister" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0xcc7044cf, "register_netdev" },
	{ 0x1f2bfc01, "ieee80211_get_channel" },
	{ 0x47915c30, "debugfs_remove" },
	{ 0x73e20c1c, "strlcpy" },
	{ 0xf68b0045, "skb_push" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x81dab1d2, "cfg80211_michael_mic_failure" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x8e865d3c, "arm_delay_ops" },
	{ 0x28f7fb79, "skb_pull" },
	{ 0x81febe09, "simple_open" },
	{ 0xa6ce74c2, "request_firmware_nowait" },
	{ 0x60fd9655, "cfg80211_ibss_joined" },
	{ 0x7fa795f, "_dev_err" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x72be7bfc, "netif_device_attach" },
	{ 0x49ebe9fd, "netif_device_detach" },
	{ 0x44b28538, "cfg80211_put_bss" },
	{ 0x64e7226d, "wiphy_register" },
	{ 0x8f3625fe, "_raw_spin_unlock_bh" },
	{ 0xcf86cdac, "queue_delayed_work_on" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x1000e51, "schedule" },
	{ 0xd28c75bb, "kfree_skb" },
	{ 0x2da81bff, "_raw_spin_lock_irq" },
	{ 0x766c3475, "wiphy_new_nm" },
	{ 0x5c5b2589, "alloc_netdev_mqs" },
	{ 0xc4e588b, "eth_type_trans" },
	{ 0xb35d51ab, "wake_up_process" },
	{ 0xa748a031, "pskb_expand_head" },
	{ 0x2404021a, "netdev_err" },
	{ 0xabf7ad06, "ether_setup" },
	{ 0xcc5005fe, "msleep_interruptible" },
	{ 0xa35989df, "cfg80211_disconnected" },
	{ 0xebaa9dc8, "kmem_cache_alloc_trace" },
	{ 0x5f849a69, "_raw_spin_lock_irqsave" },
	{ 0xdb760f52, "__kfifo_free" },
	{ 0x4302d0eb, "free_pages" },
	{ 0x3dcf1ffa, "__wake_up" },
	{ 0xb3f7646e, "kthread_should_stop" },
	{ 0x647af474, "prepare_to_wait_event" },
	{ 0x12bc1f9d, "eth_validate_addr" },
	{ 0x2cfde9a2, "warn_slowpath_fmt" },
	{ 0xa17bd3fc, "add_wait_queue" },
	{ 0x37a0cba, "kfree" },
	{ 0x7c816134, "regulatory_hint" },
	{ 0x9d669763, "memcpy" },
	{ 0x836b5cfc, "request_firmware" },
	{ 0x49970de8, "finish_wait" },
	{ 0xdea8fa68, "unregister_netdev" },
	{ 0xf23fcb99, "__kfifo_in" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0xb2d48a2e, "queue_work_on" },
	{ 0xc358aaf8, "snprintf" },
	{ 0xa46a0f7a, "consume_skb" },
	{ 0x91731203, "cfg80211_scan_done" },
	{ 0xdf9208c0, "alloc_workqueue" },
	{ 0x8b6486ce, "release_firmware" },
};

MODULE_INFO(depends, "cfg80211");


MODULE_INFO(srcversion, "A7E1D24F8889D8F55590B69");
