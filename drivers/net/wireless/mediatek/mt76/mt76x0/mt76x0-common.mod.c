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
	{ 0xf9a482f9, "msleep" },
	{ 0x5bd84fd5, "mt76x02_rates" },
	{ 0xd8e78c4c, "mt76_get_min_avg_rssi" },
	{ 0x35d2834d, "mt76x02_limit_rate_power" },
	{ 0x3439a94d, "mt76x02_phy_set_txdac" },
	{ 0x1086832c, "__mt76_poll" },
	{ 0x12ca7a4, "mt76x02_mac_wcid_setup" },
	{ 0xd4023ec, "mt76x02_get_max_rate_power" },
	{ 0x22939532, "mt76x02_phy_set_txpower" },
	{ 0x37597b17, "mt76x02_mcu_function_select" },
	{ 0x456ba413, "mt76x02_mcu_calibrate" },
	{ 0xe30194c9, "mt76x02_eeprom_copy" },
	{ 0xd7e42385, "mt76x02_config_mac_addr_list" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xe5d504de, "mt76x02_dfs_init_params" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xb79c86de, "mt76_txq_schedule_all" },
	{ 0x29d9f26e, "cancel_delayed_work_sync" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0x627a7b5f, "mt76x02_init_agc_gain" },
	{ 0x1c1e3962, "ieee80211_stop_queues" },
	{ 0xf65110e8, "_dev_warn" },
	{ 0x5f754e5a, "memset" },
	{ 0xbee12d41, "mt76x02_init_debugfs" },
	{ 0x205c2ea5, "mt76x02_get_lna_gain" },
	{ 0x91317a1b, "mt76x02_edcca_init" },
	{ 0x55c22237, "mt76x02_phy_set_rxpath" },
	{ 0xff39b92f, "mt76x02_eeprom_parse_hw_cap" },
	{ 0x76806234, "ieee80211_wake_queues" },
	{ 0x1b6f9e67, "__mt76_poll_msec" },
	{ 0x89d78a2b, "mt76x02_init_device" },
	{ 0xcf5fd251, "mt76_set_channel" },
	{ 0x71b82a28, "mt76x02_phy_set_band" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0x45c682a0, "mt76x02_phy_set_bw" },
	{ 0x7b5c9643, "mt76_register_device" },
	{ 0x8e865d3c, "arm_delay_ops" },
	{ 0x2ddb7057, "mt76x02_mac_setaddr" },
	{ 0x7fa795f, "_dev_err" },
	{ 0x8fe81bcd, "mt76_eeprom_init" },
	{ 0x9ccebac0, "ieee80211_queue_delayed_work" },
	{ 0x462ce68, "mt76x02_add_rate_power_offset" },
	{ 0x152eaaf0, "mt76x02_get_rx_gain" },
	{ 0x3eabc38c, "_dev_info" },
	{ 0x12a38747, "usleep_range" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x6a2c6c8e, "mt76x02_get_efuse_data" },
	{ 0xbe7fb71e, "mt76x02_ext_pa_enabled" },
	{ 0x56635a0a, "mt76x02_mac_shared_key_setup" },
	{ 0x2cfde9a2, "warn_slowpath_fmt" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x765a5377, "mt76x02_phy_dfs_adjust_agc" },
	{ 0x3b73dbd1, "mt76x02_phy_adjust_vga_gain" },
};

MODULE_INFO(depends, "mt76x02-lib,mt76,mac80211");


MODULE_INFO(srcversion, "D04847EA286BBB0116F886A");
