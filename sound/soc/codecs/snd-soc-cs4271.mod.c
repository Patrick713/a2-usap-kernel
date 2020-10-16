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
	{ 0xe4f477be, "regmap_update_bits_base" },
	{ 0x4decaf39, "gpio_to_desc" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0xc882c206, "snd_soc_put_volsw" },
	{ 0xf74e67c8, "snd_soc_get_volsw" },
	{ 0xbce60500, "devm_regulator_bulk_get" },
	{ 0xa6102ad2, "regulator_bulk_enable" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0xf5142424, "gpiod_direction_output_raw" },
	{ 0x8e865d3c, "arm_delay_ops" },
	{ 0x7fa795f, "_dev_err" },
	{ 0x3884d478, "of_match_device" },
	{ 0x5a1d4aee, "snd_ctl_boolean_mono_info" },
	{ 0xee44765a, "snd_soc_info_volsw" },
	{ 0x8ede545e, "regulator_bulk_disable" },
	{ 0x88c82718, "devm_snd_soc_register_component" },
	{ 0x5bdcebf5, "of_get_named_gpio_flags" },
	{ 0xf7bc2652, "of_get_property" },
	{ 0xe9fbf51f, "regcache_mark_dirty" },
	{ 0xfdc61102, "gpiod_set_raw_value" },
	{ 0xe544be36, "devm_kmalloc" },
	{ 0x7353b77a, "devm_gpio_request" },
	{ 0xdd296c3, "regcache_sync" },
};

MODULE_INFO(depends, "snd-soc-core,snd");

MODULE_ALIAS("of:N*T*Ccirrus,cs4271");
MODULE_ALIAS("of:N*T*Ccirrus,cs4271C*");

MODULE_INFO(srcversion, "C449E6DCEBC4D03AAB30350");
