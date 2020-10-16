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
	{ 0xf4610713, "kmalloc_caches" },
	{ 0x2d6fcc06, "__kmalloc" },
	{ 0xd1de681e, "__mark_inode_dirty" },
	{ 0x60a13e90, "rcu_barrier" },
	{ 0x9507547f, "ocfs2_cluster_disconnect" },
	{ 0xdd49ec8, "simple_lookup" },
	{ 0x26be65e0, "generic_delete_inode" },
	{ 0xd32d6c08, "lockref_get" },
	{ 0x6fff0729, "inc_nlink" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0xae353d77, "arm_copy_from_user" },
	{ 0x76f40744, "ocfs2_dlm_lvb" },
	{ 0x9c18c53a, "igrab" },
	{ 0x4a190564, "mount_nodev" },
	{ 0x51a910c0, "arm_copy_to_user" },
	{ 0x5bbe49f4, "__init_waitqueue_head" },
	{ 0x5f754e5a, "memset" },
	{ 0xd8be439f, "kill_litter_super" },
	{ 0x83673cbf, "default_llseek" },
	{ 0xc5850110, "printk" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x73e20c1c, "strlcpy" },
	{ 0xbb9f1908, "kmem_cache_free" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x475afad0, "setattr_copy" },
	{ 0xc5196999, "ocfs2_dlm_unlock" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x1475f64b, "ocfs2_dlm_lvb_valid" },
	{ 0xaf969565, "ocfs2_dlm_lock" },
	{ 0x2e7bf6d6, "inode_init_once" },
	{ 0x3ec59c07, "simple_getattr" },
	{ 0x6a0c3847, "__mlog_printk" },
	{ 0x4007496c, "kmem_cache_alloc" },
	{ 0xd344e4ee, "ocfs2_stack_glue_set_max_proto_version" },
	{ 0xb80c6ad8, "simple_unlink" },
	{ 0x78a9d114, "simple_dir_operations" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x1000e51, "schedule" },
	{ 0xebaa9dc8, "kmem_cache_alloc_trace" },
	{ 0xdb9ca3c5, "_raw_spin_lock" },
	{ 0x4c0e8130, "kmem_cache_create" },
	{ 0xf3d8ce69, "register_filesystem" },
	{ 0x3dcf1ffa, "__wake_up" },
	{ 0x647af474, "prepare_to_wait_event" },
	{ 0x2cfde9a2, "warn_slowpath_fmt" },
	{ 0xe953b21f, "get_next_ino" },
	{ 0x70d99e61, "iput" },
	{ 0x37a0cba, "kfree" },
	{ 0x9d669763, "memcpy" },
	{ 0x9812880e, "current_time" },
	{ 0xcafdd707, "ocfs2_dlm_lock_status" },
	{ 0xab566ebe, "d_make_root" },
	{ 0x24d8114c, "simple_statfs" },
	{ 0x49970de8, "finish_wait" },
	{ 0x6b4caa76, "unregister_filesystem" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xb2d48a2e, "queue_work_on" },
	{ 0xcfd3fc5, "ocfs2_cluster_connect_agnostic" },
	{ 0x800805e5, "new_inode" },
	{ 0x68a6116f, "clear_inode" },
	{ 0xdf9208c0, "alloc_workqueue" },
	{ 0x53b64c77, "d_instantiate" },
	{ 0xcd2d63c7, "simple_rmdir" },
	{ 0x78d04237, "setattr_prepare" },
	{ 0x7fad7308, "inode_init_owner" },
};

MODULE_INFO(depends, "ocfs2_stackglue,ocfs2_nodemanager");


MODULE_INFO(srcversion, "4733B99A121831128B030BC");
