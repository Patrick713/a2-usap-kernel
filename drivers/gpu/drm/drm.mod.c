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
	{ 0x6bc3fbc0, "__unregister_chrdev" },
	{ 0x92b57248, "flush_work" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xa24f23d8, "__request_module" },
	{ 0xcbd00ec0, "sync_file_create" },
	{ 0x5142ab5, "simple_pin_fs" },
	{ 0x4b88760, "class_remove_file_ns" },
	{ 0xf4610713, "kmalloc_caches" },
	{ 0x2d6fcc06, "__kmalloc" },
	{ 0x55e00c3a, "put_pid" },
	{ 0xa4b7f2cc, "sync_file_get_fence" },
	{ 0xf246c744, "trace_handle_return" },
	{ 0x93b18eee, "debugfs_create_dir" },
	{ 0x76d11765, "mem_map" },
	{ 0xad0e6bd4, "ioremap_wc" },
	{ 0x349cba85, "strchr" },
	{ 0xcd34ce55, "single_open" },
	{ 0x7aa1756e, "kvfree" },
	{ 0x9a152689, "param_ops_int" },
	{ 0xe1c8804, "dma_fence_chain_find_seqno" },
	{ 0xc94d8e3b, "iomem_resource" },
	{ 0x97255bdf, "strlen" },
	{ 0x9d5cd559, "reservation_ww_class" },
	{ 0xe123f3d9, "dma_fence_release" },
	{ 0xc7a1840e, "llist_add_batch" },
	{ 0xd35f75a1, "match_string" },
	{ 0xc1d8cfaf, "__fdget" },
	{ 0xf3a11c35, "xa_find_after" },
	{ 0x889e7573, "of_parse_phandle" },
	{ 0xde004450, "from_kuid_munged" },
	{ 0x1260a51c, "kill_anon_super" },
	{ 0x2141360d, "simple_release_fs" },
	{ 0x98bc35f4, "dma_get_sgtable_attrs" },
	{ 0x6cd901c4, "arm_dma_ops" },
	{ 0xc6bdb4d8, "pid_vnr" },
	{ 0x4ff9011e, "check_move_unevictable_pages" },
	{ 0x56a78f1, "dev_printk" },
	{ 0xf7c048ae, "single_release" },
	{ 0x20fcb408, "dma_mmap_attrs" },
	{ 0x5d7776e5, "seq_puts" },
	{ 0xd98e1590, "dma_fence_chain_init" },
	{ 0x9c103fa6, "dma_buf_detach" },
	{ 0xde45aa0d, "i2c_transfer" },
	{ 0x3b697738, "_raw_read_lock" },
	{ 0x2a941af4, "__srcu_read_unlock" },
	{ 0xf7802486, "__aeabi_uidivmod" },
	{ 0x4d514485, "xa_store" },
	{ 0xc8275115, "seq_printf" },
	{ 0xb43f9365, "ktime_get" },
	{ 0x7e2c085, "radix_tree_tagged" },
	{ 0x353e3fa5, "__get_user_4" },
	{ 0x914bc2bd, "seq_write" },
	{ 0xb1b939e, "kmemdup" },
	{ 0xc21bb13c, "__register_chrdev" },
	{ 0xcf452e57, "of_get_videomode" },
	{ 0xfffa3100, "sg_next" },
	{ 0xcba4abe3, "list_sort" },
	{ 0x987c11c7, "__pv_phys_pfn_offset" },
	{ 0x16525cc4, "xa_find" },
	{ 0x74645779, "dentry_open" },
	{ 0xa6a7a2ad, "div_s64_rem" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0x97106714, "memdup_user_nul" },
	{ 0xa843805a, "get_unused_fd_flags" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xae353d77, "arm_copy_from_user" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0x85df9b6c, "strsep" },
	{ 0x4fa430ff, "component_match_add_release" },
	{ 0xe78a8482, "trace_event_buffer_reserve" },
	{ 0x13adb655, "dma_free_attrs" },
	{ 0x8bcd64f8, "platform_device_register_full" },
	{ 0x7c20652d, "debugfs_create_file" },
	{ 0xeea0399, "strscpy" },
	{ 0x27f78537, "device_create_with_groups" },
	{ 0x246790df, "idr_for_each" },
	{ 0x148f46e3, "hdmi_avi_infoframe_init" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x35edc130, "debugfs_remove_recursive" },
	{ 0xdc0adda3, "seq_read" },
	{ 0x195ae37b, "bpf_trace_run3" },
	{ 0xd697e69a, "trace_hardirqs_on" },
	{ 0x2d39b0a7, "kstrdup" },
	{ 0x94014c56, "init_pseudo" },
	{ 0xb1b2427c, "set_page_dirty" },
	{ 0xe2b5e146, "refcount_inc_not_zero_checked" },
	{ 0x526c3a6c, "jiffies" },
	{ 0x7fe32873, "rb_replace_node" },
	{ 0x51a910c0, "arm_copy_to_user" },
	{ 0xdd4ffa9b, "mutex_trylock" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x131db64a, "system_long_wq" },
	{ 0xfb384d37, "kasprintf" },
	{ 0xe482a5a0, "param_ops_string" },
	{ 0x754f348a, "complete_all" },
	{ 0xad2b1b10, "dma_buf_vunmap" },
	{ 0x5bbe49f4, "__init_waitqueue_head" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0x88ab6fe3, "kgdb_active" },
	{ 0x407136b1, "__put_user_8" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0xe3c7c8d7, "trace_define_field" },
	{ 0xf65110e8, "_dev_warn" },
	{ 0x5f754e5a, "memset" },
	{ 0x3aca8935, "dma_resv_wait_timeout_rcu" },
	{ 0x1e1e140e, "ns_to_timespec64" },
	{ 0x2878e15a, "idr_destroy" },
	{ 0xc1c73f49, "device_del" },
	{ 0x5c2640cb, "device_register" },
	{ 0x11089ac7, "_ctype" },
	{ 0x39a12ca7, "_raw_spin_unlock_irqrestore" },
	{ 0xab781570, "fb_get_options" },
	{ 0xc6b007fa, "of_graph_get_remote_node" },
	{ 0xc096e23d, "hdmi_drm_infoframe_init" },
	{ 0x3375510b, "mutex_lock_interruptible" },
	{ 0x3f62d048, "dma_fence_init" },
	{ 0x64d6d8a3, "of_device_is_available" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0x71c90087, "memcmp" },
	{ 0x921b07b1, "__cpu_online_mask" },
	{ 0x4e56a3c2, "of_graph_get_next_endpoint" },
	{ 0xe97c4103, "ioremap" },
	{ 0xb36adab4, "dma_buf_fd" },
	{ 0xa24491bf, "ida_free" },
	{ 0xe693b64, "dma_buf_put" },
	{ 0x1d637655, "shmem_read_mapping_page_gfp" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x4d9b652b, "rb_erase" },
	{ 0x735f33b0, "mutex_is_locked" },
	{ 0x328a05f1, "strncpy" },
	{ 0x17961cdc, "trace_event_reg" },
	{ 0xcd62603f, "ww_mutex_lock" },
	{ 0x84b183ae, "strncmp" },
	{ 0x47915c30, "debugfs_remove" },
	{ 0xc51e9eec, "dma_buf_get" },
	{ 0xd494a4b6, "dma_alloc_attrs" },
	{ 0x120b336a, "__rb_insert_augmented" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0x9425caca, "_raw_write_lock" },
	{ 0x954f099c, "idr_preload" },
	{ 0xae97711d, "dma_resv_fini" },
	{ 0x50fd6103, "dma_fence_signal" },
	{ 0x36ac7fd0, "noop_llseek" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0xf11cd95c, "platform_device_unregister" },
	{ 0xc1e58a5f, "refcount_dec_and_test_checked" },
	{ 0x1cb2c6d8, "kvasprintf" },
	{ 0x1f110e4, "__srcu_read_lock" },
	{ 0x1903b9c1, "pid_task" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x692a4f08, "idr_alloc" },
	{ 0x6f8a0fde, "sysfs_remove_link" },
	{ 0x7505bdef, "memchr_inv" },
	{ 0x1b018b60, "device_add" },
	{ 0x14605535, "dma_fence_context_alloc" },
	{ 0xe4e393c, "dma_buf_unmap_attachment" },
	{ 0xe52760d4, "i2c_unregister_device" },
	{ 0x310917fe, "sort" },
	{ 0x7fa795f, "_dev_err" },
	{ 0xa92173df, "fput" },
	{ 0xbb55582d, "perf_trace_run_bpf_submit" },
	{ 0xaaecf75d, "perf_trace_buf_alloc" },
	{ 0x2e439142, "drm_get_panel_orientation_quirk" },
	{ 0xe842dc8c, "dma_fence_get_stub" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xcb3cf374, "shmem_file_setup" },
	{ 0x2196324, "__aeabi_idiv" },
	{ 0xb4b1e6d1, "__xa_alloc" },
	{ 0x6b57e67d, "kobject_uevent_env" },
	{ 0x147b1ab2, "__task_pid_nr_ns" },
	{ 0x9f46ced8, "__sw_hweight64" },
	{ 0x59e5070d, "__do_div64" },
	{ 0x1f29d215, "mark_page_accessed" },
	{ 0xc0fb357a, "dma_fence_chain_walk" },
	{ 0xa346975c, "idr_remove" },
	{ 0x8dfefc0d, "kvmalloc_node" },
	{ 0x9cb0f84b, "sysfs_create_link" },
	{ 0xcb907ad6, "devm_add_action" },
	{ 0x4059792f, "print_hex_dump" },
	{ 0x12b548f6, "module_put" },
	{ 0xc6cbbc89, "capable" },
	{ 0xb1c3a01a, "oops_in_progress" },
	{ 0x3eabc38c, "_dev_info" },
	{ 0x40a9b349, "vzalloc" },
	{ 0x41bb84fc, "dma_fence_remove_callback" },
	{ 0x65d411e9, "idr_get_next" },
	{ 0xbc10dd97, "__put_user_4" },
	{ 0xe32f648e, "dma_buf_map_attachment" },
	{ 0xbaa75f62, "dma_buf_export" },
	{ 0x47ae0e60, "trace_event_ignore_this_pid" },
	{ 0xf82ec573, "rb_prev" },
	{ 0xebcc8bdd, "put_device" },
	{ 0xb617520, "dma_fence_default_wait" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xd3039845, "of_get_next_child" },
	{ 0x1000e51, "schedule" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x2da81bff, "_raw_spin_lock_irq" },
	{ 0x8d6b9b66, "request_firmware_direct" },
	{ 0x4446417b, "trace_event_buffer_commit" },
	{ 0xb35d51ab, "wake_up_process" },
	{ 0x3f4547a7, "put_unused_fd" },
	{ 0xfc9a701, "class_create_file_ns" },
	{ 0xebaa9dc8, "kmem_cache_alloc_trace" },
	{ 0xdb9ca3c5, "_raw_spin_lock" },
	{ 0x5f849a69, "_raw_spin_lock_irqsave" },
	{ 0xa5526619, "rb_insert_color" },
	{ 0x369c8d09, "dma_buf_attach" },
	{ 0xde147102, "get_device" },
	{ 0xf98aa1e0, "synchronize_srcu" },
	{ 0x1c777c5c, "dma_fence_add_callback" },
	{ 0x3dcf1ffa, "__wake_up" },
	{ 0x405aa597, "event_triggers_call" },
	{ 0xaf36e367, "__pagevec_release" },
	{ 0xe3a22195, "of_graph_get_remote_port" },
	{ 0x647af474, "prepare_to_wait_event" },
	{ 0x6a4010ed, "bpf_trace_run2" },
	{ 0x2cfde9a2, "warn_slowpath_fmt" },
	{ 0x5e9500a, "of_graph_get_remote_port_parent" },
	{ 0xcaabcedb, "of_node_get" },
	{ 0x167c65ac, "seq_lseek" },
	{ 0x6c32d699, "dma_resv_get_fences_rcu" },
	{ 0x70d99e61, "iput" },
	{ 0x37a0cba, "kfree" },
	{ 0x94961283, "vunmap" },
	{ 0x311cd0dd, "dma_direct_map_sg" },
	{ 0x9d669763, "memcpy" },
	{ 0x9dc921, "trace_event_raw_init" },
	{ 0xdda229c, "of_graph_parse_endpoint" },
	{ 0x6e4e7714, "dma_fence_chain_ops" },
	{ 0x2fe5449c, "fd_install" },
	{ 0x75d0deb9, "nsecs_to_jiffies64" },
	{ 0x9dc3b2ba, "device_initialize" },
	{ 0xedc03953, "iounmap" },
	{ 0xaff0e75a, "ww_mutex_unlock" },
	{ 0x1b30cb84, "refcount_dec_and_mutex_lock" },
	{ 0xd63fafc2, "div64_u64_rem" },
	{ 0x6fbe4717, "idr_replace" },
	{ 0x314b20c8, "scnprintf" },
	{ 0x254652b1, "class_destroy" },
	{ 0x836b5cfc, "request_firmware" },
	{ 0x74c134b9, "__sw_hweight32" },
	{ 0x5d50e22e, "sg_alloc_table_from_pages" },
	{ 0x6749d53f, "hdmi_vendor_infoframe_init" },
	{ 0x49970de8, "finish_wait" },
	{ 0x8b618d08, "overflowuid" },
	{ 0xca9360b5, "rb_next" },
	{ 0x9d6eee2e, "device_unregister" },
	{ 0xba5f3cda, "sg_free_table" },
	{ 0x222e7ce2, "sysfs_streq" },
	{ 0xb742fd7, "simple_strtol" },
	{ 0xb0f8a1fb, "vm_get_page_prot" },
	{ 0x8e440097, "dma_resv_init" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xca0ad6f1, "trace_raw_output_prep" },
	{ 0xe2e8065e, "memdup_user" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0x4bbcb255, "component_master_add_with_match" },
	{ 0xb2d48a2e, "queue_work_on" },
	{ 0xc358aaf8, "snprintf" },
	{ 0xb19e8429, "trace_seq_printf" },
	{ 0xe54dbfa5, "dev_set_name" },
	{ 0x1ee8d6d4, "refcount_inc_checked" },
	{ 0x49ebacbd, "_clear_bit" },
	{ 0xd6ba0f23, "dma_buf_vmap" },
	{ 0xfeb02014, "of_node_put" },
	{ 0x47925794, "idr_find" },
	{ 0xe6d85203, "__class_create" },
	{ 0x4756260d, "ida_destroy" },
	{ 0x7e3aa9b7, "i2c_new_device" },
	{ 0x551bd071, "__rb_erase_color" },
	{ 0x70341f28, "show_class_attr_string" },
	{ 0x16c32d4d, "alloc_anon_inode" },
	{ 0x8b6486ce, "release_firmware" },
	{ 0xee2beaf0, "ww_mutex_lock_interruptible" },
	{ 0xa3d6b67c, "anon_inode_getfile" },
	{ 0x717bcdac, "try_module_get" },
	{ 0xa5684076, "ida_alloc_range" },
	{ 0x421d4dcf, "krealloc" },
	{ 0xc1514a3b, "free_irq" },
	{ 0xe914e41e, "strcpy" },
};

MODULE_INFO(depends, "drm_panel_orientation_quirks");


MODULE_INFO(srcversion, "861D9A4E5526F8B3329A20D");