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
	{ 0xf6c8eae0, "register_netdevice" },
	{ 0x609f1c7e, "synchronize_net" },
	{ 0xf4610713, "kmalloc_caches" },
	{ 0x2d6fcc06, "__kmalloc" },
	{ 0xf246c744, "trace_handle_return" },
	{ 0x60a13e90, "rcu_barrier" },
	{ 0x19f462ab, "kfree_call_rcu" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0x1486ed9f, "ieee802154_hdr_push" },
	{ 0x4cf17d9a, "hrtimer_cancel" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0x2b5ab97d, "_raw_spin_lock_bh" },
	{ 0x36f6c5e6, "skb_clone" },
	{ 0xdf4bff19, "wpan_phy_new" },
	{ 0xd2da1048, "register_netdevice_notifier" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0xf9e956fe, "__dev_kfree_skb_any" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0xe78a8482, "trace_event_buffer_reserve" },
	{ 0x28aa6a67, "call_rcu" },
	{ 0x195ae37b, "bpf_trace_run3" },
	{ 0x9d0d6206, "unregister_netdevice_notifier" },
	{ 0x65465214, "skb_trim" },
	{ 0xae497dde, "crypto_alloc_sync_skcipher" },
	{ 0x2b108dec, "ieee802154_hdr_pull" },
	{ 0xe3c7c8d7, "trace_define_field" },
	{ 0xe6d81d31, "hrtimer_start_range_ns" },
	{ 0xf65110e8, "_dev_warn" },
	{ 0x5f754e5a, "memset" },
	{ 0x7d6174de, "netif_tx_wake_queue" },
	{ 0x18323d8c, "bpf_trace_run1" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0x71c90087, "memcmp" },
	{ 0x921b07b1, "__cpu_online_mask" },
	{ 0xbadd1a4b, "free_netdev" },
	{ 0xfaef0ed, "__tasklet_schedule" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x17961cdc, "trace_event_reg" },
	{ 0x36fbf3aa, "netif_receive_skb" },
	{ 0x57709e4d, "wpan_phy_free" },
	{ 0x73e20c1c, "strlcpy" },
	{ 0x536ed03b, "ieee802154_hdr_peek" },
	{ 0xf68b0045, "skb_push" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x9545af6d, "tasklet_init" },
	{ 0x49d89cc7, "crypto_aead_encrypt" },
	{ 0xc1e58a5f, "refcount_dec_and_test_checked" },
	{ 0xb5167410, "wpan_phy_register" },
	{ 0x6091797f, "synchronize_rcu" },
	{ 0xbb55582d, "perf_trace_run_bpf_submit" },
	{ 0xaaecf75d, "perf_trace_buf_alloc" },
	{ 0x42160169, "flush_workqueue" },
	{ 0x8b2bc06d, "crypto_aead_setkey" },
	{ 0x82072614, "tasklet_kill" },
	{ 0xac6659eb, "skb_queue_tail" },
	{ 0x8a4d2069, "skb_copy_expand" },
	{ 0xdfd3ce3b, "crypto_skcipher_decrypt" },
	{ 0x47ae0e60, "trace_event_ignore_this_pid" },
	{ 0x8f3625fe, "_raw_spin_unlock_bh" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xee43fd9b, "___ratelimit" },
	{ 0xd28c75bb, "kfree_skb" },
	{ 0x5c5b2589, "alloc_netdev_mqs" },
	{ 0xae6283c2, "crypto_destroy_tfm" },
	{ 0x4446417b, "trace_event_buffer_commit" },
	{ 0x6c76ac1e, "wpan_phy_unregister" },
	{ 0xf77975a9, "ieee802154_hdr_peek_addrs" },
	{ 0xebaa9dc8, "kmem_cache_alloc_trace" },
	{ 0x4d0ad59d, "unregister_netdevice_queue" },
	{ 0xa8ec7d34, "crc_ccitt" },
	{ 0x405aa597, "event_triggers_call" },
	{ 0x2e859034, "crypto_aead_decrypt" },
	{ 0xe82bfbf1, "crypto_aead_setauthsize" },
	{ 0x9c64d457, "netdev_warn" },
	{ 0x6a4010ed, "bpf_trace_run2" },
	{ 0x1738c19e, "_raw_write_unlock_bh" },
	{ 0x4d4ce517, "crypto_alloc_aead" },
	{ 0x2cfde9a2, "warn_slowpath_fmt" },
	{ 0xa9487fae, "sg_init_one" },
	{ 0x77f6c690, "_raw_read_lock_bh" },
	{ 0x9acb8066, "_raw_read_unlock_bh" },
	{ 0x9d669763, "memcpy" },
	{ 0x9dc921, "trace_event_raw_init" },
	{ 0x6afe5599, "dev_alloc_name" },
	{ 0x18ddfa86, "hrtimer_init" },
	{ 0xefb7bccf, "_raw_write_lock_bh" },
	{ 0x7a4497db, "kzfree" },
	{ 0x4ac49f05, "skb_dequeue" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xca0ad6f1, "trace_raw_output_prep" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0xb2d48a2e, "queue_work_on" },
	{ 0xca54fee, "_test_and_set_bit" },
	{ 0xb19e8429, "trace_seq_printf" },
	{ 0xa46a0f7a, "consume_skb" },
	{ 0x1ee8d6d4, "refcount_inc_checked" },
	{ 0x85670f1d, "rtnl_is_locked" },
	{ 0x49ebacbd, "_clear_bit" },
	{ 0xeab3fd69, "skb_put" },
	{ 0xdc28f1bc, "bpf_trace_run4" },
	{ 0xdf9208c0, "alloc_workqueue" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0x87e2553b, "ieee802154_max_payload" },
	{ 0xa36ae624, "crypto_skcipher_encrypt" },
};

MODULE_INFO(depends, "ieee802154,crc-ccitt");


MODULE_INFO(srcversion, "4BD1E9BDE6F3700747A48B5");
