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
	{ 0x37a0cba, "kfree" },
	{ 0xebaa9dc8, "kmem_cache_alloc_trace" },
	{ 0xf4610713, "kmalloc_caches" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xf9a45858, "usb_bulk_msg" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x2404021a, "netdev_err" },
	{ 0xa05a9a11, "usbnet_skb_return" },
	{ 0x36f6c5e6, "skb_clone" },
	{ 0x65465214, "skb_trim" },
	{ 0x71c90087, "memcmp" },
	{ 0x28f7fb79, "skb_pull" },
	{ 0x5f754e5a, "memset" },
	{ 0xeab3fd69, "skb_put" },
	{ 0x99bb8806, "memmove" },
	{ 0xf68b0045, "skb_push" },
	{ 0xf9e956fe, "__dev_kfree_skb_any" },
	{ 0x8a4d2069, "skb_copy_expand" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("usb:v04E8p689Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04E8p6889d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "4F4CC9BAB00FFCDDD8BC2BD");
