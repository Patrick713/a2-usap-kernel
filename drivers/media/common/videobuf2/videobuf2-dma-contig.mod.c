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
	{ 0x52e96379, "vb2_destroy_framevec" },
	{ 0x98bc35f4, "dma_get_sgtable_attrs" },
	{ 0x6cd901c4, "arm_dma_ops" },
	{ 0x20fcb408, "dma_mmap_attrs" },
	{ 0x9c103fa6, "dma_buf_detach" },
	{ 0x9f5dcdf6, "set_page_dirty_lock" },
	{ 0xfffa3100, "sg_next" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0x13adb655, "dma_free_attrs" },
	{ 0x51e77c97, "pfn_valid" },
	{ 0xdc4d0092, "vb2_create_framevec" },
	{ 0xad2b1b10, "dma_buf_vunmap" },
	{ 0xc5850110, "printk" },
	{ 0xd494a4b6, "dma_alloc_attrs" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0xc1e58a5f, "refcount_dec_and_test_checked" },
	{ 0xe4e393c, "dma_buf_unmap_attachment" },
	{ 0x7fa795f, "_dev_err" },
	{ 0xa5afb676, "sg_alloc_table" },
	{ 0x637d9053, "dma_direct_map_resource" },
	{ 0xe32f648e, "dma_buf_map_attachment" },
	{ 0xbaa75f62, "dma_buf_export" },
	{ 0xebcc8bdd, "put_device" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xfcdc14d6, "frame_vector_to_pfns" },
	{ 0xebaa9dc8, "kmem_cache_alloc_trace" },
	{ 0x369c8d09, "dma_buf_attach" },
	{ 0xde147102, "get_device" },
	{ 0x2cfde9a2, "warn_slowpath_fmt" },
	{ 0x37a0cba, "kfree" },
	{ 0x311cd0dd, "dma_direct_map_sg" },
	{ 0x2e7b70c5, "vb2_common_vm_ops" },
	{ 0x5d50e22e, "sg_alloc_table_from_pages" },
	{ 0xba5f3cda, "sg_free_table" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x1ee8d6d4, "refcount_inc_checked" },
	{ 0xd6ba0f23, "dma_buf_vmap" },
};

MODULE_INFO(depends, "videobuf2-memops");


MODULE_INFO(srcversion, "B3043D3E0EA139C8096318D");
