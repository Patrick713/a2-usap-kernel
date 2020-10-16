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
	{ 0xf9a482f9, "msleep" },
	{ 0x5bd84fd5, "mt76x02_rates" },
	{ 0x3439a94d, "mt76x02_phy_set_txdac" },
	{ 0xb5c7886d, "mt76x2_phy_set_txpower" },
	{ 0xfb6aaa65, "mt76x2_phy_set_txpower_regs" },
	{ 0x406bf315, "mt76x2_read_rx_gain" },
	{ 0x1086832c, "__mt76_poll" },
	{ 0x12ca7a4, "mt76x02_mac_wcid_setup" },
	{ 0xe55d4df6, "mt76_sw_scan" },
	{ 0x37597b17, "mt76x02_mcu_function_select" },
	{ 0x684e5040, "mt76x02_conf_tx" },
	{ 0x456ba413, "mt76x02_mcu_calibrate" },
	{ 0x9109d1ea, "mt76x02_ampdu_action" },
	{ 0x632a3910, "mt76u_stop_rx" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x664eaf16, "mt76x02_add_interface" },
	{ 0x59f8e4a5, "mt76u_vendor_request" },
	{ 0xbcf1cc92, "ieee80211_unregister_hw" },
	{ 0x6f390c39, "mt76x02u_init_beacon_config" },
	{ 0xf4de8164, "mt76u_stop_tx" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xfa0daa1f, "mt76u_alloc_queues" },
	{ 0xb79c86de, "mt76_txq_schedule_all" },
	{ 0x29d9f26e, "cancel_delayed_work_sync" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0x60d12b71, "mt76x2_phy_update_channel_gain" },
	{ 0x627a7b5f, "mt76x02_init_agc_gain" },
	{ 0xf1654f89, "mt76x02_bss_info_changed" },
	{ 0x1c1e3962, "ieee80211_stop_queues" },
	{ 0xbbb79c5, "mt76x2_phy_tssi_compensate" },
	{ 0x8ec1f12c, "mt76_sta_state" },
	{ 0xb1fd751d, "mt76x2_mcu_init_gain" },
	{ 0x7ff5f0de, "mt76x02u_tx_prepare_skb" },
	{ 0xb875e759, "mt76x02u_init_mcu" },
	{ 0xf65110e8, "_dev_warn" },
	{ 0xbee12d41, "mt76x02_init_debugfs" },
	{ 0x939882de, "mt76_get_survey" },
	{ 0x4dd6312e, "mt76u_init" },
	{ 0xedebfaff, "mt76x02u_mcu_fw_send_data" },
	{ 0x47c14e1, "mt76x2_init_txpower" },
	{ 0xabe57830, "mt76x2_mcu_load_cr" },
	{ 0xacc9001b, "mt76x02_sta_add" },
	{ 0x6b9796da, "mt76x02_tx_status_data" },
	{ 0x183c8383, "usb_deregister" },
	{ 0x91317a1b, "mt76x02_edcca_init" },
	{ 0x55c22237, "mt76x02_phy_set_rxpath" },
	{ 0x3dd79246, "mt76x02_sta_remove" },
	{ 0xff39b92f, "mt76x02_eeprom_parse_hw_cap" },
	{ 0x76806234, "ieee80211_wake_queues" },
	{ 0xdcd8d898, "mt76x02_tx" },
	{ 0x1b6f9e67, "__mt76_poll_msec" },
	{ 0x89d78a2b, "mt76x02_init_device" },
	{ 0xcf5fd251, "mt76_set_channel" },
	{ 0x71b82a28, "mt76x02_phy_set_band" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0x45c682a0, "mt76x02_phy_set_bw" },
	{ 0x8d958b9a, "mt76x02_sw_scan_complete" },
	{ 0x2f6160c1, "mt76_set_tim" },
	{ 0x7b5c9643, "mt76_register_device" },
	{ 0x8e865d3c, "arm_delay_ops" },
	{ 0x2ddb7057, "mt76x02_mac_setaddr" },
	{ 0x9ca024b3, "mt76x02u_mcu_fw_reset" },
	{ 0x7fa795f, "_dev_err" },
	{ 0x9ccebac0, "ieee80211_queue_delayed_work" },
	{ 0x3def14e2, "mt76u_queues_deinit" },
	{ 0xf598f6e3, "mt76x02_queue_rx_skb" },
	{ 0x6d345d03, "mt76x02_configure_filter" },
	{ 0x3eabc38c, "_dev_info" },
	{ 0xd6cf68f9, "usb_get_dev" },
	{ 0x12a38747, "usleep_range" },
	{ 0x9e587c7e, "mt76x2_configure_tx_delay" },
	{ 0x4860cbce, "mt76x02_update_channel" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xaebeda32, "usb_reset_device" },
	{ 0x822bd109, "usb_put_dev" },
	{ 0xce8f03b5, "mt76x2_mac_stop" },
	{ 0xbe7fb71e, "mt76x02_ext_pa_enabled" },
	{ 0x56635a0a, "mt76x02_mac_shared_key_setup" },
	{ 0x662d1da8, "mt76_alloc_device" },
	{ 0x20b027e8, "mt76x02_sta_rate_tbl_update" },
	{ 0xb29d9833, "mt76u_resume_rx" },
	{ 0xf2a2e55d, "mt76x02_sta_ps" },
	{ 0xb0f6310, "mt76x2_apply_gain_adj" },
	{ 0x2cfde9a2, "warn_slowpath_fmt" },
	{ 0x8e46ffba, "mt76_wake_tx_queue" },
	{ 0xce27fee6, "mt76x02_mcu_set_radio_state" },
	{ 0xe1893437, "mt76x2_mcu_set_channel" },
	{ 0x84b9c9d6, "mt76x2_reset_wlan" },
	{ 0x9294e6a6, "mt76_write_mac_initvals" },
	{ 0x75dbe33e, "mt76_get_txpower" },
	{ 0x7a8b7baa, "usb_register_driver" },
	{ 0x836b5cfc, "request_firmware" },
	{ 0x9daed64d, "mt76_release_buffered_frames" },
	{ 0x4675a0da, "ieee80211_free_hw" },
	{ 0x40a06035, "mt76x02_set_key" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0x24dffc00, "mt76x02_set_ethtool_fwver" },
	{ 0x49ebacbd, "_clear_bit" },
	{ 0xe544be36, "devm_kmalloc" },
	{ 0x8b6486ce, "release_firmware" },
	{ 0x8cfde41c, "mt76x02u_tx_complete_skb" },
};

MODULE_INFO(depends, "mt76x02-lib,mt76x2-common,mt76,mt76-usb,mac80211,mt76x02-usb");

MODULE_ALIAS("usb:v0B05p1833d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0B05p17EBd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0B05p180Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0E8Dp7612d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v057Cp8503d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v7392pB711d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0846p9053d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v045Ep02E6d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v045Ep02FEd*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "E89066E16A0E2CA46727D80");
