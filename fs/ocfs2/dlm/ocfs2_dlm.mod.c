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
	{ 0x2680385, "kmem_cache_destroy" },
	{ 0xf4610713, "kmalloc_caches" },
	{ 0x2d6fcc06, "__kmalloc" },
	{ 0xf9a482f9, "msleep" },
	{ 0xf09b5d9a, "get_zeroed_page" },
	{ 0x18cda5be, "o2nm_node_put" },
	{ 0x3aef7872, "o2hb_unregister_callback" },
	{ 0xa7b3181c, "up_read" },
	{ 0x528c709d, "simple_read_from_buffer" },
	{ 0x14d1b7f5, "generic_file_llseek" },
	{ 0x93b18eee, "debugfs_create_dir" },
	{ 0x58c88ff2, "o2hb_get_all_regions" },
	{ 0x155a93e3, "o2hb_register_callback" },
	{ 0x97255bdf, "strlen" },
	{ 0xc8507ba0, "seq_release_private" },
	{ 0x983ac031, "remove_wait_queue" },
	{ 0x696fa2fa, "o2net_register_handler" },
	{ 0xd3f57a2, "_find_next_bit_le" },
	{ 0xc8275115, "seq_printf" },
	{ 0xf982e6db, "o2net_send_message" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0xf1a5611d, "o2net_unregister_handler_list" },
	{ 0x1b89c6ee, "o2hb_fill_node_map" },
	{ 0x7c20652d, "debugfs_create_file" },
	{ 0x364f639b, "o2net_send_message_vec" },
	{ 0x35edc130, "debugfs_remove_recursive" },
	{ 0xdc0adda3, "seq_read" },
	{ 0x2d39b0a7, "kstrdup" },
	{ 0xdd34010a, "kthread_create_on_node" },
	{ 0x526c3a6c, "jiffies" },
	{ 0xfb1d7438, "down_read" },
	{ 0xa73ee62b, "_atomic_dec_and_lock" },
	{ 0x5bbe49f4, "__init_waitqueue_head" },
	{ 0xaad8c7d6, "default_wake_function" },
	{ 0x5f754e5a, "memset" },
	{ 0x31514ef4, "__seq_open_private" },
	{ 0xc5850110, "printk" },
	{ 0x7bfbe88e, "kthread_stop" },
	{ 0x71c90087, "memcmp" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0xbfd7d7a2, "o2hb_global_heartbeat_active" },
	{ 0x47915c30, "debugfs_remove" },
	{ 0xbb9f1908, "kmem_cache_free" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0xc1e58a5f, "refcount_dec_and_test_checked" },
	{ 0x7e0ce0c3, "up_write" },
	{ 0x4253aa7e, "down_write" },
	{ 0xce0dd429, "o2hb_setup_callback" },
	{ 0x42160169, "flush_workqueue" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xf5b666ef, "__cond_resched_lock" },
	{ 0x6a0c3847, "__mlog_printk" },
	{ 0x4007496c, "kmem_cache_alloc" },
	{ 0x6a5cb5ee, "__get_free_pages" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x2db9d700, "o2nm_get_node_by_num" },
	{ 0x1000e51, "schedule" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0xb35d51ab, "wake_up_process" },
	{ 0xd6eaaea1, "full_name_hash" },
	{ 0xebaa9dc8, "kmem_cache_alloc_trace" },
	{ 0xdb9ca3c5, "_raw_spin_lock" },
	{ 0x4c0e8130, "kmem_cache_create" },
	{ 0xbd13ee5d, "o2hb_check_node_heartbeating_no_sem" },
	{ 0x4302d0eb, "free_pages" },
	{ 0x3dcf1ffa, "__wake_up" },
	{ 0xb3f7646e, "kthread_should_stop" },
	{ 0x647af474, "prepare_to_wait_event" },
	{ 0xa17bd3fc, "add_wait_queue" },
	{ 0x167c65ac, "seq_lseek" },
	{ 0x37a0cba, "kfree" },
	{ 0x9d669763, "memcpy" },
	{ 0xb6ebf62a, "o2nm_this_node" },
	{ 0x49970de8, "finish_wait" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0xb2d48a2e, "queue_work_on" },
	{ 0xc358aaf8, "snprintf" },
	{ 0x1ee8d6d4, "refcount_inc_checked" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x49ebacbd, "_clear_bit" },
	{ 0xdf9208c0, "alloc_workqueue" },
};

MODULE_INFO(depends, "ocfs2_nodemanager");


MODULE_INFO(srcversion, "23A526815E08B3CA1FB0476");
