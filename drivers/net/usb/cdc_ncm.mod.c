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
	{ 0x6339eaf6, "netdev_info" },
	{ 0xf4610713, "kmalloc_caches" },
	{ 0x2d6fcc06, "__kmalloc" },
	{ 0xd4fc0c2b, "ethtool_op_get_ts_info" },
	{ 0xff178f6, "__aeabi_idivmod" },
	{ 0x8d5db181, "usb_altnum_to_altsetting" },
	{ 0xb0a39481, "usbnet_resume" },
	{ 0x7fa720a6, "hrtimer_active" },
	{ 0x69962ad0, "usbnet_probe" },
	{ 0xd589bfaf, "usbnet_link_change" },
	{ 0x4cf17d9a, "hrtimer_cancel" },
	{ 0xdbed948, "usbnet_disconnect" },
	{ 0x2b5ab97d, "_raw_spin_lock_bh" },
	{ 0xf7802486, "__aeabi_uidivmod" },
	{ 0x2a3aa678, "_test_and_clear_bit" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0xf9e956fe, "__dev_kfree_skb_any" },
	{ 0x8ea02442, "usbnet_stop" },
	{ 0x470f1dcb, "usbnet_update_max_qlen" },
	{ 0xfe41fb0b, "param_ops_bool" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x718ae3f2, "__netdev_alloc_skb" },
	{ 0x89940b91, "netif_schedule_queue" },
	{ 0x41c45227, "usbnet_nway_reset" },
	{ 0xe6d81d31, "hrtimer_start_range_ns" },
	{ 0x63bd7bb5, "usbnet_set_link_ksettings" },
	{ 0xf65110e8, "_dev_warn" },
	{ 0x5f754e5a, "memset" },
	{ 0x124bad4d, "kstrtobool" },
	{ 0x73a8e741, "usbnet_get_stats64" },
	{ 0x183c8383, "usb_deregister" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0x6b60a022, "usb_set_interface" },
	{ 0xfaef0ed, "__tasklet_schedule" },
	{ 0xf58e3ba5, "usbnet_get_link_ksettings" },
	{ 0x5262881b, "usb_driver_claim_interface" },
	{ 0xd531322b, "usbnet_get_drvinfo" },
	{ 0xaba1aff2, "usbnet_start_xmit" },
	{ 0x9545af6d, "tasklet_init" },
	{ 0x7780bdf, "usbnet_suspend" },
	{ 0x8a10c004, "usbnet_get_link" },
	{ 0x7fa795f, "_dev_err" },
	{ 0x82072614, "tasklet_kill" },
	{ 0x678c6fa4, "usbnet_read_cmd" },
	{ 0x3eabc38c, "_dev_info" },
	{ 0x22bf2ba1, "__alloc_skb" },
	{ 0x12a38747, "usleep_range" },
	{ 0x8f3625fe, "_raw_spin_unlock_bh" },
	{ 0x33eed772, "usbnet_tx_timeout" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x4c33974, "cdc_parse_cdc_header" },
	{ 0x1b84a048, "usbnet_get_ethernet_addr" },
	{ 0xa05a9a11, "usbnet_skb_return" },
	{ 0xc967f035, "usb_driver_release_interface" },
	{ 0x668b595, "_kstrtoul" },
	{ 0xea7fc16b, "usbnet_open" },
	{ 0x57677e48, "usbnet_get_msglevel" },
	{ 0xebaa9dc8, "kmem_cache_alloc_trace" },
	{ 0xdb9ca3c5, "_raw_spin_lock" },
	{ 0x1f655af4, "usbnet_unlink_rx_urbs" },
	{ 0x31b9195c, "__local_bh_disable_ip" },
	{ 0x12bc1f9d, "eth_validate_addr" },
	{ 0x2cfde9a2, "warn_slowpath_fmt" },
	{ 0x37a0cba, "kfree" },
	{ 0x9d669763, "memcpy" },
	{ 0x18ddfa86, "hrtimer_init" },
	{ 0x7a8b7baa, "usb_register_driver" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0xb08828fb, "usb_ifnum_to_if" },
	{ 0xca54fee, "_test_and_set_bit" },
	{ 0x49ebacbd, "_clear_bit" },
	{ 0xeab3fd69, "skb_put" },
	{ 0xd52a670d, "eth_mac_addr" },
	{ 0x31bbbaba, "usbnet_manage_power" },
	{ 0x2ecd02aa, "usbnet_write_cmd" },
	{ 0x18d904b8, "usbnet_set_msglevel" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("usb:v0BDBp*d*dc*dsc*dp*ic02isc0Dip00in*");
MODULE_ALIAS("usb:v1BC7p0036d*dc*dsc*dp*ic02isc0Dip00in*");
MODULE_ALIAS("usb:v413Cp81BBd*dc*dsc*dp*ic02isc0Dip00in*");
MODULE_ALIAS("usb:v413Cp81BCd*dc*dsc*dp*ic02isc0Dip00in*");
MODULE_ALIAS("usb:v413Cp*d*dc*dsc*dp*ic02isc0Dip00in*");
MODULE_ALIAS("usb:v0930p*d*dc*dsc*dp*ic02isc0Dip00in*");
MODULE_ALIAS("usb:v12D1p*d*dc*dsc*dp*ic02isc0Dip00in*");
MODULE_ALIAS("usb:v1519p0443d*dc*dsc*dp*ic02isc0Dip00in*");
MODULE_ALIAS("usb:v1546p1010d*dc*dsc*dp*ic02isc0Dip00in*");
MODULE_ALIAS("usb:v*p*d*dc*dsc*dp*ic02isc0Dip00in*");

MODULE_INFO(srcversion, "8365F7A3EC7909B4B3ECFB3");
