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
	{ 0x88161187, "i2c_del_driver" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0x610c2dfe, "snd_soc_component_update_bits" },
	{ 0x9d85156b, "snd_soc_info_enum_double" },
	{ 0x9c70eac0, "snd_soc_put_volsw_range" },
	{ 0xf65110e8, "_dev_warn" },
	{ 0xc5850110, "printk" },
	{ 0x1b582db5, "snd_soc_info_volsw_range" },
	{ 0x1cf976f1, "snd_soc_get_volsw_range" },
	{ 0x7fa795f, "_dev_err" },
	{ 0xeff3f293, "snd_soc_unregister_component" },
	{ 0xbdae2e40, "i2c_register_driver" },
	{ 0x7d14541a, "snd_soc_get_enum_double" },
	{ 0xac511bf1, "__devm_regmap_init_i2c" },
	{ 0x88c82718, "devm_snd_soc_register_component" },
	{ 0x2c4bfd80, "snd_soc_component_write" },
	{ 0x62182082, "devm_gpiod_get_optional" },
	{ 0xfd9dc82b, "snd_soc_put_enum_double" },
	{ 0x37a0cba, "kfree" },
	{ 0x3518599c, "gpiod_to_irq" },
	{ 0x1d0f35b8, "snd_soc_component_test_bits" },
	{ 0x84b498ef, "gpiod_set_value_cansleep" },
	{ 0xe544be36, "devm_kmalloc" },
	{ 0xab26b88f, "devm_request_threaded_irq" },
	{ 0x5dc31eaa, "gpiod_get_value_cansleep" },
};

MODULE_INFO(depends, "snd-soc-core,regmap-i2c");

MODULE_ALIAS("of:N*T*Cma,ma120x0p");
MODULE_ALIAS("of:N*T*Cma,ma120x0pC*");
MODULE_ALIAS("i2c:ma120x0p");

MODULE_INFO(srcversion, "B3F70617D7A5CA2D426EB08");
