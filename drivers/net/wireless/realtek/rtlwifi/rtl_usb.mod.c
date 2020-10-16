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
	{ 0xf79f5696, "ieee80211_rx_napi" },
	{ 0xf4610713, "kmalloc_caches" },
	{ 0x4766ba81, "rtl_deinit_deferred_work" },
	{ 0x36810563, "rtl_deinit_core" },
	{ 0x4150b3e8, "usb_get_from_anchor" },
	{ 0x4205ad24, "cancel_work_sync" },
	{ 0xb1b939e, "kmemdup" },
	{ 0xbcf1cc92, "ieee80211_unregister_hw" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0xf9e956fe, "__dev_kfree_skb_any" },
	{ 0xaf3c6135, "usb_unanchor_urb" },
	{ 0x718ae3f2, "__netdev_alloc_skb" },
	{ 0x57e85e1c, "_rtl_dbg_trace" },
	{ 0x5bbe49f4, "__init_waitqueue_head" },
	{ 0xb561ac5b, "wait_for_completion" },
	{ 0x2d9ecd4c, "skb_queue_purge" },
	{ 0x5f754e5a, "memset" },
	{ 0x39a12ca7, "_raw_spin_unlock_irqrestore" },
	{ 0x3be001a3, "ieee80211_alloc_hw_nm" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0x3f9047d6, "rtl_init_core" },
	{ 0xfaef0ed, "__tasklet_schedule" },
	{ 0x3beae9d5, "rtl_action_proc" },
	{ 0x78c6bf66, "usb_control_msg" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0xf8ff6add, "rtl_lps_change_work_callback" },
	{ 0x117ead05, "rtl_init_rx_config" },
	{ 0x28f7fb79, "skb_pull" },
	{ 0xf412120a, "usb_free_coherent" },
	{ 0x42160169, "flush_workqueue" },
	{ 0x82072614, "tasklet_kill" },
	{ 0xac6659eb, "skb_queue_tail" },
	{ 0x305d8a65, "usb_submit_urb" },
	{ 0xd6cf68f9, "usb_get_dev" },
	{ 0xf47de486, "usb_kill_anchored_urbs" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x822bd109, "usb_put_dev" },
	{ 0x9d0a7e7d, "ieee80211_tx_status_irqsafe" },
	{ 0x479a2287, "rtl_ops" },
	{ 0xd28c75bb, "kfree_skb" },
	{ 0xebaa9dc8, "kmem_cache_alloc_trace" },
	{ 0x5f849a69, "_raw_spin_lock_irqsave" },
	{ 0xf99129b1, "ieee80211_register_hw" },
	{ 0x2cfde9a2, "warn_slowpath_fmt" },
	{ 0x37a0cba, "kfree" },
	{ 0x9d669763, "memcpy" },
	{ 0x4675a0da, "ieee80211_free_hw" },
	{ 0x4ac49f05, "skb_dequeue" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0xe6c12171, "complete" },
	{ 0xca54fee, "_test_and_set_bit" },
	{ 0xc28c6b00, "usb_alloc_coherent" },
	{ 0x49ebacbd, "_clear_bit" },
	{ 0xeab3fd69, "skb_put" },
	{ 0x184a7893, "usb_free_urb" },
	{ 0x9082b5c7, "rtl_beacon_statistic" },
	{ 0x7609cb29, "usb_anchor_urb" },
	{ 0x9f49ab55, "usb_alloc_urb" },
};

MODULE_INFO(depends, "mac80211,rtlwifi");


MODULE_INFO(srcversion, "D4E0FACB56D933F77934FAB");
