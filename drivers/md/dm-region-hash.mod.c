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
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

static const struct modversion_info ____versions[]
__used __section(__versions) = {
	{ 0xe9942317, "module_layout" },
	{ 0xcb8c753b, "mempool_exit" },
	{ 0xf4610713, "kmalloc_caches" },
	{ 0xd6ee688f, "vmalloc" },
	{ 0x3b697738, "_raw_read_lock" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0x999e8297, "vfree" },
	{ 0xd697e69a, "trace_hardirqs_on" },
	{ 0x39a12ca7, "_raw_spin_unlock_irqrestore" },
	{ 0xb4471bfe, "down_trylock" },
	{ 0xc5850110, "printk" },
	{ 0xf0ef52e8, "down" },
	{ 0xd8410611, "mempool_alloc" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x2da81bff, "_raw_spin_lock_irq" },
	{ 0x6a037cf1, "mempool_kfree" },
	{ 0x4d634803, "_raw_write_lock_irq" },
	{ 0xebaa9dc8, "kmem_cache_alloc_trace" },
	{ 0x794765d1, "mempool_free" },
	{ 0xdb9ca3c5, "_raw_spin_lock" },
	{ 0x5f849a69, "_raw_spin_lock_irqsave" },
	{ 0xd35a6d31, "mempool_kmalloc" },
	{ 0x37a0cba, "kfree" },
	{ 0xc4657dc8, "mempool_init" },
	{ 0x581cde4e, "up" },
	{ 0x86969747, "dm_dirty_log_destroy" },
	{ 0x8f678b07, "__stack_chk_guard" },
};

MODULE_INFO(depends, "dm-log");


MODULE_INFO(srcversion, "5E6AAE733220534E7B42928");
