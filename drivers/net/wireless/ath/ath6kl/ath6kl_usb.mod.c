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
	{ 0x2d3385d3, "system_wq" },
	{ 0x5b0b22b5, "ath6kl_core_destroy" },
	{ 0xf4610713, "kmalloc_caches" },
	{ 0x2d6fcc06, "__kmalloc" },
	{ 0x8c7e126e, "ath6kl_core_cleanup" },
	{ 0x5524a01, "ath6kl_core_create" },
	{ 0xf7802486, "__aeabi_uidivmod" },
	{ 0xb1b939e, "kmemdup" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0xaf3c6135, "usb_unanchor_urb" },
	{ 0x718ae3f2, "__netdev_alloc_skb" },
	{ 0x5bbe49f4, "__init_waitqueue_head" },
	{ 0xb9a689dd, "ath6kl_err" },
	{ 0x5f754e5a, "memset" },
	{ 0x39a12ca7, "_raw_spin_unlock_irqrestore" },
	{ 0x183c8383, "usb_deregister" },
	{ 0x1354043d, "ath6kl_warn" },
	{ 0x78c6bf66, "usb_control_msg" },
	{ 0x8e865d3c, "arm_delay_ops" },
	{ 0x42160169, "flush_workqueue" },
	{ 0xac6659eb, "skb_queue_tail" },
	{ 0x305d8a65, "usb_submit_urb" },
	{ 0x8b0c685e, "ath6kl_stop_txrx" },
	{ 0xd6cf68f9, "usb_get_dev" },
	{ 0xf47de486, "usb_kill_anchored_urbs" },
	{ 0xf52ee29f, "ath6kl_core_init" },
	{ 0x822bd109, "usb_put_dev" },
	{ 0xebaa9dc8, "kmem_cache_alloc_trace" },
	{ 0x5f849a69, "_raw_spin_lock_irqsave" },
	{ 0x37a0cba, "kfree" },
	{ 0xd2b09e6e, "ath6kl_core_rx_complete" },
	{ 0x9d669763, "memcpy" },
	{ 0x5f34de26, "ath6kl_core_tx_complete" },
	{ 0x7a8b7baa, "usb_register_driver" },
	{ 0x4ac49f05, "skb_dequeue" },
	{ 0xb2d48a2e, "queue_work_on" },
	{ 0xa46a0f7a, "consume_skb" },
	{ 0xeab3fd69, "skb_put" },
	{ 0x184a7893, "usb_free_urb" },
	{ 0x7609cb29, "usb_anchor_urb" },
	{ 0x9f49ab55, "usb_alloc_urb" },
};

MODULE_INFO(depends, "ath6kl_core");

MODULE_ALIAS("usb:v0CF3p9375d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0CF3p9374d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "C2731D87CEC8826D4392118");
