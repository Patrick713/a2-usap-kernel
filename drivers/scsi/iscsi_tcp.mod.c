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
	{ 0x8a331d2b, "param_ops_uint" },
	{ 0x9a152689, "param_ops_int" },
	{ 0x15d519a2, "iscsi_session_recovery_timedout" },
	{ 0x9ef12925, "iscsi_tcp_cleanup_task" },
	{ 0xf085462b, "iscsi_tcp_task_xmit" },
	{ 0x18b8256e, "iscsi_tcp_task_init" },
	{ 0x7a3b56c5, "iscsi_conn_send_pdu" },
	{ 0xcb2e1a65, "iscsi_host_set_param" },
	{ 0x52508025, "iscsi_session_get_param" },
	{ 0x455faf1c, "iscsi_conn_start" },
	{ 0xc69e3d7c, "iscsi_eh_cmd_timed_out" },
	{ 0x7a88844b, "scsi_change_queue_depth" },
	{ 0x48c460f9, "iscsi_target_alloc" },
	{ 0xdf697397, "iscsi_eh_recover_target" },
	{ 0xaff7036f, "iscsi_eh_device_reset" },
	{ 0x9a20cdde, "iscsi_eh_abort" },
	{ 0x6c9270b2, "iscsi_queuecommand" },
	{ 0xd13d421d, "iscsi_unregister_transport" },
	{ 0xacbf9458, "iscsi_register_transport" },
	{ 0x2d6fcc06, "__kmalloc" },
	{ 0x7dbc831f, "crypto_alloc_ahash" },
	{ 0xfe45483b, "iscsi_tcp_conn_setup" },
	{ 0x921b07b1, "__cpu_online_mask" },
	{ 0x1b2d703b, "__tracepoint_iscsi_dbg_sw_tcp" },
	{ 0xa4af2149, "blk_queue_dma_alignment" },
	{ 0xc5850110, "printk" },
	{ 0x8786b75a, "iscsi_tcp_r2tpool_alloc" },
	{ 0xd1a71634, "iscsi_session_setup" },
	{ 0x5270d504, "iscsi_host_add" },
	{ 0x26169b81, "iscsi_host_alloc" },
	{ 0xea997685, "iscsi_host_free" },
	{ 0x7ab560b0, "iscsi_host_remove" },
	{ 0xd82de4d2, "iscsi_session_teardown" },
	{ 0x1b4bf5d1, "iscsi_tcp_r2tpool_free" },
	{ 0x548310ca, "scsi_is_host_device" },
	{ 0xf6771986, "iscsi_tcp_recv_skb" },
	{ 0x935d5568, "tcp_read_sock" },
	{ 0xd287ddfb, "iscsi_conn_queue_work" },
	{ 0x9acb8066, "_raw_read_unlock_bh" },
	{ 0x77f6c690, "_raw_read_lock_bh" },
	{ 0x39206151, "iscsi_tcp_hdr_recv_prep" },
	{ 0xd2066730, "sk_set_memalloc" },
	{ 0xde3a56d4, "iscsi_conn_bind" },
	{ 0x9b182b2, "sockfd_lookup" },
	{ 0xbd82d08, "iscsi_conn_stop" },
	{ 0x1741bbb7, "iscsi_suspend_tx" },
	{ 0x3dcf1ffa, "__wake_up" },
	{ 0x516fe958, "iscsi_tcp_conn_teardown" },
	{ 0xae6283c2, "crypto_destroy_tfm" },
	{ 0x7a4497db, "kzfree" },
	{ 0xecd247a4, "sk_free" },
	{ 0xa92173df, "fput" },
	{ 0xc1e58a5f, "refcount_dec_and_test_checked" },
	{ 0x1738c19e, "_raw_write_unlock_bh" },
	{ 0xefb7bccf, "_raw_write_lock_bh" },
	{ 0x1ee8d6d4, "refcount_inc_checked" },
	{ 0x244023f3, "iscsi_tcp_set_max_r2t" },
	{ 0x60ba1462, "sock_no_sendpage" },
	{ 0x70c65485, "iscsi_set_param" },
	{ 0x21681fcc, "iscsi_conn_get_param" },
	{ 0xae745ee1, "kernel_getpeername" },
	{ 0xff058ff0, "iscsi_host_get_param" },
	{ 0xeab9cbd5, "iscsi_conn_get_addr_param" },
	{ 0x8f3625fe, "_raw_spin_unlock_bh" },
	{ 0xbaf7e8e5, "kernel_getsockname" },
	{ 0x2b5ab97d, "_raw_spin_lock_bh" },
	{ 0x791891ca, "iscsi_tcp_conn_get_stats" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x954ede38, "iscsi_conn_failure" },
	{ 0xaf9e0446, "iscsi_tcp_segment_unmap" },
	{ 0x2be6a18f, "iscsi_tcp_segment_done" },
	{ 0x11201734, "kernel_sendmsg" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x2cfde9a2, "warn_slowpath_fmt" },
	{ 0x23891d13, "iscsi_tcp_dgst_header" },
	{ 0xc270cfa7, "iscsi_segment_seek_sg" },
	{ 0xc67baac2, "iscsi_segment_init_linear" },
	{ 0x5f754e5a, "memset" },
	{ 0xb133ac86, "iscsi_dbg_trace" },
	{ 0x56a78f1, "dev_printk" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

MODULE_INFO(depends, "libiscsi,libiscsi_tcp");


MODULE_INFO(srcversion, "DFE21E5C399272844F7907E");
