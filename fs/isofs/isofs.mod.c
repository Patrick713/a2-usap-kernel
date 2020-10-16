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
	{ 0x107e5878, "zlib_inflateEnd" },
	{ 0x3d8a50d6, "unload_nls" },
	{ 0x14d1b7f5, "generic_file_llseek" },
	{ 0x76d11765, "mem_map" },
	{ 0xd6ee688f, "vmalloc" },
	{ 0x60a13e90, "rcu_barrier" },
	{ 0xc3b9e2f7, "iget5_locked" },
	{ 0xde004450, "from_kuid_munged" },
	{ 0x5d7776e5, "seq_puts" },
	{ 0xba7dd190, "pagecache_get_page" },
	{ 0xacf4d843, "match_strdup" },
	{ 0x5877a2ef, "ll_rw_block" },
	{ 0xabf32f29, "utf16s_to_utf8s" },
	{ 0xc8275115, "seq_printf" },
	{ 0x44e9a829, "match_token" },
	{ 0x987c11c7, "__pv_phys_pfn_offset" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0x37cc1f05, "init_user_ns" },
	{ 0xfb2f8a4, "mktime64" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0x4b4dbd4b, "mount_bdev" },
	{ 0x85df9b6c, "strsep" },
	{ 0x9266fd0, "page_symlink_inode_operations" },
	{ 0xb80a90b1, "generic_read_dir" },
	{ 0x999e8297, "vfree" },
	{ 0x4caca1f4, "__getblk_gfp" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x40fd1bb5, "__alloc_pages_nodemask" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xbe52600f, "from_kgid_munged" },
	{ 0x2e43d7c1, "make_kgid" },
	{ 0x9480c376, "mpage_readpages" },
	{ 0x5f754e5a, "memset" },
	{ 0xb39d1bbe, "mpage_readpage" },
	{ 0x11089ac7, "_ctype" },
	{ 0xe59e41f2, "__bread_gfp" },
	{ 0xc5850110, "printk" },
	{ 0xf4c13736, "d_obtain_alias" },
	{ 0x71c90087, "memcmp" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0xce5ac24f, "zlib_inflate_workspacesize" },
	{ 0x84b183ae, "strncmp" },
	{ 0xbb9f1908, "kmem_cache_free" },
	{ 0x26ca851c, "set_nlink" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0x32c5d9c8, "__wait_on_buffer" },
	{ 0xdd27fa87, "memchr" },
	{ 0xe53537e3, "generic_ro_fops" },
	{ 0x4e3567f7, "match_int" },
	{ 0x4ccf485f, "unlock_page" },
	{ 0x76472663, "inode_nohighmem" },
	{ 0x1c0d35b5, "__brelse" },
	{ 0x581f98da, "zlib_inflate" },
	{ 0x2e7bf6d6, "inode_init_once" },
	{ 0x4007496c, "kmem_cache_alloc" },
	{ 0xda2a4834, "__free_pages" },
	{ 0xb8886e84, "make_kuid" },
	{ 0x6a5cb5ee, "__get_free_pages" },
	{ 0x9e1bdee7, "load_nls" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x2aa0e4fc, "strncasecmp" },
	{ 0x749066fb, "unlock_new_inode" },
	{ 0x559707c8, "kill_block_super" },
	{ 0xd6eaaea1, "full_name_hash" },
	{ 0xebaa9dc8, "kmem_cache_alloc_trace" },
	{ 0xdb9ca3c5, "_raw_spin_lock" },
	{ 0x4c0e8130, "kmem_cache_create" },
	{ 0xf3d8ce69, "register_filesystem" },
	{ 0x35a88f28, "zlib_inflateInit2" },
	{ 0x4302d0eb, "free_pages" },
	{ 0x2cfde9a2, "warn_slowpath_fmt" },
	{ 0x70d99e61, "iput" },
	{ 0x37a0cba, "kfree" },
	{ 0x9d669763, "memcpy" },
	{ 0xf68dc13c, "load_nls_default" },
	{ 0x4eb13446, "d_splice_alias" },
	{ 0x28bb4106, "sync_filesystem" },
	{ 0xb212ad15, "sb_set_blocksize" },
	{ 0xab566ebe, "d_make_root" },
	{ 0xe6b2f900, "ioctl_by_bdev" },
	{ 0x6b4caa76, "unregister_filesystem" },
	{ 0x7c3951d6, "init_special_inode" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0x49ebacbd, "_clear_bit" },
	{ 0x5ff9fba4, "flush_dcache_page" },
	{ 0xcc286e8e, "__put_page" },
	{ 0xacf23ba7, "generic_block_bmap" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "CFE935A48F43241EC039673");
