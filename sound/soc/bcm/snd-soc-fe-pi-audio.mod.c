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
	{ 0x610c2dfe, "snd_soc_component_update_bits" },
	{ 0x610b1492, "__platform_driver_register" },
	{ 0x7fa795f, "_dev_err" },
	{ 0xe4336f81, "snd_soc_dai_set_sysclk" },
	{ 0xb59decc, "snd_soc_dapm_force_enable_pin" },
	{ 0x8ad83553, "platform_driver_unregister" },
	{ 0xfeb02014, "of_node_put" },
};

MODULE_INFO(depends, "snd-soc-core");

MODULE_ALIAS("of:N*T*Cfe-pi,fe-pi-audio");
MODULE_ALIAS("of:N*T*Cfe-pi,fe-pi-audioC*");

MODULE_INFO(srcversion, "D8424887C646DE439C0DE0C");
