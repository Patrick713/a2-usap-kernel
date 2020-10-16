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
	{ 0xf79f5696, "ieee80211_rx_napi" },
	{ 0x4199fd5c, "skb_queue_head" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xecd6daf, "ssb_dma_translation" },
	{ 0x480a268d, "device_remove_file" },
	{ 0xf4610713, "kmalloc_caches" },
	{ 0x2d6fcc06, "__kmalloc" },
	{ 0xf9a482f9, "msleep" },
	{ 0xff178f6, "__aeabi_idivmod" },
	{ 0x72490967, "bcma_pmu_spuravoid_pllupdate" },
	{ 0x76d11765, "mem_map" },
	{ 0x9a152689, "param_ops_int" },
	{ 0x91eb9b4, "round_jiffies" },
	{ 0x4201dfc3, "ieee80211_queue_work" },
	{ 0x6cd901c4, "arm_dma_ops" },
	{ 0xed9f15e8, "dma_set_mask" },
	{ 0xaa1280e6, "ieee80211_rts_get" },
	{ 0x36f6c5e6, "skb_clone" },
	{ 0x7ef39823, "ieee80211_hdrlen" },
	{ 0xf7802486, "__aeabi_uidivmod" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x33b02d36, "ssb_commit_settings" },
	{ 0x5f1a79cd, "ieee80211_beacon_get_tim" },
	{ 0x4205ad24, "cancel_work_sync" },
	{ 0xb1b939e, "kmemdup" },
	{ 0xbcf1cc92, "ieee80211_unregister_hw" },
	{ 0x9791d2e6, "ieee80211_channel_to_frequency" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0xf9e956fe, "__dev_kfree_skb_any" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x29d9f26e, "cancel_delayed_work_sync" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0x2d3e9627, "ssb_bus_powerup" },
	{ 0x13adb655, "dma_free_attrs" },
	{ 0xa105224d, "wiphy_rfkill_start_polling" },
	{ 0xcd3aece0, "__ieee80211_get_assoc_led_name" },
	{ 0xd697e69a, "trace_hardirqs_on" },
	{ 0x346e15fb, "dma_set_coherent_mask" },
	{ 0x526c3a6c, "jiffies" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x9596f478, "__ssb_driver_register" },
	{ 0xe482a5a0, "param_ops_string" },
	{ 0x718ae3f2, "__netdev_alloc_skb" },
	{ 0x2dd698d1, "ieee80211_stop_queue" },
	{ 0x19ec7568, "ieee80211_tx_status" },
	{ 0x5bbe49f4, "__init_waitqueue_head" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0xb561ac5b, "wait_for_completion" },
	{ 0x5f754e5a, "memset" },
	{ 0x88a15733, "ssb_driver_unregister" },
	{ 0x39a12ca7, "_raw_spin_unlock_irqrestore" },
	{ 0x3be001a3, "ieee80211_alloc_hw_nm" },
	{ 0x5ea00354, "bcma_core_dma_translation" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0x760a7600, "led_classdev_register_ext" },
	{ 0x94783ed, "ieee80211_free_txskb" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0x76806234, "ieee80211_wake_queues" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x735f33b0, "mutex_is_locked" },
	{ 0x8d709e52, "ssb_device_enable" },
	{ 0xc2bb1e6d, "dma_direct_map_page" },
	{ 0x73e20c1c, "strlcpy" },
	{ 0xd494a4b6, "dma_alloc_attrs" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0xe72671db, "bcma_core_set_clockmode" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x8e865d3c, "arm_delay_ops" },
	{ 0x6be70c, "__bcma_driver_register" },
	{ 0x28f7fb79, "skb_pull" },
	{ 0xbabc56de, "ieee80211_ctstoself_get" },
	{ 0xa6ce74c2, "request_firmware_nowait" },
	{ 0x9ccebac0, "ieee80211_queue_delayed_work" },
	{ 0x2196324, "__aeabi_idiv" },
	{ 0xd95a2cd, "device_create_file" },
	{ 0xac6659eb, "skb_queue_tail" },
	{ 0xc6cbbc89, "capable" },
	{ 0xd2c57b59, "bcma_chipco_gpio_control" },
	{ 0xe0cd54f6, "__ieee80211_get_rx_led_name" },
	{ 0xa0711ca4, "bcma_core_is_enabled" },
	{ 0xd8ab1408, "ssb_pmu_set_ldo_voltage" },
	{ 0x12a38747, "usleep_range" },
	{ 0x40c95d5a, "ssb_device_disable" },
	{ 0xb9cf2c3b, "bcma_core_enable" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x75b1fe01, "wiphy_rfkill_set_hw_state" },
	{ 0xc24a9d24, "bcma_driver_unregister" },
	{ 0x14041e2b, "bcma_core_pll_ctl" },
	{ 0x8a7d1c31, "high_memory" },
	{ 0x2da81bff, "_raw_spin_lock_irq" },
	{ 0xb678366f, "int_sqrt" },
	{ 0x76d31a13, "dev_driver_string" },
	{ 0x2fc7504b, "hwrng_register" },
	{ 0x234de3e1, "__ieee80211_get_tx_led_name" },
	{ 0x88a9ed5, "ssb_set_devtypedata" },
	{ 0xebaa9dc8, "kmem_cache_alloc_trace" },
	{ 0xdb9ca3c5, "_raw_spin_lock" },
	{ 0x5f849a69, "_raw_spin_lock_irqsave" },
	{ 0xee163cce, "ieee80211_wake_queue" },
	{ 0x4a8cf812, "ieee80211_generic_frame_duration" },
	{ 0x5e7bd1ea, "__ieee80211_get_radio_led_name" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0x31b9195c, "__local_bh_disable_ip" },
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
	{ 0xa46a0f7a, "consume_skb" },
	{ 0xdc25c52c, "ssb_pmu_set_ldo_paref" },
	{ 0x5fc2c660, "hwrng_unregister" },
	{ 0xeab3fd69, "skb_put" },
	{ 0xcae9d298, "ssb_device_is_enabled" },
	{ 0x98b30a09, "bcma_core_disable" },
	{ 0x8b6486ce, "release_firmware" },
	{ 0x4b668bbe, "ieee80211_get_tkip_p1k_iv" },
	{ 0xd349171, "ieee80211_get_response_rate" },
	{ 0xc1514a3b, "free_irq" },
};

