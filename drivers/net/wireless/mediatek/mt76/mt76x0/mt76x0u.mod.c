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
	{ 0x2fae45ec, "mt76x02_remove_interface" },
	{ 0x1086832c, "__mt76_poll" },
	{ 0xe55d4df6, "mt76_sw_scan" },
	{ 0x684e5040, "mt76x02_conf_tx" },
	{ 0x9109d1ea, "mt76x02_ampdu_action" },
	{ 0x632a3910, "mt76u_stop_rx" },
	{ 0x27d2a183, "mt76x02u_exit_beacon_config" },
	{ 0x664eaf16, "mt76x02_add_interface" },
	{ 0xb1b939e, "kmemdup" },
	{ 0x59f8e4a5, "mt76u_vendor_request" },
	{ 0xbcf1cc92, "ieee80211_unregister_hw" },
	{ 0x6f390c39, "mt76x02u_init_beacon_config" },
	{ 0xf4de8164, "mt76u_stop_tx" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0xfa0daa1f, "mt76u_alloc_queues" },
	{ 0x29d9f26e, "cancel_delayed_work_sync" },
	{ 0x8e9f743b, "mt76x0_mac_start" },
	{ 0xf1654f89, "mt76x02_bss_info_changed" },
	{ 0x550b99c6, "mt76x0_init_hardware" },
	{ 0x8ec1f12c, "mt76_sta_state" },
	{ 0xe74e56d5, "mt76x02_set_rts_threshold" },
	{ 0x7ff5f0de, "mt76x02u_tx_prepare_skb" },
	{ 0xb875e759, "mt76x02u_init_mcu" },
	{ 0xf65110e8, "_dev_warn" },
	{ 0x939882de, "mt76_get_survey" },
	{ 0x4dd6312e, "mt76u_init" },
	{ 0xedebfaff, "mt76x02u_mcu_fw_send_data" },
	{ 0x3f9a0051, "mt76x0_mac_stop" },
	{ 0xacc9001b, "mt76x02_sta_add" },
	{ 0x6b9796da, "mt76x02_tx_status_data" },
	{ 0x183c8383, "usb_deregister" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0x3dd79246, "mt76x02_sta_remove" },
	{ 0xdcd8d898, "mt76x02_tx" },
	{ 0x1b6f9e67, "__mt76_poll_msec" },
	{ 0x8d958b9a, "mt76x02_sw_scan_complete" },
	{ 0x2f6160c1, "mt76_set_tim" },
	{ 0xc2ab0b7a, "mt76x0_phy_calibrate" },
	{ 0x9ca024b3, "mt76x02u_mcu_fw_reset" },
	{ 0x7fa795f, "_dev_err" },
	{ 0xff8ffd7b, "mt76x0_register_device" },
	{ 0x2618fff0, "mt76x0_config" },
	{ 0x9ccebac0, "ieee80211_queue_delayed_work" },
	{ 0x3def14e2, "mt76u_queues_deinit" },
	{ 0xf598f6e3, "mt76x02_queue_rx_skb" },
	{ 0xc24f6a70, "mt76x0_chip_onoff" },
	{ 0x6d345d03, "mt76x02_configure_filter" },
	{ 0x3eabc38c, "_dev_info" },
	{ 0xd6cf68f9, "usb_get_dev" },
	{ 0x12a38747, "usleep_range" },
	{ 0x4860cbce, "mt76x02_update_channel" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xaebeda32, "usb_reset_device" },
	{ 0x822bd109, "usb_put_dev" },
	{ 0x662d1da8, "mt76_alloc_device" },
	{ 0x20b027e8, "mt76x02_sta_rate_tbl_update" },
	{ 0xb29d9833, "mt76u_resume_rx" },
	{ 0xf2a2e55d, "mt76x02_sta_ps" },
	{ 0x37a0cba, "kfree" },
	{ 0x8e46ffba, "mt76_wake_tx_queue" },
	{ 0x75dbe33e, "mt76_get_txpower" },
	{ 0x7a8b7baa, "usb_register_driver" },
	{ 0x836b5cfc, "request_firmware" },
	{ 0x9daed64d, "mt76_release_buffered_frames" },
	{ 0x4675a0da, "ieee80211_free_hw" },
	{ 0x40a06035, "mt76x02_set_key" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0x598d8684, "firmware_request_nowarn" },
	{ 0x49ebacbd, "_clear_bit" },
	{ 0x8b6486ce, "release_firmware" },
	{ 0x8cfde41c, "mt76x02u_tx_complete_skb" },
};

MODULE_INFO(depends, "mt76x02-lib,mt76,mt76-usb,mt76x02-usb,mac80211,mt76x0-common");

MODULE_ALIAS("usb:v148Fp7610d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13B1p003Ed*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0E8Dp7610d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v7392pA711d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v7392pB711d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v148Fp761Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v148Fp760Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0B05p17D1d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0B05p17DBd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0DF6p0075d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2019pAB31d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2001p3D02d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0586p3425d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07B8p7610d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04BBp0951d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v057Cp8502d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v293Cp5702d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v20F4p806Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v7392pC711d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0DF6p0079d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2357p0123d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2357p0105d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0E8Dp7630d*dc*dsc*dp*icFFisc02ipFFin*");
MODULE_ALIAS("usb:v0E8Dp7650d*dc*dsc*dp*icFFisc02ipFFin*");

MODULE_INFO(srcversion, "13DBD37545D52ED76C7B512");
