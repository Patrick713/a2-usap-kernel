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
	{ 0xf2dec546, "devm_snd_soc_register_card" },
	{ 0xbec6d8a3, "of_device_get_match_data" },
	{ 0xdaeb7afb, "asoc_simple_parse_pin_switches" },
	{ 0x889e7573, "of_parse_phandle" },
	{ 0x9e95836d, "snd_soc_pm_ops" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0x1e8eeac8, "asoc_simple_parse_widgets" },
	{ 0x36286276, "asoc_simple_startup" },
	{ 0x610b1492, "__platform_driver_register" },
	{ 0x5e5b2115, "asoc_simple_canonicalize_cpu" },
	{ 0x4b54038, "asoc_simple_init_priv" },
	{ 0x9b5d7f24, "asoc_simple_be_hw_params_fixup" },
	{ 0x3c304c19, "snd_soc_of_get_dai_name" },
	{ 0x64d6d8a3, "of_device_is_available" },
	{ 0x3c7ad7ac, "of_find_property" },
	{ 0x2b943403, "asoc_simple_parse_daifmt" },
	{ 0xb67c4ce8, "asoc_simple_parse_routing" },
	{ 0x7fa795f, "_dev_err" },
	{ 0xdeac2123, "asoc_simple_canonicalize_platform" },
	{ 0x26b8796a, "of_get_child_by_name" },
	{ 0xb6dfb864, "asoc_simple_parse_card_name" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xd3039845, "of_get_next_child" },
	{ 0x99d84401, "asoc_simple_init_jack" },
	{ 0xc4d287fa, "snd_soc_of_parse_node_prefix" },
	{ 0xa03262b2, "asoc_simple_dai_init" },
	{ 0xcaabcedb, "of_node_get" },
	{ 0xd9093861, "of_get_parent" },
	{ 0x277f3e3b, "asoc_simple_shutdown" },
	{ 0x4432a2cc, "of_parse_phandle_with_args" },
	{ 0xbb3121bd, "asoc_simple_clean_reference" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xc358aaf8, "snprintf" },
	{ 0xb48afa56, "asoc_simple_set_dailink_name" },
	{ 0x8ad83553, "platform_driver_unregister" },
	{ 0xc8ac0255, "asoc_simple_hw_params" },
	{ 0xfc60f402, "of_property_read_variable_u32_array" },
	{ 0xfeb02014, "of_node_put" },
	{ 0xe544be36, "devm_kmalloc" },
	{ 0x3137e0ee, "asoc_simple_parse_clk" },
	{ 0x13cf2d46, "snd_soc_of_parse_tdm_slot" },
	{ 0x4cebc3e7, "asoc_simple_parse_convert" },
};

MODULE_INFO(depends, "snd-soc-core,snd-soc-simple-card-utils");

MODULE_ALIAS("of:N*T*Csimple-audio-card");
MODULE_ALIAS("of:N*T*Csimple-audio-cardC*");
MODULE_ALIAS("of:N*T*Csimple-scu-audio-card");
MODULE_ALIAS("of:N*T*Csimple-scu-audio-cardC*");

MODULE_INFO(srcversion, "4C7B33D27BA17EE899DFB41");
