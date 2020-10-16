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
	{ 0x862905b4, "usbnet_get_endpoints" },
	{ 0x9c64d457, "netdev_warn" },
	{ 0xa46a0f7a, "consume_skb" },
	{ 0x184a7893, "usb_free_urb" },
	{ 0x305d8a65, "usb_submit_urb" },
	{ 0x9f49ab55, "usb_alloc_urb" },
	{ 0x32249f07, "usbnet_device_suggests_idle" },
	{ 0x28f7fb79, "skb_pull" },
	{ 0xa05a9a11, "usbnet_skb_return" },
	{ 0x65465214, "skb_trim" },
	{ 0x36f6c5e6, "skb_clone" },
	{ 0x99bb8806, "memmove" },
	{ 0xf68b0045, "skb_push" },
	{ 0xeab3fd69, "skb_put" },
	{ 0x80c4c319, "crc32_le" },
	{ 0xf9e956fe, "__dev_kfree_skb_any" },
	{ 0x8a4d2069, "skb_copy_expand" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0xf7802486, "__aeabi_uidivmod" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("usb:v*p*d*dc*dsc*dp*ic02isc0Cip07in*");

MODULE_INFO(srcversion, "10D97D26E5592B8F6591AB8");
