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

MODULE_INFO(staging, "Y");

static const struct modversion_info ____versions[]
__used __section(__versions) = {
	{ 0xe9942317, "module_layout" },
	{ 0x32c3ca87, "v7_dma_flush_range" },
	{ 0x56253a11, "v7_dma_inv_range" },
	{ 0xf4610713, "kmalloc_caches" },
	{ 0x2d6fcc06, "__kmalloc" },
	{ 0xa7ab0408, "v7_dma_clean_range" },
	{ 0x93b18eee, "debugfs_create_dir" },
	{ 0xcd34ce55, "single_open" },
	{ 0x97255bdf, "strlen" },
	{ 0x98bc35f4, "dma_get_sgtable_attrs" },
	{ 0x6cd901c4, "arm_dma_ops" },
	{ 0xf7c048ae, "single_release" },
	{ 0x20fcb408, "dma_mmap_attrs" },
	{ 0x5d7776e5, "seq_puts" },
	{ 0x347e59c9, "vchi_initialise" },
	{ 0x9c103fa6, "dma_buf_detach" },
	{ 0xdaf25f60, "vchi_service_open" },
	{ 0xca5a7528, "down_interruptible" },
	{ 0xc8275115, "seq_printf" },
	{ 0xfffa3100, "sg_next" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0x45a172d0, "vchi_queue_kernel_message" },
	{ 0xae353d77, "arm_copy_from_user" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0x13adb655, "dma_free_attrs" },
	{ 0x7c20652d, "debugfs_create_file" },
	{ 0x35edc130, "debugfs_remove_recursive" },
	{ 0xdc0adda3, "seq_read" },
	{ 0xdd34010a, "kthread_create_on_node" },
	{ 0x610b1492, "__platform_driver_register" },
	{ 0x51a910c0, "arm_copy_to_user" },
	{ 0x4390690, "vchi_service_use" },
	{ 0x6216493d, "vchi_msg_peek" },
	{ 0x5bbe49f4, "__init_waitqueue_head" },
	{ 0xa07281f, "misc_register" },
	{ 0x5f754e5a, "memset" },
	{ 0x2878e15a, "idr_destroy" },
	{ 0xfc90ea41, "vchi_msg_remove" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0xb36adab4, "dma_buf_fd" },
	{ 0x1caf4c2b, "wait_for_completion_interruptible" },
	{ 0xe693b64, "dma_buf_put" },
	{ 0x3ec8e32, "vchi_connect" },
	{ 0xc51e9eec, "dma_buf_get" },
	{ 0xd494a4b6, "dma_alloc_attrs" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0x692a4f08, "idr_alloc" },
	{ 0xe4e393c, "dma_buf_unmap_attachment" },
	{ 0xa22e9df3, "vchiq_add_connected_callback" },
	{ 0x4784c007, "vchi_service_close" },
	{ 0xa346975c, "idr_remove" },
	{ 0xa5afb676, "sg_alloc_table" },
	{ 0xe32f648e, "dma_buf_map_attachment" },
	{ 0xbaa75f62, "dma_buf_export" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x6ae198f8, "vchi_service_release" },
	{ 0xb35d51ab, "wake_up_process" },
	{ 0xebaa9dc8, "kmem_cache_alloc_trace" },
	{ 0xdb9ca3c5, "_raw_spin_lock" },
	{ 0x369c8d09, "dma_buf_attach" },
	{ 0x2cfde9a2, "warn_slowpath_fmt" },
	{ 0x167c65ac, "seq_lseek" },
	{ 0x37a0cba, "kfree" },
	{ 0x311cd0dd, "dma_direct_map_sg" },
	{ 0x9d669763, "memcpy" },
	{ 0x581cde4e, "up" },
	{ 0xea48c6b2, "set_user_nice" },
	{ 0xba5f3cda, "sg_free_table" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xe6c12171, "complete" },
	{ 0xc358aaf8, "snprintf" },
	{ 0x8ad83553, "platform_driver_unregister" },
	{ 0xe544be36, "devm_kmalloc" },
	{ 0x47925794, "idr_find" },
	{ 0x9ec748a7, "misc_deregister" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "7220C562C97D968B3792B3C");
