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
	{ 0x2d6fcc06, "__kmalloc" },
	{ 0xe1d9cb60, "usb_gstrings_attach" },
	{ 0x4e412961, "usb_free_all_descriptors" },
	{ 0x4d127d75, "usb_ep_disable" },
	{ 0xcdbf753d, "usb_ep_enable" },
	{ 0x97255bdf, "strlen" },
	{ 0x2104cab4, "gether_get_qmult" },
	{ 0x1bee5592, "usb_ep_queue" },
	{ 0xc5134fa8, "gether_setup_name_default" },
	{ 0xa513fc17, "netif_carrier_on" },
	{ 0xa35dc8c8, "netif_carrier_off" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0xf9e956fe, "__dev_kfree_skb_any" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0x5dc7e971, "gether_get_ifname" },
	{ 0xb0a0bfe8, "usb_ep_alloc_request" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x54fbd86c, "skb_realloc_headroom" },
	{ 0x8878cfa6, "gether_cleanup" },
	{ 0xf6dc7e70, "usb_function_unregister" },
	{ 0x65465214, "skb_trim" },
	{ 0xe4495801, "gether_set_host_addr" },
	{ 0x87a34401, "gether_get_dev_addr" },
	{ 0x5f754e5a, "memset" },
	{ 0x7606ce84, "gether_connect" },
	{ 0x7d6174de, "netif_tx_wake_queue" },
	{ 0x7592e5b, "usb_put_function_instance" },
	{ 0x6a6e05bf, "kstrtou8" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0xaea4b69b, "usb_ep_autoconfig" },
	{ 0xbadd1a4b, "free_netdev" },
	{ 0xa24491bf, "ida_free" },
	{ 0x4f5329ec, "gether_set_gadget" },
	{ 0xf68b0045, "skb_push" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0xcb35c5c6, "gether_get_host_addr" },
	{ 0xc847167e, "config_group_init_type_name" },
	{ 0xe7746b2d, "gether_set_qmult" },
	{ 0xf84124c1, "gether_get_host_addr_u8" },
	{ 0x28f7fb79, "skb_pull" },
	{ 0x7fa795f, "_dev_err" },
	{ 0x38aa9a6c, "usb_function_register" },
	{ 0xac6659eb, "skb_queue_tail" },
	{ 0xb31dc583, "gether_register_netdev" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xad98c5fe, "gether_set_dev_addr" },
	{ 0x53ff8a7d, "config_ep_by_speed" },
	{ 0x81cbdd08, "usb_ep_free_request" },
	{ 0xebaa9dc8, "kmem_cache_alloc_trace" },
	{ 0x82adf9c2, "gether_disconnect" },
	{ 0x37a0cba, "kfree" },
	{ 0x9d669763, "memcpy" },
	{ 0xf43cbd3, "usb_assign_descriptors" },
	{ 0xc4bd6698, "usb_interface_id" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0xa46a0f7a, "consume_skb" },
	{ 0x305796, "usb_os_desc_prepare_interf_dir" },
	{ 0xdd3a2293, "dev_get_stats" },
	{ 0xa5684076, "ida_alloc_range" },
};

MODULE_INFO(depends, "libcomposite,udc-core,u_ether");


MODULE_INFO(srcversion, "E716C152BA20EB4135A0AAB");
