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
	{ 0x36ac7fd0, "noop_llseek" },
	{ 0x2878e15a, "idr_destroy" },
	{ 0x85c6e59a, "driver_unregister" },
	{ 0xe4c122d0, "class_unregister" },
	{ 0x6091b333, "unregister_chrdev_region" },
	{ 0x79df25b9, "scsi_register_driver" },
	{ 0x3fd78f3b, "register_chrdev_region" },
	{ 0x621255c5, "__class_register" },
	{ 0x99bb8806, "memmove" },
	{ 0xf7802486, "__aeabi_uidivmod" },
	{ 0x816a7c8d, "scsi_ioctl" },
	{ 0x5fbf460a, "scsi_cmd_ioctl" },
	{ 0xc6cbbc89, "capable" },
	{ 0xae353d77, "arm_copy_from_user" },
	{ 0x51a910c0, "arm_copy_to_user" },
	{ 0xf64d4d70, "scsi_ioctl_block_when_processing_errors" },
	{ 0x3375510b, "mutex_lock_interruptible" },
	{ 0xff178f6, "__aeabi_idivmod" },
	{ 0x874fbd42, "blk_put_queue" },
	{ 0x9cb0f84b, "sysfs_create_link" },
	{ 0x692a4f08, "idr_alloc" },
	{ 0x954f099c, "idr_preload" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0x40495d8, "blk_queue_rq_timeout" },
	{ 0x1d94749f, "blk_get_queue" },
	{ 0x43c0c01d, "__alloc_disk_node" },
	{ 0x84b183ae, "strncmp" },
	{ 0x97255bdf, "strlen" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0x59786620, "scsi_block_when_processing_errors" },
	{ 0xef5f0082, "scsi_device_get" },
	{ 0x1ee8d6d4, "refcount_inc_checked" },
	{ 0x47925794, "idr_find" },
	{ 0xcc5005fe, "msleep_interruptible" },
	{ 0x2cfde9a2, "warn_slowpath_fmt" },
	{ 0xb561ac5b, "wait_for_completion" },
	{ 0x763c37f6, "blk_rq_map_user" },
	{ 0xebaa9dc8, "kmem_cache_alloc_trace" },
	{ 0xf4610713, "kmalloc_caches" },
	{ 0xa2c54710, "blk_execute_rq_nowait" },
	{ 0x334da4e, "scsi_command_size_tbl" },
	{ 0x390d82c5, "blk_get_request" },
	{ 0x5bbe49f4, "__init_waitqueue_head" },
	{ 0x6380f5d4, "__scsi_print_sense" },
	{ 0x10d9f885, "scsi_sense_desc_find" },
	{ 0xdd849d51, "scsi_get_sense_info_fld" },
	{ 0xfbad3cf0, "scsi_normalize_sense" },
	{ 0xcc286e8e, "__put_page" },
	{ 0x5ff9fba4, "flush_dcache_page" },
	{ 0x4dc23b40, "get_user_pages_fast" },
	{ 0x2d6fcc06, "__kmalloc" },
	{ 0x5f754e5a, "memset" },
	{ 0x2196324, "__aeabi_idiv" },
	{ 0x987c11c7, "__pv_phys_pfn_offset" },
	{ 0x76d11765, "mem_map" },
	{ 0x40fd1bb5, "__alloc_pages_nodemask" },
	{ 0x9d669763, "memcpy" },
	{ 0xf67ee0f6, "blk_put_request" },
	{ 0xf85b4646, "blk_rq_unmap_user" },
	{ 0xe6c12171, "complete" },
	{ 0xb43f9365, "ktime_get" },
	{ 0x19fad624, "scsi_autopm_put_device" },
	{ 0x41fda1e5, "scsi_device_put" },
	{ 0xbb46448d, "scsi_set_medium_removal" },
	{ 0xac4ab4ed, "sdev_prefix_printk" },
	{ 0xc5850110, "printk" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x13e86e9b, "device_create" },
	{ 0x570c6c9a, "cdev_add" },
	{ 0x27ebf7d2, "cdev_alloc" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xc358aaf8, "snprintf" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xa346975c, "idr_remove" },
	{ 0xdb9ca3c5, "_raw_spin_lock" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0xc1e58a5f, "refcount_dec_and_test_checked" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0x29e4f3b5, "scsi_autopm_get_device" },
	{ 0x9d6eee2e, "device_unregister" },
	{ 0xa4ab8272, "cdev_del" },
	{ 0x6f8a0fde, "sysfs_remove_link" },
	{ 0x76799abc, "put_disk" },
	{ 0x37a0cba, "kfree" },
	{ 0xda2a4834, "__free_pages" },
	{ 0x314b20c8, "scnprintf" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "BC7BF3F0D5C28137E193E3A");
