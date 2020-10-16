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
	{ 0x6d662533, "_find_first_bit_le" },
	{ 0xf79f5696, "ieee80211_rx_napi" },
	{ 0xf4610713, "kmalloc_caches" },
	{ 0x2d6fcc06, "__kmalloc" },
	{ 0xf9a482f9, "msleep" },
	{ 0xff178f6, "__aeabi_idivmod" },
	{ 0x3c72724e, "usb_wait_anchor_empty_timeout" },
	{ 0xaad0ae78, "__bitmap_shift_right" },
	{ 0x9a152689, "param_ops_int" },
	{ 0x91eb9b4, "round_jiffies" },
	{ 0x4201dfc3, "ieee80211_queue_work" },
	{ 0x19f462ab, "kfree_call_rcu" },
	{ 0x47939e0d, "__tasklet_hi_schedule" },
	{ 0x2b5ab97d, "_raw_spin_lock_bh" },
	{ 0xf7802486, "__aeabi_uidivmod" },
	{ 0x4150b3e8, "usb_get_from_anchor" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x5f1a79cd, "ieee80211_beacon_get_tim" },
	{ 0xd3f57a2, "_find_next_bit_le" },
	{ 0x2a3aa678, "_test_and_clear_bit" },
	{ 0xd7098bcc, "ath_regd_init" },
	{ 0x4205ad24, "cancel_work_sync" },
	{ 0xfaba248a, "usb_scuttle_anchored_urbs" },
	{ 0xbcf1cc92, "ieee80211_unregister_hw" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0xf9e956fe, "__dev_kfree_skb_any" },
	{ 0xfe41fb0b, "param_ops_bool" },
	{ 0x63a7c28c, "bitmap_find_free_region" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x29d9f26e, "cancel_delayed_work_sync" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0xcd3aece0, "__ieee80211_get_assoc_led_name" },
	{ 0x526c3a6c, "jiffies" },
	{ 0x65465214, "skb_trim" },
	{ 0x1c1e3962, "ieee80211_stop_queues" },
	{ 0xaf3c6135, "usb_unanchor_urb" },
	{ 0x718ae3f2, "__netdev_alloc_skb" },
	{ 0x2dd698d1, "ieee80211_stop_queue" },
	{ 0x38ea3b28, "input_event" },
	{ 0x5bbe49f4, "__init_waitqueue_head" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0xb561ac5b, "wait_for_completion" },
	{ 0xf65110e8, "_dev_warn" },
	{ 0x5f754e5a, "memset" },
	{ 0x39a12ca7, "_raw_spin_unlock_irqrestore" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0x183c8383, "usb_deregister" },
	{ 0x3be001a3, "ieee80211_alloc_hw_nm" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0x760a7600, "led_classdev_register_ext" },
	{ 0x94783ed, "ieee80211_free_txskb" },
	{ 0x71c90087, "memcmp" },
	{ 0x76806234, "ieee80211_wake_queues" },
	{ 0xfaef0ed, "__tasklet_schedule" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x15793c37, "ath_is_mybeacon" },
	{ 0x78c6bf66, "usb_control_msg" },
	{ 0x4571aea8, "ath_is_world_regd" },
	{ 0x73e20c1c, "strlcpy" },
	{ 0x643feb7f, "input_set_capability" },
	{ 0xf68b0045, "skb_push" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0x80c4c319, "crc32_le" },
	{ 0x10bc106c, "__dev_kfree_skb_irq" },
	{ 0x288bebfc, "ieee80211_sta_block_awake" },
	{ 0x9545af6d, "tasklet_init" },
	{ 0xc1e58a5f, "refcount_dec_and_test_checked" },
	{ 0xdc3fcbc9, "__sw_hweight8" },
	{ 0x6091797f, "synchronize_rcu" },
	{ 0x28f7fb79, "skb_pull" },
	{ 0xa6ce74c2, "request_firmware_nowait" },
	{ 0x7fa795f, "_dev_err" },
	{ 0x9ccebac0, "ieee80211_queue_delayed_work" },
	{ 0x2196324, "__aeabi_idiv" },
	{ 0x92280c6f, "ath_reg_notifier_apply" },
	{ 0x87ee4cd1, "wiphy_to_ieee80211_hw" },
	{ 0x82072614, "tasklet_kill" },
	{ 0x94b008be, "ieee80211_stop_tx_ba_cb_irqsafe" },
	{ 0x280b64f0, "usb_queue_reset_device" },
	{ 0xac6659eb, "skb_queue_tail" },
	{ 0x3eabc38c, "_dev_info" },
	{ 0x305d8a65, "usb_submit_urb" },
	{ 0xf08b651e, "ath_regd_get_band_ctl" },
	{ 0xd9ce8f0c, "strnlen" },
	{ 0xf47de486, "usb_kill_anchored_urbs" },
	{ 0x8f3625fe, "_raw_spin_unlock_bh" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xaebeda32, "usb_reset_device" },
	{ 0x7b0629e7, "input_register_device" },
	{ 0x9d0a7e7d, "ieee80211_tx_status_irqsafe" },
	{ 0xd28c75bb, "kfree_skb" },
	{ 0x574c2e74, "bitmap_release_region" },
	{ 0xc967f035, "usb_driver_release_interface" },
	{ 0x39a96b12, "ieee80211_get_tx_rates" },
	{ 0x2de4f87b, "input_free_device" },
	{ 0x8fb59dba, "ieee80211_find_sta" },
	{ 0x234de3e1, "__ieee80211_get_tx_led_name" },
	{ 0x2f63e634, "usb_poison_anchored_urbs" },
	{ 0xebaa9dc8, "kmem_cache_alloc_trace" },
	{ 0xdb9ca3c5, "_raw_spin_lock" },
	{ 0xc0599906, "usb_get_intf" },
	{ 0x5f849a69, "_raw_spin_lock_irqsave" },
	{ 0xee163cce, "ieee80211_wake_queue" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0x58456a32, "ieee80211_restart_hw" },
	{ 0xf99129b1, "ieee80211_register_hw" },
	{ 0x79727164, "led_classdev_unregister" },
	{ 0x2cfde9a2, "warn_slowpath_fmt" },
	{ 0x37a0cba, "kfree" },
	{ 0x7c816134, "regulatory_hint" },
	{ 0x9d669763, "memcpy" },
	{ 0xc0e66c25, "input_unregister_device" },
	{ 0x7a8b7baa, "usb_register_driver" },
	{ 0x4675a0da, "ieee80211_free_hw" },
	{ 0x4ac49f05, "skb_dequeue" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xb08828fb, "usb_ifnum_to_if" },
	{ 0xe6c12171, "complete" },
	{ 0xc358aaf8, "snprintf" },
	{ 0xca54fee, "_test_and_set_bit" },
	{ 0x1ee8d6d4, "refcount_inc_checked" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x906dd327, "usb_unpoison_anchored_urbs" },
	{ 0xeab3fd69, "skb_put" },
	{ 0xd83dc5e6, "wait_for_completion_timeout" },
	{ 0x184a7893, "usb_free_urb" },
	{ 0x8b6486ce, "release_firmware" },
	{ 0x58858b29, "ieee80211_start_tx_ba_cb_irqsafe" },
	{ 0x7609cb29, "usb_anchor_urb" },
	{ 0x9f49ab55, "usb_alloc_urb" },
	{ 0xecf8b294, "usb_put_intf" },
	{ 0xc260f09e, "ieee80211_stop_tx_ba_session" },
	{ 0x6401b328, "ieee80211_queue_stopped" },
	{ 0xea1c9521, "input_allocate_device" },
};

MODULE_INFO(depends, "mac80211,ath,cfg80211");

MODULE_ALIAS("usb:v0CF3p9170d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0CF3p1001d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0CF3p1002d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0CF3p1010d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0CF3p1011d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:vCACEp0300d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07D1p3C10d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07D1p3A09d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07D1p3A0Fd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0846p9040d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0846p9010d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0846p9001d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0ACEp1221d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1435p0804d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1435p0326d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0586p3417d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0CDEp0023d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0CDEp0026d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0CDEp0027d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v083ApF522d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2019p5304d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04BBp093Fd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0409p0249d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0409p02B4d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v057Cp8401d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v057Cp8402d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1668p1200d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1B75p9170d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "7C910C24AAD5FBCEEB8437A");
