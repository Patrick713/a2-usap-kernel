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
	{ 0x92952c56, "__devm_regmap_init" },
	{ 0xe56a9336, "snd_pcm_format_width" },
	{ 0xf9a482f9, "msleep" },
	{ 0x88161187, "i2c_del_driver" },
	{ 0xe4f477be, "regmap_update_bits_base" },
	{ 0xde45aa0d, "i2c_transfer" },
	{ 0x4decaf39, "gpio_to_desc" },
	{ 0xa900f720, "devm_sigmadsp_init_i2c" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0xc882c206, "snd_soc_put_volsw" },
	{ 0xae2c61e9, "regmap_read" },
	{ 0xf74e67c8, "snd_soc_get_volsw" },
	{ 0x572114a5, "sigmadsp_attach" },
	{ 0xbce60500, "devm_regulator_bulk_get" },
	{ 0xa6102ad2, "regulator_bulk_enable" },
	{ 0xb5cc6b7d, "of_property_read_variable_u8_array" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0xf65110e8, "_dev_warn" },
	{ 0x7d76748f, "sigmadsp_reset" },
	{ 0xef1705e5, "sigmadsp_setup" },
	{ 0x8e865d3c, "arm_delay_ops" },
	{ 0x7fa795f, "_dev_err" },
	{ 0x5cdc4c99, "devm_gpio_request_one" },
	{ 0xee44765a, "snd_soc_info_volsw" },
	{ 0xbdae2e40, "i2c_register_driver" },
	{ 0x2aa1ebe1, "sigmadsp_restrict_params" },
	{ 0x8ede545e, "regulator_bulk_disable" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x88c82718, "devm_snd_soc_register_component" },
	{ 0x5bdcebf5, "of_get_named_gpio_flags" },
	{ 0xcb203516, "i2c_transfer_buffer_flags" },
	{ 0xe9fbf51f, "regcache_mark_dirty" },
	{ 0x7987328e, "gpiod_set_raw_value_cansleep" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xfc60f402, "of_property_read_variable_u32_array" },
	{ 0xe544be36, "devm_kmalloc" },
	{ 0xc73c0dfd, "regmap_write" },
	{ 0xdd296c3, "regcache_sync" },
};

MODULE_INFO(depends, "snd-pcm,snd-soc-sigmadsp-i2c,snd-soc-core,snd-soc-sigmadsp");

MODULE_ALIAS("of:N*T*Cadi,adau1701");
MODULE_ALIAS("of:N*T*Cadi,adau1701C*");
MODULE_ALIAS("i2c:adau1401");
MODULE_ALIAS("i2c:adau1401a");
MODULE_ALIAS("i2c:adau1701");
MODULE_ALIAS("i2c:adau1702");

MODULE_INFO(srcversion, "3F11D5CB14F116478350F1E");
