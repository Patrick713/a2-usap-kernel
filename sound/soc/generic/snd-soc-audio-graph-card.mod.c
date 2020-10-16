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
	{ 0x33091320, "of_phandle_iterator_init" },
	{ 0x9e95836d, "snd_soc_pm_ops" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0x1e8eeac8, "asoc_simple_parse_widgets" },
	{ 0x36286276, "asoc_simple_startup" },
	{ 0x610b1492, "__platform_driver_register" },
	{ 0x28b8fcfb, "of_graph_get_port_parent" },
	{ 0x5e5b2115, "asoc_simple_canonicalize_cpu" },
	{ 0x4b54038, "asoc_simple_init_priv" },
	{ 0x9b5d7f24, "asoc_simple_be_hw_params_fixup" },
	{ 0x4e56a3c2, "of_graph_get_next_endpoint" },
	{ 0x2b943403, "asoc_simple_parse_daifmt" },
	{ 0xb67c4ce8, "asoc_simple_parse_routing" },
	{ 0x7fa795f, "_dev_err" },
	{ 0xdeac2123, "asoc_simple_canonicalize_platform" },
	{ 0x1ec732a7, "of_graph_get_endpoint_count" },
	{ 0xb6dfb864, "asoc_simple_parse_card_name" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xd3039845, "of_get_next_child" },
	{ 0xf7bc2652, "of_get_property" },
	{ 0x99d84401, "asoc_simple_init_jack" },
	{ 0xc4d287fa, "snd_soc_of_parse_node_prefix" },
	{ 0xa03262b2, "asoc_simple_dai_init" },
	{ 0x62182082, "devm_gpiod_get_optional" },
	{ 0x48b1dcb4, "snd_soc_get_dai_id" },
	{ 0x96b835a1, "of_phandle_iterator_next" },
	{ 0xd9093861, "of_get_parent" },
	{ 0xdda229c, "of_graph_parse_endpoint" },
	{ 0x5087de37, "snd_soc_get_dai_name" },
	{ 0x277f3e3b, "asoc_simple_shutdown" },
	{ 0x84b498ef, "gpiod_set_value_cansleep" },
	{ 0xbb3121bd, "asoc_simple_clean_reference" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xb48afa56, "asoc_simple_set_dailink_name" },
	{ 0x8ad83553, "platform_driver_unregister" },
	{ 0xc8ac0255, "asoc_simple_hw_params" },
	{ 0xfc60f402, "of_property_read_variable_u32_array" },
	{ 0xfeb02014, "of_node_put" },
	{ 0xe544be36, "devm_kmalloc" },
	{ 0x3137e0ee, "asoc_simple_parse_clk" },
	{ 0x13cf2d46, "snd_soc_of_parse_tdm_slot" },
	{ 0xd3529764, "of_graph_get_remote_endpoint" },
	{ 0x4cebc3e7, "asoc_simple_parse_convert" },
};

MODULE_INFO(depends, "snd-soc-core,snd-soc-simple-card-utils");

MODULE_ALIAS("of:N*T*Caudio-graph-card");
MODULE_ALIAS("of:N*T*Caudio-graph-cardC*");
MODULE_ALIAS("of:N*T*Caudio-graph-scu-card");
MODULE_ALIAS("of:N*T*Caudio-graph-scu-cardC*");

MODULE_INFO(srcversion, "88B93D6784A030F674A0D3D");
