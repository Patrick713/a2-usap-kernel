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
	{ 0xc882c206, "snd_soc_put_volsw" },
	{ 0x23b87361, "snd_soc_register_component" },
	{ 0xf74e67c8, "snd_soc_get_volsw" },
	{ 0xc5850110, "printk" },
	{ 0x7fa795f, "_dev_err" },
	{ 0xeff3f293, "snd_soc_unregister_component" },
	{ 0xee44765a, "snd_soc_info_volsw" },
	{ 0xbdae2e40, "i2c_register_driver" },
	{ 0xac511bf1, "__devm_regmap_init_i2c" },
	{ 0x2c4bfd80, "snd_soc_component_write" },
	{ 0xcb203516, "i2c_transfer_buffer_flags" },
	{ 0x37a0cba, "kfree" },
	{ 0xe544be36, "devm_kmalloc" },
	{ 0xc73c0dfd, "regmap_write" },
};

MODULE_INFO(depends, "snd-soc-core,regmap-i2c");

MODULE_ALIAS("i2c:tas5713");
MODULE_ALIAS("of:N*T*Cti,tas5713");
MODULE_ALIAS("of:N*T*Cti,tas5713C*");

MODULE_INFO(srcversion, "B98212AD6509269BCF15751");
