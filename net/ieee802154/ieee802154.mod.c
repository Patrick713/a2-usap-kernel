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
	{ 0x93c5088e, "class_find_device" },
	{ 0xf4610713, "kmalloc_caches" },
	{ 0x2d6fcc06, "__kmalloc" },
	{ 0xddb05797, "get_net_ns_by_fd" },
	{ 0xda6c2db5, "register_pernet_device" },
	{ 0xf246c744, "trace_handle_return" },
	{ 0xc5688156, "genl_register_family" },
	{ 0x984ce9bd, "__nla_parse" },
	{ 0x97255bdf, "strlen" },
	{ 0x46ae4a33, "genl_unregister_family" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0xeee43661, "dev_change_net_namespace" },
	{ 0x98335fc9, "dev_get_by_name" },
	{ 0x21483f9d, "device_match_name" },
	{ 0xd2da1048, "register_netdevice_notifier" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0xe78a8482, "trace_event_buffer_reserve" },
	{ 0x86f36257, "get_net_ns_by_pid" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xc47638c, "__put_net" },
	{ 0x195ae37b, "bpf_trace_run3" },
	{ 0x9d0d6206, "unregister_netdevice_notifier" },
	{ 0x65465214, "skb_trim" },
	{ 0x3bdc1db7, "__pskb_pull_tail" },
	{ 0x5bbe49f4, "__init_waitqueue_head" },
	{ 0xf1db1704, "nla_memcpy" },
	{ 0xe3c7c8d7, "trace_define_field" },
	{ 0x5f754e5a, "memset" },
	{ 0x2abd60df, "dev_set_mac_address" },
	{ 0xc1c73f49, "device_del" },
	{ 0x18323d8c, "bpf_trace_run1" },
	{ 0x39a12ca7, "_raw_spin_unlock_irqrestore" },
	{ 0xfcf7a3d, "unregister_pernet_device" },
	{ 0x921b07b1, "__cpu_online_mask" },
	{ 0xe4c122d0, "class_unregister" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x17961cdc, "trace_event_reg" },
	{ 0xa5c2e213, "nla_put" },
	{ 0x73e20c1c, "strlcpy" },
	{ 0xf68b0045, "skb_push" },
	{ 0xd2584221, "dev_get_by_index" },
	{ 0xf918f903, "netlink_unicast" },
	{ 0xc1e58a5f, "refcount_dec_and_test_checked" },
	{ 0x1b018b60, "device_add" },
	{ 0x6091797f, "synchronize_rcu" },
	{ 0x28f7fb79, "skb_pull" },
	{ 0xd2aeaa09, "init_net" },
	{ 0x621255c5, "__class_register" },
	{ 0xbb55582d, "perf_trace_run_bpf_submit" },
	{ 0x12d56b7, "__dev_get_by_index" },
	{ 0xaaecf75d, "perf_trace_buf_alloc" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xf116661b, "class_for_each_device" },
	{ 0x22bf2ba1, "__alloc_skb" },
	{ 0x2b560e16, "netlink_broadcast" },
	{ 0x47ae0e60, "trace_event_ignore_this_pid" },
	{ 0xebcc8bdd, "put_device" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x1000e51, "schedule" },
	{ 0xd28c75bb, "kfree_skb" },
	{ 0xe3cfc0d5, "genl_family_attrbuf" },
	{ 0x4446417b, "trace_event_buffer_commit" },
	{ 0x96062db8, "device_rename" },
	{ 0xebaa9dc8, "kmem_cache_alloc_trace" },
	{ 0x5f849a69, "_raw_spin_lock_irqsave" },
	{ 0xde147102, "get_device" },
	{ 0x3dcf1ffa, "__wake_up" },
	{ 0x405aa597, "event_triggers_call" },
	{ 0x647af474, "prepare_to_wait_event" },
	{ 0x6a4010ed, "bpf_trace_run2" },
	{ 0x2cfde9a2, "warn_slowpath_fmt" },
	{ 0x37a0cba, "kfree" },
	{ 0x9d669763, "memcpy" },
	{ 0x9dc921, "trace_event_raw_init" },
	{ 0xf45f59f7, "genlmsg_put" },
	{ 0x6cdc5c6b, "nla_strlcpy" },
	{ 0x9dc3b2ba, "device_initialize" },
	{ 0x49970de8, "finish_wait" },
	{ 0xa8cd6c47, "nla_put_64bit" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xca0ad6f1, "trace_raw_output_prep" },
	{ 0xb19e8429, "trace_seq_printf" },
	{ 0xa5f41a74, "trace_output_call" },
	{ 0xe54dbfa5, "dev_set_name" },
	{ 0x85670f1d, "rtnl_is_locked" },
	{ 0xdc28f1bc, "bpf_trace_run4" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0xe914e41e, "strcpy" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "10F8468F340C701824AF3A3");
