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
	{ 0xe56a9336, "snd_pcm_format_width" },
	{ 0x14cfded6, "__devm_regmap_init_spi" },
	{ 0x88161187, "i2c_del_driver" },
	{ 0x31655912, "__spi_register_driver" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0x610c2dfe, "snd_soc_component_update_bits" },
	{ 0xc882c206, "snd_soc_put_volsw" },
	{ 0xf74e67c8, "snd_soc_get_volsw" },
	{ 0xbce60500, "devm_regulator_bulk_get" },
	{ 0xa6102ad2, "regulator_bulk_enable" },
	{ 0xdbe521ac, "snd_pcm_hw_constraint_list" },
	{ 0xc5850110, "printk" },
	{ 0xa6eb2cd, "snd_soc_add_component_controls" },
	{ 0x85c6e59a, "driver_unregister" },
	{ 0x7fa795f, "_dev_err" },
	{ 0xee44765a, "snd_soc_info_volsw" },
	{ 0xbdae2e40, "i2c_register_driver" },
	{ 0x8ede545e, "regulator_bulk_disable" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xac511bf1, "__devm_regmap_init_i2c" },
	{ 0x88c82718, "devm_snd_soc_register_component" },
	{ 0x2c4bfd80, "snd_soc_component_write" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xfc60f402, "of_property_read_variable_u32_array" },
	{ 0xe544be36, "devm_kmalloc" },
	{ 0xdd296c3, "regcache_sync" },
};

MODULE_INFO(depends, "snd-pcm,regmap-spi,snd-soc-core,regmap-i2c");

MODULE_ALIAS("of:N*T*Cwlf,wm8741");
MODULE_ALIAS("of:N*T*Cwlf,wm8741C*");
MODULE_ALIAS("i2c:wm8741");

MODULE_INFO(srcversion, "A0464E3FBC808DC2F048971");
