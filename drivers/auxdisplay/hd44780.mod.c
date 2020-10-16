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
	{ 0x9192a401, "charlcd_register" },
	{ 0x6ff4c298, "device_property_read_u32_array" },
	{ 0x62182082, "devm_gpiod_get_optional" },
	{ 0x76d0d88f, "devm_gpiod_get" },
	{ 0xcf3487a1, "devm_gpiod_get_index" },
	{ 0xa2a58bbe, "charlcd_alloc" },
	{ 0x69f00f77, "gpiod_count" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x253db6aa, "gpiod_set_array_value_cansleep" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x8e865d3c, "arm_delay_ops" },
	{ 0x84b498ef, "gpiod_set_value_cansleep" },
	{ 0xd0cc2e18, "charlcd_free" },
	{ 0xac53a91b, "charlcd_unregister" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

MODULE_INFO(depends, "charlcd");

MODULE_ALIAS("of:N*T*Chit,hd44780");
MODULE_ALIAS("of:N*T*Chit,hd44780C*");

MODULE_INFO(srcversion, "95010C03FAE4259DE15975C");
