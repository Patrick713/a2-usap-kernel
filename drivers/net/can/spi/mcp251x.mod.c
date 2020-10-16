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
	{ 0xdd22f791, "can_change_mtu" },
	{ 0x85c6e59a, "driver_unregister" },
	{ 0x31655912, "__spi_register_driver" },
	{ 0xdf9208c0, "alloc_workqueue" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0xc7f78938, "dev_fwnode" },
	{ 0x1a3873bf, "open_candev" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x2332e7a4, "close_candev" },
	{  0xc4730, "unregister_candev" },
	{ 0x6339eaf6, "netdev_info" },
	{ 0x5192d47f, "spi_get_device_id" },
	{ 0x21335c8b, "free_candev" },
	{ 0xb077e70a, "clk_unprepare" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0x7238966a, "regulator_disable" },
	{ 0x9d8f5b37, "register_candev" },
	{ 0xe544be36, "devm_kmalloc" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0x67b83f59, "regulator_enable" },
	{ 0xd089e9e7, "devm_regulator_get_optional" },
	{ 0x6663995b, "spi_setup" },
	{ 0x815588a6, "clk_enable" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0x68a5ed96, "alloc_candev_mqs" },
	{ 0x556e4390, "clk_get_rate" },
	{ 0x63421a81, "devm_clk_get_optional" },
	{ 0x59c7dbe, "device_get_match_data" },
	{ 0x78540a54, "can_get_echo_skb" },
	{ 0xcb8add4c, "can_bus_off" },
	{ 0xfcc28883, "can_put_echo_skb" },
	{ 0x72be7bfc, "netif_device_attach" },
	{ 0x7d6174de, "netif_tx_wake_queue" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0x12a38747, "usleep_range" },
	{ 0x8e865d3c, "arm_delay_ops" },
	{ 0xf65110e8, "_dev_warn" },
	{ 0xd28c75bb, "kfree_skb" },
	{ 0x2cfde9a2, "warn_slowpath_fmt" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0x1000e51, "schedule" },
	{ 0x526c3a6c, "jiffies" },
	{ 0x9d669763, "memcpy" },
	{ 0x20144272, "alloc_can_skb" },
	{ 0x2404021a, "netdev_err" },
	{ 0x80df3806, "netif_rx_ni" },
	{ 0xf315399a, "alloc_can_err_skb" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x7fa795f, "_dev_err" },
	{ 0x5d2f2b13, "spi_sync" },
	{ 0x5f754e5a, "memset" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xb2d48a2e, "queue_work_on" },
	{ 0x88467cf2, "can_free_echo_skb" },
	{ 0xa46a0f7a, "consume_skb" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

MODULE_INFO(depends, "can-dev");

MODULE_ALIAS("spi:mcp2510");
MODULE_ALIAS("spi:mcp2515");
MODULE_ALIAS("spi:mcp25625");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp2510");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp2510C*");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp2515");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp2515C*");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp25625");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp25625C*");

MODULE_INFO(srcversion, "E1984423394CD655CE63C8A");
