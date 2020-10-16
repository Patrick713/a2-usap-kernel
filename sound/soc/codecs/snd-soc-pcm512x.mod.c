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
	{ 0xe56a9336, "snd_pcm_format_width" },
	{ 0x2d26f33a, "__pm_runtime_idle" },
	{ 0xeb711ae7, "snd_soc_params_to_bclk" },
	{ 0x815588a6, "clk_enable" },
	{ 0x318848f2, "__pm_runtime_disable" },
	{ 0xea124bd1, "gcd" },
	{ 0x6ce78d04, "snd_pcm_hw_constraint_ratnums" },
	{ 0xe4f477be, "regmap_update_bits_base" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0x503bd137, "snd_interval_ranges" },
	{ 0xf7802486, "__aeabi_uidivmod" },
	{ 0xb43f9365, "ktime_get" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0xc882c206, "snd_soc_put_volsw" },
	{ 0xae2c61e9, "regmap_read" },
	{ 0xf74e67c8, "snd_soc_get_volsw" },
	{ 0x556e4390, "clk_get_rate" },
	{ 0xbce60500, "devm_regulator_bulk_get" },
	{ 0xa6102ad2, "regulator_bulk_enable" },
	{ 0x9d85156b, "snd_soc_info_enum_double" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0xdbe521ac, "snd_pcm_hw_constraint_list" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0x27cf2687, "snd_ctl_boolean_stereo_info" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0x7fa795f, "_dev_err" },
	{ 0x2196324, "__aeabi_idiv" },
	{ 0x59e5070d, "__do_div64" },
	{ 0xee44765a, "snd_soc_info_volsw" },
	{ 0x3eabc38c, "_dev_info" },
	{ 0xca95beb8, "snd_pcm_hw_rule_add" },
	{ 0x7d14541a, "snd_soc_get_enum_double" },
	{ 0x8ede545e, "regulator_bulk_disable" },
	{ 0x12a38747, "usleep_range" },
	{ 0x6c3d134d, "pm_runtime_enable" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xf3caa6cf, "devm_regulator_register_notifier" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0x88c82718, "devm_snd_soc_register_component" },
	{ 0x6c0e2acc, "__pm_runtime_set_status" },
	{ 0xd77f2380, "devm_clk_get" },
	{ 0xc8269f94, "snd_soc_params_to_frame_size" },
	{ 0xe9fbf51f, "regcache_mark_dirty" },
	{ 0xfd9dc82b, "snd_soc_put_enum_double" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xfc60f402, "of_property_read_variable_u32_array" },
	{ 0xe544be36, "devm_kmalloc" },
	{ 0xc73c0dfd, "regmap_write" },
	{ 0xdd296c3, "regcache_sync" },
	{ 0x60c79f45, "regcache_cache_only" },
};

MODULE_INFO(depends, "snd-pcm,snd-soc-core,snd");


MODULE_INFO(srcversion, "E91E41D26B376B7F2461944");
