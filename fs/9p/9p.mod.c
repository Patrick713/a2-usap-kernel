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
	{ 0x22f8c1ca, "kobject_put" },
	{ 0x2680385, "kmem_cache_destroy" },
	{ 0x7d253e42, "iget_failed" },
	{ 0xf4610713, "kmalloc_caches" },
	{ 0x2d6fcc06, "__kmalloc" },
	{ 0x7062fd9e, "drop_nlink" },
	{ 0xe4ef54c7, "set_anon_super" },
	{ 0x99a88974, "p9_client_mknod_dotl" },
	{ 0xa7b3181c, "up_read" },
	{ 0x14d1b7f5, "generic_file_llseek" },
	{ 0xd1de681e, "__mark_inode_dirty" },
	{ 0x76d11765, "mem_map" },
	{ 0xfbc284bf, "__set_page_dirty_nobuffers" },
	{ 0x5c1079b1, "filemap_fault" },
	{ 0xb1fbedfd, "generic_write_checks" },
	{ 0x97255bdf, "strlen" },
	{ 0x60a13e90, "rcu_barrier" },
	{ 0x5d18f494, "p9_client_readdir" },
	{ 0xc3b9e2f7, "iget5_locked" },
	{ 0xde004450, "from_kuid_munged" },
	{ 0x1260a51c, "kill_anon_super" },
	{ 0xb8b043f2, "kfree_link" },
	{ 0x7a1602aa, "posix_acl_to_xattr" },
	{ 0x19f462ab, "kfree_call_rcu" },
	{ 0xd03a87f5, "p9_client_getlock_dotl" },
	{ 0x7ce14e0d, "p9_client_begin_disconnect" },
	{ 0x5d7776e5, "seq_puts" },
	{ 0xa58b0482, "generic_file_open" },
	{ 0xacf4d843, "match_strdup" },
	{ 0x394d1323, "posix_acl_update_mode" },
	{ 0x58b779a7, "__lock_page" },
	{ 0x900244a5, "filemap_write_and_wait" },
	{ 0x20000329, "simple_strtoul" },
	{ 0x25b775bc, "deactivate_locked_super" },
	{ 0xd32d6c08, "lockref_get" },
	{ 0x5117deaf, "dput" },
	{ 0xc8275115, "seq_printf" },
	{ 0xe0d4119e, "p9_client_stat" },
	{ 0x44e9a829, "match_token" },
	{ 0x6fff0729, "inc_nlink" },
	{ 0x987c11c7, "__pv_phys_pfn_offset" },
	{ 0x13ceb027, "p9_client_link" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0x37cc1f05, "init_user_ns" },
	{ 0x971dd4b4, "p9_client_statfs" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0x85df9b6c, "strsep" },
	{ 0xb80a90b1, "generic_read_dir" },
	{ 0xe6b1e55e, "p9stat_read" },
	{ 0xb826f00b, "super_setup_bdi" },
	{ 0xfd85236c, "p9_client_clunk" },
	{ 0xab01d3f2, "redirty_page_for_writepage" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xa4040d67, "sysfs_remove_group" },
	{ 0xfeab1813, "p9_is_proto_dotl" },
	{ 0x2d39b0a7, "kstrdup" },
	{ 0xb1b2427c, "set_page_dirty" },
	{ 0x47eb70e2, "p9_client_readlink" },
	{ 0xf6b62c95, "truncate_setsize" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xfb1d7438, "down_read" },
	{ 0xaf22ee50, "kobject_create_and_add" },
	{ 0xc28ebcf1, "end_page_writeback" },
	{ 0xbe52600f, "from_kgid_munged" },
	{ 0x2e43d7c1, "make_kgid" },
	{ 0x4a4390fa, "p9_client_symlink" },
	{ 0x3d986cf9, "p9dirent_read" },
	{ 0x5e83991, "p9_client_fsync" },
	{ 0xe0cb112, "inode_owner_or_capable" },
	{ 0x931d138b, "p9_client_read" },
	{ 0xda8c9356, "iov_iter_bvec" },
	{ 0xad0949d7, "p9_show_client_options" },
	{ 0x5f754e5a, "memset" },
	{ 0x7269a27c, "p9_client_walk" },
	{ 0x4c53d4f, "inode_add_bytes" },
	{ 0xa4baff37, "p9_client_write" },
	{ 0xce2ac469, "finish_no_open" },
	{ 0xd063f355, "sync_inode" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0xf63fc023, "sysfs_create_group" },
	{ 0x46b9a932, "p9_client_lock_dotl" },
	{ 0xb7bfcc62, "p9_client_create_dotl" },
	{ 0xfe0c4e49, "sget" },
	{ 0x87d81478, "iov_iter_kvec" },
	{ 0x7cac7c83, "p9_client_xattrcreate" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x6108e5d2, "d_move" },
	{ 0x84b183ae, "strncmp" },
	{ 0x73e20c1c, "strlcpy" },
	{ 0xeecad7e1, "p9_client_mkdir_dotl" },
	{ 0xbb9f1908, "kmem_cache_free" },
	{ 0x26ca851c, "set_nlink" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0x39b730cf, "file_update_time" },
	{ 0xf8972de2, "get_cached_acl" },
	{ 0x475afad0, "setattr_copy" },
	{ 0x15e86380, "p9_client_unlinkat" },
	{ 0xc1e58a5f, "refcount_dec_and_test_checked" },
	{ 0xa324d23f, "p9_client_destroy" },
	{ 0x3f311e45, "set_cached_acl" },
	{ 0x4e3567f7, "match_int" },
	{ 0x4ccf485f, "unlock_page" },
	{ 0x10ea359b, "generic_file_read_iter" },
	{ 0x7e0ce0c3, "up_write" },
	{ 0x4253aa7e, "down_write" },
	{ 0x9bcb7b1b, "p9_client_xattrwalk" },
	{ 0x1f988ae7, "p9_client_setattr" },
	{ 0xb7c1f6be, "file_write_and_wait_range" },
	{ 0x2e7bf6d6, "inode_init_once" },
	{ 0x889b37b7, "xattr_full_name" },
	{ 0x4007496c, "kmem_cache_alloc" },
	{ 0xb4aaaff0, "generic_file_mmap" },
	{ 0xc80b7435, "__filemap_set_wb_err" },
	{ 0xfd4eb36e, "wait_for_stable_page" },
	{ 0x44b9708a, "fs_kobj" },
	{ 0xe6b8dc23, "truncate_inode_pages_final" },
	{ 0xb8886e84, "make_kuid" },
	{ 0x1bfed869, "posix_acl_valid" },
	{ 0xad24ac85, "p9_client_create" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xf2ca1800, "posix_acl_from_xattr" },
	{ 0x749066fb, "unlock_new_inode" },
	{ 0xd384c683, "p9stat_free" },
	{ 0x5e95b1cd, "current_umask" },
	{ 0xe886c1e1, "locks_lock_inode_wait" },
	{ 0xe41bd9e1, "p9_client_attach" },
	{ 0x1a554bd4, "clear_page_dirty_for_io" },
	{ 0xebaa9dc8, "kmem_cache_alloc_trace" },
	{ 0xdb9ca3c5, "_raw_spin_lock" },
	{ 0x450b5b70, "p9_client_disconnect" },
	{ 0x357c18aa, "read_cache_pages" },
	{ 0x4c0e8130, "kmem_cache_create" },
	{ 0xf3d8ce69, "register_filesystem" },
	{ 0xccc93c73, "p9_is_proto_dotu" },
	{ 0xac1408f1, "generic_file_write_iter" },
	{ 0x905f345c, "p9_client_fcreate" },
	{ 0xcf5fcda8, "__test_set_page_writeback" },
	{ 0x728c65bd, "I_BDEV" },
	{ 0x919b2916, "blockdev_superblock" },
	{ 0x2cfde9a2, "warn_slowpath_fmt" },
	{ 0x76c688b9, "generic_file_readonly_mmap" },
	{ 0x70d99e61, "iput" },
	{ 0x621debdd, "finish_open" },
	{ 0x54496b4, "schedule_timeout_interruptible" },
	{ 0xf8d29bc0, "invalidate_inode_pages2_range" },
	{ 0x37a0cba, "kfree" },
	{ 0x7e183300, "p9_client_renameat" },
	{ 0x473a319f, "ihold" },
	{ 0x9d669763, "memcpy" },
	{ 0x9812880e, "current_time" },
	{ 0x4eb13446, "d_splice_alias" },
	{ 0x61866c07, "p9_client_remove" },
	{ 0x3c9dbf12, "always_delete_dentry" },
	{ 0x43b2460b, "invalidate_mapping_pages" },
	{ 0xd6d0ea88, "__posix_acl_chmod" },
	{ 0xab566ebe, "d_make_root" },
	{ 0x24d8114c, "simple_statfs" },
	{ 0x6b4caa76, "unregister_filesystem" },
	{ 0x7c3951d6, "init_special_inode" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0xd417d1f9, "filemap_map_pages" },
	{ 0x800805e5, "new_inode" },
	{ 0x1ee8d6d4, "refcount_inc_checked" },
	{ 0x40c9a356, "grab_cache_page_write_begin" },
	{ 0x68a6116f, "clear_inode" },
	{ 0x53b64c77, "d_instantiate" },
	{ 0x6f013ecd, "__init_rwsem" },
	{ 0x5ff9fba4, "flush_dcache_page" },
	{ 0x14e8f186, "p9_client_rename" },
	{ 0xcc286e8e, "__put_page" },
	{ 0xfe13d6f9, "clear_nlink" },
	{ 0xe89ba6a3, "p9_client_open" },
	{ 0x78d04237, "setattr_prepare" },
	{ 0xef5186fd, "p9_client_wstat" },
	{ 0x7510cd56, "p9_client_getattr_dotl" },
	{ 0x81949a46, "generic_fillattr" },
	{ 0x38fc0a1e, "filemap_fdatawrite" },
	{ 0x7fad7308, "inode_init_owner" },
	{ 0xd4a2bf33, "__posix_acl_create" },
	{ 0x4f587532, "noop_backing_dev_info" },
	{ 0xe46c52e6, "posix_test_lock" },
};

MODULE_INFO(depends, "9pnet");


MODULE_INFO(srcversion, "7AACD0600E2680AF2A4DA60");
