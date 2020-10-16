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
	{ 0xdbed948, "usbnet_disconnect" },
	{ 0x69962ad0, "usbnet_probe" },
	{ 0x73a8e741, "usbnet_get_stats64" },
	{ 0x33eed772, "usbnet_tx_timeout" },
	{ 0x248a8d3, "cdc_ncm_change_mtu" },
	{ 0x12bc1f9d, "eth_validate_addr" },
	{ 0xd52a670d, "eth_mac_addr" },
	{ 0xaba1aff2, "usbnet_start_xmit" },
	{ 0x8ea02442, "usbnet_stop" },
	{ 0xea7fc16b, "usbnet_open" },
	{ 0x183c8383, "usb_deregister" },
	{ 0x7a8b7baa, "usb_register_driver" },
	{ 0x94a0c3ad, "in6_dev_finish_destroy" },
	{ 0xf513bc98, "__vlan_find_dev_deep_rcu" },
	{ 0xc1e58a5f, "refcount_dec_and_test_checked" },
	{ 0x1ee8d6d4, "refcount_inc_checked" },
	{ 0xd542439, "__ipv6_addr_type" },
	{ 0xa05a9a11, "usbnet_skb_return" },
	{ 0x9d669763, "memcpy" },
	{ 0xeab3fd69, "skb_put" },
	{ 0x718ae3f2, "__netdev_alloc_skb" },
	{ 0xfb1eceb9, "cdc_ncm_rx_verify_ndp16" },
	{ 0xe6e04598, "ipv6_stub" },
	{ 0x8b3bfe7d, "cdc_ncm_rx_verify_nth16" },
	{ 0x316b0a97, "usb_match_id" },
	{ 0x6b60a022, "usb_set_interface" },
	{ 0x908e8a41, "usb_cdc_wdm_register" },
	{ 0xcd0da2cc, "cdc_ncm_bind_common" },
	{ 0xa771d6e3, "cdc_ncm_select_altsetting" },
	{ 0x7780bdf, "usbnet_suspend" },
	{ 0xb0a39481, "usbnet_resume" },
	{ 0x4a4e5b35, "cdc_ncm_unbind" },
	{ 0x3d0f3514, "usb_autopm_put_interface" },
	{ 0xdebe62e1, "usb_autopm_get_interface" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x8f3625fe, "_raw_spin_unlock_bh" },
	{ 0xa017572b, "cdc_ncm_fill_tx_frame" },
	{ 0x2b5ab97d, "_raw_spin_lock_bh" },
	{ 0x2404021a, "netdev_err" },
	{ 0x28f7fb79, "skb_pull" },
	{ 0xf9e956fe, "__dev_kfree_skb_any" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

MODULE_INFO(depends, "cdc_ncm,cdc-wdm");

MODULE_ALIAS("usb:v*p*d*dc*dsc*dp*ic02isc0Dip00in*");
MODULE_ALIAS("usb:v0BDBp*d*dc*dsc*dp*ic02isc0Eip00in*");
MODULE_ALIAS("usb:v12D1p*d*dc*dsc*dp*ic02isc0Eip00in*");
MODULE_ALIAS("usb:v03F0pA31Dd*dc*dsc*dp*ic02isc0Eip00in*");
MODULE_ALIAS("usb:v1BC7p1041d*dc*dsc*dp*ic02isc0Eip00in*");
MODULE_ALIAS("usb:v*p*d*dc*dsc*dp*ic02isc0Eip00in*");

MODULE_INFO(srcversion, "E78127BCABE41799AC5303D");
