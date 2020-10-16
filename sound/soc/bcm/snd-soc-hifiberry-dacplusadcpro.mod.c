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
	{ 0xf9a482f9, "msleep" },
	{ 0x889e7573, "of_parse_phandle" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0x610c2dfe, "snd_soc_component_update_bits" },
	{ 0xac437f7b, "snd_interval_ratnum" },
	{ 0x556e4390, "clk_get_rate" },
	{ 0x610b1492, "__platform_driver_register" },
	{ 0x9d85156b, "snd_soc_info_enum_double" },
	{ 0xf65110e8, "_dev_warn" },
	{ 0xa6eb2cd, "snd_soc_add_component_controls" },
	{ 0x3c7ad7ac, "of_find_property" },
	{ 0x7fa795f, "_dev_err" },
	{ 0x7e968afc, "devm_kfree" },
	{ 0x8cf5cbd7, "snd_soc_dai_set_bclk_ratio" },
	{ 0x7d14541a, "snd_soc_get_enum_double" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x2c4bfd80, "snd_soc_component_write" },
	{ 0x76d9b876, "clk_set_rate" },
	{ 0xfd9dc82b, "snd_soc_put_enum_double" },
	{ 0x68a24153, "snd_pcm_format_physical_width" },
	{ 0x3f2d114a, "snd_soc_dai_set_fmt" },
	{ 0xf132b06e, "snd_soc_component_read" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xde0fa257, "snd_soc_limit_volume" },
	{ 0x8ad83553, "platform_driver_unregister" },
	{ 0xe544be36, "devm_kmalloc" },
	{ 0x7447738e, "snd_soc_register_card" },
};

MODULE_INFO(depends, "snd-soc-core,snd-pcm");

MODULE_ALIAS("of:N*T*Chifiberry,hifiberry-dacplusadcpro");
MODULE_ALIAS("of:N*T*Chifiberry,hifiberry-dacplusadcproC*");

MODULE_INFO(srcversion, "1B1E9BE26C260567A4C56B9");
