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
	{ 0x9a152689, "param_ops_int" },
	{ 0x12bc1f9d, "eth_validate_addr" },
	{ 0x85c6e59a, "driver_unregister" },
	{ 0x31655912, "__spi_register_driver" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0x7fa795f, "_dev_err" },
	{ 0xcc7044cf, "register_netdev" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x7f3fc1ee, "device_get_mac_address" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0x4c03b680, "alloc_etherdev_mqs" },
	{ 0x89ea10c3, "dev_close" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0x49ebacbd, "_clear_bit" },
	{ 0x8e865d3c, "arm_delay_ops" },
	{ 0x80df3806, "netif_rx_ni" },
	{ 0xc4e588b, "eth_type_trans" },
	{ 0xeab3fd69, "skb_put" },
	{ 0x718ae3f2, "__netdev_alloc_skb" },
	{ 0x80e77898, "netdev_printk" },
	{ 0xa513fc17, "netif_carrier_on" },
	{ 0xa35dc8c8, "netif_carrier_off" },
	{ 0x7d6174de, "netif_tx_wake_queue" },
	{ 0xa46a0f7a, "consume_skb" },
	{ 0x3eabc38c, "_dev_info" },
	{ 0x526c3a6c, "jiffies" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0x367f91d1, "spi_write_then_read" },
	{ 0x4059792f, "print_hex_dump" },
	{ 0xc5850110, "printk" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x9d669763, "memcpy" },
	{ 0x5d2f2b13, "spi_sync" },
	{ 0x5f754e5a, "memset" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x56a78f1, "dev_printk" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0x6339eaf6, "netdev_info" },
	{ 0xb2d48a2e, "queue_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x2404021a, "netdev_err" },
	{ 0x73e20c1c, "strlcpy" },
	{ 0x9c64d457, "netdev_warn" },
	{ 0xbadd1a4b, "free_netdev" },
	{ 0xc1514a3b, "free_irq" },
	{ 0xdea8fa68, "unregister_netdev" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Cmicrochip,enc28j60");
MODULE_ALIAS("of:N*T*Cmicrochip,enc28j60C*");

MODULE_INFO(srcversion, "AA36A830038CB4188292244");
