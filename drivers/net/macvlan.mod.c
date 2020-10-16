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
	{ 0x2d3385d3, "system_wq" },
	{ 0xf4610713, "kmalloc_caches" },
	{ 0x3b8aaf89, "dev_forward_skb" },
	{ 0x5550cb70, "dev_mc_unsync" },
	{ 0x19f462ab, "kfree_call_rcu" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0x3b144889, "dev_uc_add" },
	{ 0x53d903fd, "__dev_forward_skb" },
	{ 0x8d93d849, "dev_mc_add_excl" },
	{ 0xb421f750, "netdev_rx_handler_register" },
	{ 0xbb8213a6, "dev_uc_add_excl" },
	{ 0x2b5ab97d, "_raw_spin_lock_bh" },
	{ 0x36f6c5e6, "skb_clone" },
	{ 0xd2da1048, "register_netdevice_notifier" },
	{ 0x4205ad24, "cancel_work_sync" },
	{ 0x2a15f9fd, "dev_set_allmulti" },
	{ 0x68dff5bb, "vlan_vid_del" },
	{ 0x809c64cf, "call_netdevice_notifiers" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0x7ff78d93, "linkwatch_fire_event" },
	{ 0xb0823372, "vlan_vid_add" },
	{ 0xcc7628df, "__netpoll_setup" },
	{ 0xeea0399, "strscpy" },
	{ 0xd697e69a, "trace_hardirqs_on" },
	{ 0xc9ec4e21, "free_percpu" },
	{ 0x9d0d6206, "unregister_netdevice_notifier" },
	{ 0xcf3fac84, "cpumask_next" },
	{ 0x927d2b0f, "netif_rx" },
	{ 0x37026633, "netpoll_send_skb_on_dev" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0x5f754e5a, "memset" },
	{ 0x80df3806, "netif_rx_ni" },
	{ 0x2abd60df, "dev_set_mac_address" },
	{ 0x1e96f43d, "__cpu_possible_mask" },
	{ 0x6b405633, "ip_check_defrag" },
	{ 0x9fdecc31, "unregister_netdevice_many" },
	{ 0x5a0c18e7, "__ethtool_get_link_ksettings" },
	{ 0x6d0a78c4, "ethtool_op_get_link" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x2a88feb0, "dev_mc_del" },
	{ 0xa5c2e213, "nla_put" },
	{ 0x8dfa946, "netdev_upper_dev_unlink" },
	{ 0x3e34b808, "ndo_dflt_fdb_dump" },
	{ 0x73e20c1c, "strlcpy" },
	{ 0x9de4cfec, "netif_stacked_transfer_operstate" },
	{ 0x6091797f, "synchronize_rcu" },
	{ 0xd2aeaa09, "init_net" },
	{ 0x9cd4091f, "rtnl_link_unregister" },
	{ 0x12d56b7, "__dev_get_by_index" },
	{ 0xcef4d5b4, "__alloc_percpu_gfp" },
	{ 0x2b4b6151, "eth_header_cache_update" },
	{ 0x8f3625fe, "_raw_spin_unlock_bh" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x2140ea53, "netdev_rx_handler_unregister" },
	{ 0x9b035330, "eth_header_parse" },
	{ 0xd28c75bb, "kfree_skb" },
	{ 0x656a81e1, "passthru_features_check" },
	{ 0xfe5d6fcf, "netdev_upper_dev_link" },
	{ 0xabf7ad06, "ether_setup" },
	{ 0x5c8e2962, "dev_uc_unsync" },
	{ 0xebaa9dc8, "kmem_cache_alloc_trace" },
	{ 0xdb9ca3c5, "_raw_spin_lock" },
	{ 0x341dbfa3, "__per_cpu_offset" },
	{ 0x4d0ad59d, "unregister_netdevice_queue" },
	{ 0x12bc1f9d, "eth_validate_addr" },
	{ 0x4289b6b9, "dev_set_promiscuity" },
	{ 0x37a0cba, "kfree" },
	{ 0xcc82750f, "dev_change_proto_down_generic" },
	{ 0x9d669763, "memcpy" },
	{ 0x51b82b2d, "eth_header_cache" },
	{ 0xbc20d5eb, "rtnl_link_register" },
	{ 0x4226c7bc, "dev_uc_del" },
	{ 0x9e1c6cb1, "dev_uc_sync" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x4e3bb5bb, "__netpoll_free" },
	{ 0xb2d48a2e, "queue_work_on" },
	{ 0xa46a0f7a, "consume_skb" },
	{ 0x63a94bc2, "netdev_update_features" },
	{ 0x9f99bee, "dev_queue_xmit_accel" },
	{ 0xd1c9ccf8, "netdev_is_rx_handler_busy" },
	{ 0xec3d2e1b, "trace_hardirqs_off" },
	{ 0xed969863, "dev_mc_sync" },
	{ 0x69668826, "netdev_increment_features" },
	{ 0x8e926f59, "dev_set_mtu" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "9D37EBBED69D1EBDA3940F8");
