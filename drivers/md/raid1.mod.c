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
	{ 0x9a152689, "param_ops_int" },
	{ 0x7159851c, "unregister_md_personality" },
	{ 0x7a0ca58c, "register_md_personality" },
	{ 0x5d7d5750, "blk_queue_flag_clear" },
	{ 0x2a36e8fd, "md_unregister_thread" },
	{ 0x52fc92ec, "blk_queue_max_write_zeroes_sectors" },
	{ 0x952d4a93, "blk_queue_max_write_same_sectors" },
	{ 0xacb2d1aa, "mddev_init_writes_pending" },
	{ 0xa217f24f, "md_register_thread" },
	{ 0x5bbe49f4, "__init_waitqueue_head" },
	{ 0x9deeaf5f, "bioset_init" },
	{ 0x9d669763, "memcpy" },
	{ 0x6bb665e0, "bio_alloc_bioset" },
	{ 0x77f6f183, "kmalloc_order_trace" },
	{ 0x986ff437, "md_allow_write" },
	{ 0x9cb0f84b, "sysfs_create_link" },
	{ 0x6f8a0fde, "sysfs_remove_link" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xebaa9dc8, "kmem_cache_alloc_trace" },
	{ 0xf4610713, "kmalloc_caches" },
	{ 0x40fd1bb5, "__alloc_pages_nodemask" },
	{ 0x4a3dec52, "md_wait_for_blocked_rdev" },
	{ 0x58a44232, "bio_alloc_mddev" },
	{ 0x6fb1e54f, "md_flush_request" },
	{ 0xd27b25dd, "blk_check_plugged" },
	{ 0x22b5630c, "md_bitmap_startwrite" },
	{ 0x6578533e, "prepare_to_wait" },
	{ 0xad73041f, "autoremove_wake_function" },
	{ 0xea7ed860, "md_write_start" },
	{ 0x32a423a6, "bio_devname" },
	{ 0x9b55aacf, "submit_bio_wait" },
	{ 0x548ea2e1, "bio_trim" },
	{ 0x175b91c2, "rdev_clear_badblocks" },
	{ 0xba5f3337, "md_check_recovery" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0x2cfde9a2, "warn_slowpath_fmt" },
	{ 0x71c90087, "memcmp" },
	{ 0xe37d464c, "bio_copy_data" },
	{ 0x987c11c7, "__pv_phys_pfn_offset" },
	{ 0x76d11765, "mem_map" },
	{ 0x2d6fcc06, "__kmalloc" },
	{ 0xc4657dc8, "mempool_init" },
	{ 0x14ae8f7c, "bio_add_page" },
	{ 0x151f4898, "schedule_timeout_uninterruptible" },
	{ 0x97e1ebc1, "md_bitmap_close_sync" },
	{ 0x80360571, "bio_reset" },
	{ 0xba13cf05, "md_bitmap_cond_end_sync" },
	{ 0xefc45cef, "md_bitmap_start_sync" },
	{ 0x921b07b1, "__cpu_online_mask" },
	{ 0x3532ba0, "bio_chain" },
	{ 0x1af35879, "bio_split" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x5f754e5a, "memset" },
	{ 0xdcde4deb, "__tracepoint_block_bio_remap" },
	{ 0x73c4f730, "bio_clone_fast" },
	{ 0xee43fd9b, "___ratelimit" },
	{ 0x2f898ec0, "md_cluster_ops" },
	{ 0x6091797f, "synchronize_rcu" },
	{ 0x8c21be72, "md_integrity_register" },
	{ 0x66165dc7, "__trace_note_message" },
	{ 0x49970de8, "finish_wait" },
	{ 0x1000e51, "schedule" },
	{ 0x647af474, "prepare_to_wait_event" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xf2215f74, "blk_finish_plug" },
	{ 0x7a9b37e8, "blk_start_plug" },
	{ 0xf69d6042, "badblocks_check" },
	{ 0xe9af6a48, "md_done_sync" },
	{ 0x1b886e9c, "bioset_exit" },
	{ 0xcb8c753b, "mempool_exit" },
	{ 0xd697e69a, "trace_hardirqs_on" },
	{ 0x2da81bff, "_raw_spin_lock_irq" },
	{ 0xcc286e8e, "__put_page" },
	{ 0xc5850110, "printk" },
	{ 0x5ed919d5, "bdevname" },
	{ 0x5330c64, "md_error" },
	{ 0xebcef8a0, "rdev_set_badblocks" },
	{ 0x4686cf94, "sync_page_io" },
	{ 0x49ebacbd, "_clear_bit" },
	{ 0x48fa80e9, "blk_queue_flag_set" },
	{ 0xcb3b6ca5, "disk_stack_limits" },
	{ 0x3677af86, "md_integrity_add_rdev" },
	{ 0x2a3aa678, "_test_and_clear_bit" },
	{ 0x8f8dfea1, "kernfs_notify" },
	{ 0xc8275115, "seq_printf" },
	{ 0xd29a051, "md_set_array_sectors" },
	{ 0x918e4974, "md_bitmap_resize" },
	{ 0xd8410611, "mempool_alloc" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x7aa27bdd, "md_bitmap_end_sync" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0x85dbc4d5, "md_wakeup_thread" },
	{ 0x39a12ca7, "_raw_spin_unlock_irqrestore" },
	{ 0x5f849a69, "_raw_spin_lock_irqsave" },
	{ 0xb815eeea, "bio_associate_blkg" },
	{ 0x3e3928a, "generic_make_request" },
	{ 0xe445e7b5, "md_bitmap_unplug" },
	{ 0x794765d1, "mempool_free" },
	{ 0xca54fee, "_test_and_set_bit" },
	{ 0xe034cf65, "bio_endio" },
	{ 0x3dcf1ffa, "__wake_up" },
	{ 0xe3e6db69, "bio_put" },
	{ 0x23dd9143, "bio_free_pages" },
	{ 0x512134f1, "md_write_end" },
	{ 0xbd6f6a85, "md_bitmap_endwrite" },
	{ 0x37a0cba, "kfree" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

MODULE_INFO(depends, "md-mod");


MODULE_INFO(srcversion, "BD787859DBA566432062EEC");
