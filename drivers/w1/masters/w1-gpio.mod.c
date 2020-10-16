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
	{ 0xf9a482f9, "msleep" },
	{ 0xf5142424, "gpiod_direction_output_raw" },
	{ 0x7fa795f, "_dev_err" },
	{ 0x2a51ca8c, "w1_add_master_device" },
	{ 0xee3bb34c, "gpiod_direction_output" },
	{ 0x3aeea660, "devm_gpiod_get_index_optional" },
	{ 0xcf3487a1, "devm_gpiod_get_index" },
	{ 0xf7bc2652, "of_get_property" },
	{ 0xe544be36, "devm_kmalloc" },
	{ 0x91717e38, "of_root" },
	{ 0x6d55919b, "gpiod_get_value" },
	{ 0xc9fda14c, "w1_remove_master_device" },
	{ 0xfb5d3e3c, "gpiod_set_value" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

MODULE_INFO(depends, "wire");

MODULE_ALIAS("of:N*T*Cw1-gpio");
MODULE_ALIAS("of:N*T*Cw1-gpioC*");

MODULE_INFO(srcversion, "89D33780A3861BE22B688C6");
