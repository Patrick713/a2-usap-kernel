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
	{ 0x23b87361, "snd_soc_register_component" },
	{ 0x610b1492, "__platform_driver_register" },
	{ 0xeff3f293, "snd_soc_unregister_component" },
	{ 0x8ad83553, "platform_driver_unregister" },
};

MODULE_INFO(depends, "snd-soc-core");

MODULE_ALIAS("of:N*T*Cti,pcm1794a");
MODULE_ALIAS("of:N*T*Cti,pcm1794aC*");

MODULE_INFO(srcversion, "EFA9CD3DD0D6BA9E5094846");