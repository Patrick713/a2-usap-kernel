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
	{ 0xf6c8eae0, "register_netdevice" },
	{ 0xb4aa5f84, "dev_mc_sync_multiple" },
	{ 0x22f8c1ca, "kobject_put" },
	{ 0x6339eaf6, "netdev_info" },
	{ 0xf4610713, "kmalloc_caches" },
	{ 0x2d6fcc06, "__kmalloc" },
	{ 0xff178f6, "__aeabi_idivmod" },
	{ 0x5550cb70, "dev_mc_unsync" },
	{ 0x349cba85, "strchr" },
	{ 0xf509040f, "proc_create_seq_private" },
	{ 0x9a152689, "param_ops_int" },
	{ 0x97255bdf, "strlen" },
	{ 0xeaa8f3d7, "dev_disable_lro" },
	{ 0x19f462ab, "kfree_call_rcu" },
	{ 0xb168d664, "vlan_dev_vlan_id" },
	{ 0xe9477645, "__skb_flow_dissect" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0x5d7776e5, "seq_puts" },
	{ 0xb421f750, "netdev_rx_handler_register" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0x539dbda0, "vlan_uses_dev" },
	{ 0xa513fc17, "netif_carrier_on" },
	{ 0xb545fc7c, "dst_release" },
	{ 0x2b5ab97d, "_raw_spin_lock_bh" },
	{ 0x36f6c5e6, "skb_clone" },
	{ 0xf7802486, "__aeabi_uidivmod" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xbc3bdc7f, "flow_get_u32_src" },
	{ 0xc8275115, "seq_printf" },
	{ 0xd2da1048, "register_netdevice_notifier" },
	{ 0xa35dc8c8, "netif_carrier_off" },
	{ 0x4c90dc00, "netdev_master_upper_dev_get" },
	{ 0xae947aa3, "remove_proc_entry" },
	{ 0x2a15f9fd, "dev_set_allmulti" },
	{ 0x68dff5bb, "vlan_vid_del" },
	{ 0xcdfbd3fb, "netpoll_poll_dev" },
	{ 0x809c64cf, "call_netdevice_notifiers" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0xf9e956fe, "__dev_kfree_skb_any" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xae353d77, "arm_copy_from_user" },
	{ 0x29d9f26e, "cancel_delayed_work_sync" },
	{ 0xb0823372, "vlan_vid_add" },
	{ 0xcc7628df, "__netpoll_setup" },
	{ 0x5b2d01cf, "vlan_vids_del_by_dev" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xd697e69a, "trace_hardirqs_on" },
	{ 0xdd75d616, "netdev_walk_all_upper_dev_rcu" },
	{ 0x526c3a6c, "jiffies" },
	{ 0x9d0d6206, "unregister_netdevice_notifier" },
	{ 0x51a910c0, "arm_copy_to_user" },
	{ 0x65465214, "skb_trim" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xde297851, "vlan_vids_add_by_dev" },
	{ 0x28595189, "netdev_master_upper_dev_link" },
	{ 0x53ba7185, "dev_mc_add" },
	{ 0x718ae3f2, "__netdev_alloc_skb" },
	{ 0xa5675e11, "netdev_lower_get_next_private_rcu" },
	{ 0x2d85e315, "netdev_lower_state_changed" },
	{ 0x3bdc1db7, "__pskb_pull_tail" },
	{ 0xb605754a, "netdev_change_features" },
	{ 0x37026633, "netpoll_send_skb_on_dev" },
	{ 0x7d518e2b, "PDE_DATA" },
	{ 0xd1de9ab3, "netdev_has_upper_dev" },
	{ 0xf1db1704, "nla_memcpy" },
	{ 0x4be0fc9e, "param_ops_charp" },
	{ 0x5f754e5a, "memset" },
	{ 0x2abd60df, "dev_set_mac_address" },
	{ 0x65e2bb05, "unregister_pernet_subsys" },
	{ 0xf617b198, "proc_mkdir" },
	{ 0x9fdecc31, "unregister_netdevice_many" },
	{ 0x11089ac7, "_ctype" },
	{ 0xc025016c, "flow_keys_dissector" },
	{ 0x5a0c18e7, "__ethtool_get_link_ksettings" },
	{ 0xea0ea4c6, "arp_create" },
	{ 0xc5850110, "printk" },
	{ 0x6d0a78c4, "ethtool_op_get_link" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0xa965ca81, "reciprocal_value" },
	{ 0x4025fd3f, "ns_capable" },
	{ 0x93a6913e, "kobject_init_and_add" },
	{ 0x62849ac7, "dev_valid_name" },
	{ 0x5bf67740, "netdev_class_remove_file_ns" },
	{ 0xbadd1a4b, "free_netdev" },
	{ 0x328a05f1, "strncpy" },
	{ 0x2a88feb0, "dev_mc_del" },
	{ 0xa5c2e213, "nla_put" },
	{ 0x8dfa946, "netdev_upper_dev_unlink" },
	{ 0x84b183ae, "strncmp" },
	{ 0x73e20c1c, "strlcpy" },
	{ 0xf68b0045, "skb_push" },
	{ 0x652032cb, "mac_pton" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x89ea10c3, "dev_close" },
	{ 0xf4f14de6, "rtnl_trylock" },
	{ 0xe92b5f1e, "netdev_bonding_info_change" },
	{ 0x3309c92a, "dev_mc_flush" },
	{ 0xfda9581f, "prandom_u32" },
	{ 0x6091797f, "synchronize_rcu" },
	{ 0x42be6d9f, "inet_confirm_addr" },
	{ 0xd2aeaa09, "init_net" },
	{ 0x9cd4091f, "rtnl_link_unregister" },
	{ 0x12d56b7, "__dev_get_by_index" },
	{ 0x2196324, "__aeabi_idiv" },
	{ 0x56cb571d, "netdev_lower_dev_get_private" },
	{ 0x49f26466, "kstrndup" },
	{ 0xa356e88f, "dev_open" },
	{ 0x655f864a, "dev_uc_flush" },
	{ 0xc6cbbc89, "capable" },
	{ 0x27f52cdc, "netdev_upper_get_next_dev_rcu" },
	{ 0xa1ccd3dc, "sysfs_remove_file_ns" },
	{ 0x8f3625fe, "_raw_spin_unlock_bh" },
	{ 0xcf86cdac, "queue_delayed_work_on" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x49270334, "vlan_dev_vlan_proto" },
	{ 0x2140ea53, "netdev_rx_handler_unregister" },
	{ 0xee43fd9b, "___ratelimit" },
	{ 0x77f6f183, "kmalloc_order_trace" },
	{ 0xd28c75bb, "kfree_skb" },
	{ 0xac5fcec0, "in4_pton" },
	{ 0x656a81e1, "passthru_features_check" },
	{ 0x5c5b2589, "alloc_netdev_mqs" },
	{ 0x15e8fedc, "arp_xmit" },
	{ 0xf66b4d9e, "netdev_lower_get_next_private" },
	{ 0xb041ec8d, "register_pernet_subsys" },
	{ 0xa748a031, "pskb_expand_head" },
	{ 0x2404021a, "netdev_err" },
	{ 0xabf7ad06, "ether_setup" },
	{ 0x5c8e2962, "dev_uc_unsync" },
	{ 0x77f7c399, "__dev_get_by_name" },
	{ 0xebaa9dc8, "kmem_cache_alloc_trace" },
	{ 0xdb9ca3c5, "_raw_spin_lock" },
	{ 0x4d0ad59d, "unregister_netdevice_queue" },
	{ 0xa3066230, "ip_route_output_flow" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0x9c64d457, "netdev_warn" },
	{ 0x2cfde9a2, "warn_slowpath_fmt" },
	{ 0x98f1a1f, "__skb_flow_get_ports" },
	{ 0x4289b6b9, "dev_set_promiscuity" },
	{ 0x8516c14a, "flow_get_u32_dst" },
	{ 0x37a0cba, "kfree" },
	{ 0x54aae658, "dev_uc_sync_multiple" },
	{ 0x9d669763, "memcpy" },
	{ 0x36138fcf, "param_array_ops" },
	{ 0x3fa2524a, "dev_trans_start" },
	{ 0xd1db92d5, "__dev_set_mtu" },
	{ 0xbc20d5eb, "rtnl_link_register" },
	{ 0x9e1c6cb1, "dev_uc_sync" },
	{ 0xfc40f5a2, "netdev_lower_get_first_private_rcu" },
	{ 0xa0dad88e, "netdev_adjacent_get_private" },
	{ 0xa8cd6c47, "nla_put_64bit" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0x4e3bb5bb, "__netpoll_free" },
	{ 0xc358aaf8, "snprintf" },
	{ 0x99bb8806, "memmove" },
	{ 0xa46a0f7a, "consume_skb" },
	{ 0x85670f1d, "rtnl_is_locked" },
	{ 0x5f5262d7, "netdev_update_lockdep_key" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x583bf5ea, "sysfs_create_file_ns" },
	{ 0x952da7ff, "dev_queue_xmit" },
	{ 0xd1c9ccf8, "netdev_is_rx_handler_busy" },
	{ 0xeab3fd69, "skb_put" },
	{ 0xec3d2e1b, "trace_hardirqs_off" },
	{ 0x8a331d2b, "param_ops_uint" },
	{ 0x9b73dda5, "skb_copy_bits" },
	{ 0xed969863, "dev_mc_sync" },
	{ 0xdf9208c0, "alloc_workqueue" },
	{ 0x7393e003, "dev_pre_changeaddr_notify" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0x69668826, "netdev_increment_features" },
	{ 0xdd3a2293, "dev_get_stats" },
	{ 0x6d267ea, "netdev_class_create_file_ns" },
	{ 0x8e926f59, "dev_set_mtu" },
	{ 0xe914e41e, "strcpy" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "939B8B8125207CA0C9BA879");
