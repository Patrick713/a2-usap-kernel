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
	{ 0x7780bdf, "usbnet_suspend" },
	{ 0xdbed948, "usbnet_disconnect" },
	{ 0x69962ad0, "usbnet_probe" },
	{ 0x73a8e741, "usbnet_get_stats64" },
	{ 0x33eed772, "usbnet_tx_timeout" },
	{ 0xf60a1e87, "usbnet_change_mtu" },
	{ 0x12bc1f9d, "eth_validate_addr" },
	{ 0xaba1aff2, "usbnet_start_xmit" },
	{ 0x8ea02442, "usbnet_stop" },
	{ 0xea7fc16b, "usbnet_open" },
	{ 0x63bd7bb5, "usbnet_set_link_ksettings" },
	{ 0xf58e3ba5, "usbnet_get_link_ksettings" },
	{ 0x8a10c004, "usbnet_get_link" },
	{ 0x41c45227, "usbnet_nway_reset" },
	{ 0x18d904b8, "usbnet_set_msglevel" },
	{ 0x57677e48, "usbnet_get_msglevel" },
	{ 0x183c8383, "usb_deregister" },
	{ 0x7a8b7baa, "usb_register_driver" },
	{ 0xb0a39481, "usbnet_resume" },
	{ 0xf65110e8, "_dev_warn" },
	{ 0x862905b4, "usbnet_get_endpoints" },
	{ 0x3eabc38c, "_dev_info" },
	{ 0x8209bd8f, "usbnet_write_cmd_async" },
	{ 0x80c4c319, "crc32_le" },
	{ 0xd531322b, "usbnet_get_drvinfo" },
	{ 0x9d669763, "memcpy" },
	{ 0xe27f0fe3, "generic_mii_ioctl" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0xf9a482f9, "msleep" },
	{ 0x678c6fa4, "usbnet_read_cmd" },
	{ 0x2ecd02aa, "usbnet_write_cmd" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xd589bfaf, "usbnet_link_change" },
	{ 0x7fa795f, "_dev_err" },
	{ 0x65465214, "skb_trim" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("usb:v9710p7832d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v9710p7830d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v9710p7730d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0DF6p0021d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "710D0221EB218926DD22EBB");
