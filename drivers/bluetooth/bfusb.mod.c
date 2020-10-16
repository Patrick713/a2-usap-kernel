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
	{ 0xee946877, "hci_recv_frame" },
	{ 0xeab3fd69, "skb_put" },
	{ 0xf68b0045, "skb_push" },
	{ 0xf7802486, "__aeabi_uidivmod" },
	{ 0x3b697738, "_raw_read_lock" },
	{ 0x22bf2ba1, "__alloc_skb" },
	{ 0xc68ddd29, "hci_unregister_dev" },
	{ 0xf88db2a2, "usb_kill_urb" },
	{ 0xaafd9237, "_raw_write_unlock_irqrestore" },
	{ 0x5ca18a2, "_raw_write_lock_irqsave" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xcb560b41, "hci_free_dev" },
	{ 0x937c4867, "hci_register_dev" },
	{ 0xfaf119af, "hci_alloc_dev" },
	{ 0x8b6486ce, "release_firmware" },
	{ 0x37a0cba, "kfree" },
	{ 0xf9a45858, "usb_bulk_msg" },
	{ 0x9d669763, "memcpy" },
	{ 0x78c6bf66, "usb_control_msg" },
	{ 0xebaa9dc8, "kmem_cache_alloc_trace" },
	{ 0xf4610713, "kmalloc_caches" },
	{ 0x718b8b7, "bt_info" },
	{ 0x836b5cfc, "request_firmware" },
	{ 0xe544be36, "devm_kmalloc" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0x184a7893, "usb_free_urb" },
	{ 0xccf042f0, "skb_unlink" },
	{ 0x7b8c32f1, "bt_err" },
	{ 0x4199fd5c, "skb_queue_head" },
	{ 0x9f49ab55, "usb_alloc_urb" },
	{ 0x305d8a65, "usb_submit_urb" },
	{ 0xac6659eb, "skb_queue_tail" },
	{ 0xd28c75bb, "kfree_skb" },
	{ 0x4ac49f05, "skb_dequeue" },
	{ 0x49ebacbd, "_clear_bit" },
	{ 0xca54fee, "_test_and_set_bit" },
	{ 0x2d9ecd4c, "skb_queue_purge" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

MODULE_INFO(depends, "bluetooth");

MODULE_ALIAS("usb:v057Cp2200d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "3CF624B3F05A1D418436FDB");
