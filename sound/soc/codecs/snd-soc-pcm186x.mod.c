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
	{ 0xd307edaa, "snd_soc_dapm_get_enum_double" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0x610c2dfe, "snd_soc_component_update_bits" },
	{ 0xc882c206, "snd_soc_put_volsw" },
	{ 0xf74e67c8, "snd_soc_get_volsw" },
	{ 0xbce60500, "devm_regulator_bulk_get" },
	{ 0xa6102ad2, "regulator_bulk_enable" },
	{ 0x9d85156b, "snd_soc_info_enum_double" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0x7fa795f, "_dev_err" },
	{ 0xee44765a, "snd_soc_info_volsw" },
	{ 0x8ede545e, "regulator_bulk_disable" },
	{ 0x88c82718, "devm_snd_soc_register_component" },
	{ 0x2c4bfd80, "snd_soc_component_write" },
	{ 0x74c134b9, "__sw_hweight32" },
	{ 0xe544be36, "devm_kmalloc" },
	{ 0xc73c0dfd, "regmap_write" },
	{ 0xdd296c3, "regcache_sync" },
	{ 0x60c79f45, "regcache_cache_only" },
	{ 0x5a4cb65c, "snd_soc_dapm_put_enum_double" },
};

MODULE_INFO(depends, "snd-pcm,snd-soc-core");


MODULE_INFO(srcversion, "B40AA181EB03AF876B58907");
