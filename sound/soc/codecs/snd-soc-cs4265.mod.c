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
	{ 0xe56a9336, "snd_pcm_format_width" },
	{ 0xb7a20578, "snd_soc_get_volsw_sx" },
	{ 0xd307edaa, "snd_soc_dapm_get_enum_double" },
	{ 0x88161187, "i2c_del_driver" },
	{ 0x4c1b7922, "snd_soc_dapm_get_volsw" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0x610c2dfe, "snd_soc_component_update_bits" },
	{ 0xc882c206, "snd_soc_put_volsw" },
	{ 0xae2c61e9, "regmap_read" },
	{ 0xf74e67c8, "snd_soc_get_volsw" },
	{ 0xe990319, "snd_soc_info_volsw_sx" },
	{ 0x9d85156b, "snd_soc_info_enum_double" },
	{ 0x12480046, "snd_soc_bytes_info" },
	{ 0x99e04d95, "snd_soc_dapm_put_volsw" },
	{ 0x8e865d3c, "arm_delay_ops" },
	{ 0x7fa795f, "_dev_err" },
	{ 0xee44765a, "snd_soc_info_volsw" },
	{ 0xbdae2e40, "i2c_register_driver" },
	{ 0x3eabc38c, "_dev_info" },
	{ 0x7d14541a, "snd_soc_get_enum_double" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xac511bf1, "__devm_regmap_init_i2c" },
	{ 0x88c82718, "devm_snd_soc_register_component" },
	{ 0x62182082, "devm_gpiod_get_optional" },
	{ 0xfd9dc82b, "snd_soc_put_enum_double" },
	{ 0xfab73668, "snd_soc_bytes_get" },
	{ 0x84b498ef, "gpiod_set_value_cansleep" },
	{ 0x7a241991, "snd_soc_bytes_put" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xe544be36, "devm_kmalloc" },
	{ 0x6d31783a, "snd_soc_put_volsw_sx" },
	{ 0xc73c0dfd, "regmap_write" },
	{ 0x5a4cb65c, "snd_soc_dapm_put_enum_double" },
};

MODULE_INFO(depends, "snd-pcm,snd-soc-core,regmap-i2c");

MODULE_ALIAS("of:N*T*Ccirrus,cs4265");
MODULE_ALIAS("of:N*T*Ccirrus,cs4265C*");
MODULE_ALIAS("i2c:cs4265");

MODULE_INFO(srcversion, "468F1420B107503C1430758");
