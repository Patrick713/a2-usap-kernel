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
	{ 0x92b57248, "flush_work" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x2680385, "kmem_cache_destroy" },
	{ 0xf4610713, "kmalloc_caches" },
	{ 0x627f576f, "__cpuhp_remove_state" },
	{ 0xff178f6, "__aeabi_idivmod" },
	{ 0x76d11765, "mem_map" },
	{ 0x1260a51c, "kill_anon_super" },
	{ 0x86a05f05, "dec_zone_page_state" },
	{ 0xbc1b769, "kern_unmount" },
	{ 0x3b697738, "_raw_read_lock" },
	{ 0x58b779a7, "__lock_page" },
	{ 0xf7802486, "__aeabi_uidivmod" },
	{ 0x987c11c7, "__pv_phys_pfn_offset" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0xd40e08fb, "zpool_register_driver" },
	{ 0x40fd1bb5, "__alloc_pages_nodemask" },
	{ 0x2d39b0a7, "kstrdup" },
	{ 0x94014c56, "init_pseudo" },
	{ 0x5bbe49f4, "__init_waitqueue_head" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0xca6485ae, "map_vm_area" },
	{ 0x7b7c895, "__ClearPageMovable" },
	{ 0xb9d9172a, "free_vm_area" },
	{ 0xc5850110, "printk" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0xbb9f1908, "kmem_cache_free" },
	{ 0x9425caca, "_raw_write_lock" },
	{ 0xc0529892, "alloc_vm_area" },
	{ 0xd344d177, "inc_zone_page_state" },
	{ 0xe3d6084a, "__cpuhp_setup_state" },
	{ 0x4ccf485f, "unlock_page" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x2196324, "__aeabi_idiv" },
	{ 0xafd24ed5, "kern_mount" },
	{ 0x997c4347, "unmap_kernel_range" },
	{ 0x4007496c, "kmem_cache_alloc" },
	{ 0xda2a4834, "__free_pages" },
	{ 0xbbfe0efb, "unregister_shrinker" },
	{ 0xcb1aa0b9, "zpool_unregister_driver" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x1000e51, "schedule" },
	{ 0xebaa9dc8, "kmem_cache_alloc_trace" },
	{ 0xdb9ca3c5, "_raw_spin_lock" },
	{ 0x341dbfa3, "__per_cpu_offset" },
	{ 0x4c0e8130, "kmem_cache_create" },
	{ 0x3dcf1ffa, "__wake_up" },
	{ 0x647af474, "prepare_to_wait_event" },
	{ 0x2cfde9a2, "warn_slowpath_fmt" },
	{ 0x70d99e61, "iput" },
	{ 0x37a0cba, "kfree" },
	{ 0x9d669763, "memcpy" },
	{ 0x4f0a58e3, "register_shrinker" },
	{ 0x567539d3, "page_mapping" },
	{ 0x9dc08a71, "pgprot_kernel" },
	{ 0x49970de8, "finish_wait" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0xb2d48a2e, "queue_work_on" },
	{ 0xfb6d6277, "__SetPageMovable" },
	{ 0x49ebacbd, "_clear_bit" },
	{ 0x16c32d4d, "alloc_anon_inode" },
	{ 0xcc286e8e, "__put_page" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "E36D3EF31255309EA00156C");
