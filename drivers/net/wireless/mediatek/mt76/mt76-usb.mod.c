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
	{ 0xee4d1bfd, "sg_init_table" },
	{ 0xff178f6, "__aeabi_idivmod" },
	{ 0xda897e27, "skb_to_sgvec" },
	{ 0xf246c744, "trace_handle_return" },
	{ 0xc306c3a8, "page_frag_alloc" },
	{ 0x76d11765, "mem_map" },
	{ 0x8724cab2, "usb_init_urb" },
	{ 0x2b5ab97d, "_raw_spin_lock_bh" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xf88db2a2, "usb_kill_urb" },
	{ 0x987c11c7, "__pv_phys_pfn_offset" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0xfe41fb0b, "param_ops_bool" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x29d9f26e, "cancel_delayed_work_sync" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0xe78a8482, "trace_event_buffer_reserve" },
	{ 0xa0bf207e, "mt76_rx_poll_complete" },
	{ 0xc3091f7a, "__page_frag_cache_drain" },
	{ 0x195ae37b, "bpf_trace_run3" },
	{ 0xe3c7c8d7, "trace_define_field" },
	{ 0x5f754e5a, "memset" },
	{ 0x39a12ca7, "_raw_spin_unlock_irqrestore" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0x921b07b1, "__cpu_online_mask" },
	{ 0xc6634315, "mt76_ac_to_hwq" },
	{ 0xfaef0ed, "__tasklet_schedule" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x444b10df, "usb_unpoison_urb" },
	{ 0x17961cdc, "trace_event_reg" },
	{ 0x1a8f01de, "usb_poison_urb" },
	{ 0x78c6bf66, "usb_control_msg" },
	{ 0x73e20c1c, "strlcpy" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0x9545af6d, "tasklet_init" },
	{ 0x7fa795f, "_dev_err" },
	{ 0xbb55582d, "perf_trace_run_bpf_submit" },
	{ 0xaaecf75d, "perf_trace_buf_alloc" },
	{ 0x9ccebac0, "ieee80211_queue_delayed_work" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x32146ca8, "build_skb" },
	{ 0x82072614, "tasklet_kill" },
	{ 0x305d8a65, "usb_submit_urb" },
	{ 0x22bf2ba1, "__alloc_skb" },
	{ 0x12a38747, "usleep_range" },
	{ 0x47ae0e60, "trace_event_ignore_this_pid" },
	{ 0x8f3625fe, "_raw_spin_unlock_bh" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0xee43fd9b, "___ratelimit" },
	{ 0x88e1d0f0, "page_frag_free" },
	{ 0x25946d87, "mt76_txq_schedule" },
	{ 0x4446417b, "trace_event_buffer_commit" },
	{ 0xb431fb47, "mt76_tx_status_check" },
	{ 0xebaa9dc8, "kmem_cache_alloc_trace" },
	{ 0x5f849a69, "_raw_spin_lock_irqsave" },
	{ 0xee163cce, "ieee80211_wake_queue" },
	{ 0x3dcf1ffa, "__wake_up" },
	{ 0x405aa597, "event_triggers_call" },
	{ 0x647af474, "prepare_to_wait_event" },
	{ 0x6a4010ed, "bpf_trace_run2" },
	{ 0x2cfde9a2, "warn_slowpath_fmt" },
	{ 0x61bbaeca, "mt76_has_tx_pending" },
	{ 0x9d669763, "memcpy" },
	{ 0x9dc921, "trace_event_raw_init" },
	{ 0xf8f7439d, "skb_add_rx_frag" },
	{ 0x49970de8, "finish_wait" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xca0ad6f1, "trace_raw_output_prep" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0xca54fee, "_test_and_set_bit" },
	{ 0xb19e8429, "trace_seq_printf" },
	{ 0x49ebacbd, "_clear_bit" },
	{ 0xeab3fd69, "skb_put" },
	{ 0xe544be36, "devm_kmalloc" },
	{ 0x184a7893, "usb_free_urb" },
};

MODULE_INFO(depends, "mt76,mac80211");


MODULE_INFO(srcversion, "68D84A5FBE63663A7F17527");
