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
	{ 0xf4610713, "kmalloc_caches" },
	{ 0x2d6fcc06, "__kmalloc" },
	{ 0xf246c744, "trace_handle_return" },
	{ 0x9a152689, "param_ops_int" },
	{ 0x7ab88a45, "system_freezing_cnt" },
	{ 0xb43f9365, "ktime_get" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0xae353d77, "arm_copy_from_user" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0xe78a8482, "trace_event_buffer_reserve" },
	{ 0xdd34010a, "kthread_create_on_node" },
	{ 0x51a910c0, "arm_copy_to_user" },
	{ 0x5bbe49f4, "__init_waitqueue_head" },
	{ 0xe3c7c8d7, "trace_define_field" },
	{ 0x5f754e5a, "memset" },
	{ 0x39a12ca7, "_raw_spin_unlock_irqrestore" },
	{ 0x86dbf1e, "freezing_slow_path" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0x7bfbe88e, "kthread_stop" },
	{ 0x921b07b1, "__cpu_online_mask" },
	{ 0xb36adab4, "dma_buf_fd" },
	{ 0x9992c436, "media_request_object_bind" },
	{ 0xe693b64, "dma_buf_put" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x17961cdc, "trace_event_reg" },
	{ 0xc51e9eec, "dma_buf_get" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0xbbc6cdb0, "media_request_put" },
	{ 0x7ed55382, "v4l_vb2q_enable_media_source" },
	{ 0xbb55582d, "perf_trace_run_bpf_submit" },
	{ 0xaaecf75d, "perf_trace_buf_alloc" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x7330e7fd, "media_request_object_put" },
	{ 0x47ae0e60, "trace_event_ignore_this_pid" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x1000e51, "schedule" },
	{ 0x4482cdb, "__refrigerator" },
	{ 0x4446417b, "trace_event_buffer_commit" },
	{ 0xb35d51ab, "wake_up_process" },
	{ 0xebaa9dc8, "kmem_cache_alloc_trace" },
	{ 0x5f849a69, "_raw_spin_lock_irqsave" },
	{ 0x3dcf1ffa, "__wake_up" },
	{ 0x405aa597, "event_triggers_call" },
	{ 0xb3f7646e, "kthread_should_stop" },
	{ 0x647af474, "prepare_to_wait_event" },
	{ 0x6a4010ed, "bpf_trace_run2" },
	{ 0x2cfde9a2, "warn_slowpath_fmt" },
	{ 0x37a0cba, "kfree" },
	{ 0x9dc921, "trace_event_raw_init" },
	{ 0x9e61bb05, "set_freezable" },
	{ 0x988b34c4, "media_request_object_unbind" },
	{ 0x49970de8, "finish_wait" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xca0ad6f1, "trace_raw_output_prep" },
	{ 0xb19e8429, "trace_seq_printf" },
	{ 0x1ee8d6d4, "refcount_inc_checked" },
	{ 0xb1fe189f, "media_request_object_init" },
};

MODULE_INFO(depends, "mc,videodev");


MODULE_INFO(srcversion, "5E1EFE2B43950F375F3195B");
