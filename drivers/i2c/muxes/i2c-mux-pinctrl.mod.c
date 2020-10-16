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
	{ 0x7fa795f, "_dev_err" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x3eabc38c, "_dev_info" },
	{ 0x2ce5182e, "i2c_mux_add_adapter" },
	{ 0xf2a6c335, "i2c_root_adapter" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xebaac601, "pinctrl_lookup_state" },
	{ 0x91bdc644, "devm_pinctrl_get" },
	{ 0x28f70f7f, "i2c_mux_alloc" },
	{ 0xfeb02014, "of_node_put" },
	{ 0xb64b2b5b, "of_find_i2c_adapter_by_node" },
	{ 0x889e7573, "of_parse_phandle" },
	{ 0xbc853146, "of_property_read_string_helper" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xda5998b8, "pinctrl_select_state" },
	{ 0x32f973e3, "i2c_put_adapter" },
	{ 0xa9644ec2, "i2c_mux_del_adapters" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

MODULE_INFO(depends, "i2c-mux");

MODULE_ALIAS("of:N*T*Ci2c-mux-pinctrl");
MODULE_ALIAS("of:N*T*Ci2c-mux-pinctrlC*");

MODULE_INFO(srcversion, "43EFAACBE84B0EDD634202A");
