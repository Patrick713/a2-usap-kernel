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
	{ 0x22f8c1ca, "kobject_put" },
	{ 0xe8c78ae1, "blkdev_issue_discard" },
	{ 0x1e6ff418, "kset_create_and_add" },
	{ 0x766a0927, "mempool_alloc_pages" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x2680385, "kmem_cache_destroy" },
	{ 0x5a9b6c12, "address_space_init_once" },
	{ 0x9321596f, "fs_bio_set" },
	{ 0x7d253e42, "iget_failed" },
	{ 0x4bef1c67, "empty_name" },
	{ 0xf4610713, "kmalloc_caches" },
	{ 0x2d6fcc06, "__kmalloc" },
	{ 0x682f0075, "iomap_seek_data" },
	{ 0xc4f0da12, "ktime_get_with_offset" },
	{ 0xf9a482f9, "msleep" },
	{ 0x7062fd9e, "drop_nlink" },
	{ 0x676c2adc, "sb_min_blocksize" },
	{ 0x55e00c3a, "put_pid" },
	{ 0x6309e811, "rhashtable_walk_exit" },
	{ 0xa7b3181c, "up_read" },
	{ 0xf246c744, "trace_handle_return" },
	{ 0x5261322c, "rht_bucket_nested" },
	{ 0x84502a47, "blk_status_to_errno" },
	{ 0x6bb665e0, "bio_alloc_bioset" },
	{ 0x786d1c2c, "list_lru_add" },
	{ 0xec37a2e8, "lockref_get_not_dead" },
	{ 0x77488b78, "seq_open_private" },
	{ 0x14d1b7f5, "generic_file_llseek" },
	{ 0xd1de681e, "__mark_inode_dirty" },
	{ 0x93b18eee, "debugfs_create_dir" },
	{ 0x76d11765, "mem_map" },
	{ 0x5c1079b1, "filemap_fault" },
	{ 0x349cba85, "strchr" },
	{ 0x7aa1756e, "kvfree" },
	{ 0xb1fbedfd, "generic_write_checks" },
	{ 0xa0fbac79, "wake_up_bit" },
	{ 0x97255bdf, "strlen" },
	{ 0x60a13e90, "rcu_barrier" },
	{ 0x72723a92, "filemap_write_and_wait_range" },
	{ 0xc3b9e2f7, "iget5_locked" },
	{ 0x5eedb4b8, "dget_parent" },
	{ 0xbce0c740, "seq_open" },
	{ 0x8255b87c, "bdev_read_only" },
	{ 0xc8507ba0, "seq_release_private" },
	{ 0xb8b043f2, "kfree_link" },
	{ 0xad73041f, "autoremove_wake_function" },
	{ 0x7a1602aa, "posix_acl_to_xattr" },
	{ 0x19f462ab, "kfree_call_rcu" },
	{ 0xfe90c4a6, "_find_first_zero_bit_le" },
	{ 0xe38cf556, "seq_escape" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0x85643bc5, "iomap_zero_range" },
	{ 0xa5a5f2e8, "block_is_partially_uptodate" },
	{ 0x27b05872, "rhashtable_walk_next" },
	{ 0x47bd1754, "iomap_dio_iopoll" },
	{ 0x5d7776e5, "seq_puts" },
	{ 0x2ba6490e, "is_bad_inode" },
	{ 0xba7dd190, "pagecache_get_page" },
	{ 0x2778c2ac, "truncate_inode_pages_range" },
	{ 0xa58b0482, "generic_file_open" },
	{ 0xc82226f5, "posix_acl_access_xattr_handler" },
	{ 0x394d1323, "posix_acl_update_mode" },
	{ 0x7ab88a45, "system_freezing_cnt" },
	{ 0x58b779a7, "__lock_page" },
	{ 0x1bdb8ad6, "kobject_uevent" },
	{ 0x5877a2ef, "ll_rw_block" },
	{ 0xfeb97a37, "tag_pages_for_writeback" },
	{ 0x9dbb2013, "__lock_buffer" },
	{ 0xf7802486, "__aeabi_uidivmod" },
	{ 0xd4f7e202, "touch_atime" },
	{ 0x25b775bc, "deactivate_locked_super" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xd32d6c08, "lockref_get" },
	{ 0x5117deaf, "dput" },
	{ 0x2a3aa678, "_test_and_clear_bit" },
	{ 0xc8275115, "seq_printf" },
	{ 0xb0e1fe70, "list_lru_walk_one" },
	{ 0xb43f9365, "ktime_get" },
	{ 0x3e1eff16, "get_tree_bdev" },
	{ 0x353e3fa5, "__get_user_4" },
	{ 0xfb336634, "mempool_destroy" },
	{ 0x44e9a829, "match_token" },
	{ 0xdba9c906, "buffer_migrate_page" },
	{ 0x6fff0729, "inc_nlink" },
	{ 0xcba4abe3, "list_sort" },
	{ 0x987c11c7, "__pv_phys_pfn_offset" },
	{ 0x50c89f23, "__alloc_percpu" },
	{ 0xa6a7a2ad, "div_s64_rem" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0x37cc1f05, "init_user_ns" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xae353d77, "arm_copy_from_user" },
	{ 0x46bfe1b0, "prepare_to_wait_exclusive" },
	{ 0x7888f565, "filemap_fdatawait_range" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0x85df9b6c, "strsep" },
	{ 0xfe5418b, "d_add" },
	{ 0xe78a8482, "trace_event_buffer_reserve" },
	{ 0x9c18c53a, "igrab" },
	{ 0x7c20652d, "debugfs_create_file" },
	{ 0x28aa6a67, "call_rcu" },
	{ 0x5b86af02, "unlock_buffer" },
	{ 0xfc249134, "noop_direct_IO" },
	{ 0xab01d3f2, "redirty_page_for_writepage" },
	{ 0xb15b4109, "crc32c" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xb6529965, "rhashtable_insert_slow" },
	{ 0x22fc4f3a, "trace_print_flags_seq" },
	{ 0x35edc130, "debugfs_remove_recursive" },
	{ 0x3c112e9f, "pagevec_lookup_range_tag" },
	{ 0xdc0adda3, "seq_read" },
	{ 0x195ae37b, "bpf_trace_run3" },
	{ 0xd697e69a, "trace_hardirqs_on" },
	{ 0x40fd1bb5, "__alloc_pages_nodemask" },
	{ 0xa4040d67, "sysfs_remove_group" },
	{ 0x903b627c, "list_lru_isolate_move" },
	{ 0xb1b2427c, "set_page_dirty" },
	{ 0xdd34010a, "kthread_create_on_node" },
	{ 0x526c3a6c, "jiffies" },
	{ 0xc9ec4e21, "free_percpu" },
	{ 0xf6b62c95, "truncate_setsize" },
	{ 0x51a910c0, "arm_copy_to_user" },
	{ 0x87e9a7c3, "try_to_release_page" },
	{ 0xa80acb56, "lockref_mark_dead" },
	{ 0xfb1d7438, "down_read" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xcf3fac84, "cpumask_next" },
	{ 0xc28ebcf1, "end_page_writeback" },
	{ 0x47a25702, "rhashtable_destroy" },
	{ 0x754f348a, "complete_all" },
	{ 0xece784c2, "rb_first" },
	{ 0x2e43d7c1, "make_kgid" },
	{ 0x5bbe49f4, "__init_waitqueue_head" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0x47b902cc, "__list_lru_init" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0x748ec97d, "__insert_inode_hash" },
	{ 0xb561ac5b, "wait_for_completion" },
	{ 0xe0cb112, "inode_owner_or_capable" },
	{ 0x9480c376, "mpage_readpages" },
	{ 0xd40abbf4, "iomap_fiemap" },
	{ 0x52dc69ef, "rht_bucket_nested_insert" },
	{ 0x5ab66c16, "security_inode_invalidate_secctx" },
	{ 0xe3c7c8d7, "trace_define_field" },
	{ 0x739bc2e2, "kern_path" },
	{ 0x5f754e5a, "memset" },
	{ 0x1e96f43d, "__cpu_possible_mask" },
	{ 0xac95141e, "from_kuid" },
	{ 0x83673cbf, "default_llseek" },
	{ 0xb39d1bbe, "mpage_readpage" },
	{ 0x18323d8c, "bpf_trace_run1" },
	{ 0x7eaa268, "iomap_bmap" },
	{ 0xce2ac469, "finish_no_open" },
	{ 0x648c1ffa, "wait_for_completion_killable" },
	{ 0x86dbf1e, "freezing_slow_path" },
	{ 0xb787eee9, "rhashtable_walk_stop" },
	{ 0x2d183240, "list_lru_count_one" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0xacb31ecf, "_raw_spin_trylock" },
	{ 0x7bfbe88e, "kthread_stop" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0x19eb695f, "posix_acl_chmod" },
	{ 0xf63fc023, "sysfs_create_group" },
	{ 0xf4c13736, "d_obtain_alias" },
	{ 0x71c90087, "memcmp" },
	{ 0x921b07b1, "__cpu_online_mask" },
	{ 0x4eeb6d2, "rhashtable_walk_start_check" },
	{ 0x7c1f5817, "write_inode_now" },
	{ 0x14ae8f7c, "bio_add_page" },
	{ 0x871d27c3, "thaw_super" },
	{ 0x421ee8ba, "generic_writepages" },
	{ 0x93a6913e, "kobject_init_and_add" },
	{ 0xf1e046cc, "panic" },
	{ 0x3704c324, "mpage_writepages" },
	{ 0x6dd27aeb, "__block_write_full_page" },
	{ 0x61e299f8, "file_remove_privs" },
	{ 0xdb91f504, "blkdev_issue_zeroout" },
	{ 0x1d79a545, "end_buffer_async_write" },
	{ 0x3532ba0, "bio_chain" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x4d9b652b, "rb_erase" },
	{ 0x17961cdc, "trace_event_reg" },
	{ 0x6dcf857f, "uuid_null" },
	{ 0xe395d3eb, "from_kgid" },
	{ 0x17a7462, "seq_putc" },
	{ 0x82d79b51, "sysctl_vfs_cache_pressure" },
	{ 0x888f6693, "security_inode_init_security" },
	{ 0xd985dc99, "mempool_free_pages" },
	{ 0x47915c30, "debugfs_remove" },
	{ 0x73e20c1c, "strlcpy" },
	{ 0xbb9f1908, "kmem_cache_free" },
	{ 0x93a6e0b2, "io_schedule" },
	{ 0x26ca851c, "set_nlink" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0x32c5d9c8, "__wait_on_buffer" },
	{ 0x39b730cf, "file_update_time" },
	{ 0x80c4c319, "crc32_le" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x475afad0, "setattr_copy" },
	{ 0x573676f5, "bpf_trace_run5" },
	{ 0x631dc549, "wait_on_page_writeback" },
	{ 0xc1e58a5f, "refcount_dec_and_test_checked" },
	{ 0x2bc947, "truncate_pagecache" },
	{ 0x1903b9c1, "pid_task" },
	{ 0x3f311e45, "set_cached_acl" },
	{ 0x2ef118e0, "vfs_ioc_setflags_prepare" },
	{ 0x8c8569cb, "kstrtoint" },
	{ 0x6f8a0fde, "sysfs_remove_link" },
	{ 0x4e3567f7, "match_int" },
	{ 0xce5eb07b, "wait_on_page_bit" },
	{ 0x7505bdef, "memchr_inv" },
	{ 0x7317790e, "lockref_put_or_lock" },
	{ 0x4ccf485f, "unlock_page" },
	{ 0x10ea359b, "generic_file_read_iter" },
	{ 0x310917fe, "sort" },
	{ 0x7e0ce0c3, "up_write" },
	{ 0xf646340, "shrink_dcache_sb" },
	{ 0x4253aa7e, "down_write" },
	{ 0xbb55582d, "perf_trace_run_bpf_submit" },
	{ 0xaaecf75d, "perf_trace_buf_alloc" },
	{ 0x42160169, "flush_workqueue" },
	{ 0xbb9aa951, "posix_acl_create" },
	{ 0x1c0d35b5, "__brelse" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xe3e6db69, "bio_put" },
	{ 0x6b57e67d, "kobject_uevent_env" },
	{ 0x58e3306d, "bit_wait_io" },
	{ 0x59e5070d, "__do_div64" },
	{ 0x51ad545e, "nobh_writepage" },
	{ 0x1ed5c2df, "mark_buffer_async_write" },
	{ 0x769f6e64, "errseq_check" },
	{ 0xb7c1f6be, "file_write_and_wait_range" },
	{ 0x2e7bf6d6, "inode_init_once" },
	{ 0xf7ef8d27, "mark_buffer_write_io_error" },
	{ 0x9cb0f84b, "sysfs_create_link" },
	{ 0x9a78f52e, "freeze_super" },
	{ 0xa6cc2717, "mnt_drop_write_file" },
	{ 0x8548c258, "submit_bio" },
	{ 0xc6cbbc89, "capable" },
	{ 0xe24f8a40, "seq_vprintf" },
	{ 0xf5b666ef, "__cond_resched_lock" },
	{ 0xf2215f74, "blk_finish_plug" },
	{ 0x16e297c3, "bit_wait" },
	{ 0x4007496c, "kmem_cache_alloc" },
	{ 0xda2a4834, "__free_pages" },
	{ 0x7ad050b9, "qid_lt" },
	{ 0xbbfe0efb, "unregister_shrinker" },
	{ 0xd8410611, "mempool_alloc" },
	{ 0xbc10dd97, "__put_user_4" },
	{ 0xc80b7435, "__filemap_set_wb_err" },
	{ 0xfd4eb36e, "wait_for_stable_page" },
	{ 0x44b9708a, "fs_kobj" },
	{ 0x5eb39539, "generic_setlease" },
	{ 0xe6b8dc23, "truncate_inode_pages_final" },
	{ 0x7246415a, "create_empty_buffers" },
	{ 0xb8886e84, "make_kuid" },
	{ 0x2e34de19, "try_to_free_buffers" },
	{ 0x47ae0e60, "trace_event_ignore_this_pid" },
	{ 0xcf86cdac, "queue_delayed_work_on" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x1000e51, "schedule" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x77f6f183, "kmalloc_order_trace" },
	{ 0xf2ca1800, "posix_acl_from_xattr" },
	{ 0xb1428fc9, "iomap_seek_hole" },
	{ 0xbfdf7bc3, "mempool_create" },
	{ 0x2da81bff, "_raw_spin_lock_irq" },
	{ 0x749066fb, "unlock_new_inode" },
	{ 0x84d38d36, "mnt_want_write_file" },
	{ 0x559707c8, "kill_block_super" },
	{ 0xfcdcb7a1, "deactivate_super" },
	{ 0xd46b54dd, "flush_delayed_work" },
	{ 0x6b2dc060, "dump_stack" },
	{ 0xd4e3135c, "inode_newsize_ok" },
	{ 0x7e3c7f41, "iomap_dio_rw" },
	{ 0x4482cdb, "__refrigerator" },
	{ 0x5003a3fb, "bio_clone_blkg_association" },
	{ 0x9746b2c7, "iomap_readpage" },
	{ 0x4446417b, "trace_event_buffer_commit" },
	{ 0xb35d51ab, "wake_up_process" },
	{ 0x9fa6ba35, "d_prune_aliases" },
	{ 0x944d5479, "vfs_setpos" },
	{ 0x590cfb19, "fs_parse" },
	{ 0x1a554bd4, "clear_page_dirty_for_io" },
	{ 0xf7b97c84, "submit_bh" },
	{ 0x5d59b6b3, "path_put" },
	{ 0xebaa9dc8, "kmem_cache_alloc_trace" },
	{ 0x794765d1, "mempool_free" },
	{ 0xdb9ca3c5, "_raw_spin_lock" },
	{ 0x341dbfa3, "__per_cpu_offset" },
	{ 0x4fd9dc83, "sync_inode_metadata" },
	{ 0xa5526619, "rb_insert_color" },
	{ 0x4c0e8130, "kmem_cache_create" },
	{ 0x2f89f67a, "list_lru_count_node" },
	{ 0xf3d8ce69, "register_filesystem" },
	{ 0x41a17314, "rhashtable_walk_enter" },
	{ 0x405aa597, "event_triggers_call" },
	{ 0x3dcf1ffa, "__wake_up" },
	{ 0xb3f7646e, "kthread_should_stop" },
	{ 0xaf36e367, "__pagevec_release" },
	{ 0x1984d421, "out_of_line_wait_on_bit" },
	{ 0x647af474, "prepare_to_wait_event" },
	{ 0x6a4010ed, "bpf_trace_run2" },
	{ 0xcf5fcda8, "__test_set_page_writeback" },
	{ 0x728c65bd, "I_BDEV" },
	{ 0x31b9195c, "__local_bh_disable_ip" },
	{ 0x9405c2d3, "rhashtable_init" },
	{ 0x94af33c9, "iter_file_splice_write" },
	{ 0x919b2916, "blockdev_superblock" },
	{ 0x8d55bb8a, "qid_eq" },
	{ 0x2cfde9a2, "warn_slowpath_fmt" },
	{ 0xa2a29a97, "logfc" },
	{ 0x167c65ac, "seq_lseek" },
	{ 0x937cd95e, "kset_unregister" },
	{ 0x70d99e61, "iput" },
	{ 0x621debdd, "finish_open" },
	{ 0x109d0eca, "__vmalloc" },
	{ 0x41d47f75, "read_cache_page" },
	{ 0x37a0cba, "kfree" },
	{ 0x2a68ba43, "truncate_pagecache_range" },
	{ 0x3b6c41ea, "kstrtouint" },
	{ 0x3c821750, "generic_permission" },
	{ 0xaaa314f9, "inode_dio_wait" },
	{ 0x473a319f, "ihold" },
	{ 0x2b11a2d5, "unmap_mapping_range" },
	{ 0x8b910be2, "errseq_sample" },
	{ 0x9d669763, "memcpy" },
	{ 0xdd5e7751, "__sb_end_write" },
	{ 0xe93f6042, "trace_print_symbols_seq" },
	{ 0x9dc921, "trace_event_raw_init" },
	{ 0x9812880e, "current_time" },
	{ 0x6578533e, "prepare_to_wait" },
	{ 0xff61c4d5, "generic_error_remove_page" },
	{ 0x4eb13446, "d_splice_alias" },
	{ 0xd6c2599f, "sget_fc" },
	{ 0x4f0a58e3, "register_shrinker" },
	{ 0x8734819f, "end_buffer_read_sync" },
	{ 0xe153f436, "__cpu_present_mask" },
	{ 0x28bb4106, "sync_filesystem" },
	{ 0x43b2460b, "invalidate_mapping_pages" },
	{ 0x2b5c43bf, "__set_page_dirty_buffers" },
	{ 0xb212ad15, "sb_set_blocksize" },
	{ 0xf61d447b, "__sb_start_write" },
	{ 0xab566ebe, "d_make_root" },
	{ 0x9dc08a71, "pgprot_kernel" },
	{ 0x49970de8, "finish_wait" },
	{ 0x332c8442, "filemap_fdatawrite_range" },
	{ 0x37204c73, "posix_acl_default_xattr_handler" },
	{ 0xbe9af246, "list_lru_destroy" },
	{ 0xca9360b5, "rb_next" },
	{ 0x812cabd, "mark_buffer_dirty" },
	{ 0x6b4caa76, "unregister_filesystem" },
	{ 0x7c3951d6, "init_special_inode" },
	{ 0x937733e3, "qid_valid" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xb0051534, "forget_all_cached_acls" },
	{ 0xca0ad6f1, "trace_raw_output_prep" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0xb2d48a2e, "queue_work_on" },
	{ 0x8ebdad39, "iomap_file_buffered_write" },
	{ 0xd417d1f9, "filemap_map_pages" },
	{ 0xe6c12171, "complete" },
	{ 0xc358aaf8, "snprintf" },
	{ 0x4fff5af6, "file_fdatawait_range" },
	{ 0xd2c2771e, "seq_release" },
	{ 0x7ce18c9f, "from_kqid" },
	{ 0x800805e5, "new_inode" },
	{ 0xca54fee, "_test_and_set_bit" },
	{ 0xb19e8429, "trace_seq_printf" },
	{ 0x8e0988a0, "generic_file_splice_read" },
	{ 0xe8cd0a2c, "crc32_le_shift" },
	{ 0x1ee8d6d4, "refcount_inc_checked" },
	{ 0x49ebacbd, "_clear_bit" },
	{ 0x93fb510b, "list_lru_del" },
	{ 0x57ceedb1, "lockref_put_not_zero" },
	{ 0xa038f306, "__rht_bucket_nested" },
	{ 0xdc28f1bc, "bpf_trace_run4" },
	{ 0x68a6116f, "clear_inode" },
	{ 0xdf9208c0, "alloc_workqueue" },
	{ 0x7a9b37e8, "blk_start_plug" },
	{ 0x53b64c77, "d_instantiate" },
	{ 0x6f013ecd, "__init_rwsem" },
	{ 0x5ff9fba4, "flush_dcache_page" },
	{ 0xcc286e8e, "__put_page" },
	{ 0xfe13d6f9, "clear_nlink" },
	{ 0x4f22d6f9, "completion_done" },
	{ 0x760a0f4f, "yield" },
	{ 0xc7d9d1f5, "vfs_fsync_range" },
	{ 0x78d04237, "setattr_prepare" },
	{ 0x81949a46, "generic_fillattr" },
	{ 0x38fc0a1e, "filemap_fdatawrite" },
	{ 0x4f587532, "noop_backing_dev_info" },
	{ 0x484f6edf, "ktime_get_coarse_real_ts64" },
	{ 0x55e83d93, "truncate_inode_pages" },
	{ 0x719e0e44, "add_uevent_var" },
	{ 0x81822d1, "__tracepoint_wbc_writepage" },
	{ 0xb815eeea, "bio_associate_blkg" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "A64072381663FC0227A3BB3");