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
	{ 0xb0a39481, "usbnet_resume" },
	{ 0x7780bdf, "usbnet_suspend" },
	{ 0xdbed948, "usbnet_disconnect" },
	{ 0x69962ad0, "usbnet_probe" },
	{ 0x73a8e741, "usbnet_get_stats64" },
	{ 0x33eed772, "usbnet_tx_timeout" },
	{ 0xf60a1e87, "usbnet_change_mtu" },
	{ 0x12bc1f9d, "eth_validate_addr" },
	{ 0xd52a670d, "eth_mac_addr" },
	{ 0xaba1aff2, "usbnet_start_xmit" },
	{ 0x8ea02442, "usbnet_stop" },
	{ 0xea7fc16b, "usbnet_open" },
	{ 0x183c8383, "usb_deregister" },
	{ 0x7a8b7baa, "usb_register_driver" },
	{ 0x2404021a, "netdev_err" },
	{ 0x3bdc1db7, "__pskb_pull_tail" },
	{ 0x65465214, "skb_trim" },
	{ 0x862905b4, "usbnet_get_endpoints" },
	{ 0x1b84a048, "usbnet_get_ethernet_addr" },
	{ 0x6339eaf6, "netdev_info" },
	{ 0x8209bd8f, "usbnet_write_cmd_async" },
	{ 0x5f754e5a, "memset" },
	{ 0x99bb8806, "memmove" },
	{ 0xf9e956fe, "__dev_kfree_skb_any" },
	{ 0x8a4d2069, "skb_copy_expand" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0xf7802486, "__aeabi_uidivmod" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("usb:v09E1p5121d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "7BEC482D241016E986F95D2");
