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
	{ 0x2aa2733d, "pnfs_unregister_layoutdriver" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x72780f00, "pnfs_generic_pg_init_write" },
	{ 0x9321596f, "fs_bio_set" },
	{ 0xf4610713, "kmalloc_caches" },
	{ 0x2d6fcc06, "__kmalloc" },
	{ 0x6bb665e0, "bio_alloc_bioset" },
	{ 0x76d11765, "mem_map" },
	{ 0xaaa14361, "nfs_dreq_bytes_left" },
	{ 0x19f462ab, "kfree_call_rcu" },
	{ 0x983ac031, "remove_wait_queue" },
	{ 0x5e7eee2e, "rpc_unlink" },
	{ 0x252ecf45, "pnfs_ld_write_done" },
	{ 0x650c8c3f, "pnfs_error_mark_layout_for_return" },
	{ 0xf7802486, "__aeabi_uidivmod" },
	{ 0x5117deaf, "dput" },
	{ 0xe835ee50, "nfs4_delete_deviceid" },
	{ 0xc3a2be67, "nfs_net_id" },
	{ 0xb1b939e, "kmemdup" },
	{ 0x987c11c7, "__pv_phys_pfn_offset" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0x47a54ce4, "nfs4_mark_deviceid_unavailable" },
	{ 0xae353d77, "arm_copy_from_user" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0x999e8297, "vfree" },
	{ 0x342890de, "rpc_mkpipe_data" },
	{ 0xd70d36b9, "rpc_mkpipe_dentry" },
	{ 0x40fd1bb5, "__alloc_pages_nodemask" },
	{ 0x526c3a6c, "jiffies" },
	{ 0x9a4f4ebf, "pnfs_generic_pg_test" },
	{ 0xfb384d37, "kasprintf" },
	{ 0xece784c2, "rb_first" },
	{ 0xdcde7f51, "rpc_get_sb_net" },
	{ 0x5bbe49f4, "__init_waitqueue_head" },
	{ 0xaad8c7d6, "default_wake_function" },
	{ 0x98e82553, "pnfs_generic_pg_cleanup" },
	{ 0xc927c283, "pnfs_generic_sync" },
	{ 0x5f754e5a, "memset" },
	{ 0x14be1fcd, "xdr_init_decode_pages" },
	{ 0x6e2ea5d2, "rpc_queue_upcall" },
	{ 0x65e2bb05, "unregister_pernet_subsys" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0x14ae8f7c, "bio_add_page" },
	{ 0xef281502, "nfs4_find_get_deviceid" },
	{ 0x4d9b652b, "rb_erase" },
	{ 0x476259d1, "blkdev_get_by_path" },
	{ 0xdac54c13, "nfs_pageio_reset_write_mds" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0xdccba5cb, "rpc_d_lookup_sb" },
	{ 0xc1e58a5f, "refcount_dec_and_test_checked" },
	{ 0x32c5f131, "blkdev_get_by_dev" },
	{ 0x7e7d29a1, "nfs4_put_deviceid_node" },
	{ 0xe3e6db69, "bio_put" },
	{ 0x59e5070d, "__do_div64" },
	{ 0x12b548f6, "module_put" },
	{ 0xc90d628a, "rpc_pipe_generic_upcall" },
	{ 0x8548c258, "submit_bio" },
	{ 0xf2215f74, "blk_finish_plug" },
	{ 0x387e1639, "rpc_pipefs_notifier_register" },
	{ 0xda2a4834, "__free_pages" },
	{ 0x1fa2569e, "rpc_destroy_pipe_data" },
	{ 0x6e71cf35, "blkdev_put" },
	{ 0xf82ec573, "rb_prev" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x1000e51, "schedule" },
	{ 0xb041ec8d, "register_pernet_subsys" },
	{ 0x8f5bf3e5, "rpc_put_sb_net" },
	{ 0x28e2685, "pnfs_generic_pg_readpages" },
	{ 0xebaa9dc8, "kmem_cache_alloc_trace" },
	{ 0xdb9ca3c5, "_raw_spin_lock" },
	{ 0x65994f1, "xdr_encode_opaque_fixed" },
	{ 0xa5526619, "rb_insert_color" },
	{ 0xe5919cb1, "xdr_encode_opaque" },
	{ 0x3dcf1ffa, "__wake_up" },
	{ 0x8316c93c, "page_cache_next_miss" },
	{ 0x2cfde9a2, "warn_slowpath_fmt" },
	{ 0xa17bd3fc, "add_wait_queue" },
	{ 0xb15893fb, "pnfs_generic_pg_writepages" },
	{ 0x109d0eca, "__vmalloc" },
	{ 0x37a0cba, "kfree" },
	{ 0x9d669763, "memcpy" },
	{ 0x68fa87bb, "pnfs_generic_pg_init_read" },
	{ 0x9dc08a71, "pgprot_kernel" },
	{ 0xca9360b5, "rb_next" },
	{ 0xb51a3724, "rpc_pipefs_notifier_unregister" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0xb2d48a2e, "queue_work_on" },
	{ 0xdbd11817, "xdr_inline_decode" },
	{ 0x12c76c9d, "vmalloc_to_page" },
	{ 0x1ee8d6d4, "refcount_inc_checked" },
	{ 0xff738a26, "nfs_pageio_reset_read_mds" },
	{ 0x20c2a1a9, "nfs4_init_deviceid_node" },
	{ 0x4f69cc1b, "pnfs_set_lo_fail" },
	{ 0x7a9b37e8, "blk_start_plug" },
	{ 0x5e88bc68, "xdr_set_scratch_buffer" },
	{ 0x5ff9fba4, "flush_dcache_page" },
	{ 0xa0a5d907, "pnfs_ld_read_done" },
	{ 0xcc286e8e, "__put_page" },
	{ 0x717bcdac, "try_module_get" },
	{ 0xc6c12aa3, "pnfs_register_layoutdriver" },
	{ 0xb815eeea, "bio_associate_blkg" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "131139394D0AA9F9D6CF3C4");
