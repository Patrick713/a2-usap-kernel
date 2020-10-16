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
	{ 0x6d0a78c4, "ethtool_op_get_link" },
	{ 0x12bc1f9d, "eth_validate_addr" },
	{ 0xd52a670d, "eth_mac_addr" },
	{ 0x183c8383, "usb_deregister" },
	{ 0x7a8b7baa, "usb_register_driver" },
	{ 0xcc7044cf, "register_netdev" },
	{ 0xc5850110, "printk" },
	{ 0x37a0cba, "kfree" },
	{ 0xebaa9dc8, "kmem_cache_alloc_trace" },
	{ 0xf4610713, "kmalloc_caches" },
	{ 0x9f49ab55, "usb_alloc_urb" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x4c03b680, "alloc_etherdev_mqs" },
	{ 0x6b60a022, "usb_set_interface" },
	{ 0x78c6bf66, "usb_control_msg" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0xf88db2a2, "usb_kill_urb" },
	{ 0xa46a0f7a, "consume_skb" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x5f754e5a, "memset" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x80c4c319, "crc32_le" },
	{ 0xde8d355a, "usb_unlink_urb" },
	{ 0xf65110e8, "_dev_warn" },
	{ 0xc358aaf8, "snprintf" },
	{ 0x73e20c1c, "strlcpy" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x7d6174de, "netif_tx_wake_queue" },
	{ 0x39a12ca7, "_raw_spin_unlock_irqrestore" },
	{ 0x5f849a69, "_raw_spin_lock_irqsave" },
	{ 0x49ebacbd, "_clear_bit" },
	{ 0x927d2b0f, "netif_rx" },
	{ 0xc4e588b, "eth_type_trans" },
	{ 0xeab3fd69, "skb_put" },
	{ 0x9d669763, "memcpy" },
	{ 0x718ae3f2, "__netdev_alloc_skb" },
	{ 0xa513fc17, "netif_carrier_on" },
	{ 0xa35dc8c8, "netif_carrier_off" },
	{ 0xca54fee, "_test_and_set_bit" },
	{ 0x526c3a6c, "jiffies" },
	{ 0x7fa795f, "_dev_err" },
	{ 0x305d8a65, "usb_submit_urb" },
	{ 0xbadd1a4b, "free_netdev" },
	{ 0x184a7893, "usb_free_urb" },
	{ 0xdea8fa68, "unregister_netdev" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("usb:v0423p000Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0423p000Cd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v08D1p0001d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "BA5A7A34D39E81F002254C9");
