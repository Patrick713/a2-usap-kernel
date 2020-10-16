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
	{ 0xb077e70a, "clk_unprepare" },
	{ 0xf9a482f9, "msleep" },
	{ 0x815588a6, "clk_enable" },
	{ 0xe4f477be, "regmap_update_bits_base" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0x9cb8abfb, "snd_soc_dapm_new_controls" },
	{ 0xc882c206, "snd_soc_put_volsw" },
	{ 0xae2c61e9, "regmap_read" },
	{ 0xf74e67c8, "snd_soc_get_volsw" },
	{ 0x556e4390, "clk_get_rate" },
	{ 0xbce60500, "devm_regulator_bulk_get" },
	{ 0xa6102ad2, "regulator_bulk_enable" },
	{ 0x9d85156b, "snd_soc_info_enum_double" },
	{ 0xa234ec85, "snd_soc_dapm_add_routes" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0xa6eb2cd, "snd_soc_add_component_controls" },
	{ 0x7fa795f, "_dev_err" },
	{ 0x3884d478, "of_match_device" },
	{ 0xee44765a, "snd_soc_info_volsw" },
	{ 0x3eabc38c, "_dev_info" },
	{ 0x7d14541a, "snd_soc_get_enum_double" },
	{ 0x8ede545e, "regulator_bulk_disable" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0x88c82718, "devm_snd_soc_register_component" },
	{ 0xd77f2380, "devm_clk_get" },
	{ 0x62182082, "devm_gpiod_get_optional" },
	{ 0xe9fbf51f, "regcache_mark_dirty" },
	{ 0xfd9dc82b, "snd_soc_put_enum_double" },
	{ 0x84b498ef, "gpiod_set_value_cansleep" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xe544be36, "devm_kmalloc" },
	{ 0xc73c0dfd, "regmap_write" },
	{ 0xdd296c3, "regcache_sync" },
	{ 0x60c79f45, "regcache_cache_only" },
};

MODULE_INFO(depends, "snd-soc-core");


MODULE_INFO(srcversion, "D94B14BEF5F2BD56B8A3653");
