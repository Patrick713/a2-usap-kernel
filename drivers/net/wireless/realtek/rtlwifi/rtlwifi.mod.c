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
	{ 0x2d3385d3, "system_wq" },
	{ 0xcb3f746c, "ieee80211_rx_irqsafe" },
	{ 0xf4610713, "kmalloc_caches" },
	{ 0x2d6fcc06, "__kmalloc" },
	{ 0xf9a482f9, "msleep" },
	{ 0x2035dc7c, "cfg80211_unlink_bss" },
	{ 0x93b18eee, "debugfs_create_dir" },
	{ 0xcd34ce55, "single_open" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0xf7c048ae, "single_release" },
	{ 0x5d7776e5, "seq_puts" },
	{ 0x2b5ab97d, "_raw_spin_lock_bh" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x5f1a79cd, "ieee80211_beacon_get_tim" },
	{ 0xc8275115, "seq_printf" },
	{ 0x515cb1ca, "ieee80211_resume_disconnect" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0xf9e956fe, "__dev_kfree_skb_any" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xae353d77, "arm_copy_from_user" },
	{ 0x29d9f26e, "cancel_delayed_work_sync" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0x1448b00d, "freq_reg_info" },
	{ 0x7c20652d, "debugfs_create_file" },
	{ 0xa105224d, "wiphy_rfkill_start_polling" },
	{ 0x35edc130, "debugfs_remove_recursive" },
	{ 0x953e1b9e, "ktime_get_real_seconds" },
	{ 0xdc0adda3, "seq_read" },
	{ 0x526c3a6c, "jiffies" },
	{ 0xccf042f0, "skb_unlink" },
	{ 0x718ae3f2, "__netdev_alloc_skb" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0xf65110e8, "_dev_warn" },
	{ 0x5f754e5a, "memset" },
	{ 0xa15d0131, "cancel_delayed_work" },
	{ 0x39a12ca7, "_raw_spin_unlock_irqrestore" },
	{ 0x8c9c5f5c, "cfg80211_get_bss" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0x71c90087, "memcmp" },
	{ 0x49dcbdfc, "ieee80211_rate_control_register" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0xea9db780, "wiphy_apply_custom_regulatory" },
	{ 0x10bc106c, "__dev_kfree_skb_irq" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x8e865d3c, "arm_delay_ops" },
	{ 0x81febe09, "simple_open" },
	{ 0x666e82da, "wiphy_rfkill_stop_polling" },
	{ 0x87ee4cd1, "wiphy_to_ieee80211_hw" },
	{ 0x82072614, "tasklet_kill" },
	{ 0x94b008be, "ieee80211_stop_tx_ba_cb_irqsafe" },
	{ 0x44b28538, "cfg80211_put_bss" },
	{ 0x12a38747, "usleep_range" },
	{ 0x8f3625fe, "_raw_spin_unlock_bh" },
	{ 0xcf86cdac, "queue_delayed_work_on" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x75b1fe01, "wiphy_rfkill_set_hw_state" },
	{ 0x9d0a7e7d, "ieee80211_tx_status_irqsafe" },
	{ 0xd28c75bb, "kfree_skb" },
	{ 0x8fb59dba, "ieee80211_find_sta" },
	{ 0xebaa9dc8, "kmem_cache_alloc_trace" },
	{ 0xdb9ca3c5, "_raw_spin_lock" },
	{ 0x5f849a69, "_raw_spin_lock_irqsave" },
	{ 0x7cdfd095, "ieee80211_get_hdrlen_from_skb" },
	{ 0x8b4dc43f, "ieee80211_rate_control_unregister" },
	{ 0x2cfde9a2, "warn_slowpath_fmt" },
	{ 0x167c65ac, "seq_lseek" },
	{ 0x37a0cba, "kfree" },
	{ 0x9d669763, "memcpy" },
	{ 0xff820607, "ieee80211_start_tx_ba_session" },
	{ 0x836b5cfc, "request_firmware" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xb2d48a2e, "queue_work_on" },
	{ 0xe6c12171, "complete" },
	{ 0xc358aaf8, "snprintf" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0xeab3fd69, "skb_put" },
	{ 0xdf9208c0, "alloc_workqueue" },
	{ 0x8b6486ce, "release_firmware" },
	{ 0x1b807eb6, "ieee80211_connection_loss" },
	{ 0x58858b29, "ieee80211_start_tx_ba_cb_irqsafe" },
};

MODULE_INFO(depends, "mac80211,cfg80211");


MODULE_INFO(srcversion, "5562EAB9A1E72430FCE59FE");
