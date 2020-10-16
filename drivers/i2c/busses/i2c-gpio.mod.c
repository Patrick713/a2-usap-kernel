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
	{ 0xc5850110, "printk" },
	{ 0x610b1492, "__platform_driver_register" },
	{ 0xf65110e8, "_dev_warn" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xc358aaf8, "snprintf" },
	{ 0x3eabc38c, "_dev_info" },
	{ 0xc24b5aae, "desc_to_gpio" },
	{ 0x2ab30492, "i2c_bit_add_numbered_bus" },
	{ 0x73e20c1c, "strlcpy" },
	{ 0xc838316d, "gpiod_cansleep" },
	{ 0x3c7ad7ac, "of_find_property" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0xfc60f402, "of_property_read_variable_u32_array" },
	{ 0xe544be36, "devm_kmalloc" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x7fa795f, "_dev_err" },
	{ 0xcf3487a1, "devm_gpiod_get_index" },
	{ 0x76d0d88f, "devm_gpiod_get" },
	{ 0x84b498ef, "gpiod_set_value_cansleep" },
	{ 0x5dc31eaa, "gpiod_get_value_cansleep" },
	{ 0x75685c7c, "i2c_del_adapter" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

MODULE_INFO(depends, "i2c-algo-bit");

MODULE_ALIAS("of:N*T*Ci2c-gpio");
MODULE_ALIAS("of:N*T*Ci2c-gpioC*");

MODULE_INFO(srcversion, "984FFCF63B026D8C1AFA398");
