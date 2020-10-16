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
	{ 0x75becc37, "securityfs_create_file" },
	{ 0xf4610713, "kmalloc_caches" },
	{ 0x2d6fcc06, "__kmalloc" },
	{ 0xad534415, "cdev_init" },
	{ 0xa7b3181c, "up_read" },
	{ 0x76d11765, "mem_map" },
	{ 0x97255bdf, "strlen" },
	{ 0xbce0c740, "seq_open" },
	{ 0xa0337a7f, "no_llseek" },
	{ 0xc8275115, "seq_printf" },
	{ 0x914bc2bd, "seq_write" },
	{ 0xb1b939e, "kmemdup" },
	{ 0x987c11c7, "__pv_phys_pfn_offset" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0x6840f53d, "__compat_only_sysfs_link_entry_to_kobj" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xae353d77, "arm_copy_from_user" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0x6091b333, "unregister_chrdev_region" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xdc0adda3, "seq_read" },
	{ 0x40fd1bb5, "__alloc_pages_nodemask" },
	{ 0x309fe521, "securityfs_remove" },
	{ 0x526c3a6c, "jiffies" },
	{ 0x51a910c0, "arm_copy_to_user" },
	{ 0xfb1d7438, "down_read" },
	{ 0x5bbe49f4, "__init_waitqueue_head" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0xf65110e8, "_dev_warn" },
	{ 0x5f754e5a, "memset" },
	{ 0x2878e15a, "idr_destroy" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0x71c90087, "memcmp" },
	{ 0xcd24e146, "hash_digest_size" },
	{ 0x3c7ad7ac, "of_find_property" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x17a7462, "seq_putc" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0xf1969a8e, "__usecs_to_jiffies" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x692a4f08, "idr_alloc" },
	{ 0x6f8a0fde, "sysfs_remove_link" },
	{ 0x7505bdef, "memchr_inv" },
	{ 0x7e0ce0c3, "up_write" },
	{ 0x7fa795f, "_dev_err" },
	{ 0x4253aa7e, "down_write" },
	{ 0xa346975c, "idr_remove" },
	{ 0xcb907ad6, "devm_add_action" },
	{ 0x3eabc38c, "_dev_info" },
	{ 0xda2a4834, "__free_pages" },
	{ 0x65d411e9, "idr_get_next" },
	{ 0x12a38747, "usleep_range" },
	{ 0xebcc8bdd, "put_device" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x26800c62, "cdev_device_add" },
	{ 0x7f24de73, "jiffies_to_usecs" },
	{ 0x2fc7504b, "hwrng_register" },
	{ 0xf7bc2652, "of_get_property" },
	{ 0xebaa9dc8, "kmem_cache_alloc_trace" },
	{ 0xde147102, "get_device" },
	{ 0x3dcf1ffa, "__wake_up" },
	{ 0x2cfde9a2, "warn_slowpath_fmt" },
	{ 0x167c65ac, "seq_lseek" },
	{ 0x37a0cba, "kfree" },
	{ 0x9d669763, "memcpy" },
	{ 0x9dc3b2ba, "device_initialize" },
	{ 0x81782431, "securityfs_create_dir" },
	{ 0x6fbe4717, "idr_replace" },
	{ 0x254652b1, "class_destroy" },
	{ 0x38c891ae, "cdev_device_del" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xb2d48a2e, "queue_work_on" },
	{ 0xc358aaf8, "snprintf" },
	{ 0x6fe5cae9, "of_property_match_string" },
	{ 0xd2c2771e, "seq_release" },
	{ 0xca54fee, "_test_and_set_bit" },
	{ 0xe54dbfa5, "dev_set_name" },
	{ 0x5fc2c660, "hwrng_unregister" },
	{ 0x49ebacbd, "_clear_bit" },
	{ 0xe544be36, "devm_kmalloc" },
	{ 0x8a331d2b, "param_ops_uint" },
	{ 0xe6d85203, "__class_create" },
	{ 0xdf9208c0, "alloc_workqueue" },
	{ 0x6f013ecd, "__init_rwsem" },
	{ 0xe3ec2f2b, "alloc_chrdev_region" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "3375C7A50A3CD721A8D70BA");
