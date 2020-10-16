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
	{ 0x2d6fcc06, "__kmalloc" },
	{ 0xf9a482f9, "msleep" },
	{ 0xf67c077, "rt2x00lib_get_bssidx" },
	{ 0xfe90c4a6, "_find_first_zero_bit_le" },
	{ 0xf7802486, "__aeabi_uidivmod" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0xf9e956fe, "__dev_kfree_skb_any" },
	{ 0xfe41fb0b, "param_ops_bool" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0x556e4390, "clk_get_rate" },
	{ 0x526c3a6c, "jiffies" },
	{ 0xf65110e8, "_dev_warn" },
	{ 0x5f754e5a, "memset" },
	{ 0x7af37b7b, "rt2x00mac_conf_tx" },
	{ 0xf68b0045, "skb_push" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0x8e865d3c, "arm_delay_ops" },
	{ 0x28f7fb79, "skb_pull" },
	{ 0x7fa795f, "_dev_err" },
	{ 0x4009cb80, "rt2x00lib_txdone" },
	{ 0x94b008be, "ieee80211_stop_tx_ba_cb_irqsafe" },
	{ 0x3eabc38c, "_dev_info" },
	{ 0x12a38747, "usleep_range" },
	{ 0x1c562137, "rt2x00queue_get_entry" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xee43fd9b, "___ratelimit" },
	{ 0xae040ea5, "rt2x00lib_txdone_nomatch" },
	{ 0xa8ec7d34, "crc_ccitt" },
	{ 0x58456a32, "ieee80211_restart_hw" },
	{ 0x2cfde9a2, "warn_slowpath_fmt" },
	{ 0xc2601e52, "rt2x00lib_txdone_noinfo" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x49ebacbd, "_clear_bit" },
	{ 0xc261cb19, "rt2x00lib_set_mac_address" },
	{ 0x58858b29, "ieee80211_start_tx_ba_cb_irqsafe" },
	{ 0xe7e1525d, "__skb_pad" },
};

MODULE_INFO(depends, "rt2x00lib,mac80211,crc-ccitt");


MODULE_INFO(srcversion, "68D63FFE3F1D3C691BD02B8");
