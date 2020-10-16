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
	{ 0xa0337a7f, "no_llseek" },
	{ 0x2878e15a, "idr_destroy" },
	{ 0xd1820438, "class_interface_unregister" },
	{ 0x6091b333, "unregister_chrdev_region" },
	{ 0x254652b1, "class_destroy" },
	{ 0x929a70d9, "scsi_register_interface" },
	{ 0xe6d85203, "__class_create" },
	{ 0x3fd78f3b, "register_chrdev_region" },
	{ 0xee43fd9b, "___ratelimit" },
	{ 0x334da4e, "scsi_command_size_tbl" },
	{ 0x28118cb6, "__get_user_1" },
	{ 0xb9acd3d9, "__put_user_2" },
	{ 0xd697e69a, "trace_hardirqs_on" },
	{ 0x4d634803, "_raw_write_lock_irq" },
	{ 0xe0f7007c, "blk_trace_startstop" },
	{ 0xb9e9c466, "sg_scsi_ioctl" },
	{ 0x6ffb4030, "blk_trace_setup" },
	{ 0x816a7c8d, "scsi_ioctl" },
	{ 0xf64d4d70, "scsi_ioctl_block_when_processing_errors" },
	{ 0x76dad5ad, "blk_trace_remove" },
	{ 0x353e3fa5, "__get_user_4" },
	{ 0xbc10dd97, "__put_user_4" },
	{ 0x27639220, "blk_verify_command" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0xee036dd3, "blk_rq_map_user_iov" },
	{ 0xcdcc1b50, "import_iovec" },
	{ 0xa2c54710, "blk_execute_rq_nowait" },
	{ 0x763c37f6, "blk_rq_map_user" },
	{ 0x390d82c5, "blk_get_request" },
	{ 0xb66bc471, "__module_get" },
	{ 0x59786620, "scsi_block_when_processing_errors" },
	{ 0x29e4f3b5, "scsi_autopm_get_device" },
	{ 0xef5f0082, "scsi_device_get" },
	{ 0x1ee8d6d4, "refcount_inc_checked" },
	{ 0x47925794, "idr_find" },
	{ 0xaec4df8e, "nonseekable_open" },
	{ 0x40fd1bb5, "__alloc_pages_nodemask" },
	{ 0x2d6fcc06, "__kmalloc" },
	{ 0x49970de8, "finish_wait" },
	{ 0x647af474, "prepare_to_wait_event" },
	{ 0x1000e51, "schedule" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xae353d77, "arm_copy_from_user" },
	{ 0x987c11c7, "__pv_phys_pfn_offset" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x51a910c0, "arm_copy_to_user" },
	{ 0x12b548f6, "module_put" },
	{ 0x41fda1e5, "scsi_device_put" },
	{ 0xf85b4646, "blk_rq_unmap_user" },
	{ 0xda2a4834, "__free_pages" },
	{ 0xac4ab4ed, "sdev_prefix_printk" },
	{ 0x9cb0f84b, "sysfs_create_link" },
	{ 0x13e86e9b, "device_create" },
	{ 0x570c6c9a, "cdev_add" },
	{ 0x5bbe49f4, "__init_waitqueue_head" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x692a4f08, "idr_alloc" },
	{ 0x954f099c, "idr_preload" },
	{ 0xebaa9dc8, "kmem_cache_alloc_trace" },
	{ 0xf4610713, "kmalloc_caches" },
	{ 0x27ebf7d2, "cdev_alloc" },
	{ 0x43c0c01d, "__alloc_disk_node" },
	{ 0x147b1ab2, "__task_pid_nr_ns" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x2cfde9a2, "warn_slowpath_fmt" },
	{ 0xfbad3cf0, "scsi_normalize_sense" },
	{ 0x9d669763, "memcpy" },
	{ 0xf67ee0f6, "blk_put_request" },
	{ 0x6380f5d4, "__scsi_print_sense" },
	{ 0xc5850110, "printk" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0x526c3a6c, "jiffies" },
	{ 0x5f754e5a, "memset" },
	{ 0x19fad624, "scsi_autopm_put_device" },
	{ 0xb2d48a2e, "queue_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0x3b00de61, "fasync_helper" },
	{ 0xc1e58a5f, "refcount_dec_and_test_checked" },
	{ 0xa4ab8272, "cdev_del" },
	{ 0xda800db5, "device_destroy" },
	{ 0x6f8a0fde, "sysfs_remove_link" },
	{ 0x9707a604, "kill_fasync" },
	{ 0x3dcf1ffa, "__wake_up" },
	{ 0x37a0cba, "kfree" },
	{ 0x76799abc, "put_disk" },
	{ 0xa346975c, "idr_remove" },
	{ 0xaafd9237, "_raw_write_unlock_irqrestore" },
	{ 0x5ca18a2, "_raw_write_lock_irqsave" },
	{ 0x76d11765, "mem_map" },
	{ 0xb40d7cf, "_raw_read_unlock_irqrestore" },
	{ 0x630f2cb8, "_raw_read_lock_irqsave" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "0B2B2B022EB9DDB7E94D99B");
