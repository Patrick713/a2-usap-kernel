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
	{ 0xe8c78ae1, "blkdev_issue_discard" },
	{ 0x92b57248, "flush_work" },
	{ 0x1e6ff418, "kset_create_and_add" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x2680385, "kmem_cache_destroy" },
	{ 0x5a9b6c12, "address_space_init_once" },
	{ 0x2690e6c1, "_find_next_zero_bit_le" },
	{ 0x9321596f, "fs_bio_set" },
	{ 0x7d253e42, "iget_failed" },
	{ 0xf4610713, "kmalloc_caches" },
	{ 0x2d6fcc06, "__kmalloc" },
	{ 0x7062fd9e, "drop_nlink" },
	{ 0x676c2adc, "sb_min_blocksize" },
	{ 0xa7b3181c, "up_read" },
	{ 0xf246c744, "trace_handle_return" },
	{ 0x6bb665e0, "bio_alloc_bioset" },
	{ 0xf5b92ff5, "make_bad_inode" },
	{ 0x14d1b7f5, "generic_file_llseek" },
	{ 0xd1de681e, "__mark_inode_dirty" },
	{ 0x76d11765, "mem_map" },
	{ 0xfbc284bf, "__set_page_dirty_nobuffers" },
	{ 0xd6ee688f, "vmalloc" },
	{ 0x5c1079b1, "filemap_fault" },
	{ 0x97255bdf, "strlen" },
	{ 0x60a13e90, "rcu_barrier" },
	{ 0xc3b9e2f7, "iget5_locked" },
	{ 0xf7d381fa, "find_get_pages_contig" },
	{ 0x8255b87c, "bdev_read_only" },
	{ 0xad73041f, "autoremove_wake_function" },
	{ 0x8a6cb9cc, "block_invalidatepage" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0xa5a5f2e8, "block_is_partially_uptodate" },
	{ 0xbe406f6, "block_write_begin" },
	{ 0x1b25f187, "__xa_store" },
	{ 0x5d7776e5, "seq_puts" },
	{ 0x2ba6490e, "is_bad_inode" },
	{ 0x118d48d9, "blkdev_issue_flush" },
	{ 0xba7dd190, "pagecache_get_page" },
	{ 0x518c3132, "touch_buffer" },
	{ 0xe9325f03, "downgrade_write" },
	{ 0xa58b0482, "generic_file_open" },
	{ 0x7ab88a45, "system_freezing_cnt" },
	{ 0x58b779a7, "__lock_page" },
	{ 0xfff5afc, "time64_to_tm" },
	{ 0x9dbb2013, "__lock_buffer" },
	{ 0xf7802486, "__aeabi_uidivmod" },
	{ 0xd4f7e202, "touch_atime" },
	{ 0x25b775bc, "deactivate_locked_super" },
	{ 0xd32d6c08, "lockref_get" },
	{ 0xd3f57a2, "_find_next_bit_le" },
	{ 0x5117deaf, "dput" },
	{ 0x2a3aa678, "_test_and_clear_bit" },
	{ 0xc8275115, "seq_printf" },
	{ 0x353e3fa5, "__get_user_4" },
	{ 0x44e9a829, "match_token" },
	{ 0x6fff0729, "inc_nlink" },
	{ 0x987c11c7, "__pv_phys_pfn_offset" },
	{ 0xed2d8bfe, "d_find_alias" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0x8c5fdf7, "pagevec_lookup_range" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xae353d77, "arm_copy_from_user" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0x85df9b6c, "strsep" },
	{ 0xe78a8482, "trace_event_buffer_reserve" },
	{ 0xd952de1f, "d_instantiate_new" },
	{ 0x866aed9a, "kobject_del" },
	{ 0xb80a90b1, "generic_read_dir" },
	{ 0x999e8297, "vfree" },
	{ 0x4caca1f4, "__getblk_gfp" },
	{ 0x9c18c53a, "igrab" },
	{ 0x5b86af02, "unlock_buffer" },
	{ 0xab01d3f2, "redirty_page_for_writepage" },
	{ 0x953e1b9e, "ktime_get_real_seconds" },
	{ 0x3c112e9f, "pagevec_lookup_range_tag" },
	{ 0x195ae37b, "bpf_trace_run3" },
	{ 0xd697e69a, "trace_hardirqs_on" },
	{ 0xa4040d67, "sysfs_remove_group" },
	{ 0x3c8f6ef0, "__xa_insert" },
	{ 0xdd34010a, "kthread_create_on_node" },
	{ 0x526c3a6c, "jiffies" },
	{ 0xa61debb8, "insert_inode_locked4" },
	{ 0xf6b62c95, "truncate_setsize" },
	{ 0x51a910c0, "arm_copy_to_user" },
	{ 0xfb1d7438, "down_read" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xc28ebcf1, "end_page_writeback" },
	{ 0x2e43d7c1, "make_kgid" },
	{ 0x5bbe49f4, "__init_waitqueue_head" },
	{ 0xaad8c7d6, "default_wake_function" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0xb561ac5b, "wait_for_completion" },
	{ 0xe0cb112, "inode_owner_or_capable" },
	{ 0x9480c376, "mpage_readpages" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0x5c3c7387, "kstrtoull" },
	{ 0xe3c7c8d7, "trace_define_field" },
	{ 0x5f754e5a, "memset" },
	{ 0xac95141e, "from_kuid" },
	{ 0xb39d1bbe, "mpage_readpage" },
	{ 0x18323d8c, "bpf_trace_run1" },
	{ 0xc577479d, "d_obtain_root" },
	{ 0x4c53d4f, "inode_add_bytes" },
	{ 0x39a12ca7, "_raw_spin_unlock_irqrestore" },
	{ 0x86dbf1e, "freezing_slow_path" },
	{ 0xe59e41f2, "__bread_gfp" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0xf63fc023, "sysfs_create_group" },
	{ 0xf4c13736, "d_obtain_alias" },
	{ 0x71c90087, "memcmp" },
	{ 0x921b07b1, "__cpu_online_mask" },
	{ 0x3992bc63, "__xa_set_mark" },
	{ 0x14ae8f7c, "bio_add_page" },
	{ 0xfe0c4e49, "sget" },
	{ 0x93a6913e, "kobject_init_and_add" },
	{ 0xf1e046cc, "panic" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x4d9b652b, "rb_erase" },
	{ 0x17961cdc, "trace_event_reg" },
	{ 0x42407f2e, "__sync_dirty_buffer" },
	{ 0xe395d3eb, "from_kgid" },
	{ 0x476259d1, "blkdev_get_by_path" },
	{ 0xbb9f1908, "kmem_cache_free" },
	{ 0x26ca851c, "set_nlink" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0x32c5d9c8, "__wait_on_buffer" },
	{ 0x39b730cf, "file_update_time" },
	{ 0x80c4c319, "crc32_le" },
	{ 0x475afad0, "setattr_copy" },
	{ 0x573676f5, "bpf_trace_run5" },
	{ 0xaad5a388, "page_symlink" },
	{ 0x631dc549, "wait_on_page_writeback" },
	{ 0xc1e58a5f, "refcount_dec_and_test_checked" },
	{ 0x4f49ea4e, "sync_dirty_buffer" },
	{ 0x24d273d1, "add_timer" },
	{ 0x2bc947, "truncate_pagecache" },
	{ 0x6c810e42, "__xa_clear_mark" },
	{ 0x2ef118e0, "vfs_ioc_setflags_prepare" },
	{ 0x4ccf485f, "unlock_page" },
	{ 0x10ea359b, "generic_file_read_iter" },
	{ 0x7e0ce0c3, "up_write" },
	{ 0x4253aa7e, "down_write" },
	{ 0xbb55582d, "perf_trace_run_bpf_submit" },
	{ 0xaaecf75d, "perf_trace_buf_alloc" },
	{ 0x76472663, "inode_nohighmem" },
	{ 0x1c0d35b5, "__brelse" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x49c3d9d4, "__inode_attach_wb" },
	{ 0xe3e6db69, "bio_put" },
	{ 0xf530d0b9, "ilookup5" },
	{ 0x59e5070d, "__do_div64" },
	{ 0x2e7bf6d6, "inode_init_once" },
	{ 0xa6cc2717, "mnt_drop_write_file" },
	{ 0x8548c258, "submit_bio" },
	{ 0xc6cbbc89, "capable" },
	{ 0x4007496c, "kmem_cache_alloc" },
	{ 0x6e71cf35, "blkdev_put" },
	{ 0xbc10dd97, "__put_user_4" },
	{ 0x4d0d163d, "copy_page" },
	{ 0xfd4eb36e, "wait_for_stable_page" },
	{ 0x44b9708a, "fs_kobj" },
	{ 0xb4cc5d1f, "inode_sub_bytes" },
	{ 0x7639a76f, "block_write_end" },
	{ 0xe6b8dc23, "truncate_inode_pages_final" },
	{ 0x7246415a, "create_empty_buffers" },
	{ 0xb8886e84, "make_kuid" },
	{ 0x47ae0e60, "trace_event_ignore_this_pid" },
	{ 0x6a5cb5ee, "__get_free_pages" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x1000e51, "schedule" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x9bb48162, "generic_write_end" },
	{ 0xda7b7ce8, "__breadahead" },
	{ 0x605790dc, "fiemap_fill_next_extent" },
	{ 0x2da81bff, "_raw_spin_lock_irq" },
	{ 0x749066fb, "unlock_new_inode" },
	{ 0x84d38d36, "mnt_want_write_file" },
	{ 0x559707c8, "kill_block_super" },
	{ 0x6b2dc060, "dump_stack" },
	{ 0x5e95b1cd, "current_umask" },
	{ 0x4482cdb, "__refrigerator" },
	{ 0x4446417b, "trace_event_buffer_commit" },
	{ 0xb35d51ab, "wake_up_process" },
	{ 0x3d8fd337, "shrink_dcache_parent" },
	{ 0x1a554bd4, "clear_page_dirty_for_io" },
	{ 0xf7b97c84, "submit_bh" },
	{ 0xebaa9dc8, "kmem_cache_alloc_trace" },
	{ 0xdb9ca3c5, "_raw_spin_lock" },
	{ 0x5f849a69, "_raw_spin_lock_irqsave" },
	{ 0xa5526619, "rb_insert_color" },
	{ 0x4c0e8130, "kmem_cache_create" },
	{ 0xf3d8ce69, "register_filesystem" },
	{ 0x4302d0eb, "free_pages" },
	{ 0xac1408f1, "generic_file_write_iter" },
	{ 0x405aa597, "event_triggers_call" },
	{ 0x3dcf1ffa, "__wake_up" },
	{ 0xaf36e367, "__pagevec_release" },
	{ 0x647af474, "prepare_to_wait_event" },
	{ 0x6a4010ed, "bpf_trace_run2" },
	{ 0xcf5fcda8, "__test_set_page_writeback" },
	{ 0x2cfde9a2, "warn_slowpath_fmt" },
	{ 0xa17bd3fc, "add_wait_queue" },
	{ 0x937cd95e, "kset_unregister" },
	{ 0x70d99e61, "iput" },
	{ 0x41d47f75, "read_cache_page" },
	{ 0xf8d29bc0, "invalidate_inode_pages2_range" },
	{ 0x37a0cba, "kfree" },
	{ 0x3b6c41ea, "kstrtouint" },
	{ 0x3c821750, "generic_permission" },
	{ 0xaaa314f9, "inode_dio_wait" },
	{ 0x904c32d7, "page_get_link" },
	{ 0x473a319f, "ihold" },
	{ 0x9d669763, "memcpy" },
	{ 0xdd5e7751, "__sb_end_write" },
	{ 0xe93f6042, "trace_print_symbols_seq" },
	{ 0x9dc921, "trace_event_raw_init" },
	{ 0x9812880e, "current_time" },
	{ 0x6578533e, "prepare_to_wait" },
	{ 0x4eb13446, "d_splice_alias" },
	{ 0xb71589f0, "skip_spaces" },
	{ 0x93d8f68f, "block_page_mkwrite" },
	{ 0x8734819f, "end_buffer_read_sync" },
	{ 0x28bb4106, "sync_filesystem" },
	{ 0x43b2460b, "invalidate_mapping_pages" },
	{ 0x58e8177f, "block_truncate_page" },
	{ 0xb212ad15, "sb_set_blocksize" },
	{ 0x8a3b1285, "__xa_erase" },
	{ 0xf61d447b, "__sb_start_write" },
	{ 0x314b20c8, "scnprintf" },
	{ 0xab566ebe, "d_make_root" },
	{ 0xa2917551, "__blockdev_direct_IO" },
	{ 0x49970de8, "finish_wait" },
	{ 0x28a1c1d4, "inode_set_flags" },
	{ 0xc9c2fc0c, "__block_write_begin" },
	{ 0x812cabd, "mark_buffer_dirty" },
	{ 0x6b4caa76, "unregister_filesystem" },
	{ 0x7c3951d6, "init_special_inode" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xca0ad6f1, "trace_raw_output_prep" },
	{ 0xe2e8065e, "memdup_user" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0xb2d48a2e, "queue_work_on" },
	{ 0xd417d1f9, "filemap_map_pages" },
	{ 0xe6c12171, "complete" },
	{ 0xc358aaf8, "snprintf" },
	{ 0x5e78d1ad, "fiemap_check_flags" },
	{ 0x800805e5, "new_inode" },
	{ 0xca54fee, "_test_and_set_bit" },
	{ 0xb19e8429, "trace_seq_printf" },
	{ 0x99bb8806, "memmove" },
	{ 0x8e0988a0, "generic_file_splice_read" },
	{ 0x1ee8d6d4, "refcount_inc_checked" },
	{ 0x49ebacbd, "_clear_bit" },
	{ 0x9704d50e, "empty_aops" },
	{ 0xdc28f1bc, "bpf_trace_run4" },
	{ 0x68a6116f, "clear_inode" },
	{ 0x53b64c77, "d_instantiate" },
	{ 0x6f013ecd, "__init_rwsem" },
	{ 0x5ff9fba4, "flush_dcache_page" },
	{ 0xcc286e8e, "__put_page" },
	{ 0xfe13d6f9, "clear_nlink" },
	{ 0x78d04237, "setattr_prepare" },
	{ 0x7fad7308, "inode_init_owner" },
	{ 0x420ae378, "__page_file_index" },
	{ 0x55e83d93, "truncate_inode_pages" },
	{ 0xb815eeea, "bio_associate_blkg" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "C541B58E052ECB7553190E0");