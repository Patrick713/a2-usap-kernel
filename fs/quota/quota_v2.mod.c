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
	{ 0x937bed10, "unregister_quota_format" },
	{ 0x91107e78, "register_quota_format" },
	{ 0x2e43d7c1, "make_kgid" },
	{ 0xe4eaab70, "make_kprojid" },
	{ 0x8d55bb8a, "qid_eq" },
	{ 0xb8886e84, "make_kuid" },
	{ 0xebaa9dc8, "kmem_cache_alloc_trace" },
	{ 0xf4610713, "kmalloc_caches" },
	{ 0xc71e3203, "qtree_entry_unused" },
	{ 0x7ce18c9f, "from_kqid" },
	{ 0x37cc1f05, "init_user_ns" },
	{ 0x71c90087, "memcmp" },
	{ 0x5f754e5a, "memset" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x493b2e9c, "__quota_error" },
	{ 0xdb9ca3c5, "_raw_spin_lock" },
	{ 0x514a62ec, "dq_data_lock" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x37a0cba, "kfree" },
	{ 0x45f0cdb1, "qtree_read_dquot" },
	{ 0x89442cfe, "qtree_write_dquot" },
	{ 0x7e0ce0c3, "up_write" },
	{ 0x43ec3d41, "qtree_release_dquot" },
	{ 0x4253aa7e, "down_write" },
	{ 0xa7b3181c, "up_read" },
	{ 0x2dc54005, "qtree_get_next_id" },
	{ 0xfb1d7438, "down_read" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

MODULE_INFO(depends, "quota_tree");


MODULE_INFO(srcversion, "81B75F317E09D6870778F36");