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
	{ 0xf2dec546, "devm_snd_soc_register_card" },
	{ 0x889e7573, "of_parse_phandle" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0xa73fc677, "snd_soc_dai_set_pll" },
	{ 0x610c2dfe, "snd_soc_component_update_bits" },
	{ 0xc882c206, "snd_soc_put_volsw" },
	{ 0xf74e67c8, "snd_soc_get_volsw" },
	{ 0x610b1492, "__platform_driver_register" },
	{ 0x9d85156b, "snd_soc_info_enum_double" },
	{ 0xf65110e8, "_dev_warn" },
	{ 0xa6eb2cd, "snd_soc_add_component_controls" },
	{ 0x7fa795f, "_dev_err" },
	{ 0xee44765a, "snd_soc_info_volsw" },
	{ 0xeea26813, "snd_soc_get_pcm_runtime" },
	{ 0x8cf5cbd7, "snd_soc_dai_set_bclk_ratio" },
	{ 0x7d14541a, "snd_soc_get_enum_double" },
	{ 0xb24596cd, "snd_soc_dai_set_clkdiv" },
	{ 0xe1908f1e, "snd_ctl_remove" },
	{ 0xe4336f81, "snd_soc_dai_set_sysclk" },
	{ 0xfd9dc82b, "snd_soc_put_enum_double" },
	{ 0x8ad83553, "platform_driver_unregister" },
	{ 0x405be59d, "snd_soc_card_get_kcontrol" },
};

MODULE_INFO(depends, "snd-pcm,snd-soc-core,snd");

MODULE_ALIAS("of:N*T*Crra,digidac1-soundcard");
MODULE_ALIAS("of:N*T*Crra,digidac1-soundcardC*");

MODULE_INFO(srcversion, "04DFC70182CF03B396A820B");
