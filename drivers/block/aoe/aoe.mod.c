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
	{ 0x807982be, "__blk_mq_end_request" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x2680385, "kmem_cache_destroy" },
	{ 0xf4610713, "kmalloc_caches" },
	{ 0x2d6fcc06, "__kmalloc" },
	{ 0xf9a482f9, "msleep" },
	{ 0xf09b5d9a, "get_zeroed_page" },
	{ 0xff178f6, "__aeabi_idivmod" },
	{ 0xf86d5e67, "blk_cleanup_queue" },
	{ 0x93b18eee, "debugfs_create_dir" },
	{ 0x76d11765, "mem_map" },
	{ 0x349cba85, "strchr" },
	{ 0xcd34ce55, "single_open" },
	{ 0xc696b239, "blk_mq_run_hw_queues" },
	{ 0x9a152689, "param_ops_int" },
	{ 0x97255bdf, "strlen" },
	{ 0xc7ec6c27, "strspn" },
	{ 0xcace8430, "blk_queue_max_hw_sectors" },
	{ 0xfe90c4a6, "_find_first_zero_bit_le" },
	{ 0xf7c048ae, "single_release" },
	{ 0x5d7776e5, "seq_puts" },
	{ 0x983ac031, "remove_wait_queue" },
	{ 0x2f4fe12a, "blk_mq_start_request" },
	{ 0x95d587ef, "blk_mq_unfreeze_queue" },
	{ 0x36f6c5e6, "skb_clone" },
	{ 0xc8275115, "seq_printf" },
	{ 0xb43f9365, "ktime_get" },
	{ 0xda800db5, "device_destroy" },
	{ 0xfb336634, "mempool_destroy" },
	{ 0xb1b939e, "kmemdup" },
	{ 0xc21bb13c, "__register_chrdev" },
	{ 0x987c11c7, "__pv_phys_pfn_offset" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xae353d77, "arm_copy_from_user" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0xff647147, "blk_mq_freeze_queue" },
	{ 0x7c20652d, "debugfs_create_file" },
	{ 0x6c1ce5ce, "strcspn" },
	{ 0x35edc130, "debugfs_remove_recursive" },
	{ 0xdc0adda3, "seq_read" },
	{ 0xd697e69a, "trace_hardirqs_on" },
	{ 0xdd34010a, "kthread_create_on_node" },
	{ 0x51e77c97, "pfn_valid" },
	{ 0x526c3a6c, "jiffies" },
	{ 0x51a910c0, "arm_copy_to_user" },
	{ 0x65465214, "skb_trim" },
	{ 0xfb384d37, "kasprintf" },
	{ 0xe482a5a0, "param_ops_string" },
	{ 0x43c0c01d, "__alloc_disk_node" },
	{ 0x3bdc1db7, "__pskb_pull_tail" },
	{ 0x2258a12b, "blk_mq_init_queue" },
	{ 0x5bbe49f4, "__init_waitqueue_head" },
	{ 0xaad8c7d6, "default_wake_function" },
	{ 0xc972449f, "mempool_alloc_slab" },
	{ 0xb561ac5b, "wait_for_completion" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0x2d9ecd4c, "skb_queue_purge" },
	{ 0x5f754e5a, "memset" },
	{ 0x39a12ca7, "_raw_spin_unlock_irqrestore" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0x7bfbe88e, "kthread_stop" },
	{ 0x71c90087, "memcmp" },
	{ 0x929dcabf, "del_gendisk" },
	{ 0xabd556d4, "blk_mq_free_tag_set" },
	{ 0x1caf4c2b, "wait_for_completion_interruptible" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x84b183ae, "strncmp" },
	{ 0x47915c30, "debugfs_remove" },
	{ 0xf68b0045, "skb_push" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0x71a50dbc, "register_blkdev" },
	{ 0x82910dab, "dev_remove_pack" },
	{ 0x36ac7fd0, "noop_llseek" },
	{ 0x13e86e9b, "device_create" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x24d273d1, "add_timer" },
	{ 0x8a99a016, "mempool_free_slab" },
	{ 0x28f7fb79, "skb_pull" },
	{ 0x52bc9c14, "blk_update_request" },
	{ 0x7e0ce0c3, "up_write" },
	{ 0xd2aeaa09, "init_net" },
	{ 0x4253aa7e, "down_write" },
	{ 0x42160169, "flush_workqueue" },
	{ 0x2196324, "__aeabi_idiv" },
	{ 0xb5a459dc, "unregister_blkdev" },
	{ 0xac6659eb, "skb_queue_tail" },
	{ 0x9f984513, "strrchr" },
	{ 0xd8410611, "mempool_alloc" },
	{ 0x22bf2ba1, "__alloc_skb" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x1000e51, "schedule" },
	{ 0xee43fd9b, "___ratelimit" },
	{ 0xd28c75bb, "kfree_skb" },
	{ 0x76799abc, "put_disk" },
	{ 0x8a7d1c31, "high_memory" },
	{ 0xbfdf7bc3, "mempool_create" },
	{ 0x2da81bff, "_raw_spin_lock_irq" },
	{ 0x7f24de73, "jiffies_to_usecs" },
	{ 0xb35d51ab, "wake_up_process" },
	{ 0x8bb578af, "blk_mq_alloc_tag_set" },
	{ 0xcc5005fe, "msleep_interruptible" },
	{ 0xebaa9dc8, "kmem_cache_alloc_trace" },
	{ 0x794765d1, "mempool_free" },
	{ 0xdb9ca3c5, "_raw_spin_lock" },
	{ 0x5f849a69, "_raw_spin_lock_irqsave" },
	{ 0x4c0e8130, "kmem_cache_create" },
	{ 0x4302d0eb, "free_pages" },
	{ 0x3dcf1ffa, "__wake_up" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0xb3f7646e, "kthread_should_stop" },
	{ 0x2cfde9a2, "warn_slowpath_fmt" },
	{ 0xa17bd3fc, "add_wait_queue" },
	{ 0x167c65ac, "seq_lseek" },
	{ 0x37a0cba, "kfree" },
	{ 0x9d669763, "memcpy" },
	{ 0xee804089, "blk_mq_quiesce_queue" },
	{ 0x36e7daa5, "blk_mq_unquiesce_queue" },
	{ 0xea48c6b2, "set_user_nice" },
	{ 0x254652b1, "class_destroy" },
	{ 0x4ac49f05, "skb_dequeue" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0xb2d48a2e, "queue_work_on" },
	{ 0xe6c12171, "complete" },
	{ 0xc358aaf8, "snprintf" },
	{ 0x6e08e459, "device_add_disk" },
	{ 0x3c7af4b6, "dev_add_pack" },
	{ 0x99bb8806, "memmove" },
	{ 0xa46a0f7a, "consume_skb" },
	{ 0x952da7ff, "dev_queue_xmit" },
	{ 0xc60d0620, "__num_online_cpus" },
	{ 0x49ebacbd, "_clear_bit" },
	{ 0xeab3fd69, "skb_put" },
	{ 0xe6d85203, "__class_create" },
	{ 0x14277ce, "bdget_disk" },
	{ 0x9b73dda5, "skb_copy_bits" },
	{ 0x3f483967, "bdput" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "E065BF8D1B156BABC1084A9");