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
	{ 0x8ad83553, "platform_driver_unregister" },
	{ 0x610b1492, "__platform_driver_register" },
	{ 0x1498b8fe, "devm_gpiochip_add_data" },
	{ 0x6c3d134d, "pm_runtime_enable" },
	{ 0x5f754e5a, "memset" },
	{ 0xe544be36, "devm_kmalloc" },
	{ 0x2d26f33a, "__pm_runtime_idle" },
	{ 0x91a0f096, "gpiochip_line_is_persistent" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x7fa795f, "_dev_err" },
	{ 0x8fac8f23, "__pm_runtime_suspend" },
	{ 0x6ebe366f, "ktime_get_mono_fast_ns" },
	{ 0xf82f33fa, "regcache_drop_region" },
	{ 0xccae089c, "__pm_runtime_resume" },
	{ 0xae2c61e9, "regmap_read" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xe4f477be, "regmap_update_bits_base" },
	{ 0x52afd98, "gpiochip_get_data" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "3F824AAC36F88B43EF27E23");
