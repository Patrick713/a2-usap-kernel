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
	{ 0x6339eaf6, "netdev_info" },
	{ 0xf4610713, "kmalloc_caches" },
	{ 0xf9a482f9, "msleep" },
	{ 0x93b18eee, "debugfs_create_dir" },
	{ 0xcd34ce55, "single_open" },
	{ 0x9a152689, "param_ops_int" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0xf7c048ae, "single_release" },
	{ 0x5d7776e5, "seq_puts" },
	{ 0xa513fc17, "netif_carrier_on" },
	{ 0xc8275115, "seq_printf" },
	{ 0xa35dc8c8, "netif_carrier_off" },
	{ 0x31655912, "__spi_register_driver" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0x7c20652d, "debugfs_create_file" },
	{ 0x6663995b, "spi_setup" },
	{ 0x2b6ddf3f, "qcafrm_fsm_decode" },
	{ 0x35edc130, "debugfs_remove_recursive" },
	{ 0xdc0adda3, "seq_read" },
	{ 0xdd34010a, "kthread_create_on_node" },
	{ 0x526c3a6c, "jiffies" },
	{ 0x718ae3f2, "__netdev_alloc_skb" },
	{ 0x89940b91, "netif_schedule_queue" },
	{ 0x5f754e5a, "memset" },
	{ 0xb28a9ad, "qcafrm_create_footer" },
	{ 0x80df3806, "netif_rx_ni" },
	{ 0x7d6174de, "netif_tx_wake_queue" },
	{ 0x6d0a78c4, "ethtool_op_get_link" },
	{ 0x7bfbe88e, "kthread_stop" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0x3c7ad7ac, "of_find_property" },
	{ 0xbadd1a4b, "free_netdev" },
	{ 0x85c6e59a, "driver_unregister" },
	{ 0xcc7044cf, "register_netdev" },
	{ 0x73e20c1c, "strlcpy" },
	{ 0xf68b0045, "skb_push" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x7fa795f, "_dev_err" },
	{ 0x5d2f2b13, "spi_sync" },
	{ 0x41da0375, "qcafrm_create_header" },
	{ 0x8a4d2069, "skb_copy_expand" },
	{ 0x5417c3c7, "of_get_mac_address" },
	{ 0x3eabc38c, "_dev_info" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x1000e51, "schedule" },
	{ 0xc4e588b, "eth_type_trans" },
	{ 0xb35d51ab, "wake_up_process" },
	{ 0x2404021a, "netdev_err" },
	{ 0xebaa9dc8, "kmem_cache_alloc_trace" },
	{ 0xdb9ca3c5, "_raw_spin_lock" },
	{ 0xb3f7646e, "kthread_should_stop" },
	{ 0x9c64d457, "netdev_warn" },
	{ 0x31b9195c, "__local_bh_disable_ip" },
	{ 0x12bc1f9d, "eth_validate_addr" },
	{ 0x2cfde9a2, "warn_slowpath_fmt" },
	{ 0x167c65ac, "seq_lseek" },
	{ 0x37a0cba, "kfree" },
	{ 0x9d669763, "memcpy" },
	{ 0x3fa2524a, "dev_trans_start" },
	{ 0xdea8fa68, "unregister_netdev" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0xa46a0f7a, "consume_skb" },
	{ 0x49ebacbd, "_clear_bit" },
	{ 0xeab3fd69, "skb_put" },
	{ 0xd52a670d, "eth_mac_addr" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x4c03b680, "alloc_etherdev_mqs" },
};

MODULE_INFO(depends, "qca_7k_common");

MODULE_ALIAS("spi:qca7000");
MODULE_ALIAS("of:N*T*Cqca,qca7000");
MODULE_ALIAS("of:N*T*Cqca,qca7000C*");

MODULE_INFO(srcversion, "BBC84F612A6E9FBE92AB855");
