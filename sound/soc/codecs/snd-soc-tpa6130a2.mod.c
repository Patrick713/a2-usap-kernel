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
	{ 0x88161187, "i2c_del_driver" },
	{ 0x7238966a, "regulator_disable" },
	{ 0x4decaf39, "gpio_to_desc" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0xc882c206, "snd_soc_put_volsw" },
	{ 0xae2c61e9, "regmap_read" },
	{ 0xf74e67c8, "snd_soc_get_volsw" },
	{ 0xf65110e8, "_dev_warn" },
	{ 0xa6eb2cd, "snd_soc_add_component_controls" },
	{ 0xf5142424, "gpiod_direction_output_raw" },
	{ 0x7fa795f, "_dev_err" },
	{ 0xee44765a, "snd_soc_info_volsw" },
	{ 0xbdae2e40, "i2c_register_driver" },
	{ 0xc3251622, "devm_regulator_get" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xac511bf1, "__devm_regmap_init_i2c" },
	{ 0x6b2dc060, "dump_stack" },
	{ 0x88c82718, "devm_snd_soc_register_component" },
	{ 0x5bdcebf5, "of_get_named_gpio_flags" },
	{ 0xe9fbf51f, "regcache_mark_dirty" },
	{ 0xfdc61102, "gpiod_set_raw_value" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xe544be36, "devm_kmalloc" },
	{ 0x7353b77a, "devm_gpio_request" },
	{ 0xdd296c3, "regcache_sync" },
	{ 0x60c79f45, "regcache_cache_only" },
	{ 0x67b83f59, "regulator_enable" },
};

MODULE_INFO(depends, "snd-soc-core,regmap-i2c");

MODULE_ALIAS("i2c:tpa6130a2");
MODULE_ALIAS("i2c:tpa6140a2");
MODULE_ALIAS("of:N*T*Cti,tpa6130a2");
MODULE_ALIAS("of:N*T*Cti,tpa6130a2C*");
MODULE_ALIAS("of:N*T*Cti,tpa6140a2");
MODULE_ALIAS("of:N*T*Cti,tpa6140a2C*");

MODULE_INFO(srcversion, "39B8A4E6640325DD5693435");
