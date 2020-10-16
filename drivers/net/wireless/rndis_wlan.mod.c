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
	{ 0xe482a5a0, "param_ops_string" },
	{ 0x9a152689, "param_ops_int" },
	{ 0xb0a39481, "usbnet_resume" },
	{ 0x7780bdf, "usbnet_suspend" },
	{ 0xdbed948, "usbnet_disconnect" },
	{ 0x69962ad0, "usbnet_probe" },
	{ 0xdcab3311, "rndis_tx_fixup" },
	{ 0xd4161e51, "rndis_rx_fixup" },
	{ 0x54030e5d, "rndis_status" },
	{ 0x73a8e741, "usbnet_get_stats64" },
	{ 0x33eed772, "usbnet_tx_timeout" },
	{ 0x12bc1f9d, "eth_validate_addr" },
	{ 0xd52a670d, "eth_mac_addr" },
	{ 0xaba1aff2, "usbnet_start_xmit" },
	{ 0x8ea02442, "usbnet_stop" },
	{ 0xea7fc16b, "usbnet_open" },
	{ 0x183c8383, "usb_deregister" },
	{ 0x7a8b7baa, "usb_register_driver" },
	{ 0x64e7226d, "wiphy_register" },
	{ 0xf7b11047, "generic_rndis_bind" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xdf9208c0, "alloc_workqueue" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0x766c3475, "wiphy_new_nm" },
	{ 0x2404021a, "netdev_err" },
	{ 0x77265839, "usbnet_purge_paused_rxq" },
	{ 0x9c64fbd, "ieee80211_frequency_to_channel" },
	{ 0x9791d2e6, "ieee80211_channel_to_frequency" },
	{ 0x2cfde9a2, "warn_slowpath_fmt" },
	{ 0xf08c572a, "cfg80211_roamed" },
	{ 0x60fd9655, "cfg80211_ibss_joined" },
	{ 0xa35989df, "cfg80211_disconnected" },
	{ 0xa35dc8c8, "netif_carrier_off" },
	{ 0xa513fc17, "netif_carrier_on" },
	{ 0x8ec9ae5a, "usbnet_resume_rx" },
	{ 0x2a3aa678, "_test_and_clear_bit" },
	{ 0xef0f5b0a, "cfg80211_cqm_rssi_notify" },
	{ 0xebaa9dc8, "kmem_cache_alloc_trace" },
	{ 0xf4610713, "kmalloc_caches" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x44b28538, "cfg80211_put_bss" },
	{ 0x1f2bfc01, "ieee80211_get_channel" },
	{ 0x421d4dcf, "krealloc" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x97255bdf, "strlen" },
	{ 0xcf86cdac, "queue_delayed_work_on" },
	{ 0x1eb9516e, "round_jiffies_relative" },
	{ 0x8f3625fe, "_raw_spin_unlock_bh" },
	{ 0x2b5ab97d, "_raw_spin_lock_bh" },
	{ 0x91731203, "cfg80211_scan_done" },
	{ 0xc054b169, "wiphy_free" },
	{ 0xb11cef3a, "wiphy_unregister" },
	{ 0x310783fc, "rndis_unbind" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x42160169, "flush_workqueue" },
	{ 0x4205ad24, "cancel_work_sync" },
	{ 0x29d9f26e, "cancel_delayed_work_sync" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0xf9a482f9, "msleep" },
	{ 0x9c64d457, "netdev_warn" },
	{ 0x37a0cba, "kfree" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0xe3b762fc, "rndis_command" },
	{ 0x9d669763, "memcpy" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0x2d6fcc06, "__kmalloc" },
	{ 0xd87c7d64, "cfg80211_inform_bss_data" },
	{ 0x5f754e5a, "memset" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x5c32a221, "cfg80211_connect_done" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x11089ac7, "_ctype" },
	{ 0xffda1156, "cfg80211_pmksa_candidate_notify" },
	{ 0x1886eac2, "usbnet_pause_rx" },
	{ 0x81dab1d2, "cfg80211_michael_mic_failure" },
	{ 0x6339eaf6, "netdev_info" },
	{ 0xb2d48a2e, "queue_work_on" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

MODULE_INFO(depends, "rndis_host,cfg80211");

MODULE_ALIAS("usb:v0411p00BCd*dc*dsc*dp*ic02isc02ipFFin*");
MODULE_ALIAS("usb:v0BAFp011Bd*dc*dsc*dp*ic02isc02ipFFin*");
MODULE_ALIAS("usb:v050Dp011Bd*dc*dsc*dp*ic02isc02ipFFin*");
MODULE_ALIAS("usb:v1799p011Bd*dc*dsc*dp*ic02isc02ipFFin*");
MODULE_ALIAS("usb:v13B1p0014d*dc*dsc*dp*ic02isc02ipFFin*");
MODULE_ALIAS("usb:v13B1p0026d*dc*dsc*dp*ic02isc02ipFFin*");
MODULE_ALIAS("usb:v0B05p1717d*dc*dsc*dp*ic02isc02ipFFin*");
MODULE_ALIAS("usb:v0A5CpD11Bd*dc*dsc*dp*ic02isc02ipFFin*");
MODULE_ALIAS("usb:v1690p0715d*dc*dsc*dp*ic02isc02ipFFin*");
MODULE_ALIAS("usb:v13B1p000Ed*dc*dsc*dp*ic02isc02ipFFin*");
MODULE_ALIAS("usb:v0BAFp0111d*dc*dsc*dp*ic02isc02ipFFin*");
MODULE_ALIAS("usb:v0411p004Bd*dc*dsc*dp*ic02isc02ipFFin*");
MODULE_ALIAS("usb:v*p*d*dc*dsc*dp*ic02isc02ipFFin*");
MODULE_ALIAS("usb:v*p*d*dc*dsc*dp*icEFisc01ip01in*");

MODULE_INFO(srcversion, "AEC3E86F8E3A19A4D8F6728");
