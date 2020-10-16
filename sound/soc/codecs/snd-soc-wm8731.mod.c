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
	{ 0xb077e70a, "clk_unprepare" },
	{ 0xe56a9336, "snd_pcm_format_width" },
	{ 0x815588a6, "clk_enable" },
	{ 0x14cfded6, "__devm_regmap_init_spi" },
	{ 0xd307edaa, "snd_soc_dapm_get_enum_double" },
	{ 0x88161187, "i2c_del_driver" },
	{ 0x4c1b7922, "snd_soc_dapm_get_volsw" },
	{ 0xe4f477be, "regmap_update_bits_base" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0x31655912, "__spi_register_driver" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0x610c2dfe, "snd_soc_component_update_bits" },
	{ 0xc882c206, "snd_soc_put_volsw" },
	{ 0xf74e67c8, "snd_soc_get_volsw" },
	{ 0xbce60500, "devm_regulator_bulk_get" },
	{ 0xa6102ad2, "regulator_bulk_enable" },
	{ 0x9d85156b, "snd_soc_info_enum_double" },
	{ 0xf65110e8, "_dev_warn" },
	{ 0xdbe521ac, "snd_pcm_hw_constraint_list" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0x85c6e59a, "driver_unregister" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0x99e04d95, "snd_soc_dapm_put_volsw" },
	{ 0x7fa795f, "_dev_err" },
	{ 0x5a1d4aee, "snd_ctl_boolean_mono_info" },
	{ 0xee44765a, "snd_soc_info_volsw" },
	{ 0xbdae2e40, "i2c_register_driver" },
	{ 0x8ede545e, "regulator_bulk_disable" },
	{ 0xac511bf1, "__devm_regmap_init_i2c" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0x88c82718, "devm_snd_soc_register_component" },
	{ 0xbce4c93e, "snd_soc_dapm_sync" },
	{ 0x2c4bfd80, "snd_soc_component_write" },
	{ 0xd77f2380, "devm_clk_get" },
	{ 0x76d9b876, "clk_set_rate" },
	{ 0xe9fbf51f, "regcache_mark_dirty" },
	{ 0x8131f7e2, "snd_soc_component_read32" },
	{ 0xe544be36, "devm_kmalloc" },
	{ 0xc73c0dfd, "regmap_write" },
	{ 0xdd296c3, "regcache_sync" },
	{ 0x5a4cb65c, "snd_soc_dapm_put_enum_double" },
};

MODULE_INFO(depends, "snd-pcm,regmap-spi,snd-soc-core,snd,regmap-i2c");

MODULE_ALIAS("of:N*T*Cwlf,wm8731");
MODULE_ALIAS("of:N*T*Cwlf,wm8731C*");
MODULE_ALIAS("i2c:wm8731");

MODULE_INFO(srcversion, "FFC351CEAD4422DF4DD96C8");
