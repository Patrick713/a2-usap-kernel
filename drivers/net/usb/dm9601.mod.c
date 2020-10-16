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
	{ 0x63bd7bb5, "usbnet_set_link_ksettings" },
	{ 0xf58e3ba5, "usbnet_get_link_ksettings" },
	{ 0x41c45227, "usbnet_nway_reset" },
	{ 0x18d904b8, "usbnet_set_msglevel" },
	{ 0x57677e48, "usbnet_get_msglevel" },
	{ 0x73a8e741, "usbnet_get_stats64" },
	{ 0x33eed772, "usbnet_tx_timeout" },
	{ 0xf60a1e87, "usbnet_change_mtu" },
	{ 0x12bc1f9d, "eth_validate_addr" },
	{ 0xaba1aff2, "usbnet_start_xmit" },
	{ 0x8ea02442, "usbnet_stop" },
	{ 0xea7fc16b, "usbnet_open" },
	{ 0x183c8383, "usb_deregister" },
	{ 0x7a8b7baa, "usb_register_driver" },
	{ 0x65656d7, "mii_nway_restart" },
	{ 0xc5850110, "printk" },
	{ 0x862905b4, "usbnet_get_endpoints" },
	{ 0xd589bfaf, "usbnet_link_change" },
	{ 0x80c4c319, "crc32_le" },
	{ 0x2404021a, "netdev_err" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0x8e865d3c, "arm_delay_ops" },
	{ 0x2ecd02aa, "usbnet_write_cmd" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0x9d669763, "memcpy" },
	{ 0x8209bd8f, "usbnet_write_cmd_async" },
	{ 0x678c6fa4, "usbnet_read_cmd" },
	{ 0xe27f0fe3, "generic_mii_ioctl" },
	{ 0xd531322b, "usbnet_get_drvinfo" },
	{ 0x2223dd2f, "mii_link_ok" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xc71ca3f6, "mii_ethtool_gset" },
	{ 0x8941c315, "mii_check_media" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x7fa795f, "_dev_err" },
	{ 0x65465214, "skb_trim" },
	{ 0x28f7fb79, "skb_pull" },
	{ 0x5f754e5a, "memset" },
	{ 0xf9e956fe, "__dev_kfree_skb_any" },
	{ 0x8a4d2069, "skb_copy_expand" },
	{ 0xf7802486, "__aeabi_uidivmod" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("usb:v07AAp9601d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0A46p9601d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0A46p6688d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0A46p0268d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0A46p8515d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0A47p9601d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0FE6p8101d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0FE6p9700d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0A46p9000d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0A46p9620d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0A46p9621d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0A46p9622d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0A46p0269d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0A46p1269d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0586p3427d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "88F880724FC373218031BA7");
