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
	{ 0xf9a482f9, "msleep" },
	{ 0xff178f6, "__aeabi_idivmod" },
	{ 0x815588a6, "clk_enable" },
	{ 0xd307edaa, "snd_soc_dapm_get_enum_double" },
	{ 0x88161187, "i2c_del_driver" },
	{ 0x4c1b7922, "snd_soc_dapm_get_volsw" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0xf7802486, "__aeabi_uidivmod" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0x610c2dfe, "snd_soc_component_update_bits" },
	{ 0xc882c206, "snd_soc_put_volsw" },
	{ 0xf74e67c8, "snd_soc_get_volsw" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x9d85156b, "snd_soc_info_enum_double" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0xf65110e8, "_dev_warn" },
	{ 0xcb6ba75f, "device_property_read_string" },
	{ 0x99e04d95, "snd_soc_dapm_put_volsw" },
	{ 0x7fa795f, "_dev_err" },
	{ 0x2196324, "__aeabi_idiv" },
	{ 0x59e5070d, "__do_div64" },
	{ 0xee44765a, "snd_soc_info_volsw" },
	{ 0xbdae2e40, "i2c_register_driver" },
	{ 0x43f81957, "clk_round_rate" },
	{ 0x7d14541a, "snd_soc_get_enum_double" },
	{ 0x6ff4c298, "device_property_read_u32_array" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xac511bf1, "__devm_regmap_init_i2c" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0x88c82718, "devm_snd_soc_register_component" },
	{ 0x2c4bfd80, "snd_soc_component_write" },
	{ 0xd77f2380, "devm_clk_get" },
	{ 0x76d9b876, "clk_set_rate" },
	{ 0xfd9dc82b, "snd_soc_put_enum_double" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x8131f7e2, "snd_soc_component_read32" },
	{ 0xe544be36, "devm_kmalloc" },
	{ 0x5a4cb65c, "snd_soc_dapm_put_enum_double" },
};

MODULE_INFO(depends, "snd-pcm,snd-soc-core,regmap-i2c");

MODULE_ALIAS("of:N*T*Cdlg,da7213");
MODULE_ALIAS("of:N*T*Cdlg,da7213C*");
MODULE_ALIAS("i2c:da7213");

MODULE_INFO(srcversion, "2A3DB70CFB7C1C6ABEBD36B");
