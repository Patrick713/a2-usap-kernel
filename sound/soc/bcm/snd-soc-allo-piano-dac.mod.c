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
	{ 0xf2dec546, "devm_snd_soc_register_card" },
	{ 0x889e7573, "of_parse_phandle" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0x610b1492, "__platform_driver_register" },
	{ 0xf65110e8, "_dev_warn" },
	{ 0x3c7ad7ac, "of_find_property" },
	{ 0x7fa795f, "_dev_err" },
	{ 0xde0fa257, "snd_soc_limit_volume" },
	{ 0x8ad83553, "platform_driver_unregister" },
};

MODULE_INFO(depends, "snd-soc-core");

MODULE_ALIAS("of:N*T*Callo,piano-dac");
MODULE_ALIAS("of:N*T*Callo,piano-dacC*");

MODULE_INFO(srcversion, "22BEC9F747A95D6372AF10A");
