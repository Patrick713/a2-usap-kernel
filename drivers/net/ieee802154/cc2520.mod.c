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
	{ 0x178a76d6, "ieee802154_register_hw" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0x3615d176, "ieee802154_alloc_hw" },
	{ 0xab26b88f, "devm_request_threaded_irq" },
	{ 0x3518599c, "gpiod_to_irq" },
	{ 0x8e865d3c, "arm_delay_ops" },
	{ 0x12a38747, "usleep_range" },
	{ 0xfdc61102, "gpiod_set_raw_value" },
	{ 0x5cdc4c99, "devm_gpio_request_one" },
	{ 0x5bbe49f4, "__init_waitqueue_head" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0xe544be36, "devm_kmalloc" },
	{ 0x7fa795f, "_dev_err" },
	{ 0xa8ec7d34, "crc_ccitt" },
	{ 0x1caf4c2b, "wait_for_completion_interruptible" },
	{ 0x2cfde9a2, "warn_slowpath_fmt" },
	{ 0x3c7ad7ac, "of_find_property" },
	{ 0x5bdcebf5, "of_get_named_gpio_flags" },
	{ 0xd28c75bb, "kfree_skb" },
	{ 0x4b964793, "ieee802154_rx_irqsafe" },
	{ 0xeab3fd69, "skb_put" },
	{ 0x718ae3f2, "__netdev_alloc_skb" },
	{ 0x5a5b9ee7, "gpiod_get_raw_value" },
	{ 0x4decaf39, "gpio_to_desc" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0x5d2f2b13, "spi_sync" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0x5f754e5a, "memset" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xb2d48a2e, "queue_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xe6c12171, "complete" },
	{ 0x39a12ca7, "_raw_spin_unlock_irqrestore" },
	{ 0x5f849a69, "_raw_spin_lock_irqsave" },
	{ 0x44301a25, "ieee802154_free_hw" },
	{ 0xc7565c1a, "ieee802154_unregister_hw" },
	{ 0x92b57248, "flush_work" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

MODULE_INFO(depends, "mac802154,crc-ccitt");

MODULE_ALIAS("of:N*T*Cti,cc2520");
MODULE_ALIAS("of:N*T*Cti,cc2520C*");
MODULE_ALIAS("spi:cc2520");

MODULE_INFO(srcversion, "996D351B72539ABC0ACB024");
