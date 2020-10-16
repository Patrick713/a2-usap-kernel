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
	{ 0xaec4df8e, "nonseekable_open" },
	{ 0xa0337a7f, "no_llseek" },
	{ 0xf7c048ae, "single_release" },
	{ 0xdc0adda3, "seq_read" },
	{ 0x167c65ac, "seq_lseek" },
	{ 0x9ec748a7, "misc_deregister" },
	{ 0x1b886e9c, "bioset_exit" },
	{ 0xb5a459dc, "unregister_blkdev" },
	{ 0xf617b198, "proc_mkdir" },
	{ 0x254652b1, "class_destroy" },
	{ 0xa07281f, "misc_register" },
	{ 0x621255c5, "__class_register" },
	{ 0x71a50dbc, "register_blkdev" },
	{ 0x9deeaf5f, "bioset_init" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0x51a910c0, "arm_copy_to_user" },
	{ 0xc6cbbc89, "capable" },
	{ 0xae353d77, "arm_copy_from_user" },
	{ 0x40fd1bb5, "__alloc_pages_nodemask" },
	{ 0x6bb665e0, "bio_alloc_bioset" },
	{ 0x49ebacbd, "_clear_bit" },
	{ 0x99a9f473, "bd_set_size" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0x4ffe2e37, "__blkdev_driver_ioctl" },
	{ 0xda2a4834, "__free_pages" },
	{ 0xe3e6db69, "bio_put" },
	{ 0x717bcdac, "try_module_get" },
	{ 0x7c20652d, "debugfs_create_file" },
	{ 0x93b18eee, "debugfs_create_dir" },
	{ 0x13e86e9b, "device_create" },
	{ 0x6e08e459, "device_add_disk" },
	{ 0x53adbbd1, "proc_create_single_data" },
	{ 0xb35d51ab, "wake_up_process" },
	{ 0xdd34010a, "kthread_create_on_node" },
	{ 0xcace8430, "blk_queue_max_hw_sectors" },
	{ 0xff97825e, "blk_queue_logical_block_size" },
	{ 0x82e734ff, "blk_queue_make_request" },
	{ 0xeca2cb2, "set_blocksize" },
	{ 0xb66bc471, "__module_get" },
	{ 0x5bebba16, "blkdev_get" },
	{ 0xffbe7c01, "bdget" },
	{ 0xae0b491b, "blk_alloc_queue" },
	{ 0xe914e41e, "strcpy" },
	{ 0x43c0c01d, "__alloc_disk_node" },
	{ 0x5bbe49f4, "__init_waitqueue_head" },
	{ 0xc4657dc8, "mempool_init" },
	{ 0xd35a6d31, "mempool_kmalloc" },
	{ 0x6a037cf1, "mempool_kfree" },
	{ 0x7bfbe88e, "kthread_stop" },
	{ 0x12b548f6, "module_put" },
	{ 0xcb8c753b, "mempool_exit" },
	{ 0x76799abc, "put_disk" },
	{ 0xf86d5e67, "blk_cleanup_queue" },
	{ 0x929dcabf, "del_gendisk" },
	{ 0xae947aa3, "remove_proc_entry" },
	{ 0x6e71cf35, "blkdev_put" },
	{ 0x9d6eee2e, "device_unregister" },
	{ 0x47915c30, "debugfs_remove" },
	{ 0xcd34ce55, "single_open" },
	{ 0x22f8c1ca, "kobject_put" },
	{ 0x1bdb8ad6, "kobject_uevent" },
	{ 0x93a6913e, "kobject_init_and_add" },
	{ 0xebaa9dc8, "kmem_cache_alloc_trace" },
	{ 0xf4610713, "kmalloc_caches" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x32a423a6, "bio_devname" },
	{ 0x73c4f730, "bio_clone_fast" },
	{ 0x64999478, "congestion_wait" },
	{ 0x3c309adb, "set_wb_congested" },
	{ 0xa5526619, "rb_insert_color" },
	{ 0xd8410611, "mempool_alloc" },
	{ 0x3532ba0, "bio_chain" },
	{ 0x1af35879, "bio_split" },
	{ 0x426746f4, "blk_queue_split" },
	{ 0x4482cdb, "__refrigerator" },
	{ 0x86dbf1e, "freezing_slow_path" },
	{ 0xf1fff238, "clear_wb_congested" },
	{ 0xece784c2, "rb_first" },
	{ 0x285f55a, "bio_list_copy_data" },
	{ 0xe034cf65, "bio_endio" },
	{ 0x3e3928a, "generic_make_request" },
	{ 0x794765d1, "mempool_free" },
	{ 0x4d9b652b, "rb_erase" },
	{ 0x983ac031, "remove_wait_queue" },
	{ 0xb3f7646e, "kthread_should_stop" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0xa17bd3fc, "add_wait_queue" },
	{ 0x7ab88a45, "system_freezing_cnt" },
	{ 0xaad8c7d6, "default_wake_function" },
	{ 0x9e61bb05, "set_freezable" },
	{ 0xea48c6b2, "set_user_nice" },
	{ 0x14ae8f7c, "bio_add_page" },
	{ 0xb815eeea, "bio_associate_blkg" },
	{ 0x80360571, "bio_reset" },
	{ 0x5f754e5a, "memset" },
	{ 0x3dcf1ffa, "__wake_up" },
	{ 0xca9360b5, "rb_next" },
	{ 0xdb9ca3c5, "_raw_spin_lock" },
	{ 0xc8275115, "seq_printf" },
	{ 0x5ed919d5, "bdevname" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xbb24f607, "init_cdrom_command" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xf67ee0f6, "blk_put_request" },
	{ 0xefb62f52, "blk_execute_rq" },
	{ 0x334da4e, "scsi_command_size_tbl" },
	{ 0x51d9727f, "blk_rq_map_kern" },
	{ 0x390d82c5, "blk_get_request" },
	{ 0xfb384d37, "kasprintf" },
	{ 0x37a0cba, "kfree" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0xc5850110, "printk" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

MODULE_INFO(depends, "cdrom");


MODULE_INFO(srcversion, "F7ED0C59BE5A77176529C3F");
