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
	{ 0x901319d1, "arizona_request_irq" },
	{ 0xf9a482f9, "msleep" },
	{ 0x1e3b1593, "regulator_set_voltage" },
	{ 0xeb711ae7, "snd_soc_params_to_bclk" },
	{ 0x815588a6, "clk_enable" },
	{ 0x53a69645, "snd_soc_dapm_del_routes" },
	{ 0x675ce85, "regmap_raw_write" },
	{ 0xea124bd1, "gcd" },
	{ 0x8fac8f23, "__pm_runtime_suspend" },
	{ 0x4c1b7922, "snd_soc_dapm_get_volsw" },
	{ 0xe03d9e8f, "regmap_multi_reg_write" },
	{ 0xe4f477be, "regmap_update_bits_base" },
	{ 0x62948ab6, "_dev_crit" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0x4c5fbb88, "snd_soc_component_disable_pin" },
	{ 0xf7802486, "__aeabi_uidivmod" },
	{ 0xb1b939e, "kmemdup" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0x9cb8abfb, "snd_soc_dapm_new_controls" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0xccae089c, "__pm_runtime_resume" },
	{ 0x610c2dfe, "snd_soc_component_update_bits" },
	{ 0xae2c61e9, "regmap_read" },
	{ 0x2f07f0db, "of_prop_next_u32" },
	{ 0xeacf62d4, "snd_soc_component_enable_pin" },
	{ 0x9d85156b, "snd_soc_info_enum_double" },
	{ 0xa234ec85, "snd_soc_dapm_add_routes" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0xf65110e8, "_dev_warn" },
	{ 0x5f754e5a, "memset" },
	{ 0xdbe521ac, "snd_pcm_hw_constraint_list" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0x3c7ad7ac, "of_find_property" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0x99e04d95, "snd_soc_dapm_put_volsw" },
	{ 0x8e865d3c, "arm_delay_ops" },
	{ 0x7fa795f, "_dev_err" },
	{ 0x2196324, "__aeabi_idiv" },
	{ 0xc67fd118, "arizona_free_irq" },
	{ 0xee44765a, "snd_soc_info_volsw" },
	{ 0x7d14541a, "snd_soc_get_enum_double" },
	{ 0x12a38747, "usleep_range" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0xbce4c93e, "snd_soc_dapm_sync" },
	{ 0x2c4bfd80, "snd_soc_component_write" },
	{ 0xfd9dc82b, "snd_soc_put_enum_double" },
	{ 0x37a0cba, "kfree" },
	{ 0x7a241991, "snd_soc_bytes_put" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xc358aaf8, "snprintf" },
	{ 0x8131f7e2, "snd_soc_component_read32" },
	{ 0xaa4a5386, "regmap_get_val_bytes" },
	{ 0xfc60f402, "of_property_read_variable_u32_array" },
	{ 0xc73c0dfd, "regmap_write" },
	{ 0x6f013ecd, "__init_rwsem" },
};

MODULE_INFO(depends, "snd-pcm,snd-soc-core");


MODULE_INFO(srcversion, "E2D12783F3CC4905E39045B");
