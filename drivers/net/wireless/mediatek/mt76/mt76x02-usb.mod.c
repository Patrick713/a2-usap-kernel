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
	{ 0x7fa720a6, "hrtimer_active" },
	{ 0x2de62148, "mt76x02_mac_set_beacon" },
	{ 0x4cf17d9a, "hrtimer_cancel" },
	{ 0x4205ad24, "cancel_work_sync" },
	{ 0x59f8e4a5, "mt76u_vendor_request" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0x3d612547, "mt76_tx_complete_skb" },
	{ 0xe6d81d31, "hrtimer_start_range_ns" },
	{ 0x5f754e5a, "memset" },
	{ 0x30908cf0, "mt76x02_mac_write_txwi" },
	{ 0x6d38891f, "mt76x02_init_beacon_config" },
	{ 0xf68b0045, "skb_push" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0xdc3fcbc9, "__sw_hweight8" },
	{ 0x28f7fb79, "skb_pull" },
	{ 0x7fa795f, "_dev_err" },
	{ 0x22bf2ba1, "__alloc_skb" },
	{ 0x12a38747, "usleep_range" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xf9a45858, "usb_bulk_msg" },
	{ 0xcd91b127, "system_highpri_wq" },
	{ 0x7cdfd095, "ieee80211_get_hdrlen_from_skb" },
	{ 0x2cfde9a2, "warn_slowpath_fmt" },
	{ 0x42daeb39, "mt76u_single_wr" },
	{ 0x37a0cba, "kfree" },
	{ 0x9d669763, "memcpy" },
	{ 0x18ddfa86, "hrtimer_init" },
	{ 0xe11a87b5, "mt76_tx_status_skb_add" },
	{ 0x3ecda23b, "mt76_mcu_msg_alloc" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xb2d48a2e, "queue_work_on" },
	{ 0x1090454b, "mt76x02_resync_beacon_timer" },
	{ 0x99bb8806, "memmove" },
	{ 0xa46a0f7a, "consume_skb" },
	{ 0xeab3fd69, "skb_put" },
	{ 0xc46c905f, "mt76x02_remove_hdr_pad" },
	{ 0xed044e33, "mt76x02_enqueue_buffered_bc" },
	{ 0xa8d36c24, "ieee80211_iterate_interfaces" },
	{ 0xb7d50335, "mt76x02_update_beacon_iter" },
	{ 0xe7e1525d, "__skb_pad" },
};

MODULE_INFO(depends, "mt76x02-lib,mt76-usb,mt76,cfg80211,mac80211");


MODULE_INFO(srcversion, "4C7C164B9C2DC3AC3011134");
