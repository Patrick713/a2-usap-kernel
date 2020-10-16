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
	{ 0x1e6ff418, "kset_create_and_add" },
	{ 0x2680385, "kmem_cache_destroy" },
	{ 0xf08db0a6, "locks_copy_lock" },
	{ 0xf4610713, "kmalloc_caches" },
	{ 0x2d6fcc06, "__kmalloc" },
	{ 0xf9a482f9, "msleep" },
	{ 0xa7b3181c, "up_read" },
	{ 0xc5688156, "genl_register_family" },
	{ 0x76d11765, "mem_map" },
	{ 0xd6ee688f, "vmalloc" },
	{ 0x97255bdf, "strlen" },
	{ 0x46ae4a33, "genl_unregister_family" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0x983ac031, "remove_wait_queue" },
	{ 0x639acd78, "sock_release" },
	{ 0x1bdb8ad6, "kobject_uevent" },
	{ 0xf7802486, "__aeabi_uidivmod" },
	{ 0x2a3aa678, "_test_and_clear_bit" },
	{ 0x770f06c1, "sock_recvmsg" },
	{ 0x4205ad24, "cancel_work_sync" },
	{ 0xb43f9365, "ktime_get" },
	{ 0xb1b939e, "kmemdup" },
	{ 0x9f0846da, "config_item_put" },
	{ 0x987c11c7, "__pv_phys_pfn_offset" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0x97106714, "memdup_user_nul" },
	{ 0xae353d77, "arm_copy_from_user" },
	{ 0x59eb8df1, "sock_create_kern" },
	{ 0xcbc98a7d, "config_item_init_type_name" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0x999e8297, "vfree" },
	{ 0x246790df, "idr_for_each" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x40fd1bb5, "__alloc_pages_nodemask" },
	{ 0xdd34010a, "kthread_create_on_node" },
	{ 0x526c3a6c, "jiffies" },
	{ 0x51a910c0, "arm_copy_to_user" },
	{ 0xfb1d7438, "down_read" },
	{ 0xece784c2, "rb_first" },
	{ 0x5bbe49f4, "__init_waitqueue_head" },
	{ 0xaad8c7d6, "default_wake_function" },
	{ 0xb561ac5b, "wait_for_completion" },
	{ 0xa07281f, "misc_register" },
	{ 0xf53da447, "kernel_setsockopt" },
	{ 0x5f754e5a, "memset" },
	{ 0x2878e15a, "idr_destroy" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0x7bfbe88e, "kthread_stop" },
	{ 0x71c90087, "memcmp" },
	{ 0x93a6913e, "kobject_init_and_add" },
	{ 0xf1e046cc, "panic" },
	{ 0x87d81478, "iov_iter_kvec" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x4d9b652b, "rb_erase" },
	{ 0x84b183ae, "strncmp" },
	{ 0x73e20c1c, "strlcpy" },
	{ 0xbb9f1908, "kmem_cache_free" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x954f099c, "idr_preload" },
	{ 0xc847167e, "config_group_init_type_name" },
	{ 0x36ac7fd0, "noop_llseek" },
	{ 0xf918f903, "netlink_unicast" },
	{ 0xae745ee1, "kernel_getpeername" },
	{ 0xc1e58a5f, "refcount_dec_and_test_checked" },
	{ 0x33adfce3, "configfs_remove_default_groups" },
	{ 0x8c8569cb, "kstrtoint" },
	{ 0x692a4f08, "idr_alloc" },
	{ 0xb85eea8e, "configfs_register_subsystem" },
	{ 0x7e0ce0c3, "up_write" },
	{ 0xd2aeaa09, "init_net" },
	{ 0x4253aa7e, "down_write" },
	{ 0x42160169, "flush_workqueue" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x61651be, "strcat" },
	{ 0xa346975c, "idr_remove" },
	{ 0x12b548f6, "module_put" },
	{ 0x831002ed, "kernel_getsockopt" },
	{ 0xc6cbbc89, "capable" },
	{ 0x4007496c, "kmem_cache_alloc" },
	{ 0xda2a4834, "__free_pages" },
	{ 0x65d411e9, "idr_get_next" },
	{ 0x69325ac3, "kernel_sendpage" },
	{ 0x448d3165, "locks_init_lock" },
	{ 0x22bf2ba1, "__alloc_skb" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x1000e51, "schedule" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0xee43fd9b, "___ratelimit" },
	{ 0xd28c75bb, "kfree_skb" },
	{ 0xe886c1e1, "locks_lock_inode_wait" },
	{ 0x7f24de73, "jiffies_to_usecs" },
	{ 0xb35d51ab, "wake_up_process" },
	{ 0x1734efa0, "configfs_unregister_subsystem" },
	{ 0x8108ac7a, "down_read_trylock" },
	{ 0xebaa9dc8, "kmem_cache_alloc_trace" },
	{ 0xdb9ca3c5, "_raw_spin_lock" },
	{ 0xa5526619, "rb_insert_color" },
	{ 0x4c0e8130, "kmem_cache_create" },
	{ 0x6927f3c5, "kernel_accept" },
	{ 0x3dcf1ffa, "__wake_up" },
	{ 0xb3f7646e, "kthread_should_stop" },
	{ 0x647af474, "prepare_to_wait_event" },
	{ 0x1738c19e, "_raw_write_unlock_bh" },
	{ 0x2cfde9a2, "warn_slowpath_fmt" },
	{ 0xa17bd3fc, "add_wait_queue" },
	{ 0xa706a3f8, "kernel_kobj" },
	{ 0x77f6c690, "_raw_read_lock_bh" },
	{ 0x937cd95e, "kset_unregister" },
	{ 0x9acb8066, "_raw_read_unlock_bh" },
	{ 0x54496b4, "schedule_timeout_interruptible" },
	{ 0xbff5fa74, "posix_lock_file" },
	{ 0x37a0cba, "kfree" },
	{ 0x3b6c41ea, "kstrtouint" },
	{ 0x9d669763, "memcpy" },
	{ 0xf45f59f7, "genlmsg_put" },
	{ 0x5388bfe1, "kernel_bind" },
	{ 0xa3ba9be6, "config_item_get" },
	{ 0xefb7bccf, "_raw_write_lock_bh" },
	{ 0x49970de8, "finish_wait" },
	{ 0xca9360b5, "rb_next" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0xb2d48a2e, "queue_work_on" },
	{ 0x7fba2430, "nla_reserve" },
	{ 0xe6c12171, "complete" },
	{ 0xc358aaf8, "snprintf" },
	{ 0xca54fee, "_test_and_set_bit" },
	{ 0x1ee8d6d4, "refcount_inc_checked" },
	{ 0x49ebacbd, "_clear_bit" },
	{ 0x5d4a403, "config_group_find_item" },
	{ 0x47925794, "idr_find" },
	{ 0x1890681b, "config_group_init" },
	{ 0xdf9208c0, "alloc_workqueue" },
	{ 0x9ec748a7, "misc_deregister" },
	{ 0x6f013ecd, "__init_rwsem" },
	{ 0x717bcdac, "try_module_get" },
	{ 0x719e0e44, "add_uevent_var" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "A180A4A9867DAAA19CE1DA2");