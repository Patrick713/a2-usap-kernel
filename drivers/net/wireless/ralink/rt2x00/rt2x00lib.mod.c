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
	{ 0xf4610713, "kmalloc_caches" },
	{ 0x2d6fcc06, "__kmalloc" },
	{ 0x76d11765, "mem_map" },
	{ 0xd39fa6ab, "__kfifo_alloc" },
	{ 0x4201dfc3, "ieee80211_queue_work" },
	{ 0x19f462ab, "kfree_call_rcu" },
	{ 0x6cd901c4, "arm_dma_ops" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0x4cf17d9a, "hrtimer_cancel" },
	{ 0x2b5ab97d, "_raw_spin_lock_bh" },
	{ 0xaa1280e6, "ieee80211_rts_get" },
	{ 0xf7802486, "__aeabi_uidivmod" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x5f1a79cd, "ieee80211_beacon_get_tim" },
	{ 0x2a3aa678, "_test_and_clear_bit" },
	{ 0x4205ad24, "cancel_work_sync" },
	{ 0xbcf1cc92, "ieee80211_unregister_hw" },
	{ 0x9791d2e6, "ieee80211_channel_to_frequency" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0xf9e956fe, "__dev_kfree_skb_any" },
	{ 0xcd5af56b, "led_classdev_resume" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x29d9f26e, "cancel_delayed_work_sync" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0xe2e34f50, "ieee80211_iterate_active_interfaces_atomic" },
	{ 0xa105224d, "wiphy_rfkill_start_polling" },
	{ 0x526c3a6c, "jiffies" },
	{ 0x65465214, "skb_trim" },
	{ 0x1c1e3962, "ieee80211_stop_queues" },
	{ 0x718ae3f2, "__netdev_alloc_skb" },
	{ 0x2dd698d1, "ieee80211_stop_queue" },
	{ 0x19ec7568, "ieee80211_tx_status" },
	{ 0xf65110e8, "_dev_warn" },
	{ 0x5f754e5a, "memset" },
	{ 0x39a12ca7, "_raw_spin_unlock_irqrestore" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0x760a7600, "led_classdev_register_ext" },
	{ 0x94783ed, "ieee80211_free_txskb" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0xc2bb1e6d, "dma_direct_map_page" },
	{ 0xf68b0045, "skb_push" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x9545af6d, "tasklet_init" },
	{ 0x28f7fb79, "skb_pull" },
	{ 0xbabc56de, "ieee80211_ctstoself_get" },
	{ 0x666e82da, "wiphy_rfkill_stop_polling" },
	{ 0x7fa795f, "_dev_err" },
	{ 0x9ccebac0, "ieee80211_queue_delayed_work" },
	{ 0x82072614, "tasklet_kill" },
	{ 0x5417c3c7, "of_get_mac_address" },
	{ 0x3eabc38c, "_dev_info" },
	{ 0x8f3625fe, "_raw_spin_unlock_bh" },
	{ 0xcf86cdac, "queue_delayed_work_on" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x75b1fe01, "wiphy_rfkill_set_hw_state" },
	{ 0xee43fd9b, "___ratelimit" },
	{ 0x8a7d1c31, "high_memory" },
	{ 0xd4e9bedd, "ieee80211_get_buffered_bc" },
	{ 0x76d31a13, "dev_driver_string" },
	{ 0xebaa9dc8, "kmem_cache_alloc_trace" },
	{ 0xdb9ca3c5, "_raw_spin_lock" },
	{ 0x5f849a69, "_raw_spin_lock_irqsave" },
	{ 0xee163cce, "ieee80211_wake_queue" },
	{ 0xdb760f52, "__kfifo_free" },
	{ 0x7cdfd095, "ieee80211_get_hdrlen_from_skb" },
	{ 0x31b9195c, "__local_bh_disable_ip" },
	{ 0xf99129b1, "ieee80211_register_hw" },
	{ 0x79727164, "led_classdev_unregister" },
	{ 0x2cfde9a2, "warn_slowpath_fmt" },
	{ 0x1eb9516e, "round_jiffies_relative" },
	{ 0x37a0cba, "kfree" },
	{ 0x9d669763, "memcpy" },
	{ 0x67a1e521, "ieee80211_tx_status_ext" },
	{ 0x18ddfa86, "hrtimer_init" },
	{ 0x2b4a3023, "led_classdev_suspend" },
	{ 0x836b5cfc, "request_firmware" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0xb2d48a2e, "queue_work_on" },
	{ 0xc358aaf8, "snprintf" },
	{ 0xca54fee, "_test_and_set_bit" },
	{ 0x99bb8806, "memmove" },
	{ 0xa46a0f7a, "consume_skb" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x49ebacbd, "_clear_bit" },
	{ 0xeab3fd69, "skb_put" },
	{ 0xa8d36c24, "ieee80211_iterate_interfaces" },
	{ 0xdf9208c0, "alloc_workqueue" },
	{ 0x8b6486ce, "release_firmware" },
};

MODULE_INFO(depends, "mac80211,cfg80211");


MODULE_INFO(srcversion, "08B2F501C8DCDEAADAAA626");
