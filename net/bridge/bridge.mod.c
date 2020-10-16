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
	{ 0x6d662533, "_find_first_bit_le" },
	{ 0x22f8c1ca, "kobject_put" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x2680385, "kmem_cache_destroy" },
	{ 0x319ec023, "neigh_lookup" },
	{ 0xf4610713, "kmalloc_caches" },
	{ 0x2d6fcc06, "__kmalloc" },
	{ 0x63f012b1, "stp_proto_unregister" },
	{ 0x5261322c, "rht_bucket_nested" },
	{ 0x73aa9149, "sysfs_remove_bin_file" },
	{ 0x349cba85, "strchr" },
	{ 0xf7575cdb, "nf_queue" },
	{ 0x81ba3b86, "percpu_counter_destroy" },
	{ 0x7b52e38, "rtnl_unregister" },
	{ 0x91eb9b4, "round_jiffies" },
	{ 0xf7c57d7b, "netdev_notice" },
	{ 0x984ce9bd, "__nla_parse" },
	{ 0x2b68bd2f, "del_timer" },
	{ 0x97255bdf, "strlen" },
	{ 0x590c8917, "dev_get_flags" },
	{ 0x60a13e90, "rcu_barrier" },
	{ 0xa45cb23e, "ipv6_chk_addr" },
	{ 0xeaa8f3d7, "dev_disable_lro" },
	{ 0x19f462ab, "kfree_call_rcu" },
	{ 0xfe90c4a6, "_find_first_zero_bit_le" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0x3b144889, "dev_uc_add" },
	{ 0xb421f750, "netdev_rx_handler_register" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0xcf60d03a, "ipv6_dev_mc_dec" },
	{ 0xe154e316, "arp_tbl" },
	{ 0x1bdb8ad6, "kobject_uevent" },
	{ 0xa513fc17, "netif_carrier_on" },
	{ 0xb545fc7c, "dst_release" },
	{ 0x2b5ab97d, "_raw_spin_lock_bh" },
	{ 0x36f6c5e6, "skb_clone" },
	{ 0x20000329, "simple_strtoul" },
	{ 0xb23c7123, "skb_copy" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xd3f57a2, "_find_next_bit_le" },
	{ 0x2124474, "ip_send_check" },
	{ 0xf513bc98, "__vlan_find_dev_deep_rcu" },
	{ 0xd2da1048, "register_netdevice_notifier" },
	{ 0xa35dc8c8, "netif_carrier_off" },
	{ 0x60220d40, "rtnl_notify" },
	{ 0x7e28136, "ipv6_dev_mc_inc" },
	{ 0x4c90dc00, "netdev_master_upper_dev_get" },
	{ 0x221f2314, "net_ns_get_ownership" },
	{ 0x2a15f9fd, "dev_set_allmulti" },
	{ 0xb9d28437, "is_skb_forwardable" },
	{ 0x809c64cf, "call_netdevice_notifiers" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xae353d77, "arm_copy_from_user" },
	{ 0x29d9f26e, "cancel_delayed_work_sync" },
	{ 0x866aed9a, "kobject_del" },
	{ 0x311e2641, "__tracepoint_br_fdb_external_learn_add" },
	{ 0x76dbda3b, "neigh_destroy" },
	{ 0xcc7628df, "__netpoll_setup" },
	{ 0x28aa6a67, "call_rcu" },
	{ 0x5fb4c87b, "__tracepoint_fdb_delete" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xb6529965, "rhashtable_insert_slow" },
	{ 0x422678a0, "nf_hooks_needed" },
	{ 0xe7e2a1cd, "in_dev_finish_destroy" },
	{ 0xd697e69a, "trace_hardirqs_on" },
	{ 0xa4040d67, "sysfs_remove_group" },
	{ 0xdd75d616, "netdev_walk_all_upper_dev_rcu" },
	{ 0x85be31e3, "__ip_mc_inc_group" },
	{ 0x526c3a6c, "jiffies" },
	{ 0xc9ec4e21, "free_percpu" },
	{ 0x9d0d6206, "unregister_netdevice_notifier" },
	{ 0x51a910c0, "arm_copy_to_user" },
	{ 0xf5cdf088, "nf_hook_slow" },
	{ 0x65465214, "skb_trim" },
	{ 0xaf22ee50, "kobject_create_and_add" },
	{ 0x131db64a, "system_long_wq" },
	{ 0xcf3fac84, "cpumask_next" },
	{ 0x28595189, "netdev_master_upper_dev_link" },
	{ 0x47a25702, "rhashtable_destroy" },
	{ 0x718ae3f2, "__netdev_alloc_skb" },
	{ 0x9eb7ecd0, "ip_mc_check_igmp" },
	{ 0x927d2b0f, "netif_rx" },
	{ 0x3bdc1db7, "__pskb_pull_tail" },
	{ 0x37026633, "netpoll_send_skb_on_dev" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0xf1db1704, "nla_memcpy" },
	{ 0x52dc69ef, "rht_bucket_nested_insert" },
	{ 0x2688ec10, "bitmap_zalloc" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0x5f754e5a, "memset" },
	{ 0x80df3806, "netif_rx_ni" },
	{ 0x1e96f43d, "__cpu_possible_mask" },
	{ 0x65e2bb05, "unregister_pernet_subsys" },
	{ 0x9fdecc31, "unregister_netdevice_many" },
	{ 0x87c2d8db, "sysfs_rename_link_ns" },
	{ 0x419d4e81, "__tracepoint_br_fdb_update" },
	{ 0xf70b267f, "rtnl_register_module" },
	{ 0x2db07f1a, "stp_proto_register" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0x5a0c18e7, "__ethtool_get_link_ksettings" },
	{ 0xea0ea4c6, "arp_create" },
	{ 0x6d294e43, "clock_t_to_jiffies" },
	{ 0xc5850110, "printk" },
	{ 0x6d0a78c4, "ethtool_op_get_link" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0xf63fc023, "sysfs_create_group" },
	{ 0x71c90087, "memcmp" },
	{ 0x921b07b1, "__cpu_online_mask" },
	{ 0x77d404e1, "inet_select_addr" },
	{ 0x4025fd3f, "ns_capable" },
	{ 0x9c6ba44, "__skb_warn_lro_forwarding" },
	{ 0x93a6913e, "kobject_init_and_add" },
	{ 0xea4a09cb, "mod_delayed_work_on" },
	{ 0xcd279169, "nla_find" },
	{ 0xbadd1a4b, "free_netdev" },
	{ 0x9e201792, "llc_mac_hdr_init" },
	{ 0xcc7044cf, "register_netdev" },
	{ 0xa5c2e213, "nla_put" },
	{ 0x36fbf3aa, "netif_receive_skb" },
	{ 0x8dfa946, "netdev_upper_dev_unlink" },
	{ 0x84b183ae, "strncmp" },
	{ 0x3e34b808, "ndo_dflt_fdb_dump" },
	{ 0x73e20c1c, "strlcpy" },
	{ 0xbb9f1908, "kmem_cache_free" },
	{ 0xf68b0045, "skb_push" },
	{ 0x652032cb, "mac_pton" },
	{ 0xf1fad20d, "__tracepoint_br_fdb_add" },
	{ 0x58f4a5ae, "arp_send" },
	{ 0xf4f14de6, "rtnl_trylock" },
	{ 0xa7eedcc4, "call_usermodehelper" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x43dccf22, "rtnl_af_unregister" },
	{ 0xc1e58a5f, "refcount_dec_and_test_checked" },
	{ 0x6f8a0fde, "sysfs_remove_link" },
	{ 0x500f25ac, "ipv6_mc_check_icmpv6" },
	{ 0x28f7fb79, "skb_pull" },
	{ 0x42be6d9f, "inet_confirm_addr" },
	{ 0xe6e04598, "ipv6_stub" },
	{ 0xd2aeaa09, "init_net" },
	{ 0x7e3191f6, "try_to_del_timer_sync" },
	{ 0x9cd4091f, "rtnl_link_unregister" },
	{ 0x12d56b7, "__dev_get_by_index" },
	{ 0x789a232d, "__ip_mc_dec_group" },
	{ 0x5807e2d3, "nla_reserve_64bit" },
	{ 0x49f26466, "kstrndup" },
	{ 0xcef4d5b4, "__alloc_percpu_gfp" },
	{ 0xdc9ffd3a, "ipv6_dev_get_saddr" },
	{ 0x9cb0f84b, "sysfs_create_link" },
	{ 0x5a1f4736, "rtnl_set_sk_err" },
	{ 0x4007496c, "kmem_cache_alloc" },
	{ 0x22bf2ba1, "__alloc_skb" },
	{ 0xdec1e60d, "rtnl_af_register" },
	{ 0x8f3625fe, "_raw_spin_unlock_bh" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x2140ea53, "netdev_rx_handler_unregister" },
	{ 0xd28c75bb, "kfree_skb" },
	{ 0x8148f66f, "nla_put_nohdr" },
	{ 0x656a81e1, "passthru_features_check" },
	{ 0x5c5b2589, "alloc_netdev_mqs" },
	{ 0x15e8fedc, "arp_xmit" },
	{ 0xcd89de, "brioctl_set" },
	{ 0xb041ec8d, "register_pernet_subsys" },
	{ 0x4bf1b7df, "__percpu_counter_init" },
	{ 0x2404021a, "netdev_err" },
	{ 0xabf7ad06, "ether_setup" },
	{ 0x77f7c399, "__dev_get_by_name" },
	{ 0x81025e51, "netdev_state_change" },
	{ 0xebaa9dc8, "kmem_cache_alloc_trace" },
	{ 0xdb9ca3c5, "_raw_spin_lock" },
	{ 0x341dbfa3, "__per_cpu_offset" },
	{ 0xca21ebd3, "bitmap_free" },
	{ 0x4c0e8130, "kmem_cache_create" },
	{ 0x4d0ad59d, "unregister_netdevice_queue" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0x31b9195c, "__local_bh_disable_ip" },
	{ 0x9405c2d3, "rhashtable_init" },
	{ 0x2cfde9a2, "warn_slowpath_fmt" },
	{ 0x44da5d0f, "__csum_ipv6_magic" },
	{ 0x4289b6b9, "dev_set_promiscuity" },
	{ 0x37a0cba, "kfree" },
	{ 0x3cb8450c, "dev_get_iflink" },
	{ 0x9d669763, "memcpy" },
	{ 0xf1341ff0, "sysfs_create_bin_file" },
	{ 0xbc20d5eb, "rtnl_link_register" },
	{ 0x4226c7bc, "dev_uc_del" },
	{ 0xa8cd6c47, "nla_put_64bit" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x7d0db45c, "jiffies_to_clock_t" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0x4e3bb5bb, "__netpoll_free" },
	{ 0xb2d48a2e, "queue_work_on" },
	{ 0xe113bbbc, "csum_partial" },
	{ 0xa46a0f7a, "consume_skb" },
	{ 0x63a94bc2, "netdev_update_features" },
	{ 0x1ee8d6d4, "refcount_inc_checked" },
	{ 0x85670f1d, "rtnl_is_locked" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x583bf5ea, "sysfs_create_file_ns" },
	{ 0x952da7ff, "dev_queue_xmit" },
	{ 0x49ebacbd, "_clear_bit" },
	{ 0xeab3fd69, "skb_put" },
	{ 0x23776212, "ipv6_mc_check_mld" },
	{ 0xec3d2e1b, "trace_hardirqs_off" },
	{ 0x94499ccd, "__nlmsg_put" },
	{ 0x9b73dda5, "skb_copy_bits" },
	{ 0xa038f306, "__rht_bucket_nested" },
	{ 0x7393e003, "dev_pre_changeaddr_notify" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0x69668826, "netdev_increment_features" },
	{ 0x8e926f59, "dev_set_mtu" },
	{ 0x7f4d03da, "netdev_lower_get_next" },
};

MODULE_INFO(depends, "stp,ipv6,llc");


MODULE_INFO(srcversion, "784DA7B77063A8FEA54C821");
