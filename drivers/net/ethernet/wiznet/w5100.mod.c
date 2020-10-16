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
	{ 0x6339eaf6, "netdev_info" },
	{ 0xff178f6, "__aeabi_idivmod" },
	{ 0x349cba85, "strchr" },
	{ 0x201aaac7, "napi_disable" },
	{ 0xcb0dc57f, "napi_schedule_prep" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0xa513fc17, "netif_carrier_on" },
	{ 0xf7802486, "__aeabi_uidivmod" },
	{ 0x4decaf39, "gpio_to_desc" },
	{ 0xa35dc8c8, "netif_carrier_off" },
	{ 0x6562d506, "devm_ioremap_resource" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0x610b1492, "__platform_driver_register" },
	{ 0x526c3a6c, "jiffies" },
	{ 0x718ae3f2, "__netdev_alloc_skb" },
	{ 0x80df3806, "netif_rx_ni" },
	{ 0x7d6174de, "netif_tx_wake_queue" },
	{ 0x39a12ca7, "_raw_spin_unlock_irqrestore" },
	{ 0xbadd1a4b, "free_netdev" },
	{ 0xcc7044cf, "register_netdev" },
	{ 0x36fbf3aa, "netif_receive_skb" },
	{ 0x73e20c1c, "strlcpy" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x9ec75761, "platform_get_resource" },
	{ 0xdbdb0e8b, "request_any_context_irq" },
	{ 0x9f00a796, "netif_napi_add" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x8e865d3c, "arm_delay_ops" },
	{ 0x899a31fa, "__napi_schedule" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x837332a0, "napi_complete_done" },
	{ 0xc4e588b, "eth_type_trans" },
	{ 0x5f849a69, "_raw_spin_lock_irqsave" },
	{ 0x12bc1f9d, "eth_validate_addr" },
	{ 0x2cfde9a2, "warn_slowpath_fmt" },
	{ 0x3518599c, "gpiod_to_irq" },
	{ 0xdea8fa68, "unregister_netdev" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0xb2d48a2e, "queue_work_on" },
	{ 0xc358aaf8, "snprintf" },
	{ 0x6c22925c, "platform_get_irq" },
	{ 0xa46a0f7a, "consume_skb" },
	{ 0x5a5b9ee7, "gpiod_get_raw_value" },
	{ 0x8ad83553, "platform_driver_unregister" },
	{ 0x49ebacbd, "_clear_bit" },
	{ 0xeab3fd69, "skb_put" },
	{ 0xe544be36, "devm_kmalloc" },
	{ 0xdf9208c0, "alloc_workqueue" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x4c03b680, "alloc_etherdev_mqs" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "FC34CF1A8A79BA59BDBA729");
