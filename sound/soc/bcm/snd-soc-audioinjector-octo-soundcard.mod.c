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
	{ 0xf2dec546, "devm_snd_soc_register_card" },
	{ 0x889e7573, "of_parse_phandle" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0x610b1492, "__platform_driver_register" },
	{ 0xa1bdd833, "devm_gpiod_get_array_optional" },
	{ 0xdbe521ac, "snd_pcm_hw_constraint_list" },
	{ 0x3c7ad7ac, "of_find_property" },
	{ 0x7fa795f, "_dev_err" },
	{ 0x8cf5cbd7, "snd_soc_dai_set_bclk_ratio" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xe4336f81, "snd_soc_dai_set_sysclk" },
	{ 0x62182082, "devm_gpiod_get_optional" },
	{ 0x253db6aa, "gpiod_set_array_value_cansleep" },
	{ 0x3f2d114a, "snd_soc_dai_set_fmt" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x8ad83553, "platform_driver_unregister" },
	{ 0xfb5d3e3c, "gpiod_set_value" },
};

MODULE_INFO(depends, "snd-soc-core,snd-pcm");

MODULE_ALIAS("of:N*T*Cai,audioinjector-octo-soundcard");
MODULE_ALIAS("of:N*T*Cai,audioinjector-octo-soundcardC*");

MODULE_INFO(srcversion, "F90E222EE109458CFAA833B");
