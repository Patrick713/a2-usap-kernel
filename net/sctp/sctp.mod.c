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
	{ 0x4199fd5c, "skb_queue_head" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xb76b5caa, "release_sock" },
	{ 0x2680385, "kmem_cache_destroy" },
	{ 0x2690e6c1, "_find_next_zero_bit_le" },
	{ 0xf4610713, "kmalloc_caches" },
	{ 0x711b8a9b, "__crc32c_le_shift" },
	{ 0x2d6fcc06, "__kmalloc" },
	{ 0x92849d17, "sock_init_data" },
	{ 0xc4f0da12, "ktime_get_with_offset" },
	{ 0x49045426, "icmp_err_convert" },
	{ 0xff178f6, "__aeabi_idivmod" },
	{ 0x6309e811, "rhashtable_walk_exit" },
	{ 0xf246c744, "trace_handle_return" },
	{ 0x5261322c, "rht_bucket_nested" },
	{ 0xb8c183a7, "rps_sock_flow_table" },
	{ 0x19ae5859, "crypto_alloc_shash" },
	{ 0xe81162e6, "iov_iter_revert" },
	{ 0x81ba3b86, "percpu_counter_destroy" },
	{ 0xaad0ae78, "__bitmap_shift_right" },
	{ 0x4f2a4fb0, "ip_getsockopt" },
	{ 0x2b68bd2f, "del_timer" },
	{ 0xb61fd35b, "reuseport_detach_sock" },
	{ 0x97255bdf, "strlen" },
	{ 0xd36bf9fe, "ipv6_getsockopt" },
	{ 0x60a13e90, "rcu_barrier" },
	{ 0xa45cb23e, "ipv6_chk_addr" },
	{ 0x41776c14, "ipv6_flowlabel_exclusive" },
	{ 0xb092b1f6, "ip_setsockopt" },
	{ 0x7da9e8ce, "security_inet_conn_established" },
	{ 0xde004450, "from_kuid_munged" },
	{ 0x83a0f25a, "inet6_add_protocol" },
	{ 0xf68285c0, "register_inetaddr_notifier" },
	{ 0xad73041f, "autoremove_wake_function" },
	{ 0x7481b148, "refcount_add_checked" },
	{ 0x19f462ab, "kfree_call_rcu" },
	{ 0xb96a6616, "unregister_net_sysctl_table" },
	{ 0x52b6a509, "send_sig" },
	{ 0xfe90c4a6, "_find_first_zero_bit_le" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0xd24c516c, "sk_setup_caps" },
	{ 0x27b05872, "rhashtable_walk_next" },
	{ 0xbc794b62, "security_sctp_bind_connect" },
	{ 0xff2ae59e, "sock_gettstamp" },
	{ 0x5d7776e5, "seq_puts" },
	{ 0x86eb0c08, "proc_dointvec" },
	{ 0x639acd78, "sock_release" },
	{ 0x3b697738, "_raw_read_lock" },
	{ 0xb545fc7c, "dst_release" },
	{ 0x2b5ab97d, "_raw_spin_lock_bh" },
	{ 0x55aebca9, "inet_sk_set_state" },
	{ 0x36f6c5e6, "skb_clone" },
	{ 0xf7802486, "__aeabi_uidivmod" },
	{ 0xb23c7123, "skb_copy" },
	{ 0x12b6921, "proc_create_net_single" },
	{ 0xd3f57a2, "_find_next_bit_le" },
	{ 0xc8275115, "seq_printf" },
	{ 0x695fa3b3, "rhltable_init" },
	{ 0xb43f9365, "ktime_get" },
	{ 0x60352082, "register_inet6addr_notifier" },
	{ 0x353e3fa5, "__get_user_4" },
	{ 0xb1b939e, "kmemdup" },
	{ 0x50c89f23, "__alloc_percpu" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0xe0803a58, "ipv6_dup_options" },
	{ 0xa843805a, "get_unused_fd_flags" },
	{ 0xfe41fb0b, "param_ops_bool" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xae353d77, "arm_copy_from_user" },
	{ 0x6a321477, "inet_sendmsg" },
	{ 0xf828b0ef, "percpu_counter_add_batch" },
	{ 0x46bfe1b0, "prepare_to_wait_exclusive" },
	{ 0xe63d39a4, "inet6_release" },
	{ 0xae316c11, "icmpv6_err_convert" },
	{ 0x65880b3e, "inet6_register_protosw" },
	{ 0x7fd07888, "reuseport_alloc" },
	{ 0x9ac31d03, "__skb_checksum" },
	{ 0xe78a8482, "trace_event_buffer_reserve" },
	{ 0x5d4e7fad, "skb_set_owner_w" },
	{ 0x7b0bdea4, "inet_del_protocol" },
	{ 0xc64416e5, "security_sctp_assoc_request" },
	{ 0x35cb498c, "ip6_xmit" },
	{ 0x28aa6a67, "call_rcu" },
	{ 0x5b470551, "sock_i_ino" },
	{ 0xa5b12511, "inet6_getname" },
	{ 0xb15b4109, "crc32c" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xb6529965, "rhashtable_insert_slow" },
	{ 0x5d34d6bc, "memory_cgrp_subsys_on_dfl_key" },
	{ 0x195ae37b, "bpf_trace_run3" },
	{ 0x2ea1165b, "sk_common_release" },
	{ 0xe2b5e146, "refcount_inc_not_zero_checked" },
	{ 0x526c3a6c, "jiffies" },
	{ 0xc9ec4e21, "free_percpu" },
	{ 0x51a910c0, "arm_copy_to_user" },
	{ 0x65465214, "skb_trim" },
	{ 0xcf3fac84, "cpumask_next" },
	{ 0x60ba1462, "sock_no_sendpage" },
	{ 0x3bdc1db7, "__pskb_pull_tail" },
	{ 0x5bbe49f4, "__init_waitqueue_head" },
	{ 0x2478a81f, "sock_no_mmap" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0x2fe252cc, "unregister_inet6addr_notifier" },
	{ 0x52dc69ef, "rht_bucket_nested_insert" },
	{ 0xe3c7c8d7, "trace_define_field" },
	{ 0x5f754e5a, "memset" },
	{ 0x8ea569b7, "sock_no_socketpair" },
	{ 0xf8a38105, "rhashtable_free_and_destroy" },
	{ 0x147e3a48, "ip6_dst_lookup_flow" },
	{ 0x1e96f43d, "__cpu_possible_mask" },
	{ 0x65e2bb05, "unregister_pernet_subsys" },
	{ 0x7e107064, "memcg_sockets_enabled_key" },
	{ 0x27073f33, "sk_alloc" },
	{ 0xf86f27cd, "idr_alloc_cyclic" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0x7d80fa7, "skb_copy_datagram_iter" },
	{ 0xb787eee9, "rhashtable_walk_stop" },
	{ 0x5fd6f06b, "inet6_ioctl" },
	{ 0xc5850110, "printk" },
	{ 0x8039b3fd, "_totalram_pages" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0x4f9db95e, "inet_addr_type" },
	{ 0xdcb92140, "lock_sock_nested" },
	{ 0x71c90087, "memcmp" },
	{ 0x921b07b1, "__cpu_online_mask" },
	{ 0x4025fd3f, "ns_capable" },
	{ 0xe590dea3, "sk_busy_loop_end" },
	{ 0x4eeb6d2, "rhashtable_walk_start_check" },
	{ 0x56802ae8, "rps_cpu_mask" },
	{ 0xae3058f8, "sock_prot_inuse_add" },
	{ 0xccea31f5, "crypto_shash_digest" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x17961cdc, "trace_event_reg" },
	{ 0x2f50cbf5, "proc_doulongvec_minmax" },
	{ 0x84b183ae, "strncmp" },
	{ 0x507ebc7d, "fl6_update_dst" },
	{ 0xbc3f4196, "__sk_mem_reclaim" },
	{ 0xbb9f1908, "kmem_cache_free" },
	{ 0x61cfa655, "__ip_queue_xmit" },
	{ 0xf68b0045, "skb_push" },
	{ 0x9425caca, "_raw_write_lock" },
	{ 0xbb553be2, "inet_del_offload" },
	{ 0x195e2e01, "proc_mkdir_data" },
	{ 0x954f099c, "idr_preload" },
	{ 0x2f780b39, "dev_get_by_index_rcu" },
	{ 0x941ffd9c, "sock_wake_async" },
	{ 0xecd247a4, "sk_free" },
	{ 0xdb9dc4e1, "inet_shutdown" },
	{ 0x5d6cd9a7, "inet_add_protocol" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0xc1e58a5f, "refcount_dec_and_test_checked" },
	{ 0xfda9581f, "prandom_u32" },
	{ 0x5240ee7, "percpu_counter_batch" },
	{ 0xe1cdbe5, "inet_add_offload" },
	{ 0x28f7fb79, "skb_pull" },
	{ 0xd6994983, "crypto_shash_setkey" },
	{ 0xd2aeaa09, "init_net" },
	{ 0xd07c579f, "inet_accept" },
	{ 0xa92173df, "fput" },
	{ 0xbb55582d, "perf_trace_run_bpf_submit" },
	{ 0xaaecf75d, "perf_trace_buf_alloc" },
	{ 0x2196324, "__aeabi_idiv" },
	{ 0xec6d97d2, "sk_filter_trim_cap" },
	{ 0x8bee75d7, "proc_dostring" },
	{ 0xb92d451b, "reuseport_select_sock" },
	{ 0x4f893276, "reuseport_add_sock" },
	{ 0xbd4120fa, "inet_ioctl" },
	{ 0x2ae23a6e, "inet_ctl_sock_create" },
	{ 0xa346975c, "idr_remove" },
	{ 0xc81e91a8, "napi_busy_loop" },
	{ 0x31b854eb, "rfs_needed" },
	{ 0xb09dba87, "__sock_recv_ts_and_drops" },
	{ 0x9b499d92, "__wake_up_sync_key" },
	{ 0x8a4d2069, "skb_copy_expand" },
	{ 0x9adc4641, "proto_register" },
	{ 0x4007496c, "kmem_cache_alloc" },
	{ 0x67f315d1, "inet_release" },
	{ 0xd875584a, "__genradix_ptr" },
	{ 0xbc10dd97, "__put_user_4" },
	{ 0x22bf2ba1, "__alloc_skb" },
	{ 0xfe029963, "unregister_inetaddr_notifier" },
	{ 0x47ae0e60, "trace_event_ignore_this_pid" },
	{ 0x6a5cb5ee, "__get_free_pages" },
	{ 0x8f3625fe, "_raw_spin_unlock_bh" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xc8827b75, "sysctl_vals" },
	{ 0x54e6fcdd, "net_enable_timestamp" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0xee43fd9b, "___ratelimit" },
	{ 0xd28c75bb, "kfree_skb" },
	{ 0xcea0c0ff, "security_sctp_sk_clone" },
	{ 0x7c4749d7, "proto_unregister" },
	{ 0xc034cd35, "inet_getname" },
	{ 0xe16c6b8b, "_copy_from_iter_full" },
	{ 0x690e8c76, "inet6_del_protocol" },
	{ 0x6ec0b4, "sock_kmalloc" },
	{ 0xae6283c2, "crypto_destroy_tfm" },
	{ 0xfe64fd83, "inet_sock_destruct" },
	{ 0x9feed7ce, "timer_reduce" },
	{ 0x4446417b, "trace_event_buffer_commit" },
	{ 0x3d4c0713, "put_cmsg" },
	{ 0xb041ec8d, "register_pernet_subsys" },
	{ 0x3f4547a7, "put_unused_fd" },
	{ 0x4bf1b7df, "__percpu_counter_init" },
	{ 0xc71e64a9, "snmp_get_cpu_field" },
	{ 0x1fe88ae5, "proc_create_net_data" },
	{ 0xc6de36ef, "refcount_sub_and_test_checked" },
	{ 0xebaa9dc8, "kmem_cache_alloc_trace" },
	{ 0xdb9ca3c5, "_raw_spin_lock" },
	{ 0x61c888d9, "sock_alloc_file" },
	{ 0x2a18c74, "nf_conntrack_destroy" },
	{ 0xa5de27d9, "ipv6_setsockopt" },
	{ 0xc9d4189b, "__sk_mem_schedule" },
	{ 0x4c0e8130, "kmem_cache_create" },
	{ 0x41a17314, "rhashtable_walk_enter" },
	{ 0xa3066230, "ip_route_output_flow" },
	{ 0x4302d0eb, "free_pages" },
	{ 0x405aa597, "event_triggers_call" },
	{ 0x3dcf1ffa, "__wake_up" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0xc5c61eb, "remove_proc_subtree" },
	{ 0x87ed4522, "sock_common_setsockopt" },
	{ 0x6a4010ed, "bpf_trace_run2" },
	{ 0x31b9195c, "__local_bh_disable_ip" },
	{ 0x9e0b62ae, "__xfrm_policy_check" },
	{ 0x2cfde9a2, "warn_slowpath_fmt" },
	{ 0x77f6c690, "_raw_read_lock_bh" },
	{ 0x94a0c3ad, "in6_dev_finish_destroy" },
	{ 0x9acb8066, "_raw_read_unlock_bh" },
	{ 0xc72c2676, "inet_register_protosw" },
	{ 0x37a0cba, "kfree" },
	{ 0x414975dd, "__genradix_prealloc" },
	{ 0x9d669763, "memcpy" },
	{ 0x9dc921, "trace_event_raw_init" },
	{ 0x2fe5449c, "fd_install" },
	{ 0x6578533e, "prepare_to_wait" },
	{ 0xd35d2fc8, "sock_create" },
	{ 0x2b07cdb8, "inet_bind" },
	{ 0xde68a212, "sock_common_getsockopt" },
	{ 0xbfb2c074, "__ip_dev_find" },
	{ 0xc406731f, "skb_segment" },
	{ 0x7a4497db, "kzfree" },
	{ 0x49970de8, "finish_wait" },
	{ 0x5be63c5b, "crc32c_csum_stub" },
	{ 0x7435380b, "inet6_unregister_protosw" },
	{ 0x63c4d61f, "__bitmap_weight" },
	{ 0x4ac49f05, "skb_dequeue" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xca0ad6f1, "trace_raw_output_prep" },
	{ 0xe2e8065e, "memdup_user" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0x49f322dc, "inet6_bind" },
	{ 0xb2d48a2e, "queue_work_on" },
	{ 0x4651f04c, "inet6_add_offload" },
	{ 0xb19e8429, "trace_seq_printf" },
	{ 0xa46a0f7a, "consume_skb" },
	{ 0x1ee8d6d4, "refcount_inc_checked" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x4414d99a, "__fl6_sock_lookup" },
	{ 0xa373e597, "register_net_sysctl" },
	{ 0x49ebacbd, "_clear_bit" },
	{ 0xeab3fd69, "skb_put" },
	{ 0xa3da5029, "sock_wfree" },
	{ 0x47925794, "idr_find" },
	{ 0x7960f02, "inet_unregister_protosw" },
	{ 0x9b73dda5, "skb_copy_bits" },
	{ 0x27fa66e1, "nr_free_buffer_pages" },
	{ 0xa038f306, "__rht_bucket_nested" },
	{ 0x506dff1a, "__genradix_free" },
	{ 0xd542439, "__ipv6_addr_type" },
	{ 0x7858da81, "inet_get_local_port_range" },
	{ 0x8d4db28b, "sock_i_uid" },
	{ 0xc9464b9a, "inet6_destroy_sock" },
	{ 0x3bfc4b94, "inet_recvmsg" },
};

MODULE_INFO(depends, "ipv6");


MODULE_INFO(srcversion, "BDBBA9485CA82C1685055F2");