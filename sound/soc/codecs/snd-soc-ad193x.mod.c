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
	{ 0xe03d9e8f, "regmap_multi_reg_write" },
	{ 0xe4f477be, "regmap_update_bits_base" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0x9cb8abfb, "snd_soc_dapm_new_controls" },
	{ 0xc882c206, "snd_soc_put_volsw" },
	{ 0xf74e67c8, "snd_soc_get_volsw" },
	{ 0x9d85156b, "snd_soc_info_enum_double" },
	{ 0xa234ec85, "snd_soc_dapm_add_routes" },
	{ 0xdbe521ac, "snd_pcm_hw_constraint_list" },
	{ 0xa6eb2cd, "snd_soc_add_component_controls" },
	{ 0xee44765a, "snd_soc_info_volsw" },
	{ 0x7d14541a, "snd_soc_get_enum_double" },
	{ 0x88c82718, "devm_snd_soc_register_component" },
	{ 0xbce4c93e, "snd_soc_dapm_sync" },
	{ 0xfd9dc82b, "snd_soc_put_enum_double" },
	{ 0xe544be36, "devm_kmalloc" },
};

MODULE_INFO(depends, "snd-pcm,snd-soc-core");


MODULE_INFO(srcversion, "744AC9C745E450B1C13DA8C");
