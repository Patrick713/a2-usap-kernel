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
	{ 0xf9a482f9, "msleep" },
	{ 0xf2dec546, "devm_snd_soc_register_card" },
	{ 0x3c2b68f7, "of_changeset_apply" },
	{ 0x696f2b63, "of_changeset_init" },
	{ 0x889e7573, "of_parse_phandle" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0x32f973e3, "i2c_put_adapter" },
	{ 0x610c2dfe, "snd_soc_component_update_bits" },
	{ 0xac437f7b, "snd_interval_ratnum" },
	{ 0x556e4390, "clk_get_rate" },
	{ 0x610b1492, "__platform_driver_register" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xf65110e8, "_dev_warn" },
	{ 0x5f754e5a, "memset" },
	{ 0x3c7ad7ac, "of_find_property" },
	{ 0xc7c8a143, "i2c_smbus_read_byte" },
	{ 0x54474bef, "of_changeset_action" },
	{ 0x7fa795f, "_dev_err" },
	{ 0x7e968afc, "devm_kfree" },
	{ 0x8cf5cbd7, "snd_soc_dai_set_bclk_ratio" },
	{ 0x3eabc38c, "_dev_info" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xb6ded002, "of_find_compatible_node" },
	{ 0x76d9b876, "clk_set_rate" },
	{ 0x68a24153, "snd_pcm_format_physical_width" },
	{ 0xf132b06e, "snd_soc_component_read" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xde0fa257, "snd_soc_limit_volume" },
	{ 0x8ad83553, "platform_driver_unregister" },
	{ 0x2c5dad49, "i2c_get_adapter" },
	{ 0xe544be36, "devm_kmalloc" },
};

MODULE_INFO(depends, "snd-soc-core,snd-pcm");

MODULE_ALIAS("of:N*T*Chifiberry,hifiberry-dacplus");
MODULE_ALIAS("of:N*T*Chifiberry,hifiberry-dacplusC*");

MODULE_INFO(srcversion, "5CA858AC20D129D55F83001");
