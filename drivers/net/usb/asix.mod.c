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
	{ 0x6339eaf6, "netdev_info" },
	{ 0xf4610713, "kmalloc_caches" },
	{ 0xc71ca3f6, "mii_ethtool_gset" },
	{ 0x2d6fcc06, "__kmalloc" },
	{ 0xf9a482f9, "msleep" },
	{ 0x778d7f31, "phy_disconnect" },
	{ 0xb0a39481, "usbnet_resume" },
	{ 0x2df5a6c2, "phy_stop" },
	{ 0x69962ad0, "usbnet_probe" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0xd589bfaf, "usbnet_link_change" },
	{ 0xb2991ff1, "__mdiobus_register" },
	{ 0xa384aa47, "phy_ethtool_nway_reset" },
	{ 0xdbed948, "usbnet_disconnect" },
	{ 0xf7802486, "__aeabi_uidivmod" },
	{ 0xe27f0fe3, "generic_mii_ioctl" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0xf9e956fe, "__dev_kfree_skb_any" },
	{ 0x8ea02442, "usbnet_stop" },
	{ 0x470f1dcb, "usbnet_update_max_qlen" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0xf323e94f, "mdiobus_unregister" },
	{ 0x718ae3f2, "__netdev_alloc_skb" },
	{ 0x5ac7d9d, "phy_print_status" },
	{ 0x41c45227, "usbnet_nway_reset" },
	{ 0x63bd7bb5, "usbnet_set_link_ksettings" },
	{ 0x5f754e5a, "memset" },
	{ 0xeda130a5, "phy_start" },
	{ 0x65656d7, "mii_nway_restart" },
	{ 0x73a8e741, "usbnet_get_stats64" },
	{ 0x183c8383, "usb_deregister" },
	{ 0xdc422843, "eth_platform_get_mac_address" },
	{ 0xa069b403, "mdiobus_free" },
	{ 0x862905b4, "usbnet_get_endpoints" },
	{ 0xf58e3ba5, "usbnet_get_link_ksettings" },
	{ 0x73e20c1c, "strlcpy" },
	{ 0xd531322b, "usbnet_get_drvinfo" },
	{ 0xf68b0045, "skb_push" },
	{ 0xcc7056a0, "usbnet_read_cmd_nopm" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0x80c4c319, "crc32_le" },
	{ 0xaba1aff2, "usbnet_start_xmit" },
	{ 0x7780bdf, "usbnet_suspend" },
	{ 0x8e865d3c, "arm_delay_ops" },
	{ 0x8a10c004, "usbnet_get_link" },
	{ 0x9277b3f5, "usbnet_write_cmd_nopm" },
	{ 0x8932b86d, "phy_ethtool_get_link_ksettings" },
	{ 0x8a4d2069, "skb_copy_expand" },
	{ 0x678c6fa4, "usbnet_read_cmd" },
	{ 0x12a38747, "usleep_range" },
	{ 0x33eed772, "usbnet_tx_timeout" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xd28c75bb, "kfree_skb" },
	{ 0x9d225d7a, "genphy_resume" },
	{ 0xa05a9a11, "usbnet_skb_return" },
	{ 0xea7fc16b, "usbnet_open" },
	{ 0x8941c315, "mii_check_media" },
	{ 0x57677e48, "usbnet_get_msglevel" },
	{ 0x2404021a, "netdev_err" },
	{ 0xebaa9dc8, "kmem_cache_alloc_trace" },
	{ 0x9c64d457, "netdev_warn" },
	{ 0x1f655af4, "usbnet_unlink_rx_urbs" },
	{ 0x12bc1f9d, "eth_validate_addr" },
	{ 0xb59b03d2, "phy_ethtool_set_link_ksettings" },
	{ 0x37a0cba, "kfree" },
	{ 0x9d669763, "memcpy" },
	{ 0x8209bd8f, "usbnet_write_cmd_async" },
	{ 0xf60a1e87, "usbnet_change_mtu" },
	{ 0x11a9bd9d, "phy_connect" },
	{ 0x7a8b7baa, "usb_register_driver" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xb0a40d1d, "phy_mii_ioctl" },
	{ 0xc358aaf8, "snprintf" },
	{ 0x2223dd2f, "mii_link_ok" },
	{ 0x99bb8806, "memmove" },
	{ 0xeab3fd69, "skb_put" },
	{ 0xd52a670d, "eth_mac_addr" },
	{ 0x2ecd02aa, "usbnet_write_cmd" },
	{ 0x18d904b8, "usbnet_set_msglevel" },
	{ 0x8c10b727, "mdiobus_alloc_size" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("usb:v077Bp2226d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0846p1040d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2001p1A00d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0B95p1720d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07B8p420Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v08DDp90FFd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v08DDp0114d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0557p2009d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0411p003Dd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0411p006Ed*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v6189p182Dd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0DF6p0056d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0DF6p061Cd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07AAp0017d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1189p0893d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1631p6200d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04F1p3008d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v17EFp7203d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0B95p772Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0B95p7720d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0B95p1780d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0789p0160d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13B1p0018d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1557p7720d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07D1p3C05d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2001p3C05d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2001p1A02d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1737p0039d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04BBp0930d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v050Dp5055d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v05ACp1402d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0B95p772Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v14EApAB11d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0DB0pA877d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0B95p7E2Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0B95p172Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v066Bp20F9d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "8436DF6FDF608921B29656D");
