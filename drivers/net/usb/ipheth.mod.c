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
	{ 0x183c8383, "usb_deregister" },
	{ 0x7a8b7baa, "usb_register_driver" },
	{ 0x6b60a022, "usb_set_interface" },
	{ 0x1eb9516e, "round_jiffies_relative" },
	{ 0xa513fc17, "netif_carrier_on" },
	{ 0xf88db2a2, "usb_kill_urb" },
	{ 0xdea8fa68, "unregister_netdev" },
	{ 0xbadd1a4b, "free_netdev" },
	{ 0x37a0cba, "kfree" },
	{ 0x3eabc38c, "_dev_info" },
	{ 0x15ef4f75, "netif_tx_stop_all_queues" },
	{ 0xa35dc8c8, "netif_carrier_off" },
	{ 0xcc7044cf, "register_netdev" },
	{ 0xc28c6b00, "usb_alloc_coherent" },
	{ 0x9f49ab55, "usb_alloc_urb" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x78c6bf66, "usb_control_msg" },
	{ 0xebaa9dc8, "kmem_cache_alloc_trace" },
	{ 0xf4610713, "kmalloc_caches" },
	{ 0x8d5db181, "usb_altnum_to_altsetting" },
	{ 0x4c03b680, "alloc_etherdev_mqs" },
	{ 0x927d2b0f, "netif_rx" },
	{ 0xc4e588b, "eth_type_trans" },
	{ 0xeab3fd69, "skb_put" },
	{ 0x718ae3f2, "__netdev_alloc_skb" },
	{ 0x29d9f26e, "cancel_delayed_work_sync" },
	{ 0x2cfde9a2, "warn_slowpath_fmt" },
	{ 0x5f754e5a, "memset" },
	{ 0xf9e956fe, "__dev_kfree_skb_any" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0x9d669763, "memcpy" },
	{ 0x305d8a65, "usb_submit_urb" },
	{ 0xde8d355a, "usb_unlink_urb" },
	{ 0x7d6174de, "netif_tx_wake_queue" },
	{ 0xcf86cdac, "queue_delayed_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x7fa795f, "_dev_err" },
	{ 0x184a7893, "usb_free_urb" },
	{ 0xf412120a, "usb_free_coherent" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("usb:v05ACp*d*dc*dsc*dp*icFFiscFDip01in*");

MODULE_INFO(srcversion, "D1974959E1DEE80DC5C79DD");
