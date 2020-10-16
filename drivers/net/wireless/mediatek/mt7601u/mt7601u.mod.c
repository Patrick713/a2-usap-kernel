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
	{ 0xf79f5696, "ieee80211_rx_napi" },
	{ 0xf4610713, "kmalloc_caches" },
	{ 0xf9a482f9, "msleep" },
	{ 0xf246c744, "trace_handle_return" },
	{ 0x14d1b7f5, "generic_file_llseek" },
	{ 0x93b18eee, "debugfs_create_dir" },
	{ 0x76d11765, "mem_map" },
	{ 0xcd34ce55, "single_open" },
	{ 0xa47a878, "debugfs_create_u8" },
	{ 0xf3829d39, "firmware_request_cache" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0xf7c048ae, "single_release" },
	{ 0x5d7776e5, "seq_puts" },
	{ 0x2b5ab97d, "_raw_spin_lock_bh" },
	{ 0x7ef39823, "ieee80211_hdrlen" },
	{ 0xf7802486, "__aeabi_uidivmod" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x2a3aa678, "_test_and_clear_bit" },
	{ 0xc8275115, "seq_printf" },
	{ 0xf88db2a2, "usb_kill_urb" },
	{ 0xb1b939e, "kmemdup" },
	{ 0xbcf1cc92, "ieee80211_unregister_hw" },
	{ 0x987c11c7, "__pv_phys_pfn_offset" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x29d9f26e, "cancel_delayed_work_sync" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0xe78a8482, "trace_event_buffer_reserve" },
	{ 0x7c20652d, "debugfs_create_file" },
	{ 0xdc0adda3, "seq_read" },
	{ 0x195ae37b, "bpf_trace_run3" },
	{ 0x40fd1bb5, "__alloc_pages_nodemask" },
	{ 0x65465214, "skb_trim" },
	{ 0x1c1e3962, "ieee80211_stop_queues" },
	{ 0x47e15834, "simple_attr_read" },
	{ 0x2dd698d1, "ieee80211_stop_queue" },
	{ 0x19ec7568, "ieee80211_tx_status" },
	{ 0x5bbe49f4, "__init_waitqueue_head" },
	{ 0x243ce92a, "debugfs_create_u32" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0xe3c7c8d7, "trace_define_field" },
	{ 0xf65110e8, "_dev_warn" },
	{ 0x5f754e5a, "memset" },
	{ 0x7361f530, "bpf_trace_run9" },
	{ 0x39a12ca7, "_raw_spin_unlock_irqrestore" },
	{ 0x183c8383, "usb_deregister" },
	{ 0x3be001a3, "ieee80211_alloc_hw_nm" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0x94783ed, "ieee80211_free_txskb" },
	{ 0x921b07b1, "__cpu_online_mask" },
	{ 0x76806234, "ieee80211_wake_queues" },
	{ 0xfaef0ed, "__tasklet_schedule" },
	{ 0x17961cdc, "trace_event_reg" },
	{ 0x1a8f01de, "usb_poison_urb" },
	{ 0x17a7462, "seq_putc" },
	{ 0x78c6bf66, "usb_control_msg" },
	{ 0x73e20c1c, "strlcpy" },
	{ 0xf68b0045, "skb_push" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x9545af6d, "tasklet_init" },
	{ 0xc884c9b8, "simple_attr_release" },
	{ 0x8e865d3c, "arm_delay_ops" },
	{ 0x28f7fb79, "skb_pull" },
	{ 0xf412120a, "usb_free_coherent" },
	{ 0x7fa795f, "_dev_err" },
	{ 0xbb55582d, "perf_trace_run_bpf_submit" },
	{ 0xaaecf75d, "perf_trace_buf_alloc" },
	{ 0xb6ec1fc4, "devm_kmemdup" },
	{ 0x9ccebac0, "ieee80211_queue_delayed_work" },
	{ 0x82072614, "tasklet_kill" },
	{ 0x94b008be, "ieee80211_stop_tx_ba_cb_irqsafe" },
	{ 0x3eabc38c, "_dev_info" },
	{ 0x305d8a65, "usb_submit_urb" },
	{ 0xda2a4834, "__free_pages" },
	{ 0x22bf2ba1, "__alloc_skb" },
	{ 0xd6cf68f9, "usb_get_dev" },
	{ 0x12a38747, "usleep_range" },
	{ 0x47ae0e60, "trace_event_ignore_this_pid" },
	{ 0x8f3625fe, "_raw_spin_unlock_bh" },
	{ 0xcf86cdac, "queue_delayed_work_on" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xaebeda32, "usb_reset_device" },
	{ 0xf9a45858, "usb_bulk_msg" },
	{ 0x822bd109, "usb_put_dev" },
	{ 0xee43fd9b, "___ratelimit" },
	{ 0x4170152f, "ieee80211_send_bar" },
	{ 0xd46b54dd, "flush_delayed_work" },
	{ 0x39a96b12, "ieee80211_get_tx_rates" },
	{ 0x4446417b, "trace_event_buffer_commit" },
	{ 0xa748a031, "pskb_expand_head" },
	{ 0xebaa9dc8, "kmem_cache_alloc_trace" },
	{ 0xdb9ca3c5, "_raw_spin_lock" },
	{ 0x5f849a69, "_raw_spin_lock_irqsave" },
	{ 0xee163cce, "ieee80211_wake_queue" },
	{ 0x405aa597, "event_triggers_call" },
	{ 0x7cdfd095, "ieee80211_get_hdrlen_from_skb" },
	{ 0x6a4010ed, "bpf_trace_run2" },
	{ 0xf99129b1, "ieee80211_register_hw" },
	{ 0x2cfde9a2, "warn_slowpath_fmt" },
	{ 0x167c65ac, "seq_lseek" },
	{ 0x37a0cba, "kfree" },
	{ 0x9d669763, "memcpy" },
	{ 0x9dc921, "trace_event_raw_init" },
	{ 0x67a1e521, "ieee80211_tx_status_ext" },
	{ 0xf8f7439d, "skb_add_rx_frag" },
	{ 0x7a8b7baa, "usb_register_driver" },
	{ 0x836b5cfc, "request_firmware" },
	{ 0x4675a0da, "ieee80211_free_hw" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xca0ad6f1, "trace_raw_output_prep" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0xe6c12171, "complete" },
	{ 0xca54fee, "_test_and_set_bit" },
	{ 0xb19e8429, "trace_seq_printf" },
	{ 0x99bb8806, "memmove" },
	{ 0xa46a0f7a, "consume_skb" },
	{ 0xc28c6b00, "usb_alloc_coherent" },
	{ 0x49ebacbd, "_clear_bit" },
	{ 0xeab3fd69, "skb_put" },
	{ 0xe544be36, "devm_kmalloc" },
	{ 0xd83dc5e6, "wait_for_completion_timeout" },
	{ 0xdc28f1bc, "bpf_trace_run4" },
	{ 0x184a7893, "usb_free_urb" },
	{ 0xdf9208c0, "alloc_workqueue" },
	{ 0xc1a56bd4, "simple_attr_open" },
	{ 0x8b6486ce, "release_firmware" },
	{ 0x58858b29, "ieee80211_start_tx_ba_cb_irqsafe" },
	{ 0x9e81a568, "simple_attr_write" },
	{ 0xe7e1525d, "__skb_pad" },
	{ 0x9f49ab55, "usb_alloc_urb" },
};

MODULE_INFO(depends, "mac80211,cfg80211");

MODULE_ALIAS("usb:v0B05p17D3d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0E8Dp760Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0E8Dp760Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13D3p3431d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13D3p3434d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v148Fp7601d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v148Fp760Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v148Fp760Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v148Fp760Cd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v148Fp760Dd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2001p3D04d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2717p4106d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2955p0001d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2955p1001d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2A5Fp1000d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v7392p7710d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "B80002A5E3CF7791618E797");
