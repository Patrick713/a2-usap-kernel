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
	{ 0xa24f23d8, "__request_module" },
	{ 0xcb8c753b, "mempool_exit" },
	{ 0xf4610713, "kmalloc_caches" },
	{ 0xf9a482f9, "msleep" },
	{ 0x7deff673, "dm_consume_args" },
	{ 0xea408f2, "dm_bio_get_target_bio_nr" },
	{ 0xcd2ba798, "dm_bufio_forget" },
	{ 0xa7b3181c, "up_read" },
	{ 0xd6ee688f, "vmalloc" },
	{ 0xa0fbac79, "wake_up_bit" },
	{ 0x97255bdf, "strlen" },
	{ 0x95c6b89, "dm_get_device" },
	{ 0xab9066f9, "dm_io" },
	{ 0xfc14bb2e, "dm_get_dev_t" },
	{ 0xd991e3b9, "dm_bufio_get_device_size" },
	{ 0xc23e6bdf, "dm_table_get_md" },
	{ 0x983ac031, "remove_wait_queue" },
	{ 0x72f07bf4, "dm_bufio_set_minimum_buffers" },
	{ 0xc66d919f, "dm_table_get_mode" },
	{ 0xf7802486, "__aeabi_uidivmod" },
	{ 0x154c6338, "dm_kcopyd_client_destroy" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0xc79bcd36, "dm_vcalloc" },
	{ 0x999e8297, "vfree" },
	{ 0x6d17d0e8, "dm_register_target" },
	{ 0xbfe6dcb0, "dm_kcopyd_copy" },
	{ 0xd697e69a, "trace_hardirqs_on" },
	{ 0x2d39b0a7, "kstrdup" },
	{ 0xfb1d7438, "down_read" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x9e4faeef, "dm_io_client_destroy" },
	{ 0x77c33894, "dm_put" },
	{ 0xece784c2, "rb_first" },
	{ 0x5bbe49f4, "__init_waitqueue_head" },
	{ 0xaad8c7d6, "default_wake_function" },
	{ 0xc972449f, "mempool_alloc_slab" },
	{ 0xc7d094b5, "dm_read_arg_group" },
	{ 0x9d1b6c7, "dm_internal_suspend_fast" },
	{ 0xad84bef8, "dm_table_event" },
	{ 0x5f754e5a, "memset" },
	{ 0xd823d8c7, "dm_kcopyd_zero" },
	{ 0xf50692a, "dm_set_target_max_io_len" },
	{ 0x11089ac7, "_ctype" },
	{ 0x39a12ca7, "_raw_spin_unlock_irqrestore" },
	{ 0xc5850110, "printk" },
	{ 0x52cb560, "dm_unregister_target" },
	{ 0xaafdc258, "strcasecmp" },
	{ 0xe6024e59, "dm_bufio_release" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x4d9b652b, "rb_erase" },
	{ 0xbd69f6a7, "dm_bufio_client_create" },
	{ 0x5eb24829, "dm_shift_arg" },
	{ 0xbb9f1908, "kmem_cache_free" },
	{ 0x93a6e0b2, "io_schedule" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x42a67241, "dm_suspended" },
	{ 0x62d0e2a6, "__wake_up_locked" },
	{ 0x3e3928a, "generic_make_request" },
	{ 0x8a99a016, "mempool_free_slab" },
	{ 0x7e0ce0c3, "up_write" },
	{ 0x4253aa7e, "down_write" },
	{ 0x42160169, "flush_workqueue" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xe034cf65, "bio_endio" },
	{ 0x59e5070d, "__do_div64" },
	{ 0xeca7949e, "dm_bufio_client_destroy" },
	{ 0x12b548f6, "module_put" },
	{ 0x16e297c3, "bit_wait" },
	{ 0x9f984513, "strrchr" },
	{ 0x40a9b349, "vzalloc" },
	{ 0x4007496c, "kmem_cache_alloc" },
	{ 0xd8410611, "mempool_alloc" },
	{ 0xc047ccf3, "dm_accept_partial_bio" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x1000e51, "schedule" },
	{ 0xd688716b, "dm_kcopyd_client_create" },
	{ 0x2da81bff, "_raw_spin_lock_irq" },
	{ 0xebaa9dc8, "kmem_cache_alloc_trace" },
	{ 0x794765d1, "mempool_free" },
	{ 0xdb9ca3c5, "_raw_spin_lock" },
	{ 0x5f849a69, "_raw_spin_lock_irqsave" },
	{ 0xa5526619, "rb_insert_color" },
	{ 0x4c0e8130, "kmem_cache_create" },
	{ 0x3dcf1ffa, "__wake_up" },
	{ 0x1984d421, "out_of_line_wait_on_bit" },
	{ 0x647af474, "prepare_to_wait_event" },
	{ 0x601f665f, "dm_io_client_create" },
	{ 0x2cfde9a2, "warn_slowpath_fmt" },
	{ 0xb04f56ab, "dm_bufio_read" },
	{ 0x7880c781, "dm_kcopyd_prepare_callback" },
	{ 0x37a0cba, "kfree" },
	{ 0x46310b7c, "dm_hold" },
	{ 0x3b6c41ea, "kstrtouint" },
	{ 0x9d669763, "memcpy" },
	{ 0xc4657dc8, "mempool_init" },
	{ 0x314b20c8, "scnprintf" },
	{ 0x49970de8, "finish_wait" },
	{ 0xc90df7e5, "dm_bufio_prefetch" },
	{ 0x2473f47e, "dm_table_get_size" },
	{ 0xca9360b5, "rb_next" },
	{ 0xc9b8af52, "dm_put_device" },
	{ 0x48a9c5d0, "dm_per_bio_data" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0xb2d48a2e, "queue_work_on" },
	{ 0xc358aaf8, "snprintf" },
	{ 0xca54fee, "_test_and_set_bit" },
	{ 0x4b5fd49e, "dm_kcopyd_do_callback" },
	{ 0x49ebacbd, "_clear_bit" },
	{ 0x8a331d2b, "param_ops_uint" },
	{ 0xdf9208c0, "alloc_workqueue" },
	{ 0x6f013ecd, "__init_rwsem" },
	{ 0x717bcdac, "try_module_get" },
	{ 0x24b22399, "dm_internal_resume_fast" },
	{ 0xb815eeea, "bio_associate_blkg" },
};

MODULE_INFO(depends, "dm-mod,dm-bufio");


MODULE_INFO(srcversion, "D9C9AF795178B12182B9350");
