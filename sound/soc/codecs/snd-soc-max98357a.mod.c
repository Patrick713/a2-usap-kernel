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
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0x610b1492, "__platform_driver_register" },
	{ 0x8e865d3c, "arm_delay_ops" },
	{ 0x6ff4c298, "device_property_read_u32_array" },
	{ 0x88c82718, "devm_snd_soc_register_component" },
	{ 0x62182082, "devm_gpiod_get_optional" },
	{ 0x8ad83553, "platform_driver_unregister" },
	{ 0xfb5d3e3c, "gpiod_set_value" },
	{ 0xe544be36, "devm_kmalloc" },
};

MODULE_INFO(depends, "snd-soc-core");

MODULE_ALIAS("of:N*T*Cmaxim,max98357a");
MODULE_ALIAS("of:N*T*Cmaxim,max98357aC*");

MODULE_INFO(srcversion, "3FF62C0813778C694C3DE64");
