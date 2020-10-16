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
	{ 0x1912be44, "clk_hw_register_clkdev" },
	{ 0xd307edaa, "snd_soc_dapm_get_enum_double" },
	{ 0x4c1b7922, "snd_soc_dapm_get_volsw" },
	{ 0xead5c8e5, "clk_bulk_prepare" },
	{ 0x7238966a, "regulator_disable" },
	{ 0xe4f477be, "regmap_update_bits_base" },
	{ 0x4decaf39, "gpio_to_desc" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0x63150e06, "clk_get_parent" },
	{ 0x610c2dfe, "snd_soc_component_update_bits" },
	{ 0xc882c206, "snd_soc_put_volsw" },
	{ 0xae2c61e9, "regmap_read" },
	{ 0xf74e67c8, "snd_soc_get_volsw" },
	{ 0x968948a6, "of_clk_get_parent_name" },
	{ 0x9d85156b, "snd_soc_info_enum_double" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0x5f754e5a, "memset" },
	{ 0xeb8e03e1, "devm_clk_register" },
	{ 0xc5850110, "printk" },
	{ 0xa6eb2cd, "snd_soc_add_component_controls" },
	{ 0xe57981e0, "dev_get_regmap" },
	{ 0x99e04d95, "snd_soc_dapm_put_volsw" },
	{ 0x8e865d3c, "arm_delay_ops" },
	{ 0x7fa795f, "_dev_err" },
	{ 0x5a1d4aee, "snd_ctl_boolean_mono_info" },
	{ 0x5cdc4c99, "devm_gpio_request_one" },
	{ 0x2196324, "__aeabi_idiv" },
	{ 0x59e5070d, "__do_div64" },
	{ 0xee44765a, "snd_soc_info_volsw" },
	{ 0xc7a7e770, "clk_bulk_enable" },
	{ 0x43f81957, "clk_round_rate" },
	{ 0x7d14541a, "snd_soc_get_enum_double" },
	{ 0xc3251622, "devm_regulator_get" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x2396c7f0, "clk_set_parent" },
	{ 0x38698ad3, "devm_clk_bulk_get" },
	{ 0x88c82718, "devm_snd_soc_register_component" },
	{ 0x5bdcebf5, "of_get_named_gpio_flags" },
	{ 0x2c4bfd80, "snd_soc_component_write" },
	{ 0xd089e9e7, "devm_regulator_get_optional" },
	{ 0xd77f2380, "devm_clk_get" },
	{ 0x76d9b876, "clk_set_rate" },
	{ 0xfd9dc82b, "snd_soc_put_enum_double" },
	{ 0x63c08029, "clk_bulk_unprepare" },
	{ 0xfdc61102, "gpiod_set_raw_value" },
	{ 0x479f7d4b, "clk_bulk_disable" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x6fe5cae9, "of_property_match_string" },
	{ 0x8131f7e2, "snd_soc_component_read32" },
	{ 0xfc60f402, "of_property_read_variable_u32_array" },
	{ 0xe544be36, "devm_kmalloc" },
	{ 0xc73c0dfd, "regmap_write" },
	{ 0x67b83f59, "regulator_enable" },
	{ 0x5a4cb65c, "snd_soc_dapm_put_enum_double" },
};

MODULE_INFO(depends, "snd-pcm,snd-soc-core,snd");


MODULE_INFO(srcversion, "F3254F2A2C2A903DD1FAE0F");
