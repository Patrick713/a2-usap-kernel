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
	{ 0xb077e70a, "clk_unprepare" },
	{ 0x27ebf7d2, "cdev_alloc" },
	{ 0xa24f23d8, "__request_module" },
	{ 0x2690e6c1, "_find_next_zero_bit_le" },
	{ 0xa4ab8272, "cdev_del" },
	{ 0xf4610713, "kmalloc_caches" },
	{ 0x2d6fcc06, "__kmalloc" },
	{ 0xff178f6, "__aeabi_idivmod" },
	{ 0xf246c744, "trace_handle_return" },
	{ 0x815588a6, "clk_enable" },
	{ 0x291ed9a9, "fwnode_graph_get_remote_port_parent" },
	{ 0x7aa1756e, "kvfree" },
	{ 0x97255bdf, "strlen" },
	{ 0x6c4fbb46, "media_device_unregister_entity" },
	{ 0x3fd78f3b, "register_chrdev_region" },
	{ 0x39073ec3, "fwnode_handle_put" },
	{ 0xeabf73e2, "media_devnode_create" },
	{ 0xfe90c4a6, "_find_first_zero_bit_le" },
	{ 0x7281ded9, "media_graph_walk_start" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0xa0337a7f, "no_llseek" },
	{ 0xf7802486, "__aeabi_uidivmod" },
	{ 0x2a3aa678, "_test_and_clear_bit" },
	{ 0xb43f9365, "ktime_get" },
	{ 0x2e1ca751, "clk_put" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0xae353d77, "arm_copy_from_user" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0xe78a8482, "trace_event_buffer_reserve" },
	{ 0x6091b333, "unregister_chrdev_region" },
	{ 0xcd543d04, "i2c_new_probed_device" },
	{ 0xeea0399, "strscpy" },
	{ 0xbe9a4121, "media_get_pad_index" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x22fc4f3a, "trace_print_flags_seq" },
	{ 0x556e4390, "clk_get_rate" },
	{ 0x66decfd5, "ns_to_timespec" },
	{ 0x2d39b0a7, "kstrdup" },
	{ 0x51a910c0, "arm_copy_to_user" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x5bbe49f4, "__init_waitqueue_head" },
	{ 0xa1057e90, "fwnode_handle_get" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0xe3c7c8d7, "trace_define_field" },
	{ 0xf65110e8, "_dev_warn" },
	{ 0x5f754e5a, "memset" },
	{ 0x5c2640cb, "device_register" },
	{ 0x39a12ca7, "_raw_spin_unlock_irqrestore" },
	{ 0x3375510b, "mutex_lock_interruptible" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0x71c90087, "memcmp" },
	{ 0x921b07b1, "__cpu_online_mask" },
	{ 0xf715aa7c, "i2c_verify_client" },
	{ 0xc27c3c2, "media_graph_walk_next" },
	{ 0xe4c122d0, "class_unregister" },
	{ 0x9992c436, "media_request_object_bind" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x17961cdc, "trace_event_reg" },
	{ 0xa891eb3c, "spi_new_device" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0xbbc6cdb0, "media_request_put" },
	{ 0xc1e58a5f, "refcount_dec_and_test_checked" },
	{ 0xe52760d4, "i2c_unregister_device" },
	{ 0x621255c5, "__class_register" },
	{ 0x7fa795f, "_dev_err" },
	{ 0xbb55582d, "perf_trace_run_bpf_submit" },
	{ 0xaaecf75d, "perf_trace_buf_alloc" },
	{ 0x2196324, "__aeabi_idiv" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x59e5070d, "__do_div64" },
	{ 0x570c6c9a, "cdev_add" },
	{ 0x5f95c39, "media_request_get_by_fd" },
	{ 0x4dc17984, "media_device_register_entity" },
	{ 0x8dfefc0d, "kvmalloc_node" },
	{ 0x12b548f6, "module_put" },
	{ 0x7330e7fd, "media_request_object_put" },
	{ 0x43f81957, "clk_round_rate" },
	{ 0x47ae0e60, "trace_event_ignore_this_pid" },
	{ 0xebcc8bdd, "put_device" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xadfdfcef, "__bitmap_andnot" },
	{ 0x1000e51, "schedule" },
	{ 0x4af6ddf0, "kstrtou16" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0x4446417b, "trace_event_buffer_commit" },
	{ 0xa597670a, "media_create_pad_link" },
	{ 0x18082420, "media_create_intf_link" },
	{ 0xebaa9dc8, "kmem_cache_alloc_trace" },
	{ 0xdb9ca3c5, "_raw_spin_lock" },
	{ 0x5f849a69, "_raw_spin_lock_irqsave" },
	{ 0x488838f6, "clk_get" },
	{ 0xde147102, "get_device" },
	{ 0x76d9b876, "clk_set_rate" },
	{ 0x3dcf1ffa, "__wake_up" },
	{ 0x405aa597, "event_triggers_call" },
	{ 0x647af474, "prepare_to_wait_event" },
	{ 0x6a4010ed, "bpf_trace_run2" },
	{ 0x2cfde9a2, "warn_slowpath_fmt" },
	{ 0x37a0cba, "kfree" },
	{ 0x9d669763, "memcpy" },
	{ 0xfd6aee6, "media_request_object_complete" },
	{ 0xe93f6042, "trace_print_symbols_seq" },
	{ 0x9dc921, "trace_event_raw_init" },
	{ 0x988b34c4, "media_request_object_unbind" },
	{ 0xc7f78938, "dev_fwnode" },
	{ 0x49970de8, "finish_wait" },
	{ 0x9d6eee2e, "device_unregister" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x85e3a5d5, "spi_unregister_device" },
	{ 0xca0ad6f1, "trace_raw_output_prep" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0xc358aaf8, "snprintf" },
	{ 0xca54fee, "_test_and_set_bit" },
	{ 0xb19e8429, "trace_seq_printf" },
	{ 0xe54dbfa5, "dev_set_name" },
	{ 0x1ee8d6d4, "refcount_inc_checked" },
	{ 0x49ebacbd, "_clear_bit" },
	{ 0xb1fe189f, "media_request_object_init" },
	{ 0x7e3aa9b7, "i2c_new_device" },
	{ 0xa6c4e23c, "media_request_object_find" },
	{ 0x717bcdac, "try_module_get" },
	{ 0xf463ef51, "media_devnode_remove" },
};

MODULE_INFO(depends, "mc");


MODULE_INFO(srcversion, "F0F94EC96CF47604F6B8E44");
