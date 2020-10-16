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
	{ 0x183c8383, "usb_deregister" },
	{ 0x7a8b7baa, "usb_register_driver" },
	{ 0xa513fc17, "netif_carrier_on" },
	{ 0xdd4ffa9b, "mutex_trylock" },
	{ 0x632780, "work_busy" },
	{ 0x837332a0, "napi_complete_done" },
	{ 0xf8f7439d, "skb_add_rx_frag" },
	{ 0xc4e588b, "eth_type_trans" },
	{ 0xeab3fd69, "skb_put" },
	{ 0xc52b37a5, "__napi_alloc_skb" },
	{ 0x4f7a84c6, "napi_gro_receive" },
	{ 0xda2a4834, "__free_pages" },
	{ 0x9f49ab55, "usb_alloc_urb" },
	{ 0x987c11c7, "__pv_phys_pfn_offset" },
	{ 0x76d11765, "mem_map" },
	{ 0x40fd1bb5, "__alloc_pages_nodemask" },
	{ 0x72be7bfc, "netif_device_attach" },
	{ 0xa35dc8c8, "netif_carrier_off" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0x2abd60df, "dev_set_mac_address" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0x7fa795f, "_dev_err" },
	{ 0xc2b36042, "usb_driver_set_configuration" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xcc7044cf, "register_netdev" },
	{ 0x9f00a796, "netif_napi_add" },
	{ 0x131db64a, "system_long_wq" },
	{ 0x9545af6d, "tasklet_init" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0x3eabc38c, "_dev_info" },
	{ 0x4c03b680, "alloc_etherdev_mqs" },
	{ 0xaebeda32, "usb_reset_device" },
	{ 0xebaa9dc8, "kmem_cache_alloc_trace" },
	{ 0xf4610713, "kmalloc_caches" },
	{ 0x201aaac7, "napi_disable" },
	{ 0xa748a031, "pskb_expand_head" },
	{ 0x575bdc45, "skb_checksum_help" },
	{ 0x1f486cd2, "__skb_gso_segment" },
	{ 0x5d3759e2, "usb_autopm_get_interface_async" },
	{ 0x89940b91, "netif_schedule_queue" },
	{ 0xf9e956fe, "__dev_kfree_skb_any" },
	{ 0x9b73dda5, "skb_copy_bits" },
	{ 0x44da5d0f, "__csum_ipv6_magic" },
	{ 0xdb9ca3c5, "_raw_spin_lock" },
	{ 0x49ebacbd, "_clear_bit" },
	{ 0x899a31fa, "__napi_schedule" },
	{ 0xcb0dc57f, "napi_schedule_prep" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0x9c318595, "usb_autopm_put_interface_async" },
	{ 0xfaef0ed, "__tasklet_schedule" },
	{ 0x7ccbaf96, "skb_tstamp_tx" },
	{ 0xca54fee, "_test_and_set_bit" },
	{ 0x6ebe366f, "ktime_get_mono_fast_ns" },
	{ 0xac6659eb, "skb_queue_tail" },
	{ 0x2196324, "__aeabi_idiv" },
	{ 0x1b096d51, "usb_enable_lpm" },
	{ 0xc6cbbc89, "capable" },
	{ 0x2a3aa678, "_test_and_clear_bit" },
	{ 0xf9a482f9, "msleep" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0x12a38747, "usleep_range" },
	{ 0xf7c57d7b, "netdev_notice" },
	{ 0x80c4c319, "crc32_le" },
	{ 0x7d6174de, "netif_tx_wake_queue" },
	{ 0x5f754e5a, "memset" },
	{ 0x2d6fcc06, "__kmalloc" },
	{ 0xbadd1a4b, "free_netdev" },
	{ 0x29d9f26e, "cancel_delayed_work_sync" },
	{ 0x82072614, "tasklet_kill" },
	{ 0xdea8fa68, "unregister_netdev" },
	{ 0xcf86cdac, "queue_delayed_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x6339eaf6, "netdev_info" },
	{ 0x49ebe9fd, "netif_device_detach" },
	{ 0x2404021a, "netdev_err" },
	{ 0x305d8a65, "usb_submit_urb" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0x9d669763, "memcpy" },
	{ 0x280b64f0, "usb_queue_reset_device" },
	{ 0x9c64d457, "netdev_warn" },
	{ 0xc358aaf8, "snprintf" },
	{ 0x73e20c1c, "strlcpy" },
	{ 0x65656d7, "mii_nway_restart" },
	{ 0xa916a0ba, "mii_ethtool_get_link_ksettings" },
	{ 0x2cfde9a2, "warn_slowpath_fmt" },
	{ 0xf88db2a2, "usb_kill_urb" },
	{ 0x39a12ca7, "_raw_spin_unlock_irqrestore" },
	{ 0x5f849a69, "_raw_spin_lock_irqsave" },
	{ 0xcc286e8e, "__put_page" },
	{ 0x184a7893, "usb_free_urb" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xa46a0f7a, "consume_skb" },
	{ 0x8f3625fe, "_raw_spin_unlock_bh" },
	{ 0x2b5ab97d, "_raw_spin_lock_bh" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x3d0f3514, "usb_autopm_put_interface" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0xdebe62e1, "usb_autopm_get_interface" },
	{ 0x37a0cba, "kfree" },
	{ 0x78c6bf66, "usb_control_msg" },
	{ 0xb1b939e, "kmemdup" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("usb:v0BDAp8050d*dc*dsc*dp*icFFisc*ip*in*");
MODULE_ALIAS("usb:v0BDAp8050d*dc*dsc*dp*ic02isc06ip00in*");
MODULE_ALIAS("usb:v0BDAp8152d*dc*dsc*dp*icFFisc*ip*in*");
MODULE_ALIAS("usb:v0BDAp8152d*dc*dsc*dp*ic02isc06ip00in*");
MODULE_ALIAS("usb:v0BDAp8153d*dc*dsc*dp*icFFisc*ip*in*");
MODULE_ALIAS("usb:v0BDAp8153d*dc*dsc*dp*ic02isc06ip00in*");
MODULE_ALIAS("usb:v045Ep07ABd*dc*dsc*dp*icFFisc*ip*in*");
MODULE_ALIAS("usb:v045Ep07ABd*dc*dsc*dp*ic02isc06ip00in*");
MODULE_ALIAS("usb:v045Ep07C6d*dc*dsc*dp*icFFisc*ip*in*");
MODULE_ALIAS("usb:v045Ep07C6d*dc*dsc*dp*ic02isc06ip00in*");
MODULE_ALIAS("usb:v045Ep0927d*dc*dsc*dp*icFFisc*ip*in*");
MODULE_ALIAS("usb:v045Ep0927d*dc*dsc*dp*ic02isc06ip00in*");
MODULE_ALIAS("usb:v04E8pA101d*dc*dsc*dp*icFFisc*ip*in*");
MODULE_ALIAS("usb:v04E8pA101d*dc*dsc*dp*ic02isc06ip00in*");
MODULE_ALIAS("usb:v17EFp304Fd*dc*dsc*dp*icFFisc*ip*in*");
MODULE_ALIAS("usb:v17EFp304Fd*dc*dsc*dp*ic02isc06ip00in*");
MODULE_ALIAS("usb:v17EFp3062d*dc*dsc*dp*icFFisc*ip*in*");
MODULE_ALIAS("usb:v17EFp3062d*dc*dsc*dp*ic02isc06ip00in*");
MODULE_ALIAS("usb:v17EFp3069d*dc*dsc*dp*icFFisc*ip*in*");
MODULE_ALIAS("usb:v17EFp3069d*dc*dsc*dp*ic02isc06ip00in*");
MODULE_ALIAS("usb:v17EFp7205d*dc*dsc*dp*icFFisc*ip*in*");
MODULE_ALIAS("usb:v17EFp7205d*dc*dsc*dp*ic02isc06ip00in*");
MODULE_ALIAS("usb:v17EFp720Cd*dc*dsc*dp*icFFisc*ip*in*");
MODULE_ALIAS("usb:v17EFp720Cd*dc*dsc*dp*ic02isc06ip00in*");
MODULE_ALIAS("usb:v17EFp7214d*dc*dsc*dp*icFFisc*ip*in*");
MODULE_ALIAS("usb:v17EFp7214d*dc*dsc*dp*ic02isc06ip00in*");
MODULE_ALIAS("usb:v17EFpA387d*dc*dsc*dp*icFFisc*ip*in*");
MODULE_ALIAS("usb:v17EFpA387d*dc*dsc*dp*ic02isc06ip00in*");
MODULE_ALIAS("usb:v13B1p0041d*dc*dsc*dp*icFFisc*ip*in*");
MODULE_ALIAS("usb:v13B1p0041d*dc*dsc*dp*ic02isc06ip00in*");
MODULE_ALIAS("usb:v0955p09FFd*dc*dsc*dp*icFFisc*ip*in*");
MODULE_ALIAS("usb:v0955p09FFd*dc*dsc*dp*ic02isc06ip00in*");
MODULE_ALIAS("usb:v2357p0601d*dc*dsc*dp*icFFisc*ip*in*");
MODULE_ALIAS("usb:v2357p0601d*dc*dsc*dp*ic02isc06ip00in*");

MODULE_INFO(srcversion, "FA86E4C9EBDCC1E1B2DBB6F");
