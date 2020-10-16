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
	{ 0x2d3385d3, "system_wq" },
	{ 0x5652a3bc, "ath9k_hw_set_txq_props" },
	{ 0xebcf1133, "ieee80211_csa_finish" },
	{ 0x875f1c05, "ath9k_hw_init" },
	{ 0xf4610713, "kmalloc_caches" },
	{ 0x9ac61b88, "ath9k_cmn_get_channel" },
	{ 0x99b89208, "ath9k_hw_deinit" },
	{ 0x9a152689, "param_ops_int" },
	{ 0x5fdc2be3, "device_release_driver" },
	{ 0xf4b5757e, "ath9k_hw_set_gpio" },
	{ 0x29588f73, "ath9k_cmn_init_crypto" },
	{ 0x4201dfc3, "ieee80211_queue_work" },
	{ 0xdee5d3a7, "ath9k_cmn_process_rate" },
	{ 0x4f9216e7, "ieee80211_csa_is_complete" },
	{ 0xfe90c4a6, "_find_first_zero_bit_le" },
	{ 0x744263a5, "ath9k_hw_btcoex_enable" },
	{ 0x940cd5c5, "ath9k_hw_wait" },
	{ 0xa1d1787b, "ath9k_cmn_get_hw_crypto_keytype" },
	{ 0xc81c3fe8, "ath9k_hw_stopdmarecv" },
	{ 0xf7ece63e, "ath_key_delete" },
	{ 0x6dcb62b9, "ath9k_cmn_update_txpow" },
	{ 0x2b5ab97d, "_raw_spin_lock_bh" },
	{ 0x7ef39823, "ieee80211_hdrlen" },
	{ 0xf7802486, "__aeabi_uidivmod" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x5f1a79cd, "ieee80211_beacon_get_tim" },
	{ 0xc68c4e69, "ath9k_hw_gpio_get" },
	{ 0xd7098bcc, "ath_regd_init" },
	{ 0x4205ad24, "cancel_work_sync" },
	{ 0xf88db2a2, "usb_kill_urb" },
	{ 0xb1b939e, "kmemdup" },
	{ 0xbcf1cc92, "ieee80211_unregister_hw" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0xf9e956fe, "__dev_kfree_skb_any" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x29d9f26e, "cancel_delayed_work_sync" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0xe2e34f50, "ieee80211_iterate_active_interfaces_atomic" },
	{ 0x4779fa89, "ath9k_hw_setrxfilter" },
	{ 0x4328b82, "ath9k_hw_get_txq_props" },
	{ 0x3d7a14c4, "ath9k_hw_releasetxqueue" },
	{ 0xe77a1bab, "ath9k_hw_reset_tsf" },
	{ 0xa105224d, "wiphy_rfkill_start_polling" },
	{ 0x3acebe80, "ath9k_cmn_reload_chainmask" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x526c3a6c, "jiffies" },
	{ 0x31105fdb, "ath9k_cmn_init_channels_rates" },
	{ 0x65465214, "skb_trim" },
	{ 0x1c1e3962, "ieee80211_stop_queues" },
	{ 0xaf3c6135, "usb_unanchor_urb" },
	{ 0x754f348a, "complete_all" },
	{ 0x718ae3f2, "__netdev_alloc_skb" },
	{ 0x19ec7568, "ieee80211_tx_status" },
	{ 0xe4637331, "ath_printk" },
	{ 0x5bbe49f4, "__init_waitqueue_head" },
	{ 0xf076cba4, "ath9k_hw_setopmode" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0xb561ac5b, "wait_for_completion" },
	{ 0x96a7a5b9, "ath9k_hw_disable" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0x687c0737, "ath9k_hw_resettxqueue" },
	{ 0xf2d725e, "ath9k_hw_gettsf64" },
	{ 0x5f754e5a, "memset" },
	{ 0x39a12ca7, "_raw_spin_unlock_irqrestore" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0x183c8383, "usb_deregister" },
	{ 0x3be001a3, "ieee80211_alloc_hw_nm" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0x760a7600, "led_classdev_register_ext" },
	{ 0xfa761820, "ath9k_hw_set_sta_beacon_timers" },
	{ 0x9fd5bf09, "ath9k_hw_set_tsfadjust" },
	{ 0xd2c85421, "ath9k_cmn_beacon_config_ap" },
	{ 0x76806234, "ieee80211_wake_queues" },
	{ 0xfaef0ed, "__tasklet_schedule" },
	{ 0xb20a306b, "ath9k_hw_btcoex_disable" },
	{ 0x9add3de6, "ath9k_hw_getrxfilter" },
	{ 0xf6a3fd14, "ath9k_hw_ani_monitor" },
	{ 0x15793c37, "ath_is_mybeacon" },
	{ 0x569e1860, "ath9k_cmn_beacon_config_adhoc" },
	{ 0x78c6bf66, "usb_control_msg" },
	{ 0x2f59547e, "ath9k_cmn_process_rssi" },
	{ 0x84b183ae, "strncmp" },
	{ 0x4571aea8, "ath_is_world_regd" },
	{ 0xf68b0045, "skb_push" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0x9545af6d, "tasklet_init" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x8e865d3c, "arm_delay_ops" },
	{ 0x28f7fb79, "skb_pull" },
	{ 0x666e82da, "wiphy_rfkill_stop_polling" },
	{ 0xa6ce74c2, "request_firmware_nowait" },
	{ 0x7fa795f, "_dev_err" },
	{ 0xdea3d03, "ath9k_hw_write_associd" },
	{ 0x9ccebac0, "ieee80211_queue_delayed_work" },
	{ 0x2196324, "__aeabi_idiv" },
	{ 0x92280c6f, "ath_reg_notifier_apply" },
	{ 0x87ee4cd1, "wiphy_to_ieee80211_hw" },
	{ 0x82072614, "tasklet_kill" },
	{ 0x436b962e, "ath9k_hw_init_btcoex_hw" },
	{ 0x94b008be, "ieee80211_stop_tx_ba_cb_irqsafe" },
	{ 0xac6659eb, "skb_queue_tail" },
	{ 0x1978e27b, "ath9k_hw_beaconq_setup" },
	{ 0x3eabc38c, "_dev_info" },
	{ 0x305d8a65, "usb_submit_urb" },
	{ 0x7d46b50c, "ath9k_hw_name" },
	{ 0x1e7f24a2, "ath9k_hw_init_global_settings" },
	{ 0x22bf2ba1, "__alloc_skb" },
	{ 0xd6cf68f9, "usb_get_dev" },
	{ 0xf47de486, "usb_kill_anchored_urbs" },
	{ 0xd8e6bcf3, "ath9k_hw_settsf64" },
	{ 0x8f3625fe, "_raw_spin_unlock_bh" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x75b1fe01, "wiphy_rfkill_set_hw_state" },
	{ 0xf9a45858, "usb_bulk_msg" },
	{ 0x822bd109, "usb_put_dev" },
	{ 0x77f6f183, "kmalloc_order_trace" },
	{ 0xd28c75bb, "kfree_skb" },
	{ 0x6694e508, "ath9k_hw_beaconinit" },
	{ 0x8fb59dba, "ieee80211_find_sta" },
	{ 0xd4e9bedd, "ieee80211_get_buffered_bc" },
	{ 0xfde8a122, "usb_interrupt_msg" },
	{ 0x1aa0a229, "ath9k_hw_gpio_free" },
	{ 0x16b2f19, "ath9k_hw_btcoex_bt_stomp" },
	{ 0xa53ab210, "ath9k_hw_setrxabort" },
	{ 0xe8b9086, "ath9k_cmn_beacon_config_sta" },
	{ 0xebaa9dc8, "kmem_cache_alloc_trace" },
	{ 0xdb9ca3c5, "_raw_spin_lock" },
	{ 0x41c170e5, "ath_hw_setbssidmask" },
	{ 0x5f849a69, "_raw_spin_lock_irqsave" },
	{ 0xbec444b7, "ath9k_cmn_rx_skb_postprocess" },
	{ 0x505e37a9, "ath9k_hw_phy_disable" },
	{ 0x5e7bd1ea, "__ieee80211_get_radio_led_name" },
	{ 0x7cdfd095, "ieee80211_get_hdrlen_from_skb" },
	{ 0xb84933ac, "ath9k_hw_setpower" },
	{ 0x53756835, "__ieee80211_create_tpt_led_trigger" },
	{ 0xf99129b1, "ieee80211_register_hw" },
	{ 0x79727164, "led_classdev_unregister" },
	{ 0x2cfde9a2, "warn_slowpath_fmt" },
	{ 0x2023736f, "ath9k_hw_btcoex_set_weight" },
	{ 0x37a0cba, "kfree" },
	{ 0x7c816134, "regulatory_hint" },
	{ 0x9d669763, "memcpy" },
	{ 0xef729098, "ath9k_hw_setmcastfilter" },
	{ 0xff820607, "ieee80211_start_tx_ba_session" },
	{ 0x9ab1d91e, "ath9k_hw_gpio_request_out" },
	{ 0xe2f9d49a, "ath9k_hw_startpcureceive" },
	{ 0x962f96ac, "ath9k_hw_setuptxqueue" },
	{ 0x7a8b7baa, "usb_register_driver" },
	{ 0x836b5cfc, "request_firmware" },
	{ 0xe064bb9e, "ath9k_hw_reset" },
	{ 0x4675a0da, "ieee80211_free_hw" },
	{ 0xa647b396, "ath9k_cmn_rx_accept" },
	{ 0x4ac49f05, "skb_dequeue" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0xb2d48a2e, "queue_work_on" },
	{ 0xe6c12171, "complete" },
	{ 0xc358aaf8, "snprintf" },
	{ 0xca54fee, "_test_and_set_bit" },
	{ 0x99bb8806, "memmove" },
	{ 0x5d1c9c8e, "ath9k_hw_btcoex_init_3wire" },
	{ 0xe5a99be5, "ath_key_config" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x49ebacbd, "_clear_bit" },
	{ 0xeab3fd69, "skb_put" },
	{ 0xd83dc5e6, "wait_for_completion_timeout" },
	{ 0x8a331d2b, "param_ops_uint" },
	{ 0x25cc3710, "ath9k_hw_reset_calvalid" },
	{ 0x184a7893, "usb_free_urb" },
	{ 0x8b6486ce, "release_firmware" },
	{ 0x58858b29, "ieee80211_start_tx_ba_cb_irqsafe" },
	{ 0x7609cb29, "usb_anchor_urb" },
	{ 0x9f49ab55, "usb_alloc_urb" },
};

MODULE_INFO(depends, "mac80211,ath9k_hw,ath9k_common,ath,cfg80211");

MODULE_ALIAS("usb:v0CF3p9271d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0CF3p1006d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0846p9030d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07B8p9271d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07D1p3A10d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13D3p3327d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13D3p3328d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13D3p3346d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13D3p3348d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13D3p3349d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13D3p3350d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04CAp4605d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v040Dp3801d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0CF3pB003d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0CF3pB002d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v057Cp8403d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0471p209Ed*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1EDAp2315d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0CF3p7015d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1668p1200d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0CF3p7010d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0846p9018d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v083ApA704d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0411p017Fd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0411p0197d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04DAp3904d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0930p0A08d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0CF3p20FFd*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "6F222987E171B6EF173E2F0");
