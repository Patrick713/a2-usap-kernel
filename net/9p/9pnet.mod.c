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
	{ 0x7906b13f, "kernel_write" },
	{ 0xf4610713, "kmalloc_caches" },
	{ 0x2d6fcc06, "__kmalloc" },
	{ 0xf246c744, "trace_handle_return" },
	{ 0x97255bdf, "strlen" },
	{ 0x1b6314fd, "in_aton" },
	{ 0x5d7776e5, "seq_puts" },
	{ 0x983ac031, "remove_wait_queue" },
	{ 0xacf4d843, "match_strdup" },
	{ 0x639acd78, "sock_release" },
	{ 0x2a3aa678, "_test_and_clear_bit" },
	{ 0xc8275115, "seq_printf" },
	{ 0x4205ad24, "cancel_work_sync" },
	{ 0x44e9a829, "match_token" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0x37cc1f05, "init_user_ns" },
	{ 0x85df9b6c, "strsep" },
	{ 0xe78a8482, "trace_event_buffer_reserve" },
	{ 0xeea0399, "strscpy" },
	{ 0x195ae37b, "bpf_trace_run3" },
	{ 0xd697e69a, "trace_hardirqs_on" },
	{ 0x2d39b0a7, "kstrdup" },
	{ 0xe2b5e146, "refcount_inc_not_zero_checked" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x2e43d7c1, "make_kgid" },
	{ 0x5bbe49f4, "__init_waitqueue_head" },
	{ 0x68a5ef6, "kernel_read" },
	{ 0xe3c7c8d7, "trace_define_field" },
	{ 0x5f754e5a, "memset" },
	{ 0xac95141e, "from_kuid" },
	{ 0x39a12ca7, "_raw_spin_unlock_irqrestore" },
	{ 0xc5850110, "printk" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0x71c90087, "memcmp" },
	{ 0x921b07b1, "__cpu_online_mask" },
	{ 0x87d81478, "iov_iter_kvec" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x17961cdc, "trace_event_reg" },
	{ 0xe395d3eb, "from_kgid" },
	{ 0x84b183ae, "strncmp" },
	{ 0xbb9f1908, "kmem_cache_free" },
	{ 0x954f099c, "idr_preload" },
	{ 0xc1e58a5f, "refcount_dec_and_test_checked" },
	{ 0xf7c602dd, "kmem_cache_create_usercopy" },
	{ 0x692a4f08, "idr_alloc" },
	{ 0x4e3567f7, "match_int" },
	{ 0xa92173df, "fput" },
	{ 0xbb55582d, "perf_trace_run_bpf_submit" },
	{ 0xaaecf75d, "perf_trace_buf_alloc" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xa346975c, "idr_remove" },
	{ 0x12b548f6, "module_put" },
	{ 0x4007496c, "kmem_cache_alloc" },
	{ 0x65d411e9, "idr_get_next" },
	{ 0xb8886e84, "make_kuid" },
	{ 0x47ae0e60, "trace_event_ignore_this_pid" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x1000e51, "schedule" },
	{ 0xfb6af58d, "recalc_sigpending" },
	{ 0x2da81bff, "_raw_spin_lock_irq" },
	{ 0xe16c6b8b, "_copy_from_iter_full" },
	{ 0x6b2dc060, "dump_stack" },
	{ 0x4446417b, "trace_event_buffer_commit" },
	{ 0xebaa9dc8, "kmem_cache_alloc_trace" },
	{ 0xdb9ca3c5, "_raw_spin_lock" },
	{ 0x5f849a69, "_raw_spin_lock_irqsave" },
	{ 0x61c888d9, "sock_alloc_file" },
	{ 0x4c0e8130, "kmem_cache_create" },
	{ 0x3dcf1ffa, "__wake_up" },
	{ 0x405aa597, "event_triggers_call" },
	{ 0x647af474, "prepare_to_wait_event" },
	{ 0x6a4010ed, "bpf_trace_run2" },
	{ 0x2cfde9a2, "warn_slowpath_fmt" },
	{ 0xa17bd3fc, "add_wait_queue" },
	{ 0x37a0cba, "kfree" },
	{ 0x9d669763, "memcpy" },
	{ 0xe93f6042, "trace_print_symbols_seq" },
	{ 0x9dc921, "trace_event_raw_init" },
	{ 0x5388bfe1, "kernel_bind" },
	{ 0xb9797b7f, "fget" },
	{ 0x6dc4b3cd, "iov_iter_advance" },
	{ 0x49970de8, "finish_wait" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xca0ad6f1, "trace_raw_output_prep" },
	{ 0x3ec40239, "idr_alloc_u32" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0xb2d48a2e, "queue_work_on" },
	{ 0xca54fee, "_test_and_set_bit" },
	{ 0xb19e8429, "trace_seq_printf" },
	{ 0x99bb8806, "memmove" },
	{ 0x1ee8d6d4, "refcount_inc_checked" },
	{ 0x49ebacbd, "_clear_bit" },
	{ 0x47925794, "idr_find" },
	{ 0xdc28f1bc, "bpf_trace_run4" },
	{ 0xbb52456b, "_copy_to_iter" },
	{ 0xcc286e8e, "__put_page" },
	{ 0x717bcdac, "try_module_get" },
	{ 0x629843e8, "__sock_create" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "CF17CD6BEA39B56BF27D424");
