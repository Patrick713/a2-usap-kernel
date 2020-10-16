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
	{ 0x85c6e59a, "driver_unregister" },
	{ 0x31655912, "__spi_register_driver" },
	{ 0x3eabc38c, "_dev_info" },
	{ 0x178a76d6, "ieee802154_register_hw" },
	{ 0xab26b88f, "devm_request_threaded_irq" },
	{ 0x7987328e, "gpiod_set_raw_value_cansleep" },
	{ 0x5cdc4c99, "devm_gpio_request_one" },
	{ 0x14c0904a, "irq_get_irq_data" },
	{ 0x5bbe49f4, "__init_waitqueue_head" },
	{ 0x14cfded6, "__devm_regmap_init_spi" },
	{ 0x3615d176, "ieee802154_alloc_hw" },
	{ 0xb5cc6b7d, "of_property_read_variable_u8_array" },
	{ 0x5bdcebf5, "of_get_named_gpio_flags" },
	{ 0xc73c0dfd, "regmap_write" },
	{ 0xae2c61e9, "regmap_read" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0x3ce4ca6f, "disable_irq" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x44301a25, "ieee802154_free_hw" },
	{ 0xc7565c1a, "ieee802154_unregister_hw" },
	{ 0xe4f477be, "regmap_update_bits_base" },
	{ 0xfdc61102, "gpiod_set_raw_value" },
	{ 0x4decaf39, "gpio_to_desc" },
	{ 0xf65110e8, "_dev_warn" },
	{ 0xebaa9dc8, "kmem_cache_alloc_trace" },
	{ 0xf4610713, "kmalloc_caches" },
	{ 0x27bbf221, "disable_irq_nosync" },
	{ 0x18ddfa86, "hrtimer_init" },
	{ 0x5f754e5a, "memset" },
	{ 0xe6c12171, "complete" },
	{ 0xd83dc5e6, "wait_for_completion_timeout" },
	{ 0x2cfde9a2, "warn_slowpath_fmt" },
	{ 0x9efa5494, "ieee802154_wake_queue" },
	{ 0xe6d81d31, "hrtimer_start_range_ns" },
	{ 0x8e865d3c, "arm_delay_ops" },
	{ 0xef8739a5, "ieee802154_xmit_complete" },
	{ 0x4b964793, "ieee802154_rx_irqsafe" },
	{ 0x9d669763, "memcpy" },
	{ 0xeab3fd69, "skb_put" },
	{ 0x718ae3f2, "__netdev_alloc_skb" },
	{ 0x37a0cba, "kfree" },
	{ 0xfcec0987, "enable_irq" },
	{ 0x7fa795f, "_dev_err" },
	{ 0xce2d8184, "spi_async" },
	{ 0x526c3a6c, "jiffies" },
	{ 0x12a38747, "usleep_range" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

MODULE_INFO(depends, "mac802154,regmap-spi");

MODULE_ALIAS("spi:at86rf230");
MODULE_ALIAS("spi:at86rf231");
MODULE_ALIAS("spi:at86rf233");
MODULE_ALIAS("spi:at86rf212");
MODULE_ALIAS("of:N*T*Catmel,at86rf230");
MODULE_ALIAS("of:N*T*Catmel,at86rf230C*");
MODULE_ALIAS("of:N*T*Catmel,at86rf231");
MODULE_ALIAS("of:N*T*Catmel,at86rf231C*");
MODULE_ALIAS("of:N*T*Catmel,at86rf233");
MODULE_ALIAS("of:N*T*Catmel,at86rf233C*");
MODULE_ALIAS("of:N*T*Catmel,at86rf212");
MODULE_ALIAS("of:N*T*Catmel,at86rf212C*");

MODULE_INFO(srcversion, "F7E407A23EA079EB04CB647");
