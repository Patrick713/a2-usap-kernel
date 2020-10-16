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
	{ 0x9a152689, "param_ops_int" },
	{ 0x12bc1f9d, "eth_validate_addr" },
	{ 0x183c8383, "usb_deregister" },
	{ 0x7a8b7baa, "usb_register_driver" },
	{ 0x3eabc38c, "_dev_info" },
	{ 0xcc7044cf, "register_netdev" },
	{ 0x8e865d3c, "arm_delay_ops" },
	{ 0x7fa795f, "_dev_err" },
	{ 0x8b6486ce, "release_firmware" },
	{ 0x78c6bf66, "usb_control_msg" },
	{ 0x836b5cfc, "request_firmware" },
	{ 0x5bbe49f4, "__init_waitqueue_head" },
	{ 0x4c03b680, "alloc_etherdev_mqs" },
	{ 0x8249512, "iwe_stream_add_point" },
	{ 0x4cba441d, "iwe_stream_add_event" },
	{ 0xf9a482f9, "msleep" },
	{ 0x9c64fbd, "ieee80211_frequency_to_channel" },
	{ 0x72be7bfc, "netif_device_attach" },
	{ 0x49ebe9fd, "netif_device_detach" },
	{ 0x2196324, "__aeabi_idiv" },
	{ 0x526c3a6c, "jiffies" },
	{ 0xde8d355a, "usb_unlink_urb" },
	{ 0x9cdcc15f, "wireless_send_event" },
	{ 0xa35dc8c8, "netif_carrier_off" },
	{ 0xa513fc17, "netif_carrier_on" },
	{ 0x927d2b0f, "netif_rx" },
	{ 0xc4e588b, "eth_type_trans" },
	{ 0xeab3fd69, "skb_put" },
	{ 0x718ae3f2, "__netdev_alloc_skb" },
	{ 0x3dcf1ffa, "__wake_up" },
	{ 0x49ebacbd, "_clear_bit" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0x7d6174de, "netif_tx_wake_queue" },
	{ 0x97255bdf, "strlen" },
	{ 0xbadd1a4b, "free_netdev" },
	{ 0xdea8fa68, "unregister_netdev" },
	{ 0xf88db2a2, "usb_kill_urb" },
	{ 0xd28c75bb, "kfree_skb" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x49970de8, "finish_wait" },
	{ 0x647af474, "prepare_to_wait_event" },
	{ 0x1000e51, "schedule" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x9f49ab55, "usb_alloc_urb" },
	{ 0xebaa9dc8, "kmem_cache_alloc_trace" },
	{ 0x305d8a65, "usb_submit_urb" },
	{ 0xf4610713, "kmalloc_caches" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x9d669763, "memcpy" },
	{ 0x5f754e5a, "memset" },
	{ 0xf65110e8, "_dev_warn" },
	{ 0x184a7893, "usb_free_urb" },
	{ 0x37a0cba, "kfree" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

MODULE_INFO(depends, "cfg80211");

MODULE_ALIAS("usb:v0586p3400d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0ACEp1201d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v050Dp6051d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0DB0p6823d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1044p8004d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1044p8005d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "8D87F7CC5737A47E9D22582");
