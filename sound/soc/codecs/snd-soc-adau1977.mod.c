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
	{ 0x7238966a, "regulator_disable" },
	{ 0xe4f477be, "regmap_update_bits_base" },
	{ 0xbe1936a0, "regcache_cache_bypass" },
	{ 0xf7802486, "__aeabi_uidivmod" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0x9cb8abfb, "snd_soc_dapm_new_controls" },
	{ 0xc882c206, "snd_soc_put_volsw" },
	{ 0xae2c61e9, "regmap_read" },
	{ 0xf74e67c8, "snd_soc_get_volsw" },
	{ 0x822dc7f2, "snd_pcm_hw_constraint_mask64" },
	{ 0xdbe521ac, "snd_pcm_hw_constraint_list" },
	{ 0x8e865d3c, "arm_delay_ops" },
	{ 0x7fa795f, "_dev_err" },
	{ 0x2196324, "__aeabi_idiv" },
	{ 0xee44765a, "snd_soc_info_volsw" },
	{ 0xc3251622, "devm_regulator_get" },
	{ 0x6ff4c298, "device_property_read_u32_array" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x88c82718, "devm_snd_soc_register_component" },
	{ 0xd089e9e7, "devm_regulator_get_optional" },
	{ 0x62182082, "devm_gpiod_get_optional" },
	{ 0xe9fbf51f, "regcache_mark_dirty" },
	{ 0xd6fc557c, "snd_pcm_hw_constraint_minmax" },
	{ 0x84b498ef, "gpiod_set_value_cansleep" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xe544be36, "devm_kmalloc" },
	{ 0xc73c0dfd, "regmap_write" },
	{ 0xdd296c3, "regcache_sync" },
	{ 0x60c79f45, "regcache_cache_only" },
	{ 0x67b83f59, "regulator_enable" },
};

MODULE_INFO(depends, "snd-pcm,snd-soc-core");


MODULE_INFO(srcversion, "9F2C57C87C7E4982797AA86");
