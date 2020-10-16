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
	{ 0xf4610713, "kmalloc_caches" },
	{ 0x8fa9c025, "dev_change_flags" },
	{ 0xa32723bb, "vlan_filter_push_vids" },
	{ 0x5550cb70, "dev_mc_unsync" },
	{ 0x53a66f04, "vlan_filter_drop_vids" },
	{ 0x590c8917, "dev_get_flags" },
	{ 0x60a13e90, "rcu_barrier" },
	{ 0x53adbbd1, "proc_create_single_data" },
	{ 0x5109576d, "garp_uninit_applicant" },
	{ 0xb168d664, "vlan_dev_vlan_id" },
	{ 0x3b144889, "dev_uc_add" },
	{ 0x5d7776e5, "seq_puts" },
	{ 0x2c49b794, "garp_request_join" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0x539dbda0, "vlan_uses_dev" },
	{ 0xa513fc17, "netif_carrier_on" },
	{ 0xc8275115, "seq_printf" },
	{ 0xd2da1048, "register_netdevice_notifier" },
	{ 0xa35dc8c8, "netif_carrier_off" },
	{ 0xae947aa3, "remove_proc_entry" },
	{ 0x2a15f9fd, "dev_set_allmulti" },
	{ 0x68dff5bb, "vlan_vid_del" },
	{ 0x809c64cf, "call_netdevice_notifiers" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0x7ff78d93, "linkwatch_fire_event" },
	{ 0xae353d77, "arm_copy_from_user" },
	{ 0xb0823372, "vlan_vid_add" },
	{ 0xcc7628df, "__netpoll_setup" },
	{ 0x4d1dd709, "garp_init_applicant" },
	{ 0xd697e69a, "trace_hardirqs_on" },
	{ 0xc9ec4e21, "free_percpu" },
	{ 0x9d0d6206, "unregister_netdevice_notifier" },
	{ 0x51a910c0, "arm_copy_to_user" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xcf3fac84, "cpumask_next" },
	{ 0x31709530, "proc_remove" },
	{ 0x3db6950, "vlan_ioctl_set" },
	{ 0x37026633, "netpoll_send_skb_on_dev" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0x1e96f43d, "__cpu_possible_mask" },
	{ 0x65e2bb05, "unregister_pernet_subsys" },
	{ 0x9fdecc31, "unregister_netdevice_many" },
	{ 0x5a0c18e7, "__ethtool_get_link_ksettings" },
	{ 0xc5850110, "printk" },
	{ 0x6d0a78c4, "ethtool_op_get_link" },
	{ 0x4025fd3f, "ns_capable" },
	{ 0xbadd1a4b, "free_netdev" },
	{ 0x328a05f1, "strncpy" },
	{ 0x9bb9c5aa, "garp_register_application" },
	{ 0xa5c2e213, "nla_put" },
	{ 0x8dfa946, "netdev_upper_dev_unlink" },
	{ 0x73e20c1c, "strlcpy" },
	{ 0xf68b0045, "skb_push" },
	{ 0x195e2e01, "proc_mkdir_data" },
	{ 0x9de4cfec, "netif_stacked_transfer_operstate" },
	{ 0xd2aeaa09, "init_net" },
	{ 0x9cd4091f, "rtnl_link_unregister" },
	{ 0x12d56b7, "__dev_get_by_index" },
	{ 0xc7bd5cd, "garp_request_leave" },
	{ 0xcef4d5b4, "__alloc_percpu_gfp" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x9b035330, "eth_header_parse" },
	{ 0x5c5b2589, "alloc_netdev_mqs" },
	{ 0xb041ec8d, "register_pernet_subsys" },
	{ 0xfe5d6fcf, "netdev_upper_dev_link" },
	{ 0x1fe88ae5, "proc_create_net_data" },
	{ 0xabf7ad06, "ether_setup" },
	{ 0x5c8e2962, "dev_uc_unsync" },
	{ 0x77f7c399, "__dev_get_by_name" },
	{ 0xebaa9dc8, "kmem_cache_alloc_trace" },
	{ 0x69553002, "garp_unregister_application" },
	{ 0x341dbfa3, "__per_cpu_offset" },
	{ 0x4d0ad59d, "unregister_netdevice_queue" },
	{ 0x9c64d457, "netdev_warn" },
	{ 0x12bc1f9d, "eth_validate_addr" },
	{ 0x2cfde9a2, "warn_slowpath_fmt" },
	{ 0x4289b6b9, "dev_set_promiscuity" },
	{ 0x37a0cba, "kfree" },
	{ 0x9d669763, "memcpy" },
	{ 0x58b4645c, "dev_close_many" },
	{ 0xbc20d5eb, "rtnl_link_register" },
	{ 0x4226c7bc, "dev_uc_del" },
	{ 0x9e1c6cb1, "dev_uc_sync" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x4e3bb5bb, "__netpoll_free" },
	{ 0xc358aaf8, "snprintf" },
	{ 0x1fc7a59b, "__nla_validate" },
	{ 0x63a94bc2, "netdev_update_features" },
	{ 0x85670f1d, "rtnl_is_locked" },
	{ 0x952da7ff, "dev_queue_xmit" },
	{ 0xec3d2e1b, "trace_hardirqs_off" },
	{ 0xed969863, "dev_mc_sync" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0xdd3a2293, "dev_get_stats" },
	{ 0x8e926f59, "dev_set_mtu" },
};

MODULE_INFO(depends, "garp");


MODULE_INFO(srcversion, "90AC329A6F699640D74A137");
