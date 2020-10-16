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
	{ 0xf4610713, "kmalloc_caches" },
	{ 0x2d6fcc06, "__kmalloc" },
	{ 0xf9a482f9, "msleep" },
	{ 0x4cf17d9a, "hrtimer_cancel" },
	{ 0x2a3aa678, "_test_and_clear_bit" },
	{ 0x4205ad24, "cancel_work_sync" },
	{ 0xf88db2a2, "usb_kill_urb" },
	{ 0xcfec3e66, "rt2x00lib_resume" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0x526c3a6c, "jiffies" },
	{ 0xaf3c6135, "usb_unanchor_urb" },
	{ 0x5bbe49f4, "__init_waitqueue_head" },
	{ 0xf65110e8, "_dev_warn" },
	{ 0x5f754e5a, "memset" },
	{ 0x6e84387b, "rt2x00lib_dmastart" },
	{ 0x4ab53e27, "rt2x00queue_flush_queue" },
	{ 0x3be001a3, "ieee80211_alloc_hw_nm" },
	{ 0xc5850110, "printk" },
	{ 0x735f33b0, "mutex_is_locked" },
	{ 0x78c6bf66, "usb_control_msg" },
	{ 0xed4c85f0, "rt2x00queue_for_each_entry" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0x70d506b9, "rt2x00queue_start_queue" },
	{ 0x8e865d3c, "arm_delay_ops" },
	{ 0x7fa795f, "_dev_err" },
	{ 0xb78b8b38, "rt2x00lib_remove_dev" },
	{ 0x305d8a65, "usb_submit_urb" },
	{ 0xd6cf68f9, "usb_get_dev" },
	{ 0xf47de486, "usb_kill_anchored_urbs" },
	{ 0x1c562137, "rt2x00queue_get_entry" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xaebeda32, "usb_reset_device" },
	{ 0x9bc9810e, "rt2x00lib_rxdone" },
	{ 0x822bd109, "usb_put_dev" },
	{ 0xee43fd9b, "___ratelimit" },
	{ 0xebaa9dc8, "kmem_cache_alloc_trace" },
	{ 0x37a0cba, "kfree" },
	{ 0x9d669763, "memcpy" },
	{ 0x18ddfa86, "hrtimer_init" },
	{ 0x4675a0da, "ieee80211_free_hw" },
	{ 0xc2601e52, "rt2x00lib_txdone_noinfo" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0xb2d48a2e, "queue_work_on" },
	{ 0xca54fee, "_test_and_set_bit" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x49ebacbd, "_clear_bit" },
	{ 0xe544be36, "devm_kmalloc" },
	{ 0x697a5e5f, "rt2x00lib_dmadone" },
	{ 0x184a7893, "usb_free_urb" },
	{ 0x9f6fd0db, "rt2x00lib_probe_dev" },
	{ 0x607f301c, "rt2x00queue_stop_queue" },
	{ 0xe3316dc6, "rt2x00lib_suspend" },
	{ 0x7609cb29, "usb_anchor_urb" },
	{ 0xe7e1525d, "__skb_pad" },
	{ 0x9f49ab55, "usb_alloc_urb" },
};

MODULE_INFO(depends, "rt2x00lib,mac80211");


MODULE_INFO(srcversion, "8EEEEC015EE0B18A21ED01F");
