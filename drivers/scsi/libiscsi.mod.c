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
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

static const struct modversion_info ____versions[]
__used __section(__versions) = {
	{ 0xe9942317, "module_layout" },
	{ 0x2d6fcc06, "__kmalloc" },
	{ 0x13d0adf7, "__kfifo_out" },
	{ 0x40d7e7ca, "__tracepoint_iscsi_dbg_eh" },
	{ 0x668320b7, "scsi_host_alloc" },
	{ 0x7aa1756e, "kvfree" },
	{ 0x9a152689, "param_ops_int" },
	{ 0xa7070b5f, "scsi_add_host_with_dma" },
	{ 0x94452a2d, "iscsi_block_session" },
	{ 0x56a78f1, "dev_printk" },
	{ 0x6f91963e, "iscsi_remove_session" },
	{ 0x2b5ab97d, "_raw_spin_lock_bh" },
	{ 0x8112b3d2, "scsi_build_sense_buffer" },
	{ 0xf8ca95e8, "iscsi_unblock_session" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0xea3c8e4e, "scsilun_to_int" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x2d39b0a7, "kstrdup" },
	{ 0x526c3a6c, "jiffies" },
	{ 0xb48677a, "__kfifo_init" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xdd7d2ce, "iscsi_add_session" },
	{ 0x5bbe49f4, "__init_waitqueue_head" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0x5f754e5a, "memset" },
	{ 0x7cedabcf, "iscsi_recv_pdu" },
	{ 0x39a12ca7, "_raw_spin_unlock_irqrestore" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0x921b07b1, "__cpu_online_mask" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0xc1e58a5f, "refcount_dec_and_test_checked" },
	{ 0x24d273d1, "add_timer" },
	{ 0x4b723b28, "scsi_host_put" },
	{ 0x42160169, "flush_workqueue" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xf70e429, "iscsi_create_conn" },
	{ 0xadc408c1, "flush_signals" },
	{ 0x8dfefc0d, "kvmalloc_node" },
	{ 0x7c4ef909, "__tracepoint_iscsi_dbg_session" },
	{ 0x12b548f6, "module_put" },
	{ 0xa41bfa94, "iscsi_destroy_conn" },
	{ 0x69d5e769, "scsi_host_get" },
	{ 0xebcc8bdd, "put_device" },
	{ 0x6a5cb5ee, "__get_free_pages" },
	{ 0x8f3625fe, "_raw_spin_unlock_bh" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x7b8625c3, "iscsi_conn_error_event" },
	{ 0x1000e51, "schedule" },
	{ 0xdb9ca3c5, "_raw_spin_lock" },
	{ 0x5f849a69, "_raw_spin_lock_irqsave" },
	{ 0xde147102, "get_device" },
	{ 0x4302d0eb, "free_pages" },
	{ 0x3dcf1ffa, "__wake_up" },
	{ 0x647af474, "prepare_to_wait_event" },
	{ 0x818416e1, "scsi_set_sense_information" },
	{ 0x2cfde9a2, "warn_slowpath_fmt" },
	{ 0x5ed90adc, "int_to_scsilun" },
	{ 0x37a0cba, "kfree" },
	{ 0x9d669763, "memcpy" },
	{ 0x15af7f4, "system_state" },
	{ 0xfd8613eb, "iscsi_free_session" },
	{ 0x49970de8, "finish_wait" },
	{ 0xb133ac86, "iscsi_dbg_trace" },
	{ 0xf23fcb99, "__kfifo_in" },
	{ 0xb251377, "scsi_remove_host" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0xb2d48a2e, "queue_work_on" },
	{ 0xc358aaf8, "snprintf" },
	{ 0x1ee8d6d4, "refcount_inc_checked" },
	{ 0xe6211105, "__tracepoint_iscsi_dbg_conn" },
	{ 0x49ebacbd, "_clear_bit" },
	{ 0xdf9208c0, "alloc_workqueue" },
	{ 0xb5fde1cc, "iscsi_host_for_each_session" },
	{ 0x717bcdac, "try_module_get" },
	{ 0x4ebc62be, "iscsi_session_chkready" },
	{ 0xbab847c0, "iscsi_alloc_session" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "65F5FE66038317A8D7908D9");
