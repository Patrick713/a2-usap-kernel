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
	{ 0xd4fc0c2b, "ethtool_op_get_ts_info" },
	{ 0x6d0a78c4, "ethtool_op_get_link" },
	{ 0xd52a670d, "eth_mac_addr" },
	{ 0x656a81e1, "passthru_features_check" },
	{ 0x9cd4091f, "rtnl_link_unregister" },
	{ 0xbc20d5eb, "rtnl_link_register" },
	{ 0x837332a0, "napi_complete_done" },
	{ 0x559b27f8, "xdp_do_flush_map" },
	{ 0x88e1d0f0, "page_frag_free" },
	{ 0x9e582bb6, "skb_headers_offset_update" },
	{ 0x6fa0b79d, "skb_copy_header" },
	{ 0x9b73dda5, "skb_copy_bits" },
	{ 0x987c11c7, "__pv_phys_pfn_offset" },
	{ 0x40fd1bb5, "__alloc_pages_nodemask" },
	{ 0xa46a0f7a, "consume_skb" },
	{ 0x76d11765, "mem_map" },
	{ 0x4f7a84c6, "napi_gro_receive" },
	{ 0xc1a46b0a, "bpf_redirect_info" },
	{ 0x20835a9f, "__xdp_release_frame" },
	{ 0x6172a623, "xdp_do_redirect" },
	{ 0xc4e588b, "eth_type_trans" },
	{ 0xeab3fd69, "skb_put" },
	{ 0x32146ca8, "build_skb" },
	{ 0x5c2bcd37, "bpf_warn_invalid_xdp_action" },
	{ 0xed3bb37b, "__tracepoint_xdp_exception" },
	{ 0xd653b126, "sched_clock" },
	{ 0xef2f70b5, "bpf_stats_enabled_key" },
	{ 0xe5c1dd2a, "xdp_convert_zc_to_xdp_frame" },
	{ 0x921b07b1, "__cpu_online_mask" },
	{ 0xeea2a102, "__tracepoint_xdp_bulk_tx" },
	{ 0xb0bb07b8, "xdp_return_frame_rx_napi" },
	{ 0xf7802486, "__aeabi_uidivmod" },
	{ 0x927d2b0f, "netif_rx" },
	{ 0x7ccbaf96, "skb_tstamp_tx" },
	{ 0xf9e956fe, "__dev_kfree_skb_any" },
	{ 0x899a31fa, "__napi_schedule" },
	{ 0xcb0dc57f, "napi_schedule_prep" },
	{ 0x53d903fd, "__dev_forward_skb" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0xbadd1a4b, "free_netdev" },
	{ 0xc47638c, "__put_net" },
	{ 0xf614d748, "rtnl_configure_link" },
	{ 0xc1e58a5f, "refcount_dec_and_test_checked" },
	{ 0xf6c8eae0, "register_netdevice" },
	{ 0xbdfbb977, "rtnl_create_link" },
	{ 0xe5e0008f, "rtnl_link_get_net" },
	{ 0x6cdc5c6b, "nla_strlcpy" },
	{ 0xe1e7e40c, "rtnl_nla_parse_ifla" },
	{ 0xa35dc8c8, "netif_carrier_off" },
	{ 0x63a94bc2, "netdev_update_features" },
	{ 0xf3494a9b, "bpf_prog_put" },
	{ 0x14bd341b, "netif_napi_del" },
	{ 0x609f1c7e, "synchronize_net" },
	{ 0x703002b6, "napi_hash_del" },
	{ 0x201aaac7, "napi_disable" },
	{ 0xa513fc17, "netif_carrier_on" },
	{ 0x7aa1756e, "kvfree" },
	{ 0xdb9ca3c5, "_raw_spin_lock" },
	{ 0x9f00a796, "netif_napi_add" },
	{ 0x49ebacbd, "_clear_bit" },
	{ 0x8dfefc0d, "kvmalloc_node" },
	{ 0x71751bc6, "xdp_rxq_info_unreg" },
	{ 0x7fe16418, "xdp_rxq_info_reg" },
	{ 0x90c362ea, "xdp_rxq_info_reg_mem_model" },
	{ 0xd08f76f2, "xdp_rxq_info_is_reg" },
	{ 0x2d6fcc06, "__kmalloc" },
	{ 0xcef4d5b4, "__alloc_percpu_gfp" },
	{ 0xc358aaf8, "snprintf" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xcf3fac84, "cpumask_next" },
	{ 0x341dbfa3, "__per_cpu_offset" },
	{ 0x1e96f43d, "__cpu_possible_mask" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0xd28c75bb, "kfree_skb" },
	{ 0x86c422d8, "xdp_return_frame" },
	{ 0x73e20c1c, "strlcpy" },
	{ 0xc9ec4e21, "free_percpu" },
	{ 0x37a0cba, "kfree" },
	{ 0xabf7ad06, "ether_setup" },
	{ 0x4d0ad59d, "unregister_netdevice_queue" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "A04ABDF64AF6251560FA7AF");
