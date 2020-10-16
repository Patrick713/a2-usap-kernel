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
	{ 0x889e7573, "of_parse_phandle" },
	{ 0x1cee65c0, "snd_pcm_hw_constraint_msbits" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0x610c2dfe, "snd_soc_component_update_bits" },
	{ 0x610b1492, "__platform_driver_register" },
	{ 0xdbe521ac, "snd_pcm_hw_constraint_list" },
	{ 0x436b7464, "snd_soc_unregister_card" },
	{ 0x7fa795f, "_dev_err" },
	{ 0xe4336f81, "snd_soc_dai_set_sysclk" },
	{ 0x8ad83553, "platform_driver_unregister" },
	{ 0xfeb02014, "of_node_put" },
	{ 0x7447738e, "snd_soc_register_card" },
};

MODULE_INFO(depends, "snd-pcm,snd-soc-core");

MODULE_ALIAS("of:N*T*Cas,audiosense-pi");
MODULE_ALIAS("of:N*T*Cas,audiosense-piC*");

MODULE_INFO(srcversion, "9884651208F851C4E4A3E06");
