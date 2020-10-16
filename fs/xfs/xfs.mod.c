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
	{ 0xdfc7a542, "forget_cached_acl" },
	{ 0x22f8c1ca, "kobject_put" },
	{ 0xe8c78ae1, "blkdev_issue_discard" },
	{ 0x92b57248, "flush_work" },
	{ 0x1e6ff418, "kset_create_and_add" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x1af35879, "bio_split" },
	{ 0x2680385, "kmem_cache_destroy" },
	{ 0x2690e6c1, "_find_next_zero_bit_le" },
	{ 0x9321596f, "fs_bio_set" },
	{ 0x94fa2fc5, "__blkdev_issue_discard" },
	{ 0xf4610713, "kmalloc_caches" },
	{ 0x2d6fcc06, "__kmalloc" },
	{ 0x682f0075, "iomap_seek_data" },
	{ 0xf9a482f9, "msleep" },
	{ 0x7062fd9e, "drop_nlink" },
	{ 0x676c2adc, "sb_min_blocksize" },
	{ 0x9b55aacf, "submit_bio_wait" },
	{ 0xff178f6, "__aeabi_idivmod" },
	{ 0xa7b3181c, "up_read" },
	{ 0xf246c744, "trace_handle_return" },
	{ 0x5261322c, "rht_bucket_nested" },
	{ 0x84502a47, "blk_status_to_errno" },
	{ 0x6bb665e0, "bio_alloc_bioset" },
	{ 0x786d1c2c, "list_lru_add" },
	{ 0xe317e0be, "iomap_is_partially_uptodate" },
	{ 0x14d1b7f5, "generic_file_llseek" },
	{ 0xded290fb, "try_wait_for_completion" },
	{ 0xdc1c3232, "d_invalidate" },
	{ 0x76d11765, "mem_map" },
	{ 0x5c1079b1, "filemap_fault" },
	{ 0x48cb057c, "register_sysctl_table" },
	{ 0xa2b567e7, "user_path_at_empty" },
	{ 0x9892c4c8, "percpu_counter_set" },
	{ 0x7aa1756e, "kvfree" },
	{ 0xb1fbedfd, "generic_write_checks" },
	{ 0x81ba3b86, "percpu_counter_destroy" },
	{ 0x3fd2571, "vm_unmap_ram" },
	{ 0x86fb587c, "bpf_trace_run7" },
	{ 0xa0fbac79, "wake_up_bit" },
	{ 0x71b3805e, "generic_update_time" },
	{ 0x5099311d, "proc_symlink" },
	{ 0x97255bdf, "strlen" },
	{ 0x151f4898, "schedule_timeout_uninterruptible" },
	{ 0x60a13e90, "rcu_barrier" },
	{ 0x72723a92, "filemap_write_and_wait_range" },
	{ 0xc1d8cfaf, "__fdget" },
	{ 0x53adbbd1, "proc_create_single_data" },
	{ 0x5eedb4b8, "dget_parent" },
	{ 0x64999478, "congestion_wait" },
	{ 0x8255b87c, "bdev_read_only" },
	{ 0xb8b043f2, "kfree_link" },
	{ 0xad73041f, "autoremove_wake_function" },
	{ 0x19f462ab, "kfree_call_rcu" },
	{ 0xfe90c4a6, "_find_first_zero_bit_le" },
	{ 0xe38cf556, "seq_escape" },
	{ 0x85643bc5, "iomap_zero_range" },
	{ 0xc22a3091, "vm_unmap_aliases" },
	{ 0x47bd1754, "iomap_dio_iopoll" },
	{ 0x983ac031, "remove_wait_queue" },
	{ 0x5d7776e5, "seq_puts" },
	{ 0x118d48d9, "blkdev_issue_flush" },
	{ 0xe9325f03, "downgrade_write" },
	{ 0xc82226f5, "posix_acl_access_xattr_handler" },
	{ 0xacf4d843, "match_strdup" },
	{ 0x394d1323, "posix_acl_update_mode" },
	{ 0x7ab88a45, "system_freezing_cnt" },
	{ 0x900244a5, "filemap_write_and_wait" },
	{ 0xf7802486, "__aeabi_uidivmod" },
	{ 0xd4f7e202, "touch_atime" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x5117deaf, "dput" },
	{ 0x2a3aa678, "_test_and_clear_bit" },
	{ 0xc8275115, "seq_printf" },
	{ 0xb0e1fe70, "list_lru_walk_one" },
	{ 0x7e2c085, "radix_tree_tagged" },
	{ 0x353e3fa5, "__get_user_4" },
	{ 0x44e9a829, "match_token" },
	{ 0x6fff0729, "inc_nlink" },
	{ 0xcba4abe3, "list_sort" },
	{ 0x987c11c7, "__pv_phys_pfn_offset" },
	{ 0x50c89f23, "__alloc_percpu" },
	{ 0xed2d8bfe, "d_find_alias" },
	{ 0x74645779, "dentry_open" },
	{ 0xa6a7a2ad, "div_s64_rem" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0x37cc1f05, "init_user_ns" },
	{ 0x77c58230, "__percpu_counter_sum" },
	{ 0x9deeaf5f, "bioset_init" },
	{ 0xca431c05, "wake_bit_function" },
	{ 0xa843805a, "get_unused_fd_flags" },
	{ 0xecf0dcd1, "vfs_readlink" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xae353d77, "arm_copy_from_user" },
	{ 0xf828b0ef, "percpu_counter_add_batch" },
	{ 0x46bfe1b0, "prepare_to_wait_exclusive" },
	{ 0x29d9f26e, "cancel_delayed_work_sync" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0x4b4dbd4b, "mount_bdev" },
	{ 0x85df9b6c, "strsep" },
	{ 0x13392728, "bio_uninit" },
	{ 0xe78a8482, "trace_event_buffer_reserve" },
	{ 0x866aed9a, "kobject_del" },
	{ 0xb80a90b1, "generic_read_dir" },
	{ 0x9c18c53a, "igrab" },
	{ 0x28aa6a67, "call_rcu" },
	{ 0xfc249134, "noop_direct_IO" },
	{ 0xab01d3f2, "redirty_page_for_writepage" },
	{ 0xb15b4109, "crc32c" },
	{ 0xb6529965, "rhashtable_insert_slow" },
	{ 0x22fc4f3a, "trace_print_flags_seq" },
	{ 0x24428be5, "strncpy_from_user" },
	{ 0x953e1b9e, "ktime_get_real_seconds" },
	{ 0x195ae37b, "bpf_trace_run3" },
	{ 0x40fd1bb5, "__alloc_pages_nodemask" },
	{ 0x903b627c, "list_lru_isolate_move" },
	{ 0xabc640f3, "list_lru_isolate" },
	{ 0xdd34010a, "kthread_create_on_node" },
	{ 0x526c3a6c, "jiffies" },
	{ 0xc9ec4e21, "free_percpu" },
	{ 0x51a910c0, "arm_copy_to_user" },
	{ 0xf6b62c95, "truncate_setsize" },
	{ 0xdd4ffa9b, "mutex_trylock" },
	{ 0xfb1d7438, "down_read" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x7aded2f7, "down_write_trylock" },
	{ 0xcf3fac84, "cpumask_next" },
	{ 0xc28ebcf1, "end_page_writeback" },
	{ 0x845dc854, "wbc_account_cgroup_owner" },
	{ 0x47a25702, "rhashtable_destroy" },
	{ 0x57df013d, "invalidate_bdev" },
	{ 0x2e43d7c1, "make_kgid" },
	{ 0xa73ee62b, "_atomic_dec_and_lock" },
	{ 0x5bbe49f4, "__init_waitqueue_head" },
	{ 0xaad8c7d6, "default_wake_function" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0x47b902cc, "__list_lru_init" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0xb561ac5b, "wait_for_completion" },
	{ 0xe0cb112, "inode_owner_or_capable" },
	{ 0xd40abbf4, "iomap_fiemap" },
	{ 0xcbe8caa5, "generic_remap_file_range_prep" },
	{ 0x52dc69ef, "rht_bucket_nested_insert" },
	{ 0x70530d1b, "noop_set_page_dirty" },
	{ 0x407136b1, "__put_user_8" },
	{ 0xe3c7c8d7, "trace_define_field" },
	{ 0x683ac9d4, "bio_associate_blkg_from_css" },
	{ 0x5f754e5a, "memset" },
	{ 0xc7984120, "noop_invalidatepage" },
	{ 0xf8a38105, "rhashtable_free_and_destroy" },
	{ 0x5fbc4e77, "bio_init" },
	{ 0x1e96f43d, "__cpu_possible_mask" },
	{ 0xac95141e, "from_kuid" },
	{ 0xe48fee19, "sync_inodes_sb" },
	{ 0xf617b198, "proc_mkdir" },
	{ 0xe1f76621, "d_add_ci" },
	{ 0x7361f530, "bpf_trace_run9" },
	{ 0x18323d8c, "bpf_trace_run1" },
	{ 0x7eaa268, "iomap_bmap" },
	{ 0x11089ac7, "_ctype" },
	{ 0x39a12ca7, "_raw_spin_unlock_irqrestore" },
	{ 0x612bfd89, "errno_to_blk_status" },
	{ 0x86dbf1e, "freezing_slow_path" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0xb4471bfe, "down_trylock" },
	{ 0x2d183240, "list_lru_count_one" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0xacb31ecf, "_raw_spin_trylock" },
	{ 0x7bfbe88e, "kthread_stop" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0x19eb695f, "posix_acl_chmod" },
	{ 0x3e243765, "file_modified" },
	{ 0xf4c13736, "d_obtain_alias" },
	{ 0x71c90087, "memcmp" },
	{ 0x921b07b1, "__cpu_online_mask" },
	{ 0x14ae8f7c, "bio_add_page" },
	{ 0x93a6913e, "kobject_init_and_add" },
	{ 0xdb91f504, "blkdev_issue_zeroout" },
	{ 0x3532ba0, "bio_chain" },
	{ 0x76d3cd60, "laptop_mode" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x4d9b652b, "rb_erase" },
	{ 0x328a05f1, "strncpy" },
	{ 0x17961cdc, "trace_event_reg" },
	{ 0x6dcf857f, "uuid_null" },
	{ 0xa522fbee, "iomap_swapfile_activate" },
	{ 0xe395d3eb, "from_kgid" },
	{ 0x476259d1, "blkdev_get_by_path" },
	{ 0x17a7462, "seq_putc" },
	{ 0x888f6693, "security_inode_init_security" },
	{ 0x84b183ae, "strncmp" },
	{ 0xbee380ba, "posix_acl_alloc" },
	{ 0xbb4c10a5, "vm_map_ram" },
	{ 0xbb9f1908, "kmem_cache_free" },
	{ 0x93a6e0b2, "io_schedule" },
	{ 0x26ca851c, "set_nlink" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0x39b730cf, "file_update_time" },
	{ 0xb628761b, "write_cache_pages" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x573676f5, "bpf_trace_run5" },
	{ 0x403a93e7, "radix_tree_gang_lookup_tag" },
	{ 0xf0ef52e8, "down" },
	{ 0xd59875f8, "thaw_bdev" },
	{ 0xc73d8f51, "unlock_two_nondirectories" },
	{ 0xc1e58a5f, "refcount_dec_and_test_checked" },
	{ 0xfda9581f, "prandom_u32" },
	{ 0x5240ee7, "percpu_counter_batch" },
	{ 0xdc3fcbc9, "__sw_hweight8" },
	{ 0x3f311e45, "set_cached_acl" },
	{ 0xdd27fa87, "memchr" },
	{ 0x8c8569cb, "kstrtoint" },
	{ 0x4e3567f7, "match_int" },
	{ 0x7505bdef, "memchr_inv" },
	{ 0x4ccf485f, "unlock_page" },
	{ 0x10ea359b, "generic_file_read_iter" },
	{ 0x310917fe, "sort" },
	{ 0x7e0ce0c3, "up_write" },
	{ 0x4253aa7e, "down_write" },
	{ 0xa92173df, "fput" },
	{ 0xbb55582d, "perf_trace_run_bpf_submit" },
	{ 0xaaecf75d, "perf_trace_buf_alloc" },
	{ 0x42160169, "flush_workqueue" },
	{ 0xbb9aa951, "posix_acl_create" },
	{ 0x2196324, "__aeabi_idiv" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xe034cf65, "bio_endio" },
	{ 0xdba5e9a, "radix_tree_delete" },
	{ 0xe3e6db69, "bio_put" },
	{ 0x9f46ced8, "__sw_hweight64" },
	{ 0x49f26466, "kstrndup" },
	{ 0x59e5070d, "__do_div64" },
	{ 0x6b2829aa, "kmem_cache_size" },
	{ 0xa0aefe3e, "bit_waitqueue" },
	{ 0xb7c1f6be, "file_write_and_wait_range" },
	{ 0x1b886e9c, "bioset_exit" },
	{ 0x2e7bf6d6, "inode_init_once" },
	{ 0xf61636a0, "iomap_page_mkwrite" },
	{ 0x4c08f74f, "__destroy_inode" },
	{ 0xe913b6e9, "iomap_invalidatepage" },
	{ 0x4059792f, "print_hex_dump" },
	{ 0xa6cc2717, "mnt_drop_write_file" },
	{ 0x8548c258, "submit_bio" },
	{ 0xc6cbbc89, "capable" },
	{ 0xf2215f74, "blk_finish_plug" },
	{ 0xe5eabb4e, "capable_wrt_inode_uidgid" },
	{ 0xe9cbf734, "radix_tree_gang_lookup" },
	{ 0x4007496c, "kmem_cache_alloc" },
	{ 0xda2a4834, "__free_pages" },
	{ 0x6e71cf35, "blkdev_put" },
	{ 0xbbfe0efb, "unregister_shrinker" },
	{ 0xbc10dd97, "__put_user_4" },
	{ 0xd3e6a89b, "generic_fadvise" },
	{ 0x480aa3a3, "iomap_set_page_dirty" },
	{ 0xe3a90dfa, "radix_tree_tag_set" },
	{ 0xd9ce8f0c, "strnlen" },
	{ 0xc80b7435, "__filemap_set_wb_err" },
	{ 0x44b9708a, "fs_kobj" },
	{ 0xb8886e84, "make_kuid" },
	{ 0x47ae0e60, "trace_event_ignore_this_pid" },
	{ 0x3d52fb7f, "unregister_sysctl_table" },
	{ 0xcf86cdac, "queue_delayed_work_on" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x1000e51, "schedule" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0xee43fd9b, "___ratelimit" },
	{ 0xb1428fc9, "iomap_seek_hole" },
	{ 0xe4eaab70, "make_kprojid" },
	{ 0x8a7d1c31, "high_memory" },
	{ 0x749066fb, "unlock_new_inode" },
	{ 0x84d38d36, "mnt_want_write_file" },
	{ 0xd2055551, "exportfs_decode_fh" },
	{ 0x8b8059bd, "in_group_p" },
	{ 0x559707c8, "kill_block_super" },
	{ 0xd46b54dd, "flush_delayed_work" },
	{ 0x6b2dc060, "dump_stack" },
	{ 0x4fd33ac1, "lock_two_nondirectories" },
	{ 0xd4e3135c, "inode_newsize_ok" },
	{ 0x5e95b1cd, "current_umask" },
	{ 0x7e3c7f41, "iomap_dio_rw" },
	{ 0x70b575e6, "list_lru_walk_node" },
	{ 0x4482cdb, "__refrigerator" },
	{ 0x5003a3fb, "bio_clone_blkg_association" },
	{ 0x9746b2c7, "iomap_readpage" },
	{ 0x4446417b, "trace_event_buffer_commit" },
	{ 0xb35d51ab, "wake_up_process" },
	{ 0x3f4547a7, "put_unused_fd" },
	{ 0x4bf1b7df, "__percpu_counter_init" },
	{ 0x944d5479, "vfs_setpos" },
	{ 0x1a554bd4, "clear_page_dirty_for_io" },
	{ 0x8108ac7a, "down_read_trylock" },
	{ 0x5d59b6b3, "path_put" },
	{ 0xebaa9dc8, "kmem_cache_alloc_trace" },
	{ 0xdb9ca3c5, "_raw_spin_lock" },
	{ 0x341dbfa3, "__per_cpu_offset" },
	{ 0x5f849a69, "_raw_spin_lock_irqsave" },
	{ 0xaf9a0a2a, "radix_tree_tag_clear" },
	{ 0xa5526619, "rb_insert_color" },
	{ 0x4c0e8130, "kmem_cache_create" },
	{ 0x22ce1a67, "d_tmpfile" },
	{ 0x2f89f67a, "list_lru_count_node" },
	{ 0xf3d8ce69, "register_filesystem" },
	{ 0x405aa597, "event_triggers_call" },
	{ 0x3dcf1ffa, "__wake_up" },
	{ 0xca97fd44, "vfs_ioc_fssetxattr_check" },
	{ 0x3b547bf5, "__bio_try_merge_page" },
	{ 0xb3f7646e, "kthread_should_stop" },
	{ 0xc5c61eb, "remove_proc_subtree" },
	{ 0x647af474, "prepare_to_wait_event" },
	{ 0x6a4010ed, "bpf_trace_run2" },
	{ 0xcf5fcda8, "__test_set_page_writeback" },
	{ 0x728c65bd, "I_BDEV" },
	{ 0x31b9195c, "__local_bh_disable_ip" },
	{ 0x9405c2d3, "rhashtable_init" },
	{ 0x94af33c9, "iter_file_splice_write" },
	{ 0x919b2916, "blockdev_superblock" },
	{ 0x2cfde9a2, "warn_slowpath_fmt" },
	{ 0xa17bd3fc, "add_wait_queue" },
	{ 0x5490f2ac, "freeze_bdev" },
	{ 0x937cd95e, "kset_unregister" },
	{ 0x70d99e61, "iput" },
	{ 0x109d0eca, "__vmalloc" },
	{ 0x37a0cba, "kfree" },
	{ 0x2a68ba43, "truncate_pagecache_range" },
	{ 0xaaa314f9, "inode_dio_wait" },
	{ 0x473a319f, "ihold" },
	{ 0x9d669763, "memcpy" },
	{ 0xdd5e7751, "__sb_end_write" },
	{ 0xe93f6042, "trace_print_symbols_seq" },
	{ 0xefa42664, "iomap_readpages" },
	{ 0x9dc921, "trace_event_raw_init" },
	{ 0x9812880e, "current_time" },
	{ 0x2fe5449c, "fd_install" },
	{ 0x6578533e, "prepare_to_wait" },
	{ 0xff61c4d5, "generic_error_remove_page" },
	{ 0x9e61bb05, "set_freezable" },
	{ 0x4eb13446, "d_splice_alias" },
	{ 0x4f0a58e3, "register_shrinker" },
	{ 0x437cdace, "iomap_releasepage" },
	{ 0x32ce3777, "radix_tree_preload" },
	{ 0x4d0397a0, "iomap_file_dirty" },
	{ 0x28bb4106, "sync_filesystem" },
	{ 0x581cde4e, "up" },
	{ 0xd63fafc2, "div64_u64_rem" },
	{ 0xcd00abbc, "add_wait_queue_exclusive" },
	{ 0xf61d447b, "__sb_start_write" },
	{ 0xab566ebe, "d_make_root" },
	{ 0x9dc08a71, "pgprot_kernel" },
	{ 0x49970de8, "finish_wait" },
	{ 0x386d9ce9, "radix_tree_lookup" },
	{ 0x37204c73, "posix_acl_default_xattr_handler" },
	{ 0xbe9af246, "list_lru_destroy" },
	{ 0xc10daf93, "bpf_trace_run6" },
	{ 0x6b4caa76, "unregister_filesystem" },
	{ 0x7c3951d6, "init_special_inode" },
	{ 0x60528cf9, "evict_inodes" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xca0ad6f1, "trace_raw_output_prep" },
	{ 0x2080698d, "inode_sb_list_add" },
	{ 0xe2e8065e, "memdup_user" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0x4eed1d5d, "iomap_truncate_page" },
	{ 0xb2d48a2e, "queue_work_on" },
	{ 0x8ebdad39, "iomap_file_buffered_write" },
	{ 0xe6c12171, "complete" },
	{ 0xd417d1f9, "filemap_map_pages" },
	{ 0xc358aaf8, "snprintf" },
	{ 0x7ce18c9f, "from_kqid" },
	{ 0xca54fee, "_test_and_set_bit" },
	{ 0xb19e8429, "trace_seq_printf" },
	{ 0x99bb8806, "memmove" },
	{ 0xa245ec4f, "__break_lease" },
	{ 0x8e0988a0, "generic_file_splice_read" },
	{ 0x12c76c9d, "vmalloc_to_page" },
	{ 0xeca2cb2, "set_blocksize" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x583bf5ea, "sysfs_create_file_ns" },
	{ 0x11a38228, "__percpu_counter_compare" },
	{ 0x2dbc1970, "inode_init_always" },
	{ 0x49ebacbd, "_clear_bit" },
	{ 0x93fb510b, "list_lru_del" },
	{ 0x5a14de15, "radix_tree_insert" },
	{ 0xa038f306, "__rht_bucket_nested" },
	{ 0xdc28f1bc, "bpf_trace_run4" },
	{ 0x7b3fb326, "iomap_migrate_page" },
	{ 0x7a9b37e8, "blk_start_plug" },
	{ 0xdf9208c0, "alloc_workqueue" },
	{ 0x53b64c77, "d_instantiate" },
	{ 0x6f013ecd, "__init_rwsem" },
	{ 0x5ff9fba4, "flush_dcache_page" },
	{ 0x5d6fa754, "filemap_flush" },
	{ 0xc7d9d1f5, "vfs_fsync_range" },
	{ 0x78d04237, "setattr_prepare" },
	{ 0x421d4dcf, "krealloc" },
	{ 0x4f587532, "noop_backing_dev_info" },
	{ 0xb815eeea, "bio_associate_blkg" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "A2D2360F05966111DAA4108");