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
	{ 0xdc3a766a, "mtd_device_unregister" },
	{ 0x5f754e5a, "memset" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0x58b779a7, "__lock_page" },
	{ 0xc6ae5d43, "balance_dirty_pages_ratelimited" },
	{ 0x4ccf485f, "unlock_page" },
	{ 0xb1b2427c, "set_page_dirty" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x71c90087, "memcmp" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xc5850110, "printk" },
	{ 0x62c7456, "mtd_device_parse_register" },
	{ 0xfb384d37, "kasprintf" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0x476259d1, "blkdev_get_by_path" },
	{ 0xebaa9dc8, "kmem_cache_alloc_trace" },
	{ 0xf4610713, "kmalloc_caches" },
	{ 0x20000329, "simple_strtoul" },
	{ 0x97255bdf, "strlen" },
	{ 0x85df9b6c, "strsep" },
	{ 0x9f984513, "strrchr" },
	{ 0xe914e41e, "strcpy" },
	{ 0xd9ce8f0c, "strnlen" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xff178f6, "__aeabi_idivmod" },
	{ 0x6e71cf35, "blkdev_put" },
	{ 0x43b2460b, "invalidate_mapping_pages" },
	{ 0x37a0cba, "kfree" },
	{ 0x3253fbae, "sync_blockdev" },
	{ 0xcc286e8e, "__put_page" },
	{ 0x9d669763, "memcpy" },
	{ 0x41d47f75, "read_cache_page" },
	{ 0x987c11c7, "__pv_phys_pfn_offset" },
	{ 0x76d11765, "mem_map" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

MODULE_INFO(depends, "mtd");


MODULE_INFO(srcversion, "F0B51A54D1D7B693CFC72AB");
