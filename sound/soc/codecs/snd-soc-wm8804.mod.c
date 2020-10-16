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
	{ 0x2d26f33a, "__pm_runtime_idle" },
	{ 0x318848f2, "__pm_runtime_disable" },
	{ 0xd307edaa, "snd_soc_dapm_get_enum_double" },
	{ 0xe4f477be, "regmap_update_bits_base" },
	{ 0xf7802486, "__aeabi_uidivmod" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0xccae089c, "__pm_runtime_resume" },
	{ 0x610c2dfe, "snd_soc_component_update_bits" },
	{ 0xae2c61e9, "regmap_read" },
	{ 0xbce60500, "devm_regulator_bulk_get" },
	{ 0xa6102ad2, "regulator_bulk_enable" },
	{ 0x9d85156b, "snd_soc_info_enum_double" },
	{ 0xf7147f50, "snd_soc_dapm_kcontrol_dapm" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0xc5850110, "printk" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0x7fa795f, "_dev_err" },
	{ 0x59e5070d, "__do_div64" },
	{ 0x3eabc38c, "_dev_info" },
	{ 0x8ede545e, "regulator_bulk_disable" },
	{ 0x6c3d134d, "pm_runtime_enable" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xf3caa6cf, "devm_regulator_register_notifier" },
	{ 0x88c82718, "devm_snd_soc_register_component" },
	{ 0x6c0e2acc, "__pm_runtime_set_status" },
	{ 0x2c4bfd80, "snd_soc_component_write" },
	{ 0x62182082, "devm_gpiod_get_optional" },
	{ 0xe9fbf51f, "regcache_mark_dirty" },
	{ 0x1d0f35b8, "snd_soc_component_test_bits" },
	{ 0x84b498ef, "gpiod_set_value_cansleep" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x8131f7e2, "snd_soc_component_read32" },
	{ 0xe544be36, "devm_kmalloc" },
	{ 0xc73c0dfd, "regmap_write" },
	{ 0xdd296c3, "regcache_sync" },
};

MODULE_INFO(depends, "snd-pcm,snd-soc-core");


MODULE_INFO(srcversion, "D2403AD73256C0D4A3B2B9D");
