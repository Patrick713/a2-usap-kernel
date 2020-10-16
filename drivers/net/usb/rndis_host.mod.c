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
	{ 0xf4610713, "kmalloc_caches" },
	{ 0xf9a482f9, "msleep" },
	{ 0xb0a39481, "usbnet_resume" },
	{ 0x69962ad0, "usbnet_probe" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0xa9990631, "usbnet_cdc_unbind" },
	{ 0xdbed948, "usbnet_disconnect" },
	{ 0x36f6c5e6, "skb_clone" },
	{ 0x8418e091, "usbnet_generic_cdc_bind" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0xf9e956fe, "__dev_kfree_skb_any" },
	{ 0x8ea02442, "usbnet_stop" },
	{ 0x65465214, "skb_trim" },
	{ 0xf65110e8, "_dev_warn" },
	{ 0x5f754e5a, "memset" },
	{ 0x73a8e741, "usbnet_get_stats64" },
	{ 0x183c8383, "usb_deregister" },
	{ 0x78c6bf66, "usb_control_msg" },
	{ 0xaba1aff2, "usbnet_start_xmit" },
	{ 0x7780bdf, "usbnet_suspend" },
	{ 0x28f7fb79, "skb_pull" },
	{ 0x7fa795f, "_dev_err" },
	{ 0x8a4d2069, "skb_copy_expand" },
	{ 0x3eabc38c, "_dev_info" },
	{ 0x33eed772, "usbnet_tx_timeout" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xa05a9a11, "usbnet_skb_return" },
	{ 0xc967f035, "usb_driver_release_interface" },
	{ 0xea7fc16b, "usbnet_open" },
	{ 0xfde8a122, "usb_interrupt_msg" },
	{ 0xebaa9dc8, "kmem_cache_alloc_trace" },
	{ 0x12bc1f9d, "eth_validate_addr" },
	{ 0x2cfde9a2, "warn_slowpath_fmt" },
	{ 0x37a0cba, "kfree" },
	{ 0x7a8b7baa, "usb_register_driver" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x99bb8806, "memmove" },
	{ 0xd52a670d, "eth_mac_addr" },
};

MODULE_INFO(depends, "cdc_ether");

MODULE_ALIAS("usb:v1630p0042d*dc*dsc*dp*ic02isc02ipFFin*");
MODULE_ALIAS("usb:v*p*d*dc*dsc*dp*ic02isc02ipFFin*");
MODULE_ALIAS("usb:v*p*d*dc*dsc*dp*icEFisc01ip01in*");
MODULE_ALIAS("usb:v*p*d*dc*dsc*dp*icE0isc01ip03in*");
MODULE_ALIAS("usb:v*p*d*dc*dsc*dp*icEFisc04ip01in*");

MODULE_INFO(srcversion, "FD9D290B5F31379C2153C14");
