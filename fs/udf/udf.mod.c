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
	{ 0x7062fd9e, "drop_nlink" },
	{ 0xff178f6, "__aeabi_idivmod" },
	{ 0xb1e13656, "mark_buffer_dirty_inode" },
	{ 0xa7b3181c, "up_read" },
	{ 0x3d8a50d6, "unload_nls" },
	{ 0xf5b92ff5, "make_bad_inode" },
	{ 0x14d1b7f5, "generic_file_llseek" },
	{ 0xd1de681e, "__mark_inode_dirty" },
	{ 0x76d11765, "mem_map" },
	{ 0x7aa1756e, "kvfree" },
	{ 0x82a8b9f2, "inode_permission" },
	{ 0xb1fbedfd, "generic_write_checks" },
	{ 0xa2048e95, "crc_itu_t" },
	{ 0x97255bdf, "strlen" },
	{ 0x60a13e90, "rcu_barrier" },
	{ 0x3fd98686, "__generic_file_write_iter" },
	{ 0x815b5dd4, "match_octal" },
	{ 0xbe406f6, "block_write_begin" },
	{ 0x5d7776e5, "seq_puts" },
	{ 0x2ba6490e, "is_bad_inode" },
	{ 0xba7dd190, "pagecache_get_page" },
	{ 0xa58b0482, "generic_file_open" },
	{ 0x3b697738, "_raw_read_lock" },
	{ 0x58b779a7, "__lock_page" },
	{ 0x5877a2ef, "ll_rw_block" },
	{ 0xfff5afc, "time64_to_tm" },
	{ 0x9dbb2013, "__lock_buffer" },
	{ 0xf7802486, "__aeabi_uidivmod" },
	{ 0xd3f57a2, "_find_next_bit_le" },
	{ 0xc8275115, "seq_printf" },
	{ 0x353e3fa5, "__get_user_4" },
	{ 0x44e9a829, "match_token" },
	{ 0x6fff0729, "inc_nlink" },
	{ 0x987c11c7, "__pv_phys_pfn_offset" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0x37cc1f05, "init_user_ns" },
	{ 0xfb2f8a4, "mktime64" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0x4b4dbd4b, "mount_bdev" },
	{ 0x85df9b6c, "strsep" },
	{ 0xd952de1f, "d_instantiate_new" },
	{ 0xb80a90b1, "generic_read_dir" },
	{ 0x4caca1f4, "__getblk_gfp" },
	{ 0x5b86af02, "unlock_buffer" },
	{ 0xb1b2427c, "set_page_dirty" },
	{ 0x51a910c0, "arm_copy_to_user" },
	{ 0xf6b62c95, "truncate_setsize" },
	{ 0xfb1d7438, "down_read" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x2e43d7c1, "make_kgid" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0x9480c376, "mpage_readpages" },
	{ 0x5f754e5a, "memset" },
	{ 0xac95141e, "from_kuid" },
	{ 0xb39d1bbe, "mpage_readpage" },
	{ 0x4c53d4f, "inode_add_bytes" },
	{ 0xe59e41f2, "__bread_gfp" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0xf4c13736, "d_obtain_alias" },
	{ 0x71c90087, "memcmp" },
	{ 0x9ec6ca96, "ktime_get_real_ts64" },
	{ 0x3704c324, "mpage_writepages" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x328a05f1, "strncpy" },
	{ 0xe395d3eb, "from_kgid" },
	{ 0x84b183ae, "strncmp" },
	{ 0xbb9f1908, "kmem_cache_free" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0x26ca851c, "set_nlink" },
	{ 0x32c5d9c8, "__wait_on_buffer" },
	{ 0x9425caca, "_raw_write_lock" },
	{ 0x475afad0, "setattr_copy" },
	{ 0x85dad318, "insert_inode_locked" },
	{ 0x4f49ea4e, "sync_dirty_buffer" },
	{ 0x2bc947, "truncate_pagecache" },
	{ 0x4e3567f7, "match_int" },
	{ 0x4ccf485f, "unlock_page" },
	{ 0x10ea359b, "generic_file_read_iter" },
	{ 0x7e0ce0c3, "up_write" },
	{ 0x4253aa7e, "down_write" },
	{ 0x76472663, "inode_nohighmem" },
	{ 0x1c0d35b5, "__brelse" },
	{ 0xfe5d4bb2, "sys_tz" },
	{ 0x94bf03ca, "utf8_to_utf32" },
	{ 0x2e7bf6d6, "inode_init_once" },
	{ 0xc6cbbc89, "capable" },
	{ 0xd614877b, "invalidate_inode_buffers" },
	{ 0x7171121c, "overflowgid" },
	{ 0x40a9b349, "vzalloc" },
	{ 0x4007496c, "kmem_cache_alloc" },
	{ 0xbc10dd97, "__put_user_4" },
	{ 0xb4aaaff0, "generic_file_mmap" },
	{ 0x3023ab77, "block_write_full_page" },
	{ 0xb4cc5d1f, "inode_sub_bytes" },
	{ 0xe6b8dc23, "truncate_inode_pages_final" },
	{ 0xb8886e84, "make_kuid" },
	{ 0x9e1bdee7, "load_nls" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x9bb48162, "generic_write_end" },
	{ 0x749066fb, "unlock_new_inode" },
	{ 0x559707c8, "kill_block_super" },
	{ 0xebaa9dc8, "kmem_cache_alloc_trace" },
	{ 0xdb9ca3c5, "_raw_spin_lock" },
	{ 0x4c0e8130, "kmem_cache_create" },
	{ 0x22ce1a67, "d_tmpfile" },
	{ 0xf3d8ce69, "register_filesystem" },
	{ 0x2cfde9a2, "warn_slowpath_fmt" },
	{ 0x70d99e61, "iput" },
	{ 0x41d47f75, "read_cache_page" },
	{ 0x1b09ea, "generic_file_fsync" },
	{ 0x37a0cba, "kfree" },
	{ 0x904c32d7, "page_get_link" },
	{ 0x473a319f, "ihold" },
	{ 0x9d669763, "memcpy" },
	{ 0x9812880e, "current_time" },
	{ 0xf68dc13c, "load_nls_default" },
	{ 0x4eb13446, "d_splice_alias" },
	{ 0x28bb4106, "sync_filesystem" },
	{ 0x58e8177f, "block_truncate_page" },
	{ 0xb212ad15, "sb_set_blocksize" },
	{ 0xab566ebe, "d_make_root" },
	{ 0xa2917551, "__blockdev_direct_IO" },
	{ 0x8b618d08, "overflowuid" },
	{ 0x63c4d61f, "__bitmap_weight" },
	{ 0x812cabd, "mark_buffer_dirty" },
	{ 0x2875a315, "utf32_to_utf8" },
	{ 0xe6b2f900, "ioctl_by_bdev" },
	{ 0x6b4caa76, "unregister_filesystem" },
	{ 0x7c3951d6, "init_special_inode" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0x800805e5, "new_inode" },
	{ 0x99bb8806, "memmove" },
	{ 0x8e0988a0, "generic_file_splice_read" },
	{ 0x252a597d, "discard_new_inode" },
	{ 0x8d73278e, "hex_asc_upper" },
	{ 0x49ebacbd, "_clear_bit" },
	{ 0x40c9a356, "grab_cache_page_write_begin" },
	{ 0x68a6116f, "clear_inode" },
	{ 0x53b64c77, "d_instantiate" },
	{ 0x6f013ecd, "__init_rwsem" },
	{ 0x5ff9fba4, "flush_dcache_page" },
	{ 0xcc286e8e, "__put_page" },
	{ 0xacf23ba7, "generic_block_bmap" },
	{ 0xfe13d6f9, "clear_nlink" },
	{ 0xde869145, "iget_locked" },
	{ 0x4dec6038, "memscan" },
	{ 0xc7d9d1f5, "vfs_fsync_range" },
	{ 0x78d04237, "setattr_prepare" },
	{ 0x81949a46, "generic_fillattr" },
	{ 0x7fad7308, "inode_init_owner" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "0CD3D784EC2F1CA0ED589A7");