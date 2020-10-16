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
	{ 0xf4610713, "kmalloc_caches" },
	{ 0xf246c744, "trace_handle_return" },
	{ 0x4de17ab3, "usb_state_string" },
	{ 0x76d11765, "mem_map" },
	{ 0x6cd901c4, "arm_dma_ops" },
	{ 0x1bdb8ad6, "kobject_uevent" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0xe78a8482, "trace_event_buffer_reserve" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x195ae37b, "bpf_trace_run3" },
	{ 0x2d39b0a7, "kstrdup" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xe3c7c8d7, "trace_define_field" },
	{ 0x5f754e5a, "memset" },
	{ 0x77ae495d, "usb_speed_string" },
	{ 0xc1c73f49, "device_del" },
	{ 0xc5850110, "printk" },
	{ 0x921b07b1, "__cpu_online_mask" },
	{ 0x17961cdc, "trace_event_reg" },
	{ 0xc2bb1e6d, "dma_direct_map_page" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0x1b018b60, "device_add" },
	{ 0x7fa795f, "_dev_err" },
	{ 0xbb55582d, "perf_trace_run_bpf_submit" },
	{ 0xaaecf75d, "perf_trace_buf_alloc" },
	{ 0xe523ad75, "synchronize_irq" },
	{ 0x47ae0e60, "trace_event_ignore_this_pid" },
	{ 0xebcc8bdd, "put_device" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x8a7d1c31, "high_memory" },
	{ 0xf218ef74, "sysfs_notify" },
	{ 0x4446417b, "trace_event_buffer_commit" },
	{ 0xebaa9dc8, "kmem_cache_alloc_trace" },
	{ 0x405aa597, "event_triggers_call" },
	{ 0x6a4010ed, "bpf_trace_run2" },
	{ 0x2cfde9a2, "warn_slowpath_fmt" },
	{ 0x37a0cba, "kfree" },
	{ 0x311cd0dd, "dma_direct_map_sg" },
	{ 0x9dc921, "trace_event_raw_init" },
	{ 0x9dc3b2ba, "device_initialize" },
	{ 0x314b20c8, "scnprintf" },
	{ 0x254652b1, "class_destroy" },
	{ 0x9d6eee2e, "device_unregister" },
	{ 0x222e7ce2, "sysfs_streq" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xca0ad6f1, "trace_raw_output_prep" },
	{ 0xb2d48a2e, "queue_work_on" },
	{ 0xc358aaf8, "snprintf" },
	{ 0xb19e8429, "trace_seq_printf" },
	{ 0xe54dbfa5, "dev_set_name" },
	{ 0xe6d85203, "__class_create" },
	{ 0x719e0e44, "add_uevent_var" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "2B89CB2C652BAEC5CF8896F");
