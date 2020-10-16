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
	{ 0xd8e78c4c, "mt76_get_min_avg_rssi" },
	{ 0x35d2834d, "mt76x02_limit_rate_power" },
	{ 0xd4023ec, "mt76x02_get_max_rate_power" },
	{ 0x22939532, "mt76x02_phy_set_txpower" },
	{ 0x456ba413, "mt76x02_mcu_calibrate" },
	{ 0xe30194c9, "mt76x02_eeprom_copy" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0x5f754e5a, "memset" },
	{ 0x205c2ea5, "mt76x02_get_lna_gain" },
	{ 0xfd9a6434, "mt76_eeprom_override" },
	{ 0xff39b92f, "mt76x02_eeprom_parse_hw_cap" },
	{ 0x8e865d3c, "arm_delay_ops" },
	{ 0x7fa795f, "_dev_err" },
	{ 0x8fe81bcd, "mt76_eeprom_init" },
	{ 0x462ce68, "mt76x02_add_rate_power_offset" },
	{ 0x152eaaf0, "mt76x02_get_rx_gain" },
	{ 0x12a38747, "usleep_range" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x6a2c6c8e, "mt76x02_get_efuse_data" },
	{ 0xbe7fb71e, "mt76x02_ext_pa_enabled" },
	{ 0x9d669763, "memcpy" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xe544be36, "devm_kmalloc" },
	{ 0x765a5377, "mt76x02_phy_dfs_adjust_agc" },
	{ 0x3b73dbd1, "mt76x02_phy_adjust_vga_gain" },
};

MODULE_INFO(depends, "mt76,mt76x02-lib");


MODULE_INFO(srcversion, "91924EBDDD2AC31A6CA8189");
