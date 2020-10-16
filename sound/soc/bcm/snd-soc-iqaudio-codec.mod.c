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
	{ 0xbf39c53e, "snd_soc_dapm_info_pin_switch" },
	{ 0x996fdb84, "snd_soc_dapm_put_pin_switch" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0xa73fc677, "snd_soc_dai_set_pll" },
	{ 0x610b1492, "__platform_driver_register" },
	{ 0x34e942aa, "of_property_read_string" },
	{ 0x436b7464, "snd_soc_unregister_card" },
	{ 0x7fa795f, "_dev_err" },
	{ 0xeea26813, "snd_soc_get_pcm_runtime" },
	{ 0x8cf5cbd7, "snd_soc_dai_set_bclk_ratio" },
	{ 0x11fcd1d, "snd_soc_dapm_get_pin_switch" },
	{ 0xbce4c93e, "snd_soc_dapm_sync" },
	{ 0xe4336f81, "snd_soc_dai_set_sysclk" },
	{ 0x64d2b6fd, "snd_soc_dapm_disable_pin" },
	{ 0x8ad83553, "platform_driver_unregister" },
	{ 0x7447738e, "snd_soc_register_card" },
};

MODULE_INFO(depends, "snd-soc-core");

MODULE_ALIAS("of:N*T*Ciqaudio,iqaudio-codec");
MODULE_ALIAS("of:N*T*Ciqaudio,iqaudio-codecC*");

MODULE_INFO(srcversion, "93C017A07677E7A5C9C7975");
