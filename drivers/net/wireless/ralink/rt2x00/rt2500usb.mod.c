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
	{ 0xfe41fb0b, "param_ops_bool" },
	{ 0xd8a76f3a, "rt2x00usb_resume" },
	{ 0x3fe9cccb, "rt2x00usb_suspend" },
	{ 0x6a75b280, "rt2x00usb_disconnect" },
	{ 0xf0ab38d9, "rt2x00mac_tx_frames_pending" },
	{ 0x1ee4e619, "rt2x00mac_get_ringparam" },
	{ 0x9a0347e, "rt2x00mac_get_antenna" },
	{ 0x6a904148, "rt2x00mac_set_antenna" },
	{ 0x14a13e38, "rt2x00mac_flush" },
	{ 0x5601b5fd, "rt2x00mac_rfkill_poll" },
	{ 0x7af37b7b, "rt2x00mac_conf_tx" },
	{ 0xb3330637, "rt2x00mac_get_stats" },
	{ 0xc74fc7fe, "rt2x00mac_sw_scan_complete" },
	{ 0x6ab3fd7f, "rt2x00mac_sw_scan_start" },
	{ 0xbbeb82c, "rt2x00mac_set_key" },
	{ 0x58dd356b, "rt2x00mac_set_tim" },
	{ 0xe6299831, "rt2x00mac_configure_filter" },
	{ 0x66608e41, "rt2x00mac_bss_info_changed" },
	{ 0x31f13ec0, "rt2x00mac_config" },
	{ 0x65740988, "rt2x00mac_remove_interface" },
	{ 0x6aea21f, "rt2x00mac_add_interface" },
	{ 0x8429c6e8, "rt2x00mac_stop" },
	{ 0x324e7b3, "rt2x00mac_start" },
	{ 0x3b90373d, "rt2x00mac_tx" },
	{ 0x884353b8, "rt2x00usb_flush_queue" },
	{ 0x5f5fd8c0, "rt2x00usb_kick_queue" },
	{ 0x2bbabb4f, "rt2x00usb_watchdog" },
	{ 0x3de170dd, "rt2x00usb_clear_entry" },
	{ 0x2de5b254, "rt2x00usb_uninitialize" },
	{ 0x6a5a6b96, "rt2x00usb_initialize" },
	{ 0x183c8383, "usb_deregister" },
	{ 0x7a8b7baa, "usb_register_driver" },
	{ 0x2d6fcc06, "__kmalloc" },
	{ 0x3eabc38c, "_dev_info" },
	{ 0xc261cb19, "rt2x00lib_set_mac_address" },
	{ 0xf9a482f9, "msleep" },
	{ 0x9bd91f39, "rt2x00usb_vendor_request" },
	{ 0x76c6a1d3, "rt2x00usb_disable_radio" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0x7fa795f, "_dev_err" },
	{ 0xee43fd9b, "___ratelimit" },
	{ 0xc8c8cbec, "rt2x00usb_vendor_req_buff_lock" },
	{ 0x8e865d3c, "arm_delay_ops" },
	{ 0xa46a0f7a, "consume_skb" },
	{ 0x305d8a65, "usb_submit_urb" },
	{ 0xf68b0045, "skb_push" },
	{ 0x65465214, "skb_trim" },
	{ 0x9d669763, "memcpy" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xbd4d64e3, "rt2x00usb_vendor_request_buff" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x9a7059e3, "rt2x00usb_probe" },
	{ 0xff178f6, "__aeabi_idivmod" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

MODULE_INFO(depends, "rt2x00usb,rt2x00lib");

MODULE_ALIAS("usb:v0B05p1706d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0B05p1707d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v050Dp7050d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v050Dp7051d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13B1p000Dd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13B1p0011d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13B1p001Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v14B2p3C02d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2001p3C00d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1044p8001d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1044p8007d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v06F8pE000d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0411p005Ed*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0411p0066d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0411p0067d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0411p008Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0411p0097d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0DB0p6861d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0DB0p6865d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0DB0p6869d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v148Fp1706d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v148Fp2570d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v148Fp9020d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v079Bp004Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0681p3C06d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0707pEE13d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v114Bp0110d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0769p11F3d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0EB0p9020d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0F88p3012d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v5A57p0260d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "0C9B29288CE51AC926D77AF");
