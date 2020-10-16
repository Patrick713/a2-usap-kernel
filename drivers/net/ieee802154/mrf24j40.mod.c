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
	{ 0x5d2f2b13, "spi_sync" },
	{ 0x96dff7bc, "regmap_write_async" },
	{ 0xef8739a5, "ieee802154_xmit_complete" },
	{ 0x4b964793, "ieee802154_rx_irqsafe" },
	{ 0xeab3fd69, "skb_put" },
	{ 0x718ae3f2, "__netdev_alloc_skb" },
	{ 0x9d669763, "memcpy" },
	{ 0x178a76d6, "ieee802154_register_hw" },
	{ 0xab26b88f, "devm_request_threaded_irq" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0x14c0904a, "irq_get_irq_data" },
	{ 0x5192d47f, "spi_get_device_id" },
	{ 0xf65110e8, "_dev_warn" },
	{ 0x92952c56, "__devm_regmap_init" },
	{ 0x7fa795f, "_dev_err" },
	{ 0x14cfded6, "__devm_regmap_init_spi" },
	{ 0x5f754e5a, "memset" },
	{ 0x3615d176, "ieee802154_alloc_hw" },
	{ 0x3eabc38c, "_dev_info" },
	{ 0xc5850110, "printk" },
	{ 0x2cfde9a2, "warn_slowpath_fmt" },
	{ 0x8e865d3c, "arm_delay_ops" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xc73c0dfd, "regmap_write" },
	{ 0xe4f477be, "regmap_update_bits_base" },
	{ 0x367f91d1, "spi_write_then_read" },
	{ 0xfcec0987, "enable_irq" },
	{ 0xce2d8184, "spi_async" },
	{ 0x27bbf221, "disable_irq_nosync" },
	{ 0x44301a25, "ieee802154_free_hw" },
	{ 0xc7565c1a, "ieee802154_unregister_hw" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

MODULE_INFO(depends, "mac802154,regmap-spi");

MODULE_ALIAS("spi:mrf24j40");
MODULE_ALIAS("spi:mrf24j40ma");
MODULE_ALIAS("spi:mrf24j40mc");
MODULE_ALIAS("of:N*T*Cmicrochip,mrf24j40");
MODULE_ALIAS("of:N*T*Cmicrochip,mrf24j40C*");
MODULE_ALIAS("of:N*T*Cmicrochip,mrf24j40ma");
MODULE_ALIAS("of:N*T*Cmicrochip,mrf24j40maC*");
MODULE_ALIAS("of:N*T*Cmicrochip,mrf24j40mc");
MODULE_ALIAS("of:N*T*Cmicrochip,mrf24j40mcC*");

MODULE_INFO(srcversion, "DE44C16F09D270DAFE0BB65");
