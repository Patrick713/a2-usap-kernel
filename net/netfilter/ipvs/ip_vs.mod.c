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
	{ 0x6d89b199, "proc_dointvec_minmax" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xb76b5caa, "release_sock" },
	{ 0x2680385, "kmem_cache_destroy" },
	{ 0xa24f23d8, "__request_module" },
	{ 0xf4610713, "kmalloc_caches" },
	{ 0x711b8a9b, "__crc32c_le_shift" },
	{ 0x2d6fcc06, "__kmalloc" },
	{ 0xff178f6, "__aeabi_idivmod" },
	{ 0xda6c2db5, "register_pernet_device" },
	{ 0x20e1a7dd, "nf_ct_netns_put" },
	{ 0x11201734, "kernel_sendmsg" },
	{ 0xc5688156, "genl_register_family" },
	{ 0xd6ee688f, "vmalloc" },
	{ 0x9a152689, "param_ops_int" },
	{ 0x984ce9bd, "__nla_parse" },
	{ 0x2b68bd2f, "del_timer" },
	{ 0x97255bdf, "strlen" },
	{ 0x60a13e90, "rcu_barrier" },
	{ 0x46ae4a33, "genl_unregister_family" },
	{ 0xab03ecd4, "ip_local_out" },
	{ 0xb96a6616, "unregister_net_sysctl_table" },
	{ 0x5a6cdb52, "nf_ct_zone_dflt" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0x5d7776e5, "seq_puts" },
	{ 0x86eb0c08, "proc_dointvec" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0x639acd78, "sock_release" },
	{ 0xb545fc7c, "dst_release" },
	{ 0x2b5ab97d, "_raw_spin_lock_bh" },
	{ 0x523c1a44, "ipv4_update_pmtu" },
	{ 0x12b6921, "proc_create_net_single" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x2124474, "ip_send_check" },
	{ 0x770f06c1, "sock_recvmsg" },
	{ 0xc8275115, "seq_printf" },
	{ 0xd2da1048, "register_netdevice_notifier" },
	{ 0x4205ad24, "cancel_work_sync" },
	{ 0xae947aa3, "remove_proc_entry" },
	{ 0xb1b939e, "kmemdup" },
	{ 0x50c89f23, "__alloc_percpu" },
	{ 0x4a3bee79, "nf_ct_expect_init" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0x37cc1f05, "init_user_ns" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xae353d77, "arm_copy_from_user" },
	{ 0x59eb8df1, "sock_create_kern" },
	{ 0x29d9f26e, "cancel_delayed_work_sync" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0x9ac31d03, "__skb_checksum" },
	{ 0x5d4e7fad, "skb_set_owner_w" },
	{ 0x999e8297, "vfree" },
	{ 0xffc3b6c4, "__icmp_send" },
	{ 0x28aa6a67, "call_rcu" },
	{ 0xeea0399, "strscpy" },
	{ 0xb15b4109, "crc32c" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x54fbd86c, "skb_realloc_headroom" },
	{ 0xceac0b99, "nf_ct_deliver_cached_events" },
	{ 0x422678a0, "nf_hooks_needed" },
	{ 0x40c7247c, "si_meminfo" },
	{ 0xdd34010a, "kthread_create_on_node" },
	{ 0xe2b5e146, "refcount_inc_not_zero_checked" },
	{ 0x526c3a6c, "jiffies" },
	{ 0xc9ec4e21, "free_percpu" },
	{ 0x9d0d6206, "unregister_netdevice_notifier" },
	{ 0x51a910c0, "arm_copy_to_user" },
	{ 0xdd4ffa9b, "mutex_trylock" },
	{ 0xf5cdf088, "nf_hook_slow" },
	{ 0x65465214, "skb_trim" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xcf3fac84, "cpumask_next" },
	{ 0x80377a0d, "nf_ct_delete" },
	{ 0x3bdc1db7, "__pskb_pull_tail" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0xf1db1704, "nla_memcpy" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0xa289cf4, "ip_defrag" },
	{ 0x5f754e5a, "memset" },
	{ 0x92aeea7b, "skb_checksum" },
	{ 0x1e96f43d, "__cpu_possible_mask" },
	{ 0x65e2bb05, "unregister_pernet_subsys" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0x2cbc8590, "__nf_conntrack_confirm" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0x7bfbe88e, "kthread_stop" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0x4f9db95e, "inet_addr_type" },
	{ 0xdcb92140, "lock_sock_nested" },
	{ 0xfcf7a3d, "unregister_pernet_device" },
	{ 0x77d404e1, "inet_select_addr" },
	{ 0x19ad474, "nf_unregister_net_hooks" },
	{ 0x4025fd3f, "ns_capable" },
	{ 0xcb28fe43, "nf_ct_expect_put" },
	{ 0xdb953a09, "ip_mc_join_group" },
	{ 0x87d81478, "iov_iter_kvec" },
	{ 0x76c4b4a2, "skb_ensure_writable" },
	{ 0xc1769b54, "nf_ct_expect_alloc" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x2f50cbf5, "proc_doulongvec_minmax" },
	{ 0xa5c2e213, "nla_put" },
	{ 0x17a7462, "seq_putc" },
	{ 0x73e20c1c, "strlcpy" },
	{ 0xbb9f1908, "kmem_cache_free" },
	{ 0xf68b0045, "skb_push" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0xdad75e3f, "ip_route_me_harder" },
	{ 0x6b14bd2b, "nf_conntrack_alter_reply" },
	{ 0xf4f14de6, "rtnl_trylock" },
	{ 0x8525bff4, "nf_ct_expect_related_report" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0xf918f903, "netlink_unicast" },
	{ 0xc6f3b3fc, "refcount_dec_if_one" },
	{ 0xc1e58a5f, "refcount_dec_and_test_checked" },
	{ 0xfda9581f, "prandom_u32" },
	{ 0x6091797f, "synchronize_rcu" },
	{ 0xd2aeaa09, "init_net" },
	{ 0x27c6bc4f, "__skb_get_hash" },
	{ 0x2196324, "__aeabi_idiv" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xb05fc310, "sysctl_rmem_max" },
	{ 0xfac8865f, "sysctl_wmem_max" },
	{ 0x12b548f6, "module_put" },
	{ 0x4007496c, "kmem_cache_alloc" },
	{ 0x22bf2ba1, "__alloc_skb" },
	{ 0xd9ce8f0c, "strnlen" },
	{ 0xf6e27651, "nf_register_net_hooks" },
	{ 0xa8223179, "refcount_dec_checked" },
	{ 0x8f3625fe, "_raw_spin_unlock_bh" },
	{ 0xcf86cdac, "queue_delayed_work_on" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xc8827b75, "sysctl_vals" },
	{ 0x654849ea, "nf_unregister_sockopt" },
	{ 0x1000e51, "schedule" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0xd28c75bb, "kfree_skb" },
	{ 0xb35d51ab, "wake_up_process" },
	{ 0xb041ec8d, "register_pernet_subsys" },
	{ 0xa748a031, "pskb_expand_head" },
	{ 0x1fe88ae5, "proc_create_net_data" },
	{ 0x77f7c399, "__dev_get_by_name" },
	{ 0xebaa9dc8, "kmem_cache_alloc_trace" },
	{ 0xdb9ca3c5, "_raw_spin_lock" },
	{ 0xac3201b0, "udp_flow_hashrnd" },
	{ 0x8bc2a1b4, "iptunnel_handle_offloads" },
	{ 0x341dbfa3, "__per_cpu_offset" },
	{ 0x2a18c74, "nf_conntrack_destroy" },
	{ 0x4c0e8130, "kmem_cache_create" },
	{ 0xa3066230, "ip_route_output_flow" },
	{ 0xb66bc471, "__module_get" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0xb3f7646e, "kthread_should_stop" },
	{ 0x647af474, "prepare_to_wait_event" },
	{ 0x31b9195c, "__local_bh_disable_ip" },
	{ 0x2cfde9a2, "warn_slowpath_fmt" },
	{ 0x37a0cba, "kfree" },
	{ 0x9d669763, "memcpy" },
	{ 0x6e4ac99c, "udp_set_csum" },
	{ 0xf45f59f7, "genlmsg_put" },
	{ 0x49970de8, "finish_wait" },
	{ 0xd8ba03c2, "nf_ct_netns_get" },
	{ 0xa8cd6c47, "nla_put_64bit" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x264ad5e, "nf_register_sockopt" },
	{ 0xc358aaf8, "snprintf" },
	{ 0x1e0a0c24, "mod_timer_pending" },
	{ 0xe113bbbc, "csum_partial" },
	{ 0xa46a0f7a, "consume_skb" },
	{ 0x1ee8d6d4, "refcount_inc_checked" },
	{ 0xa373e597, "register_net_sysctl" },
	{ 0x61c76b3a, "proc_dointvec_jiffies" },
	{ 0x9b73dda5, "skb_copy_bits" },
	{ 0x27fa66e1, "nr_free_buffer_pages" },
	{ 0x7858da81, "inet_get_local_port_range" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0xe915d00f, "__ip_select_ident" },
	{ 0x717bcdac, "try_module_get" },
	{ 0xb5b04fd7, "nf_conntrack_find_get" },
	{ 0xe914e41e, "strcpy" },
	{ 0xb6f126c2, "nf_ct_ext_add" },
};

MODULE_INFO(depends, "nf_conntrack");


MODULE_INFO(srcversion, "98DD4131B07F10BFC6DEB65");