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
	{ 0x6bc3fbc0, "__unregister_chrdev" },
	{ 0x4199fd5c, "skb_queue_head" },
	{ 0xa24f23d8, "__request_module" },
	{ 0xf4610713, "kmalloc_caches" },
	{ 0xff178f6, "__aeabi_idivmod" },
	{ 0xda6c2db5, "register_pernet_device" },
	{ 0xa7b3181c, "up_read" },
	{ 0x2b929620, "bpf_prog_create" },
	{ 0x983ac031, "remove_wait_queue" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0x2b5ab97d, "_raw_spin_lock_bh" },
	{ 0x215a8ec8, "slhc_init" },
	{ 0xda800db5, "device_destroy" },
	{ 0x353e3fa5, "__get_user_4" },
	{ 0xf102033e, "slhc_remember" },
	{ 0xc21bb13c, "__register_chrdev" },
	{ 0x8746bf73, "bpf_prog_destroy" },
	{ 0x50c89f23, "__alloc_percpu" },
	{ 0x85fbc931, "slhc_uncompress" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0xfe41fb0b, "param_ops_bool" },
	{ 0xae353d77, "arm_copy_from_user" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0xc47638c, "__put_net" },
	{ 0x5f38429a, "skb_scrub_packet" },
	{ 0x526c3a6c, "jiffies" },
	{ 0xc9ec4e21, "free_percpu" },
	{ 0x51a910c0, "arm_copy_to_user" },
	{ 0xdd4ffa9b, "mutex_trylock" },
	{ 0x65465214, "skb_trim" },
	{ 0xfb1d7438, "down_read" },
	{ 0xcf3fac84, "cpumask_next" },
	{ 0x718ae3f2, "__netdev_alloc_skb" },
	{ 0x927d2b0f, "netif_rx" },
	{ 0x3bdc1db7, "__pskb_pull_tail" },
	{ 0x5bbe49f4, "__init_waitqueue_head" },
	{ 0xaad8c7d6, "default_wake_function" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0x2d9ecd4c, "skb_queue_purge" },
	{ 0x5f754e5a, "memset" },
	{ 0x1e96f43d, "__cpu_possible_mask" },
	{ 0x9fdecc31, "unregister_netdevice_many" },
	{ 0x2878e15a, "idr_destroy" },
	{ 0x7d6174de, "netif_tx_wake_queue" },
	{ 0x7d80fa7, "skb_copy_datagram_iter" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0xfcf7a3d, "unregister_pernet_device" },
	{ 0x4025fd3f, "ns_capable" },
	{ 0xbadd1a4b, "free_netdev" },
	{ 0xf68b0045, "skb_push" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0x80e77898, "netdev_printk" },
	{ 0x36ac7fd0, "noop_llseek" },
	{ 0x13e86e9b, "device_create" },
	{ 0xc1e58a5f, "refcount_dec_and_test_checked" },
	{ 0x692a4f08, "idr_alloc" },
	{ 0x28f7fb79, "skb_pull" },
	{ 0x7e0ce0c3, "up_write" },
	{ 0x4253aa7e, "down_write" },
	{ 0xa92173df, "fput" },
	{ 0x9cd4091f, "rtnl_link_unregister" },
	{ 0xe5bc9a53, "slhc_free" },
	{ 0xef2f70b5, "bpf_stats_enabled_key" },
	{ 0x2196324, "__aeabi_idiv" },
	{ 0xa346975c, "idr_remove" },
	{ 0x12b548f6, "module_put" },
	{ 0xac6659eb, "skb_queue_tail" },
	{ 0x65d411e9, "idr_get_next" },
	{ 0xbc10dd97, "__put_user_4" },
	{ 0x22bf2ba1, "__alloc_skb" },
	{ 0x8f3625fe, "_raw_spin_unlock_bh" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x1000e51, "schedule" },
	{ 0xd28c75bb, "kfree_skb" },
	{ 0x5c5b2589, "alloc_netdev_mqs" },
	{ 0xd653b126, "sched_clock" },
	{ 0xa748a031, "pskb_expand_head" },
	{ 0x2404021a, "netdev_err" },
	{ 0xebaa9dc8, "kmem_cache_alloc_trace" },
	{ 0xdb9ca3c5, "_raw_spin_lock" },
	{ 0x341dbfa3, "__per_cpu_offset" },
	{ 0x1555017a, "skb_pull_rcsum" },
	{ 0x4d0ad59d, "unregister_netdevice_queue" },
	{ 0x3dcf1ffa, "__wake_up" },
	{ 0x51e04b80, "iov_iter_init" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0x1738c19e, "_raw_write_unlock_bh" },
	{ 0x31b9195c, "__local_bh_disable_ip" },
	{ 0x2cfde9a2, "warn_slowpath_fmt" },
	{ 0xa17bd3fc, "add_wait_queue" },
	{ 0x77f6c690, "_raw_read_lock_bh" },
	{ 0x9acb8066, "_raw_read_unlock_bh" },
	{ 0x37a0cba, "kfree" },
	{ 0x9d669763, "memcpy" },
	{ 0xb9797b7f, "fget" },
	{ 0xbc20d5eb, "rtnl_link_register" },
	{ 0x6c8f2de, "slhc_compress" },
	{ 0x254652b1, "class_destroy" },
	{ 0xefb7bccf, "_raw_write_lock_bh" },
	{ 0x4ac49f05, "skb_dequeue" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xe2e8065e, "memdup_user" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0xc358aaf8, "snprintf" },
	{ 0xa46a0f7a, "consume_skb" },
	{ 0x1ee8d6d4, "refcount_inc_checked" },
	{ 0xeab3fd69, "skb_put" },
	{ 0x47925794, "idr_find" },
	{ 0x9b73dda5, "skb_copy_bits" },
	{ 0xe6d85203, "__class_create" },
	{ 0x6405dcd3, "slhc_toss" },
	{ 0x6f013ecd, "__init_rwsem" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0x717bcdac, "try_module_get" },
};

MODULE_INFO(depends, "slhc");


MODULE_INFO(srcversion, "8E3408428004B5160FD7F88");
