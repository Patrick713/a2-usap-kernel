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
	{ 0x6d0a78c4, "ethtool_op_get_link" },
	{ 0x41c45227, "usbnet_nway_reset" },
	{ 0x18d904b8, "usbnet_set_msglevel" },
	{ 0x57677e48, "usbnet_get_msglevel" },
	{ 0x73a8e741, "usbnet_get_stats64" },
	{ 0x33eed772, "usbnet_tx_timeout" },
	{ 0x12bc1f9d, "eth_validate_addr" },
	{ 0xaba1aff2, "usbnet_start_xmit" },
	{ 0x8ea02442, "usbnet_stop" },
	{ 0xea7fc16b, "usbnet_open" },
	{ 0x183c8383, "usb_deregister" },
	{ 0x7a8b7baa, "usb_register_driver" },
	{ 0xa513fc17, "netif_carrier_on" },
	{ 0xc71ca3f6, "mii_ethtool_gset" },
	{ 0x5f754e5a, "memset" },
	{ 0x862905b4, "usbnet_get_endpoints" },
	{ 0x65656d7, "mii_nway_restart" },
	{ 0x7780bdf, "usbnet_suspend" },
	{ 0x80c4c319, "crc32_le" },
	{ 0x8209bd8f, "usbnet_write_cmd_async" },
	{ 0x9d669763, "memcpy" },
	{ 0x37a0cba, "kfree" },
	{ 0x2d6fcc06, "__kmalloc" },
	{ 0x6339eaf6, "netdev_info" },
	{ 0xb0a39481, "usbnet_resume" },
	{ 0xf9a482f9, "msleep" },
	{ 0x8e865d3c, "arm_delay_ops" },
	{ 0xd589bfaf, "usbnet_link_change" },
	{ 0x470f1dcb, "usbnet_update_max_qlen" },
	{ 0x526c3a6c, "jiffies" },
	{ 0x9277b3f5, "usbnet_write_cmd_nopm" },
	{ 0x2ecd02aa, "usbnet_write_cmd" },
	{ 0x9c64d457, "netdev_warn" },
	{ 0xcc7056a0, "usbnet_read_cmd_nopm" },
	{ 0x678c6fa4, "usbnet_read_cmd" },
	{ 0xe27f0fe3, "generic_mii_ioctl" },
	{ 0xa916a0ba, "mii_ethtool_get_link_ksettings" },
	{ 0x2a49ceab, "mii_ethtool_set_link_ksettings" },
	{ 0xa05a9a11, "usbnet_skb_return" },
	{ 0x28f7fb79, "skb_pull" },
	{ 0x36f6c5e6, "skb_clone" },
	{ 0x65465214, "skb_trim" },
	{ 0xf9e956fe, "__dev_kfree_skb_any" },
	{ 0xf68b0045, "skb_push" },
	{ 0xa748a031, "pskb_expand_head" },
	{ 0xf7802486, "__aeabi_uidivmod" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("usb:v0B95p1790d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0B95p178Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04B4p3610d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2001p4A00d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0DF6p0072d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04E8pA100d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v17EFp304Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v050Dp0128d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "E427404EFF51596EF774889");
