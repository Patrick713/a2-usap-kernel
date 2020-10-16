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
	{ 0x4199fd5c, "skb_queue_head" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xcb3f746c, "ieee80211_rx_irqsafe" },
	{ 0xecd6daf, "ssb_dma_translation" },
	{ 0x480a268d, "device_remove_file" },
	{ 0xf4610713, "kmalloc_caches" },
	{ 0x2d6fcc06, "__kmalloc" },
	{ 0xf9a482f9, "msleep" },
	{ 0xf09b5d9a, "get_zeroed_page" },
	{ 0xff178f6, "__aeabi_idivmod" },
	{ 0x528c709d, "simple_read_from_buffer" },
	{ 0x14d1b7f5, "generic_file_llseek" },
	{ 0x93b18eee, "debugfs_create_dir" },
	{ 0x76d11765, "mem_map" },
	{ 0x9a152689, "param_ops_int" },
	{ 0x4201dfc3, "ieee80211_queue_work" },
	{ 0x6cd901c4, "arm_dma_ops" },
	{ 0xed9f15e8, "dma_set_mask" },
	{ 0xaa1280e6, "ieee80211_rts_get" },
	{ 0x7ef39823, "ieee80211_hdrlen" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x5f1a79cd, "ieee80211_beacon_get_tim" },
	{ 0x4205ad24, "cancel_work_sync" },
	{ 0xbcf1cc92, "ieee80211_unregister_hw" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0xf9e956fe, "__dev_kfree_skb_any" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xae353d77, "arm_copy_from_user" },
	{ 0x29d9f26e, "cancel_delayed_work_sync" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0x2d3e9627, "ssb_bus_powerup" },
	{ 0x13adb655, "dma_free_attrs" },
	{ 0x7c20652d, "debugfs_create_file" },
	{ 0xa105224d, "wiphy_rfkill_start_polling" },
	{ 0xcd3aece0, "__ieee80211_get_assoc_led_name" },
	{ 0xd697e69a, "trace_hardirqs_on" },
	{ 0x346e15fb, "dma_set_coherent_mask" },
	{ 0x526c3a6c, "jiffies" },
	{ 0x65465214, "skb_trim" },
	{ 0x9596f478, "__ssb_driver_register" },
	{ 0xe482a5a0, "param_ops_string" },
	{ 0x718ae3f2, "__netdev_alloc_skb" },
	{ 0x2dd698d1, "ieee80211_stop_queue" },
	{ 0x5bbe49f4, "__init_waitqueue_head" },
	{ 0xb561ac5b, "wait_for_completion" },
	{ 0x5f754e5a, "memset" },
	{ 0x88a15733, "ssb_driver_unregister" },
	{ 0x39a12ca7, "_raw_spin_unlock_irqrestore" },
	{ 0x3be001a3, "ieee80211_alloc_hw_nm" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0x760a7600, "led_classdev_register_ext" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0x71c90087, "memcmp" },
	{ 0x76806234, "ieee80211_wake_queues" },
	{ 0xfaef0ed, "__tasklet_schedule" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x8d709e52, "ssb_device_enable" },
	{ 0x47915c30, "debugfs_remove" },
	{ 0x73e20c1c, "strlcpy" },
	{ 0xc2bb1e6d, "dma_direct_map_page" },
	{ 0xd494a4b6, "dma_alloc_attrs" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0x10bc106c, "__dev_kfree_skb_irq" },
	{ 0x9545af6d, "tasklet_init" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x8e865d3c, "arm_delay_ops" },
	{ 0x28f7fb79, "skb_pull" },
	{ 0xbabc56de, "ieee80211_ctstoself_get" },
	{ 0x81febe09, "simple_open" },
	{ 0x7c86f79c, "debugfs_create_bool" },
	{ 0xa6ce74c2, "request_firmware_nowait" },
	{ 0x9ccebac0, "ieee80211_queue_delayed_work" },
	{ 0x2196324, "__aeabi_idiv" },
	{ 0xe523ad75, "synchronize_irq" },
	{ 0x82072614, "tasklet_kill" },
	{ 0xd95a2cd, "device_create_file" },
	{ 0xac6659eb, "skb_queue_tail" },
	{ 0xc6cbbc89, "capable" },
	{ 0xe0cd54f6, "__ieee80211_get_rx_led_name" },
	{ 0x22bf2ba1, "__alloc_skb" },
	{ 0x40c95d5a, "ssb_device_disable" },
	{ 0x6a5cb5ee, "__get_free_pages" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x75b1fe01, "wiphy_rfkill_set_hw_state" },
	{ 0x9d0a7e7d, "ieee80211_tx_status_irqsafe" },
	{ 0x8a7d1c31, "high_memory" },
	{ 0x2da81bff, "_raw_spin_lock_irq" },
	{ 0x6b2dc060, "dump_stack" },
	{ 0x76d31a13, "dev_driver_string" },
	{ 0x2fc7504b, "hwrng_register" },
	{ 0x234de3e1, "__ieee80211_get_tx_led_name" },
	{ 0x88a9ed5, "ssb_set_devtypedata" },
	{ 0xcc5005fe, "msleep_interruptible" },
	{ 0xebaa9dc8, "kmem_cache_alloc_trace" },
	{ 0xdb9ca3c5, "_raw_spin_lock" },
	{ 0x5f849a69, "_raw_spin_lock_irqsave" },
	{ 0xee163cce, "ieee80211_wake_queue" },
	{ 0x4a8cf812, "ieee80211_generic_frame_duration" },
	{ 0x4302d0eb, "free_pages" },
	{ 0x5e7bd1ea, "__ieee80211_get_radio_led_name" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0xf99129b1, "ieee80211_register_hw" },
	{ 0x79727164, "led_classdev_unregister" },
	{ 0x2cfde9a2, "warn_slowpath_fmt" },
	{ 0x1eb9516e, "round_jiffies_relative" },
	{ 0x37a0cba, "kfree" },
	{ 0x9d669763, "memcpy" },
	{ 0x836b5cfc, "request_firmware" },
	{ 0x4675a0da, "ieee80211_free_hw" },
	{ 0x2a2f4efa, "ssb_bus_may_powerdown" },
	{ 0x4ac49f05, "skb_dequeue" },
	{ 0xb742fd7, "simple_strtol" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xb2d48a2e, "queue_work_on" },
	{ 0xe6c12171, "complete" },
	{ 0xc358aaf8, "snprintf" },
	{ 0xca54fee, "_test_and_set_bit" },
	{ 0x99bb8806, "memmove" },
	{ 0xa46a0f7a, "consume_skb" },
	{ 0x53c0f416, "debugfs_real_fops" },
	{ 0x5fc2c660, "hwrng_unregister" },
	{ 0xeab3fd69, "skb_put" },
	{ 0xec3d2e1b, "trace_hardirqs_off" },
	{ 0xcae9d298, "ssb_device_is_enabled" },
	{ 0x8b6486ce, "release_firmware" },
	{ 0xd349171, "ieee80211_get_response_rate" },
	{ 0xc1514a3b, "free_irq" },
};

MODULE_INFO(depends, "mac80211,ssb,cfg80211");

MODULE_ALIAS("ssb:v4243id0812rev02*");
MODULE_ALIAS("ssb:v4243id0812rev04*");

MODULE_INFO(srcversion, "D04EEB1536B89990EEE81C0");