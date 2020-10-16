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
	{ 0xceb5990b, "regulator_get_bypass_regmap" },
	{ 0x2891d340, "regulator_is_enabled_regmap" },
	{ 0xc4ec78ee, "regulator_get_voltage_sel_regmap" },
	{ 0xb9dbe34b, "regulator_set_voltage_sel_regmap" },
	{ 0x5e594ef5, "regulator_map_voltage_linear_range" },
	{ 0x485c4c03, "regulator_list_voltage_linear_range" },
	{ 0x64fd39c, "platform_unregister_drivers" },
	{ 0xff674bd0, "__platform_register_drivers" },
	{ 0x5f754e5a, "memset" },
	{ 0xe544be36, "devm_kmalloc" },
	{ 0x825e07ca, "of_get_regulator_init_data" },
	{ 0x26b8796a, "of_get_child_by_name" },
	{ 0xfeb02014, "of_node_put" },
	{ 0xeeb4369f, "devm_regulator_register" },
	{ 0xe4f477be, "regmap_update_bits_base" },
	{ 0x7fa795f, "_dev_err" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x904ac03b, "snd_soc_component_force_enable_pin" },
	{ 0xbce4c93e, "snd_soc_dapm_sync" },
	{ 0x4c5fbb88, "snd_soc_component_disable_pin" },
	{ 0xae2c61e9, "regmap_read" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xea4d4f65, "regulator_enable_regmap" },
	{ 0x473ca9fe, "regulator_disable_regmap" },
	{ 0xb2d48a2e, "queue_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x5cfce829, "regulator_set_bypass_regmap" },
	{ 0xf2c1a14a, "rdev_get_drvdata" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

MODULE_INFO(depends, "snd-soc-core");


MODULE_INFO(srcversion, "76A5C5B621FCA409518FAA5");
