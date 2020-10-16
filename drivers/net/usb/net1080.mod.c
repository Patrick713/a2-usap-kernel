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
	{ 0x183c8383, "usb_deregister" },
	{ 0x7a8b7baa, "usb_register_driver" },
	{ 0x65465214, "skb_trim" },
	{ 0x28f7fb79, "skb_pull" },
	{ 0x8209bd8f, "usbnet_write_cmd_async" },
	{ 0x862905b4, "usbnet_get_endpoints" },
	{ 0x6339eaf6, "netdev_info" },
	{ 0x2ecd02aa, "usbnet_write_cmd" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x678c6fa4, "usbnet_read_cmd" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x99bb8806, "memmove" },
	{ 0xeab3fd69, "skb_put" },
	{ 0xf68b0045, "skb_push" },
	{ 0xf9e956fe, "__dev_kfree_skb_any" },
	{ 0x8a4d2069, "skb_copy_expand" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("usb:v0525p1080d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v06D0p0622d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "E7AAEE8F61A6962EDB9E7BA");
