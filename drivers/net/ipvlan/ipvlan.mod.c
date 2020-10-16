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
	{ 0xa77bfd29, "register_inet6addr_validator_notifier" },
	{ 0x18e60984, "__do_once_start" },
	{ 0xf4610713, "kmalloc_caches" },
	{ 0x3b8aaf89, "dev_forward_skb" },
	{ 0x8fa9c025, "dev_change_flags" },
	{ 0x5550cb70, "dev_mc_unsync" },
	{ 0xc32c71af, "register_inetaddr_validator_notifier" },
	{ 0xf68285c0, "register_inetaddr_notifier" },
	{ 0xab03ecd4, "ip_local_out" },
	{ 0x19f462ab, "kfree_call_rcu" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0xab63baa5, "unregister_inetaddr_validator_notifier" },
	{ 0xb421f750, "netdev_rx_handler_register" },
	{ 0xb545fc7c, "dst_release" },
	{ 0x2b5ab97d, "_raw_spin_lock_bh" },
	{ 0x36f6c5e6, "skb_clone" },
	{ 0xd2da1048, "register_netdevice_notifier" },
	{ 0x4205ad24, "cancel_work_sync" },
	{ 0x60352082, "register_inet6addr_notifier" },
	{ 0x2a15f9fd, "dev_set_allmulti" },
	{ 0x68dff5bb, "vlan_vid_del" },
	{ 0x809c64cf, "call_netdevice_notifiers" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0xb0823372, "vlan_vid_add" },
	{ 0x47c65bfc, "unregister_inet6addr_validator_notifier" },
	{ 0x5f38429a, "skb_scrub_packet" },
	{ 0xc9ec4e21, "free_percpu" },
	{ 0x9d0d6206, "unregister_netdevice_notifier" },
	{ 0xcf3fac84, "cpumask_next" },
	{ 0x927d2b0f, "netif_rx" },
	{ 0x3bdc1db7, "__pskb_pull_tail" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0x2fe252cc, "unregister_inet6addr_notifier" },
	{ 0x5f754e5a, "memset" },
	{ 0x1e96f43d, "__cpu_possible_mask" },
	{ 0x65e2bb05, "unregister_pernet_subsys" },
	{ 0x9fdecc31, "unregister_netdevice_many" },
	{ 0x5a0c18e7, "__ethtool_get_link_ksettings" },
	{ 0xc5850110, "printk" },
	{ 0x6d0a78c4, "ethtool_op_get_link" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0x19ad474, "nf_unregister_net_hooks" },
	{ 0x4025fd3f, "ns_capable" },
	{ 0xa24491bf, "ida_free" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0xa5c2e213, "nla_put" },
	{ 0x8dfa946, "netdev_upper_dev_unlink" },
	{ 0x73e20c1c, "strlcpy" },
	{ 0x9de4cfec, "netif_stacked_transfer_operstate" },
	{ 0x28f7fb79, "skb_pull" },
	{ 0x9cd4091f, "rtnl_link_unregister" },
	{ 0x12d56b7, "__dev_get_by_index" },
	{ 0xcef4d5b4, "__alloc_percpu_gfp" },
	{ 0x95800620, "ip_route_input_noref" },
	{ 0xfe029963, "unregister_inetaddr_notifier" },
	{ 0xd4432741, "ip6_route_output_flags" },
	{ 0xf6e27651, "nf_register_net_hooks" },
	{ 0x2b4b6151, "eth_header_cache_update" },
	{ 0x8f3625fe, "_raw_spin_unlock_bh" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x9b035330, "eth_header_parse" },
	{ 0x2140ea53, "netdev_rx_handler_unregister" },
	{ 0xee43fd9b, "___ratelimit" },
	{ 0xd28c75bb, "kfree_skb" },
	{ 0xb041ec8d, "register_pernet_subsys" },
	{ 0xfe5d6fcf, "netdev_upper_dev_link" },
	{ 0x2404021a, "netdev_err" },
	{ 0xabf7ad06, "ether_setup" },
	{ 0x5c8e2962, "dev_uc_unsync" },
	{ 0xebaa9dc8, "kmem_cache_alloc_trace" },
	{ 0xdb9ca3c5, "_raw_spin_lock" },
	{ 0x341dbfa3, "__per_cpu_offset" },
	{ 0x4d0ad59d, "unregister_netdevice_queue" },
	{ 0xa3066230, "ip_route_output_flow" },
	{ 0x31b9195c, "__local_bh_disable_ip" },
	{ 0x2cfde9a2, "warn_slowpath_fmt" },
	{ 0x37a0cba, "kfree" },
	{ 0x51b82b2d, "eth_header_cache" },
	{ 0xbc20d5eb, "rtnl_link_register" },
	{ 0x9e1c6cb1, "dev_uc_sync" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xb2d48a2e, "queue_work_on" },
	{ 0x2bf8ed1d, "ip6_local_out" },
	{ 0xa46a0f7a, "consume_skb" },
	{ 0x63a94bc2, "netdev_update_features" },
	{ 0x85670f1d, "rtnl_is_locked" },
	{ 0x952da7ff, "dev_queue_xmit" },
	{ 0xd1c9ccf8, "netdev_is_rx_handler_busy" },
	{ 0x4756260d, "ida_destroy" },
	{ 0xed969863, "dev_mc_sync" },
	{ 0x7393e003, "dev_pre_changeaddr_notify" },
	{ 0x69668826, "netdev_increment_features" },
	{ 0xa5684076, "ida_alloc_range" },
	{ 0x1249385b, "ip6_route_input_lookup" },
	{ 0x9a717656, "__do_once_done" },
};

MODULE_INFO(depends, "ipv6");


MODULE_INFO(srcversion, "212B3D0C11545A5CB3F5A03");
