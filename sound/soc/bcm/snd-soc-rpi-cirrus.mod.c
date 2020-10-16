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
	{ 0xd307edaa, "snd_soc_dapm_get_enum_double" },
	{ 0x889e7573, "of_parse_phandle" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0xa73fc677, "snd_soc_dai_set_pll" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0x610c2dfe, "snd_soc_component_update_bits" },
	{ 0x610b1492, "__platform_driver_register" },
	{ 0x9d85156b, "snd_soc_info_enum_double" },
	{ 0xd03bb875, "snd_soc_component_set_pll" },
	{ 0xf65110e8, "_dev_warn" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0x7fa795f, "_dev_err" },
	{ 0x5a1d4aee, "snd_ctl_boolean_mono_info" },
	{ 0xeea26813, "snd_soc_get_pcm_runtime" },
	{ 0x8cf5cbd7, "snd_soc_dai_set_bclk_ratio" },
	{ 0x12a38747, "usleep_range" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xb24596cd, "snd_soc_dai_set_clkdiv" },
	{ 0xe4336f81, "snd_soc_dai_set_sysclk" },
	{ 0xbf6271c8, "snd_soc_component_set_sysclk" },
	{ 0x68a24153, "snd_pcm_format_physical_width" },
	{ 0xd6fc557c, "snd_pcm_hw_constraint_minmax" },
	{ 0xf132b06e, "snd_soc_component_read" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x4692d427, "snd_soc_dai_set_tdm_slot" },
	{ 0x8ad83553, "platform_driver_unregister" },
	{ 0xe544be36, "devm_kmalloc" },
	{ 0xe914e41e, "strcpy" },
	{ 0x5a4cb65c, "snd_soc_dapm_put_enum_double" },
};

MODULE_INFO(depends, "snd-soc-core,snd,snd-pcm");

MODULE_ALIAS("of:N*T*Cwlf,rpi-cirrus");
MODULE_ALIAS("of:N*T*Cwlf,rpi-cirrusC*");

MODULE_INFO(srcversion, "BE13B49F0C575F6EC19A999");
