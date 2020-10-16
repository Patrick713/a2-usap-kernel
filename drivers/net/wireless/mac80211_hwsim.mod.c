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
	{ 0xfe41fb0b, "param_ops_bool" },
	{ 0x9a152689, "param_ops_int" },
	{ 0xc884c9b8, "simple_attr_release" },
	{ 0x9e81a568, "simple_attr_write" },
	{ 0x47e15834, "simple_attr_read" },
	{ 0x14d1b7f5, "generic_file_llseek" },
	{ 0x12bc1f9d, "eth_validate_addr" },
	{ 0xd52a670d, "eth_mac_addr" },
	{ 0xdea8fa68, "unregister_netdev" },
	{ 0x47a25702, "rhashtable_destroy" },
	{ 0xfcf7a3d, "unregister_pernet_device" },
	{ 0x8ad83553, "platform_driver_unregister" },
	{ 0xdf54a8f7, "netlink_unregister_notifier" },
	{ 0xbadd1a4b, "free_netdev" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0xf6c8eae0, "register_netdevice" },
	{ 0x6afe5599, "dev_alloc_name" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0x5c5b2589, "alloc_netdev_mqs" },
	{ 0xe6d85203, "__class_create" },
	{ 0x46ae4a33, "genl_unregister_family" },
	{ 0xfa599bb2, "netlink_register_notifier" },
	{ 0xc5688156, "genl_register_family" },
	{ 0x610b1492, "__platform_driver_register" },
	{ 0xda6c2db5, "register_pernet_device" },
	{ 0x9405c2d3, "rhashtable_init" },
	{ 0x52dc69ef, "rht_bucket_nested_insert" },
	{ 0xb6529965, "rhashtable_insert_slow" },
	{ 0x7c20652d, "debugfs_create_file" },
	{ 0x93b18eee, "debugfs_create_dir" },
	{ 0x7c816134, "regulatory_hint" },
	{ 0xf99129b1, "ieee80211_register_hw" },
	{ 0x18ddfa86, "hrtimer_init" },
	{ 0x54496b4, "schedule_timeout_interruptible" },
	{ 0xea9db780, "wiphy_apply_custom_regulatory" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xba1d4e23, "device_bind_driver" },
	{ 0x13e86e9b, "device_create" },
	{ 0x3be001a3, "ieee80211_alloc_hw_nm" },
	{ 0xe6d81d31, "hrtimer_start_range_ns" },
	{ 0xffecaed5, "ieee80211_probereq_get" },
	{ 0x526c3a6c, "jiffies" },
	{ 0xebcf1133, "ieee80211_csa_finish" },
	{ 0x4f9216e7, "ieee80211_csa_is_complete" },
	{ 0x5f1a79cd, "ieee80211_beacon_get_tim" },
	{ 0x2196324, "__aeabi_idiv" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0x39a96b12, "ieee80211_get_tx_rates" },
	{ 0xda2a4834, "__free_pages" },
	{ 0x1999cf1b, "__skb_ext_put" },
	{ 0xb545fc7c, "dst_release" },
	{ 0xf8f7439d, "skb_add_rx_frag" },
	{ 0x40fd1bb5, "__alloc_pages_nodemask" },
	{ 0x2a18c74, "nf_conntrack_destroy" },
	{ 0xb23c7123, "skb_copy" },
	{ 0x987c11c7, "__pv_phys_pfn_offset" },
	{ 0x76d11765, "mem_map" },
	{ 0xdb9ca3c5, "_raw_spin_lock" },
	{ 0x59e5070d, "__do_div64" },
	{ 0xf7802486, "__aeabi_uidivmod" },
	{ 0xf68b0045, "skb_push" },
	{ 0x8a4d2069, "skb_copy_expand" },
	{ 0xc5850110, "printk" },
	{ 0x49f26466, "kstrndup" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x37a0cba, "kfree" },
	{ 0x9d0a7e7d, "ieee80211_tx_status_irqsafe" },
	{ 0xccf042f0, "skb_unlink" },
	{ 0xf1db1704, "nla_memcpy" },
	{ 0xcb3f746c, "ieee80211_rx_irqsafe" },
	{ 0xc4f0da12, "ktime_get_with_offset" },
	{ 0x5261322c, "rht_bucket_nested" },
	{ 0xa24491bf, "ida_free" },
	{ 0xb2d48a2e, "queue_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xa038f306, "__rht_bucket_nested" },
	{ 0x254652b1, "class_destroy" },
	{ 0x4675a0da, "ieee80211_free_hw" },
	{ 0x9d6eee2e, "device_unregister" },
	{ 0x5fdc2be3, "device_release_driver" },
	{ 0xbcf1cc92, "ieee80211_unregister_hw" },
	{ 0x35edc130, "debugfs_remove_recursive" },
	{ 0x2b560e16, "netlink_broadcast" },
	{ 0xd2aeaa09, "init_net" },
	{ 0x15a91cb, "genl_notify" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0x31b9195c, "__local_bh_disable_ip" },
	{ 0x927d2b0f, "netif_rx" },
	{ 0xeab3fd69, "skb_put" },
	{ 0x718ae3f2, "__netdev_alloc_skb" },
	{ 0x65465214, "skb_trim" },
	{ 0x97255bdf, "strlen" },
	{ 0x9d669763, "memcpy" },
	{ 0x4cf17d9a, "hrtimer_cancel" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0x94b008be, "ieee80211_stop_tx_ba_cb_irqsafe" },
	{ 0x58858b29, "ieee80211_start_tx_ba_cb_irqsafe" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0x464e81e2, "ieee80211_scan_completed" },
	{ 0x29d9f26e, "cancel_delayed_work_sync" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0xb64cca32, "ieee80211_ready_on_channel" },
	{ 0xf172d22d, "ieee80211_remain_on_channel_expired" },
	{ 0x9ccebac0, "ieee80211_queue_delayed_work" },
	{ 0x2cfde9a2, "warn_slowpath_fmt" },
	{ 0xbf4e4adb, "cfg80211_vendor_cmd_reply" },
	{ 0xb12f5b18, "__cfg80211_alloc_reply_skb" },
	{ 0x11e9b1ea, "__cfg80211_send_event_skb" },
	{ 0x1795544a, "__cfg80211_alloc_event_skb" },
	{ 0x984ce9bd, "__nla_parse" },
	{ 0xcc20ac52, "hrtimer_forward" },
	{ 0xd28c75bb, "kfree_skb" },
	{ 0xac6659eb, "skb_queue_tail" },
	{ 0xf918f903, "netlink_unicast" },
	{ 0x6d2fc5a6, "net_namespace_list" },
	{ 0xa8cd6c47, "nla_put_64bit" },
	{ 0xa5c2e213, "nla_put" },
	{ 0xf45f59f7, "genlmsg_put" },
	{ 0x22bf2ba1, "__alloc_skb" },
	{ 0x94783ed, "ieee80211_free_txskb" },
	{ 0x4ac49f05, "skb_dequeue" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xe2e34f50, "ieee80211_iterate_active_interfaces_atomic" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xeedd406f, "ieee80211_radar_detected" },
	{ 0xc1a56bd4, "simple_attr_open" },
	{ 0xa5684076, "ida_alloc_range" },
	{ 0x5f754e5a, "memset" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0x71c90087, "memcmp" },
	{ 0xabf7ad06, "ether_setup" },
	{ 0xa46a0f7a, "consume_skb" },
	{ 0x8f3625fe, "_raw_spin_unlock_bh" },
	{ 0x2b5ab97d, "_raw_spin_lock_bh" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

MODULE_INFO(depends, "cfg80211,mac80211");


MODULE_INFO(srcversion, "725F49FCDAC0BF6BE531D9C");
