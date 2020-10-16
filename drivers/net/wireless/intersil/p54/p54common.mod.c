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
	{ 0x4199fd5c, "skb_queue_head" },
	{ 0xcb3f746c, "ieee80211_rx_irqsafe" },
	{ 0xf4610713, "kmalloc_caches" },
	{ 0x2d6fcc06, "__kmalloc" },
	{ 0xc4f0da12, "ktime_get_with_offset" },
	{ 0xf9a482f9, "msleep" },
	{ 0x9c64fbd, "ieee80211_frequency_to_channel" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0x56a78f1, "dev_printk" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x5f1a79cd, "ieee80211_beacon_get_tim" },
	{ 0xb1b939e, "kmemdup" },
	{ 0xbcf1cc92, "ieee80211_unregister_hw" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0xf9e956fe, "__dev_kfree_skb_any" },
	{ 0xfe41fb0b, "param_ops_bool" },
	{ 0x63a7c28c, "bitmap_find_free_region" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x29d9f26e, "cancel_delayed_work_sync" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0xcd3aece0, "__ieee80211_get_assoc_led_name" },
	{ 0xccf042f0, "skb_unlink" },
	{ 0x65465214, "skb_trim" },
	{ 0x718ae3f2, "__netdev_alloc_skb" },
	{ 0x2dd698d1, "ieee80211_stop_queue" },
	{ 0x5bbe49f4, "__init_waitqueue_head" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0x2d9ecd4c, "skb_queue_purge" },
	{ 0xf65110e8, "_dev_warn" },
	{ 0x5f754e5a, "memset" },
	{ 0x39a12ca7, "_raw_spin_unlock_irqrestore" },
	{ 0x3be001a3, "ieee80211_alloc_hw_nm" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0x760a7600, "led_classdev_register_ext" },
	{ 0x94783ed, "ieee80211_free_txskb" },
	{ 0xf68b0045, "skb_push" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0x28f7fb79, "skb_pull" },
	{ 0x310917fe, "sort" },
	{ 0x7fa795f, "_dev_err" },
	{ 0x9ccebac0, "ieee80211_queue_delayed_work" },
	{ 0xac6659eb, "skb_queue_tail" },
	{ 0x3eabc38c, "_dev_info" },
	{ 0xe0cd54f6, "__ieee80211_get_rx_led_name" },
	{ 0xd9ce8f0c, "strnlen" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x75b1fe01, "wiphy_rfkill_set_hw_state" },
	{ 0x9d0a7e7d, "ieee80211_tx_status_irqsafe" },
	{ 0x77f6f183, "kmalloc_order_trace" },
	{ 0x574c2e74, "bitmap_release_region" },
	{ 0xc104368b, "wait_for_completion_interruptible_timeout" },
	{ 0x234de3e1, "__ieee80211_get_tx_led_name" },
	{ 0xebaa9dc8, "kmem_cache_alloc_trace" },
	{ 0x5f849a69, "_raw_spin_lock_irqsave" },
	{ 0xee163cce, "ieee80211_wake_queue" },
	{ 0xa8ec7d34, "crc_ccitt" },
	{ 0x5e7bd1ea, "__ieee80211_get_radio_led_name" },
	{ 0x7cdfd095, "ieee80211_get_hdrlen_from_skb" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0xf99129b1, "ieee80211_register_hw" },
	{ 0x79727164, "led_classdev_unregister" },
	{ 0x2cfde9a2, "warn_slowpath_fmt" },
	{ 0x37a0cba, "kfree" },
	{ 0x7c816134, "regulatory_hint" },
	{ 0x2663865, "ieee80211_beacon_loss" },
	{ 0x9d669763, "memcpy" },
	{ 0x4675a0da, "ieee80211_free_hw" },
	{ 0x4ac49f05, "skb_dequeue" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xe6c12171, "complete" },
	{ 0xc358aaf8, "snprintf" },
	{ 0x99bb8806, "memmove" },
	{ 0xa46a0f7a, "consume_skb" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0xeab3fd69, "skb_put" },
};

MODULE_INFO(depends, "mac80211,cfg80211,crc-ccitt");


MODULE_INFO(srcversion, "84903103E83875348030BD7");