MODULE_INFO(depends, "mac80211,ssb,bcma,cfg80211");

MODULE_ALIAS("bcma:m04BFid0812rev11cl*");
MODULE_ALIAS("bcma:m04BFid0812rev15cl*");
MODULE_ALIAS("bcma:m04BFid0812rev17cl*");
MODULE_ALIAS("bcma:m04BFid0812rev18cl*");
MODULE_ALIAS("bcma:m04BFid0812rev1Ccl*");
MODULE_ALIAS("bcma:m04BFid0812rev1Dcl*");
MODULE_ALIAS("bcma:m04BFid0812rev1Ecl*");
MODULE_ALIAS("bcma:m04BFid0812rev28cl*");
MODULE_ALIAS("bcma:m04BFid0812rev2Acl*");
MODULE_ALIAS("ssb:v4243id0812rev05*");
MODULE_ALIAS("ssb:v4243id0812rev06*");
MODULE_ALIAS("ssb:v4243id0812rev07*");
MODULE_ALIAS("ssb:v4243id0812rev09*");
MODULE_ALIAS("ssb:v4243id0812rev0A*");
MODULE_ALIAS("ssb:v4243id0812rev0B*");
MODULE_ALIAS("ssb:v4243id0812rev0C*");
MODULE_ALIAS("ssb:v4243id0812rev0D*");
MODULE_ALIAS("ssb:v4243id0812rev0F*");
MODULE_ALIAS("ssb:v4243id0812rev10*");

MODULE_INFO(srcversion, "910C8991748A1A6DE3883CF");
