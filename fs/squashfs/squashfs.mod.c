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
	{ 0x7d253e42, "iget_failed" },
	{ 0xf4610713, "kmalloc_caches" },
	{ 0x2d6fcc06, "__kmalloc" },
	{ 0x676c2adc, "sb_min_blocksize" },
	{ 0xff178f6, "__aeabi_idivmod" },
	{ 0x107e5878, "zlib_inflateEnd" },
	{ 0xf5b92ff5, "make_bad_inode" },
	{ 0x14d1b7f5, "generic_file_llseek" },
	{ 0x76d11765, "mem_map" },
	{ 0xd6ee688f, "vmalloc" },
	{ 0x97255bdf, "strlen" },
	{ 0x60a13e90, "rcu_barrier" },
	{ 0xba7dd190, "pagecache_get_page" },
	{ 0x5877a2ef, "ll_rw_block" },
	{ 0x3e1eff16, "get_tree_bdev" },
	{ 0x987c11c7, "__pv_phys_pfn_offset" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0xb80a90b1, "generic_read_dir" },
	{ 0x999e8297, "vfree" },
	{ 0x4caca1f4, "__getblk_gfp" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x2e43d7c1, "make_kgid" },
	{ 0x5bbe49f4, "__init_waitqueue_head" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0x748ec97d, "__insert_inode_hash" },
	{ 0x5f754e5a, "memset" },
	{ 0xe59e41f2, "__bread_gfp" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0xf4c13736, "d_obtain_alias" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x328a05f1, "strncpy" },
	{ 0xce5ac24f, "zlib_inflate_workspacesize" },
	{ 0x84b183ae, "strncmp" },
	{ 0xbb9f1908, "kmem_cache_free" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0x26ca851c, "set_nlink" },
	{ 0x32c5d9c8, "__wait_on_buffer" },
	{ 0x65dccf13, "xz_dec_end" },
	{ 0xe53537e3, "generic_ro_fops" },
	{ 0x4ccf485f, "unlock_page" },
	{ 0x76472663, "inode_nohighmem" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x581f98da, "zlib_inflate" },
	{ 0x2e7bf6d6, "inode_init_once" },
	{ 0xc6cbbc89, "capable" },
	{ 0xb6b6284e, "xz_dec_run" },
	{ 0x4007496c, "kmem_cache_alloc" },
	{ 0xb8886e84, "make_kuid" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x1000e51, "schedule" },
	{ 0x77f6f183, "kmalloc_order_trace" },
	{ 0x749066fb, "unlock_new_inode" },
	{ 0x559707c8, "kill_block_super" },
	{ 0xebaa9dc8, "kmem_cache_alloc_trace" },
	{ 0xdb9ca3c5, "_raw_spin_lock" },
	{ 0x4c0e8130, "kmem_cache_create" },
	{ 0xf3d8ce69, "register_filesystem" },
	{ 0x35a88f28, "zlib_inflateInit2" },
	{ 0x3dcf1ffa, "__wake_up" },
	{ 0x647af474, "prepare_to_wait_event" },
	{ 0x52d717da, "xz_dec_init" },
	{ 0xa2a29a97, "logfc" },
	{ 0x70d99e61, "iput" },
	{ 0x37a0cba, "kfree" },
	{ 0x904c32d7, "page_get_link" },
	{ 0x9d669763, "memcpy" },
	{ 0x4eb13446, "d_splice_alias" },
	{ 0x28bb4106, "sync_filesystem" },
	{ 0xab566ebe, "d_make_root" },
	{ 0xf30fda27, "lzo1x_decompress_safe" },
	{ 0x49970de8, "finish_wait" },
	{ 0x81db6ebb, "xz_dec_reset" },
	{ 0x6b4caa76, "unregister_filesystem" },
	{ 0x7c3951d6, "init_special_inode" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0x800805e5, "new_inode" },
	{ 0x5ff9fba4, "flush_dcache_page" },
	{ 0xcc286e8e, "__put_page" },
	{ 0xde869145, "iget_locked" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "DBDE8331AFEEC5DEF0A4938");
