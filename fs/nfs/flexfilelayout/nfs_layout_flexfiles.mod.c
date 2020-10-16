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
	{ 0x2aa2733d, "pnfs_unregister_layoutdriver" },
	{ 0xa1cbf6a3, "nfs4_schedule_session_recovery" },
	{ 0x448ba872, "pnfs_nfs_generic_sync" },
	{ 0xf4610713, "kmalloc_caches" },
	{ 0x2d6fcc06, "__kmalloc" },
	{ 0xf9a482f9, "msleep" },
	{ 0x4aae344d, "xdr_init_encode" },
	{ 0x837ad50e, "nfs4_pnfs_ds_connect" },
	{ 0x76d11765, "mem_map" },
	{ 0x4fa89ecd, "__tracepoint_pnfs_mds_fallback_pg_get_mirror_count" },
	{ 0x4f1ae92c, "pnfs_generic_clear_request_commit" },
	{ 0xcb596bf0, "nfs42_proc_layouterror" },
	{ 0x7fffc276, "nfs4_setup_sequence" },
	{ 0xab68d80f, "prepare_kernel_cred" },
	{ 0xce582570, "nfs_init_cinfo" },
	{ 0x19f462ab, "kfree_call_rcu" },
	{ 0x69dc0480, "__tracepoint_pnfs_mds_fallback_pg_init_read" },
	{ 0x9471d97d, "nfs_initiate_commit" },
	{ 0x650c8c3f, "pnfs_error_mark_layout_for_return" },
	{ 0x8a037d06, "nfs4_pnfs_ds_put" },
	{ 0xc5043796, "__tracepoint_pnfs_mds_fallback_write_done" },
	{ 0x2a3aa678, "_test_and_clear_bit" },
	{ 0x54bef45, "layoutstats_timer" },
	{ 0xe835ee50, "nfs4_delete_deviceid" },
	{ 0xb43f9365, "ktime_get" },
	{ 0x987c11c7, "__pv_phys_pfn_offset" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0x37cc1f05, "init_user_ns" },
	{ 0x47a54ce4, "nfs4_mark_deviceid_unavailable" },
	{ 0x53cda404, "__tracepoint_nfs4_pnfs_commit_ds" },
	{ 0xa6788e33, "nfs4_decode_mp_ds_addr" },
	{ 0xdaf6dde6, "nfs_initiate_pgio" },
	{ 0x24d340c, "pnfs_generic_commit_pagelist" },
	{ 0x40fd1bb5, "__alloc_pages_nodemask" },
	{ 0xafc4e4d4, "pnfs_generic_recover_commit_reqs" },
	{ 0xe2b5e146, "refcount_inc_not_zero_checked" },
	{ 0xe5e2c7c5, "nfs4_sequence_done" },
	{ 0x6d6d1088, "xdr_reserve_space" },
	{ 0x9a4f4ebf, "pnfs_generic_pg_test" },
	{ 0x52129095, "pnfs_update_layout" },
	{ 0x2e43d7c1, "make_kgid" },
	{ 0x47a4e8bd, "rpc_exit" },
	{ 0x98e82553, "pnfs_generic_pg_cleanup" },
	{ 0x673a6f3, "pnfs_generic_write_commit_done" },
	{ 0x1423e060, "rpc_delay" },
	{ 0xdd0a2ba2, "strlcat" },
	{ 0x7fbff10f, "pnfs_generic_layout_insert_lseg" },
	{ 0x5f754e5a, "memset" },
	{ 0x14be1fcd, "xdr_init_decode_pages" },
	{ 0x1e1e140e, "ns_to_timespec64" },
	{ 0x6b441787, "__tracepoint_pnfs_mds_fallback_read_done" },
	{ 0xa4936e2, "rpc_call_start" },
	{ 0xc5850110, "printk" },
	{ 0x71c90087, "memcmp" },
	{ 0x921b07b1, "__cpu_online_mask" },
	{ 0x6ca76401, "pnfs_read_resend_pnfs" },
	{ 0xef281502, "nfs4_find_get_deviceid" },
	{ 0xea436a3a, "nfs4_find_or_create_ds_client" },
	{ 0x366bf5fb, "rpc_max_payload" },
	{ 0xdac54c13, "nfs_pageio_reset_write_mds" },
	{ 0xc1e58a5f, "refcount_dec_and_test_checked" },
	{ 0x9c202f1d, "pnfs_layout_mark_request_commit" },
	{ 0x2aa234dc, "pnfs_destroy_layout" },
	{ 0xf16e60e8, "nfs4_pnfs_ds_add" },
	{ 0xf236f7f5, "pnfs_layoutcommit_inode" },
	{ 0x55e607, "pnfs_put_lseg" },
	{ 0x7e7d29a1, "nfs4_put_deviceid_node" },
	{ 0xf09a55ca, "pnfs_report_layoutstat" },
	{ 0xcc95a509, "pnfs_set_layoutcommit" },
	{ 0x67e71b2b, "pnfs_generic_scan_commit_lists" },
	{ 0x69d3558d, "pnfs_generic_rw_release" },
	{ 0xda2a4834, "__free_pages" },
	{ 0x8a4fd5d4, "__tracepoint_pnfs_mds_fallback_read_pagelist" },
	{ 0xb8886e84, "make_kuid" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xcd07fb06, "nfs4_test_deviceid_unavailable" },
	{ 0xa02df320, "nfs_map_string_to_numeric" },
	{ 0xb980b1ec, "__put_cred" },
	{ 0xf999267e, "pnfs_generic_commit_release" },
	{ 0x28e2685, "pnfs_generic_pg_readpages" },
	{ 0xebaa9dc8, "kmem_cache_alloc_trace" },
	{ 0xdb9ca3c5, "_raw_spin_lock" },
	{ 0x65994f1, "xdr_encode_opaque_fixed" },
	{ 0xd39e7234, "pnfs_read_done_resend_to_mds" },
	{ 0xe5919cb1, "xdr_encode_opaque" },
	{ 0xdec7774e, "rpc_restart_call_prepare" },
	{ 0x2cfde9a2, "warn_slowpath_fmt" },
	{ 0xb15893fb, "pnfs_generic_pg_writepages" },
	{ 0x6623991b, "pnfs_generic_prepare_to_resend_writes" },
	{ 0x37a0cba, "kfree" },
	{ 0x5a060a78, "pnfs_generic_pg_check_layout" },
	{ 0x9d669763, "memcpy" },
	{ 0x503fa0e1, "__tracepoint_nfs4_pnfs_read" },
	{ 0xc6e1da9f, "pnfs_write_done_resend_to_mds" },
	{ 0x9224516d, "rpc_wake_up" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0x86da255a, "rpc_count_iostats_metrics" },
	{ 0xdbd11817, "xdr_inline_decode" },
	{ 0xe8a0c8f5, "__tracepoint_nfs4_pnfs_write" },
	{ 0xc358aaf8, "snprintf" },
	{ 0xca54fee, "_test_and_set_bit" },
	{ 0xe1bf6b5b, "param_ops_ushort" },
	{ 0x1ee8d6d4, "refcount_inc_checked" },
	{ 0x4863f59b, "xdr_write_pages" },
	{ 0xff738a26, "nfs_pageio_reset_read_mds" },
	{ 0x9bb06224, "__tracepoint_pnfs_mds_fallback_write_pagelist" },
	{ 0x20c2a1a9, "nfs4_init_deviceid_node" },
	{ 0xd22c7a9f, "__tracepoint_pnfs_mds_fallback_pg_init_write" },
	{ 0x49ebacbd, "_clear_bit" },
	{ 0x8a331d2b, "param_ops_uint" },
	{ 0x5e88bc68, "xdr_set_scratch_buffer" },
	{ 0x96753c18, "nfs_writeback_update_inode" },
	{ 0xbb7379e6, "nfs4_mark_deviceid_available" },
	{ 0xcc286e8e, "__put_page" },
	{ 0xc6c12aa3, "pnfs_register_layoutdriver" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "FD5B8DDB1B0B02162E86FE2");
