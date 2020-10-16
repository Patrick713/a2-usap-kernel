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
	{ 0xb077e70a, "clk_unprepare" },
	{ 0xbc853146, "of_property_read_string_helper" },
	{ 0x815588a6, "clk_enable" },
	{ 0x80c8b458, "snd_soc_of_parse_card_name" },
	{ 0x9769abc6, "snd_soc_of_parse_audio_simple_widgets" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0xbf39c53e, "snd_soc_dapm_info_pin_switch" },
	{ 0x996fdb84, "snd_soc_dapm_put_pin_switch" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0x556e4390, "clk_get_rate" },
	{ 0x738f3a77, "devm_kasprintf" },
	{ 0x3c7ad7ac, "of_find_property" },
	{ 0x7fa795f, "_dev_err" },
	{ 0x16b55b81, "devm_get_clk_from_child" },
	{ 0x11fcd1d, "snd_soc_dapm_get_pin_switch" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0x5bdcebf5, "of_get_named_gpio_flags" },
	{ 0xe4336f81, "snd_soc_dai_set_sysclk" },
	{ 0xcfa757a, "devm_kvasprintf" },
	{ 0x76d9b876, "clk_set_rate" },
	{ 0xcaf7c9df, "snd_soc_of_parse_audio_routing" },
	{ 0xbd975226, "snd_soc_card_jack_new" },
	{ 0x43da6488, "snd_soc_jack_add_gpios" },
	{ 0xa45f464b, "snd_soc_of_parse_daifmt" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x4692d427, "snd_soc_dai_set_tdm_slot" },
	{ 0xc358aaf8, "snprintf" },
	{ 0xfc60f402, "of_property_read_variable_u32_array" },
	{ 0xfeb02014, "of_node_put" },
	{ 0xe544be36, "devm_kmalloc" },
};

MODULE_INFO(depends, "snd-soc-core");


MODULE_INFO(srcversion, "90C80A11B9E0DEA3BF3C689");
