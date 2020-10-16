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
	{ 0xdd22f791, "can_change_mtu" },
	{ 0x183c8383, "usb_deregister" },
	{ 0x7a8b7baa, "usb_register_driver" },
	{ 0x7fa795f, "_dev_err" },
	{ 0x9d8f5b37, "register_candev" },
	{ 0xebaa9dc8, "kmem_cache_alloc_trace" },
	{ 0xf4610713, "kmalloc_caches" },
	{ 0x5bbe49f4, "__init_waitqueue_head" },
	{ 0x5f754e5a, "memset" },
	{ 0x68a5ed96, "alloc_candev_mqs" },
	{ 0x49ebacbd, "_clear_bit" },
	{ 0x1a3873bf, "open_candev" },
	{ 0x2332e7a4, "close_candev" },
	{ 0xf9a45858, "usb_bulk_msg" },
	{ 0x9d669763, "memcpy" },
	{ 0x20144272, "alloc_can_skb" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xcb8add4c, "can_bus_off" },
	{ 0x927d2b0f, "netif_rx" },
	{ 0xf315399a, "alloc_can_err_skb" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x7d6174de, "netif_tx_wake_queue" },
	{ 0x49ebe9fd, "netif_device_detach" },
	{ 0xaf3c6135, "usb_unanchor_urb" },
	{ 0x88467cf2, "can_free_echo_skb" },
	{ 0xa46a0f7a, "consume_skb" },
	{ 0x2404021a, "netdev_err" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0x305d8a65, "usb_submit_urb" },
	{ 0xfcc28883, "can_put_echo_skb" },
	{ 0x7609cb29, "usb_anchor_urb" },
	{ 0xd28c75bb, "kfree_skb" },
	{ 0x2cfde9a2, "warn_slowpath_fmt" },
	{ 0x9c64d457, "netdev_warn" },
	{ 0xc28c6b00, "usb_alloc_coherent" },
	{ 0x9f49ab55, "usb_alloc_urb" },
	{ 0x78540a54, "can_get_echo_skb" },
	{ 0x526c3a6c, "jiffies" },
	{ 0x6339eaf6, "netdev_info" },
	{ 0xf412120a, "usb_free_coherent" },
	{ 0x37a0cba, "kfree" },
	{ 0x184a7893, "usb_free_urb" },
	{ 0x21335c8b, "free_candev" },
	{ 0xdea8fa68, "unregister_netdev" },
	{ 0xf47de486, "usb_kill_anchored_urbs" },
	{ 0xde8d355a, "usb_unlink_urb" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

MODULE_INFO(depends, "can-dev");

MODULE_ALIAS("usb:v12D6p0444d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "89294DB496A48D70925E997");
