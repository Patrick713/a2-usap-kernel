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
	{ 0xee4d1bfd, "sg_init_table" },
	{ 0xa9d0cb03, "skb_seq_read" },
	{ 0x13d0adf7, "__kfifo_out" },
	{ 0x76d11765, "mem_map" },
	{ 0x9a152689, "param_ops_int" },
	{ 0xd39fa6ab, "__kfifo_alloc" },
	{ 0x56a78f1, "dev_printk" },
	{ 0x2b5ab97d, "_raw_spin_lock_bh" },
	{ 0xfffa3100, "sg_next" },
	{ 0x987c11c7, "__pv_phys_pfn_offset" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0xfef7f73, "iscsi_requeue_task" },
	{ 0x3bef2f73, "iscsi_pool_init" },
	{ 0x526c3a6c, "jiffies" },
	{ 0x803de00e, "crypto_ahash_final" },
	{ 0xa32b2af5, "iscsi_itt_to_ctask" },
	{ 0xdce19627, "crypto_ahash_digest" },
	{ 0x5f754e5a, "memset" },
	{ 0x5ca17eac, "skb_abort_seq_read" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0x4d8fe3a7, "skb_prepare_seq_read" },
	{ 0x71c90087, "memcmp" },
	{ 0x921b07b1, "__cpu_online_mask" },
	{ 0x1c9ef0c0, "iscsi_conn_teardown" },
	{ 0xf1a90921, "iscsi_put_task" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x8f3625fe, "_raw_spin_unlock_bh" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xc1ed05b, "iscsi_prep_data_out_pdu" },
	{ 0xdb9ca3c5, "_raw_spin_lock" },
	{ 0x3b83e44, "iscsi_complete_pdu" },
	{ 0x954ede38, "iscsi_conn_failure" },
	{ 0xdb760f52, "__kfifo_free" },
	{ 0xa9487fae, "sg_init_one" },
	{ 0x9d669763, "memcpy" },
	{ 0xb133ac86, "iscsi_dbg_trace" },
	{ 0x17326769, "__iscsi_complete_pdu" },
	{ 0xf23fcb99, "__kfifo_in" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xccd6b143, "__tracepoint_iscsi_dbg_tcp" },
	{ 0x8d303b1b, "iscsi_pool_free" },
	{ 0xd396e39b, "iscsi_verify_itt" },
	{ 0x19e53755, "iscsi_conn_setup" },
	{ 0xaddfe91b, "iscsi_update_cmdsn" },
};

MODULE_INFO(depends, "libiscsi");


MODULE_INFO(srcversion, "0C30DB850B236759F2A0AB3");
