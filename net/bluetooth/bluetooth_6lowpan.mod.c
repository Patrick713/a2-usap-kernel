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
	{ 0x2d3385d3, "system_wq" },
	{ 0xf4610713, "kmalloc_caches" },
	{ 0xf02bc41d, "l2cap_chan_set_defaults" },
	{ 0xcd34ce55, "single_open" },
	{ 0x19f462ab, "kfree_call_rcu" },
	{ 0xf7c048ae, "single_release" },
	{ 0x567b37e4, "l2cap_chan_del" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0xa0337a7f, "no_llseek" },
	{ 0x36f6c5e6, "skb_clone" },
	{ 0xb23c7123, "skb_copy" },
	{ 0x9d27e582, "lowpan_header_compress" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xc8275115, "seq_printf" },
	{ 0xd2da1048, "register_netdevice_notifier" },
	{ 0x2e748cd9, "l2cap_chan_send" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xae353d77, "arm_copy_from_user" },
	{ 0x29d9f26e, "cancel_delayed_work_sync" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0x76dbda3b, "neigh_destroy" },
	{ 0x57e433f7, "l2cap_add_psm" },
	{ 0x7c20652d, "debugfs_create_file" },
	{ 0xdc0adda3, "seq_read" },
	{ 0xe2b5e146, "refcount_inc_not_zero_checked" },
	{ 0x9d0d6206, "unregister_netdevice_notifier" },
	{ 0x7b8c32f1, "bt_err" },
	{ 0x8be0b82c, "l2cap_chan_close" },
	{ 0x718b8b7, "bt_info" },
	{ 0x736fa2c9, "hci_get_route" },
	{ 0x5f754e5a, "memset" },
	{ 0x80df3806, "netif_rx_ni" },
	{ 0x296640a2, "l2cap_chan_put" },
	{ 0x7d6174de, "netif_tx_wake_queue" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0x71c90087, "memcmp" },
	{ 0x7b5ce5c3, "baswap" },
	{ 0xbadd1a4b, "free_netdev" },
	{ 0x87d81478, "iov_iter_kvec" },
	{ 0x47915c30, "debugfs_remove" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0x89ea10c3, "dev_close" },
	{ 0x814fb952, "nd_tbl" },
	{ 0xc1e58a5f, "refcount_dec_and_test_checked" },
	{ 0xc884c9b8, "simple_attr_release" },
	{ 0xe858c4f0, "debugfs_create_file_unsafe" },
	{ 0x28f7fb79, "skb_pull" },
	{ 0x4e9b0753, "debugfs_attr_read" },
	{ 0xa356e88f, "dev_open" },
	{ 0x6addd259, "lowpan_header_decompress" },
	{ 0x12b548f6, "module_put" },
	{ 0x8a4d2069, "skb_copy_expand" },
	{ 0x316e632, "lowpan_unregister_netdev" },
	{ 0xc8e41f95, "bt_debugfs" },
	{ 0x22bf2ba1, "__alloc_skb" },
	{ 0xcf86cdac, "queue_delayed_work_on" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xd28c75bb, "kfree_skb" },
	{ 0x5c5b2589, "alloc_netdev_mqs" },
	{ 0x66a98bf5, "l2cap_chan_connect" },
	{ 0x7644cb98, "netdev_notify_peers" },
	{ 0x96df170b, "lowpan_register_netdev" },
	{ 0xebaa9dc8, "kmem_cache_alloc_trace" },
	{ 0xdb9ca3c5, "_raw_spin_lock" },
	{ 0x67615863, "l2cap_chan_create" },
	{ 0x31b9195c, "__local_bh_disable_ip" },
	{ 0x167c65ac, "seq_lseek" },
	{ 0x37a0cba, "kfree" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0xb2d48a2e, "queue_work_on" },
	{ 0xa46a0f7a, "consume_skb" },
	{ 0x915ae83f, "debugfs_attr_write" },
	{ 0xc1a56bd4, "simple_attr_open" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0x717bcdac, "try_module_get" },
};

MODULE_INFO(depends, "bluetooth,6lowpan,ipv6");


MODULE_INFO(srcversion, "C995DA43B75642E26767F9A");
