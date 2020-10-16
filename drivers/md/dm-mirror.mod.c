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
	{ 0x92b57248, "flush_work" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xa83588eb, "dm_rh_recovery_end" },
	{ 0x2d6fcc06, "__kmalloc" },
	{ 0xf92b8a3d, "dm_rh_get_region_size" },
	{ 0x57e16c3e, "dm_rh_get_state" },
	{ 0x95c6b89, "dm_get_device" },
	{ 0xab9066f9, "dm_io" },
	{ 0x8ef4608d, "dm_rh_inc_pending" },
	{ 0xc66d919f, "dm_table_get_mode" },
	{ 0x7d5e1815, "dm_rh_get_region_key" },
	{ 0x154c6338, "dm_kcopyd_client_destroy" },
	{ 0x39dc0946, "dm_region_hash_create" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x6d17d0e8, "dm_register_target" },
	{ 0xbfe6dcb0, "dm_kcopyd_copy" },
	{ 0xd697e69a, "trace_hardirqs_on" },
	{ 0xd8aa4284, "dm_rh_region_context" },
	{ 0x526c3a6c, "jiffies" },
	{ 0xa53387c7, "dm_rh_flush" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x9e4faeef, "dm_io_client_destroy" },
	{ 0x1d2f9ac, "dm_rh_recovery_start" },
	{ 0xbe38a431, "dm_rh_recovery_prepare" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0x72107eca, "dm_rh_bio_to_region" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0xad84bef8, "dm_table_event" },
	{ 0xf50692a, "dm_set_target_max_io_len" },
	{ 0x39a12ca7, "_raw_spin_unlock_irqrestore" },
	{ 0xc5850110, "printk" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0x52cb560, "dm_unregister_target" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x24d273d1, "add_timer" },
	{ 0x3e3928a, "generic_make_request" },
	{ 0x42160169, "flush_workqueue" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x7774620f, "dm_rh_stop_recovery" },
	{ 0xe034cf65, "bio_endio" },
	{ 0x59e5070d, "__do_div64" },
	{ 0x5c4c6833, "dm_rh_dirty_log" },
	{ 0x38972f23, "dm_rh_region_to_sector" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x1000e51, "schedule" },
	{ 0xee43fd9b, "___ratelimit" },
	{ 0xd688716b, "dm_kcopyd_client_create" },
	{ 0x2da81bff, "_raw_spin_lock_irq" },
	{ 0x5f849a69, "_raw_spin_lock_irqsave" },
	{ 0x38efaf5a, "dm_region_hash_destroy" },
	{ 0x3dcf1ffa, "__wake_up" },
	{ 0x647af474, "prepare_to_wait_event" },
	{ 0x601f665f, "dm_io_client_create" },
	{ 0x37a0cba, "kfree" },
	{ 0xa3ae8f54, "dm_rh_mark_nosync" },
	{ 0x86969747, "dm_dirty_log_destroy" },
	{ 0x314b20c8, "scnprintf" },
	{ 0x7d053fc5, "dm_rh_start_recovery" },
	{ 0x49970de8, "finish_wait" },
	{ 0x3a18389a, "dm_rh_update_states" },
	{ 0xc9b8af52, "dm_put_device" },
	{ 0x48a9c5d0, "dm_per_bio_data" },
	{ 0xbf497741, "dm_noflush_suspending" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0xb2d48a2e, "queue_work_on" },
	{ 0xfd93482e, "dm_rh_recovery_in_flight" },
	{ 0xb139293c, "dm_rh_delay" },
	{ 0xca54fee, "_test_and_set_bit" },
	{ 0x49ebacbd, "_clear_bit" },
	{ 0x8a331d2b, "param_ops_uint" },
	{ 0xdf9208c0, "alloc_workqueue" },
	{ 0xe7740207, "dm_dirty_log_create" },
	{ 0xb815eeea, "bio_associate_blkg" },
	{ 0x5f4a6e61, "dm_rh_dec" },
};

MODULE_INFO(depends, "dm-region-hash,dm-mod,dm-log");


MODULE_INFO(srcversion, "AB65AA5B59C7E19F248F490");
