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
	{ 0x31dc07ca, "hci_recv_diag" },
	{ 0x183c8383, "usb_deregister" },
	{ 0x7a8b7baa, "usb_register_driver" },
	{ 0x937c4867, "hci_register_dev" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0xfaf119af, "hci_alloc_dev" },
	{ 0x5bbe49f4, "__init_waitqueue_head" },
	{ 0x5f754e5a, "memset" },
	{ 0xe544be36, "devm_kmalloc" },
	{ 0x22bf2ba1, "__alloc_skb" },
	{ 0x9d669763, "memcpy" },
	{ 0xeab3fd69, "skb_put" },
	{ 0xee946877, "hci_recv_frame" },
	{ 0xf47de486, "usb_kill_anchored_urbs" },
	{ 0x85c3431d, "hci_set_fw_info" },
	{ 0x718b8b7, "bt_info" },
	{ 0xaf3c6135, "usb_unanchor_urb" },
	{ 0x7b8c32f1, "bt_err" },
	{ 0xebaa9dc8, "kmem_cache_alloc_trace" },
	{ 0xf4610713, "kmalloc_caches" },
	{ 0x305d8a65, "usb_submit_urb" },
	{ 0x7609cb29, "usb_anchor_urb" },
	{ 0x184a7893, "usb_free_urb" },
	{ 0xf68b0045, "skb_push" },
	{ 0x9f49ab55, "usb_alloc_urb" },
	{ 0x37a0cba, "kfree" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xbdf80cb7, "__hci_cmd_sync" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xd28c75bb, "kfree_skb" },
	{ 0xcb560b41, "hci_free_dev" },
	{ 0xc68ddd29, "hci_unregister_dev" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

MODULE_INFO(depends, "bluetooth");

MODULE_ALIAS("usb:v08FDp0002d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "7312D0036C6DFD3C9DD3B58");
