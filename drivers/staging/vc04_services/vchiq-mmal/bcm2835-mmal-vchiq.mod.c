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

MODULE_INFO(staging, "Y");

static const struct modversion_info ____versions[]
__used __section(__versions) = {
	{ 0xe9942317, "module_layout" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xf4610713, "kmalloc_caches" },
	{ 0xd6ee688f, "vmalloc" },
	{ 0x347e59c9, "vchi_initialise" },
	{ 0xdaf25f60, "vchi_service_open" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0x45a172d0, "vchi_queue_kernel_message" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0xbbb12b82, "vchi_msg_hold" },
	{ 0x999e8297, "vfree" },
	{ 0xdd4ffa9b, "mutex_trylock" },
	{ 0x4390690, "vchi_service_use" },
	{ 0x5bbe49f4, "__init_waitqueue_head" },
	{ 0x5f754e5a, "memset" },
	{ 0x2878e15a, "idr_destroy" },
	{ 0x39a12ca7, "_raw_spin_unlock_irqrestore" },
	{ 0x3375510b, "mutex_lock_interruptible" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0x36331e4f, "vchi_held_msg_release" },
	{ 0xf6f96fcd, "vc_sm_cma_import_dmabuf" },
	{ 0x3ec8e32, "vchi_connect" },
	{ 0x328a05f1, "strncpy" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x692a4f08, "idr_alloc" },
	{ 0x42160169, "flush_workqueue" },
	{ 0x4784c007, "vchi_service_close" },
	{ 0xa346975c, "idr_remove" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x77f6f183, "kmalloc_order_trace" },
	{ 0x6ae198f8, "vchi_service_release" },
	{ 0xebaa9dc8, "kmem_cache_alloc_trace" },
	{ 0x5f849a69, "_raw_spin_lock_irqsave" },
	{ 0x53b52981, "vc_sm_cma_free" },
	{ 0x37a0cba, "kfree" },
	{ 0x9d669763, "memcpy" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xb2d48a2e, "queue_work_on" },
	{ 0xe6c12171, "complete" },
	{ 0x8561e970, "vchi_bulk_queue_receive" },
	{ 0xd83dc5e6, "wait_for_completion_timeout" },
	{ 0x47925794, "idr_find" },
	{ 0x6fa2a386, "vc_sm_cma_int_handle" },
	{ 0xdf9208c0, "alloc_workqueue" },
};

MODULE_INFO(depends, "vc-sm-cma");


MODULE_INFO(srcversion, "886F2261ECF1BB9AE5BDDB0");
