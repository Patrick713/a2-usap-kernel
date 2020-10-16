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
	{ 0x90412f5e, "pinconf_generic_dt_free_map" },
	{ 0x88161187, "i2c_del_driver" },
	{ 0x85c6e59a, "driver_unregister" },
	{ 0xbdae2e40, "i2c_register_driver" },
	{ 0x31655912, "__spi_register_driver" },
	{ 0x6ff4c298, "device_property_read_u32_array" },
	{ 0x5192d47f, "spi_get_device_id" },
	{ 0x3884d478, "of_match_device" },
	{ 0xe544be36, "devm_kmalloc" },
	{ 0x22912baa, "gpiochip_set_nested_irqchip" },
	{ 0xe6fb66a8, "gpiochip_irqchip_add_key" },
	{ 0xf67e5e33, "handle_simple_irq" },
	{ 0x7fa795f, "_dev_err" },
	{ 0xab26b88f, "devm_request_threaded_irq" },
	{ 0x92952c56, "__devm_regmap_init" },
	{ 0xb6ec1fc4, "devm_kmemdup" },
	{ 0x3c1339c4, "devm_pinctrl_register" },
	{ 0x738f3a77, "devm_kasprintf" },
	{ 0xc73c0dfd, "regmap_write" },
	{ 0x8630a932, "device_property_present" },
	{ 0x1498b8fe, "devm_gpiochip_add_data" },
	{ 0xac511bf1, "__devm_regmap_init_i2c" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0x549525ef, "handle_nested_irq" },
	{ 0xfb575a91, "irq_find_mapping" },
	{ 0xae2c61e9, "regmap_read" },
	{ 0x5d2f2b13, "spi_sync" },
	{ 0x5f754e5a, "memset" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x367f91d1, "spi_write_then_read" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xc0809313, "pinconf_generic_dt_node_to_map" },
	{ 0xed402797, "pinctrl_dev_get_drvdata" },
	{ 0xe4f477be, "regmap_update_bits_base" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0xdd296c3, "regcache_sync" },
	{ 0x60c79f45, "regcache_cache_only" },
	{ 0x52afd98, "gpiochip_get_data" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

MODULE_INFO(depends, "regmap-i2c");

MODULE_ALIAS("spi:mcp23s08");
MODULE_ALIAS("spi:mcp23s17");
MODULE_ALIAS("spi:mcp23s18");
MODULE_ALIAS("i2c:mcp23008");
MODULE_ALIAS("i2c:mcp23017");
MODULE_ALIAS("i2c:mcp23018");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp23008");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp23008C*");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp23017");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp23017C*");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp23018");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp23018C*");
MODULE_ALIAS("of:N*T*Cmcp,mcp23008");
MODULE_ALIAS("of:N*T*Cmcp,mcp23008C*");
MODULE_ALIAS("of:N*T*Cmcp,mcp23017");
MODULE_ALIAS("of:N*T*Cmcp,mcp23017C*");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp23s08");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp23s08C*");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp23s17");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp23s17C*");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp23s18");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp23s18C*");
MODULE_ALIAS("of:N*T*Cmcp,mcp23s08");
MODULE_ALIAS("of:N*T*Cmcp,mcp23s08C*");
MODULE_ALIAS("of:N*T*Cmcp,mcp23s17");
MODULE_ALIAS("of:N*T*Cmcp,mcp23s17C*");

MODULE_INFO(srcversion, "6013D4807DB9323BCB01C43");
