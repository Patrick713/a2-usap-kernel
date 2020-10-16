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
	{ 0x807982be, "__blk_mq_end_request" },
	{ 0xf4610713, "kmalloc_caches" },
	{ 0xf86d5e67, "blk_cleanup_queue" },
	{ 0x76d11765, "mem_map" },
	{ 0x771838b8, "mtd_table_mutex" },
	{ 0x93755029, "rq_flush_dcache_pages" },
	{ 0x2f4fe12a, "blk_mq_start_request" },
	{ 0x95d587ef, "blk_mq_unfreeze_queue" },
	{ 0x987c11c7, "__pv_phys_pfn_offset" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0x9f27259e, "__put_mtd_device" },
	{ 0xff647147, "blk_mq_freeze_queue" },
	{ 0x671d4864, "__get_mtd_device" },
	{ 0xd697e69a, "trace_hardirqs_on" },
	{ 0xa4040d67, "sysfs_remove_group" },
	{ 0xdd4ffa9b, "mutex_trylock" },
	{ 0x43c0c01d, "__alloc_disk_node" },
	{ 0x39a12ca7, "_raw_spin_unlock_irqrestore" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0xf63fc023, "sysfs_create_group" },
	{ 0xd893f909, "blk_queue_max_discard_sectors" },
	{ 0x929dcabf, "del_gendisk" },
	{ 0xabd556d4, "blk_mq_free_tag_set" },
	{ 0x7fb69e3d, "register_mtd_user" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x8f9aca02, "__mtd_next_device" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0x71a50dbc, "register_blkdev" },
	{ 0xc1e58a5f, "refcount_dec_and_test_checked" },
	{ 0xdba4f3bd, "unregister_mtd_user" },
	{ 0x52bc9c14, "blk_update_request" },
	{ 0xb5a459dc, "unregister_blkdev" },
	{ 0x12b548f6, "module_put" },
	{ 0x5d7d5750, "blk_queue_flag_clear" },
	{ 0x9d1d7199, "blk_mq_init_sq_queue" },
	{ 0x48fa80e9, "blk_queue_flag_set" },
	{ 0x76799abc, "put_disk" },
	{ 0x2da81bff, "_raw_spin_lock_irq" },
	{ 0xebaa9dc8, "kmem_cache_alloc_trace" },
	{ 0x5f849a69, "_raw_spin_lock_irqsave" },
	{ 0xb66bc471, "__module_get" },
	{ 0x2cfde9a2, "warn_slowpath_fmt" },
	{ 0x6e8381c5, "blk_queue_write_cache" },
	{ 0x37a0cba, "kfree" },
	{ 0xee804089, "blk_mq_quiesce_queue" },
	{ 0x36e7daa5, "blk_mq_unquiesce_queue" },
	{ 0xc358aaf8, "snprintf" },
	{ 0x6e08e459, "device_add_disk" },
	{ 0x1ee8d6d4, "refcount_inc_checked" },
	{ 0xff97825e, "blk_queue_logical_block_size" },
	{ 0xf66be541, "set_disk_ro" },
};

MODULE_INFO(depends, "mtd");


MODULE_INFO(srcversion, "3561D640AA8701323854A99");
