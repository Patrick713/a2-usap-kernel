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
	{ 0x689f370d, "frame_vector_to_pages" },
	{ 0xf4610713, "kmalloc_caches" },
	{ 0x3fd2571, "vm_unmap_ram" },
	{ 0x52e96379, "vb2_destroy_framevec" },
	{ 0xfd936c62, "remap_vmalloc_range" },
	{ 0x6cd901c4, "arm_dma_ops" },
	{ 0x9f5dcdf6, "set_page_dirty_lock" },
	{ 0xfffa3100, "sg_next" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0x999e8297, "vfree" },
	{ 0xdc4d0092, "vb2_create_framevec" },
	{ 0xad2b1b10, "dma_buf_vunmap" },
	{ 0xc5850110, "printk" },
	{ 0xe97c4103, "ioremap" },
	{ 0xbb4c10a5, "vm_map_ram" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0xc1e58a5f, "refcount_dec_and_test_checked" },
	{ 0xa5afb676, "sg_alloc_table" },
	{ 0xbaa75f62, "dma_buf_export" },
	{ 0x5635a60a, "vmalloc_user" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xfcdc14d6, "frame_vector_to_pfns" },
	{ 0xebaa9dc8, "kmem_cache_alloc_trace" },
	{ 0x2cfde9a2, "warn_slowpath_fmt" },
	{ 0x37a0cba, "kfree" },
	{ 0x311cd0dd, "dma_direct_map_sg" },
	{ 0x2e7b70c5, "vb2_common_vm_ops" },
	{ 0xedc03953, "iounmap" },
	{ 0x9dc08a71, "pgprot_kernel" },
	{ 0xba5f3cda, "sg_free_table" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x12c76c9d, "vmalloc_to_page" },
	{ 0x1ee8d6d4, "refcount_inc_checked" },
	{ 0xd6ba0f23, "dma_buf_vmap" },
};

MODULE_INFO(depends, "videobuf2-memops");


MODULE_INFO(srcversion, "75C95A336DFB79A2BF51856");
