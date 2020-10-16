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
	{ 0x194132fa, "zs_huge_class_size" },
	{ 0xf4610713, "kmalloc_caches" },
	{ 0xc341ae6d, "zs_map_object" },
	{ 0x627f576f, "__cpuhp_remove_state" },
	{ 0xa7b3181c, "up_read" },
	{ 0xf86d5e67, "blk_cleanup_queue" },
	{ 0xfe037c5c, "blk_queue_io_opt" },
	{ 0x76d11765, "mem_map" },
	{ 0x27864d57, "memparse" },
	{ 0x4bfdcefa, "__memset32" },
	{ 0x97255bdf, "strlen" },
	{ 0xc69b7ee5, "zs_destroy_pool" },
	{ 0xc4517a9c, "generic_end_io_acct" },
	{ 0x7a7f1396, "zs_malloc" },
	{ 0xb661d708, "blk_queue_io_min" },
	{ 0x50c89f23, "__alloc_percpu" },
	{ 0x987c11c7, "__pv_phys_pfn_offset" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0x999e8297, "vfree" },
	{ 0x52fc92ec, "blk_queue_max_write_zeroes_sectors" },
	{ 0x5da67adc, "zs_compact" },
	{ 0x246790df, "idr_for_each" },
	{ 0xaa708074, "revalidate_disk" },
	{ 0x526c3a6c, "jiffies" },
	{ 0xc9ec4e21, "free_percpu" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xfb1d7438, "down_read" },
	{ 0xcf3fac84, "cpumask_next" },
	{ 0x27874ec0, "fsync_bdev" },
	{ 0x43c0c01d, "__alloc_disk_node" },
	{ 0x958df3ac, "zs_free" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0x5f754e5a, "memset" },
	{ 0x1e96f43d, "__cpu_possible_mask" },
	{ 0x40b51c05, "__sysfs_match_string" },
	{ 0xae0b491b, "blk_alloc_queue" },
	{ 0x2878e15a, "idr_destroy" },
	{ 0xc5850110, "printk" },
	{ 0xd893f909, "blk_queue_max_discard_sectors" },
	{ 0x929dcabf, "del_gendisk" },
	{ 0xe4c122d0, "class_unregister" },
	{ 0x56dbf27e, "__cpuhp_state_add_instance" },
	{ 0x735f33b0, "mutex_is_locked" },
	{ 0x73e20c1c, "strlcpy" },
	{ 0xbcf1f0e6, "zs_create_pool" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0x71a50dbc, "register_blkdev" },
	{ 0x8c8569cb, "kstrtoint" },
	{ 0x692a4f08, "idr_alloc" },
	{ 0xe3d6084a, "__cpuhp_setup_state" },
	{ 0x7e0ce0c3, "up_write" },
	{ 0x621255c5, "__class_register" },
	{ 0x91f22f0c, "generic_start_io_acct" },
	{ 0x4253aa7e, "down_write" },
	{ 0xe034cf65, "bio_endio" },
	{ 0xa346975c, "idr_remove" },
	{ 0xb5a459dc, "unregister_blkdev" },
	{ 0x5d7d5750, "blk_queue_flag_clear" },
	{ 0x40a9b349, "vzalloc" },
	{ 0x48fa80e9, "blk_queue_flag_set" },
	{ 0x82e734ff, "blk_queue_make_request" },
	{ 0x6a5cb5ee, "__get_free_pages" },
	{ 0x8c365079, "blk_queue_physical_block_size" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x76799abc, "put_disk" },
	{ 0x4af6ddf0, "kstrtou16" },
	{ 0xe8b3f0d8, "__cpuhp_state_remove_instance" },
	{ 0x668b595, "_kstrtoul" },
	{ 0xae6283c2, "crypto_destroy_tfm" },
	{ 0xcbe56bc2, "zs_get_total_pages" },
	{ 0xebaa9dc8, "kmem_cache_alloc_trace" },
	{ 0x341dbfa3, "__per_cpu_offset" },
	{ 0x4302d0eb, "free_pages" },
	{ 0x2cfde9a2, "warn_slowpath_fmt" },
	{ 0x37a0cba, "kfree" },
	{ 0x9d669763, "memcpy" },
	{ 0xe071d05d, "zs_pool_stats" },
	{ 0x314b20c8, "scnprintf" },
	{ 0x951a2773, "crypto_has_alg" },
	{ 0x222e7ce2, "sysfs_streq" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xc358aaf8, "snprintf" },
	{ 0x6e08e459, "device_add_disk" },
	{ 0xc60d0620, "__num_online_cpus" },
	{ 0x5dda0a58, "crypto_alloc_base" },
	{ 0xff97825e, "blk_queue_logical_block_size" },
	{ 0x8a331d2b, "param_ops_uint" },
	{ 0x47925794, "idr_find" },
	{ 0x14277ce, "bdget_disk" },
	{ 0x3f483967, "bdput" },
	{ 0x924c46f8, "zs_unmap_object" },
	{ 0x6f013ecd, "__init_rwsem" },
	{ 0x5ff9fba4, "flush_dcache_page" },
	{ 0xbf3ba679, "page_endio" },
	{ 0xe914e41e, "strcpy" },
};

MODULE_INFO(depends, "zsmalloc");


MODULE_INFO(srcversion, "74320660DB5936B392634A5");
