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
	{ 0x1260a51c, "kill_anon_super" },
	{ 0xcb1aa0b9, "zpool_unregister_driver" },
	{ 0xbc1b769, "kern_unmount" },
	{ 0xd40e08fb, "zpool_register_driver" },
	{ 0xafd24ed5, "kern_mount" },
	{ 0x4007496c, "kmem_cache_alloc" },
	{ 0x40fd1bb5, "__alloc_pages_nodemask" },
	{ 0x58b779a7, "__lock_page" },
	{ 0x4205ad24, "cancel_work_sync" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x4ccf485f, "unlock_page" },
	{ 0x921b07b1, "__cpu_online_mask" },
	{ 0xbb9f1908, "kmem_cache_free" },
	{ 0x99bb8806, "memmove" },
	{ 0x2a3aa678, "_test_and_clear_bit" },
	{ 0xc9ec4e21, "free_percpu" },
	{ 0x16c32d4d, "alloc_anon_inode" },
	{ 0xdf9208c0, "alloc_workqueue" },
	{ 0xcf3fac84, "cpumask_next" },
	{ 0x341dbfa3, "__per_cpu_offset" },
	{ 0x1e96f43d, "__cpu_possible_mask" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0x50c89f23, "__alloc_percpu" },
	{ 0x4c0e8130, "kmem_cache_create" },
	{ 0xebaa9dc8, "kmem_cache_alloc_trace" },
	{ 0xf4610713, "kmalloc_caches" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xda2a4834, "__free_pages" },
	{ 0xca54fee, "_test_and_set_bit" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xc1e58a5f, "refcount_dec_and_test_checked" },
	{ 0xc5850110, "printk" },
	{ 0x1ee8d6d4, "refcount_inc_checked" },
	{ 0x94014c56, "init_pseudo" },
	{ 0xcc286e8e, "__put_page" },
	{ 0xb2d48a2e, "queue_work_on" },
	{ 0xfb6d6277, "__SetPageMovable" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0xdb9ca3c5, "_raw_spin_lock" },
	{ 0x49ebacbd, "_clear_bit" },
	{ 0x7b7c895, "__ClearPageMovable" },
	{ 0x567539d3, "page_mapping" },
	{ 0x9d669763, "memcpy" },
	{ 0xacb31ecf, "_raw_spin_trylock" },
	{ 0x987c11c7, "__pv_phys_pfn_offset" },
	{ 0x76d11765, "mem_map" },
	{ 0x37a0cba, "kfree" },
	{ 0x70d99e61, "iput" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x2680385, "kmem_cache_destroy" },
	{ 0x2cfde9a2, "warn_slowpath_fmt" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "DED1883D518C9CEF0E55A28");
