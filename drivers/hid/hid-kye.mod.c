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
	{ 0x2f357d74, "hid_unregister_driver" },
	{ 0x84ead130, "__hid_register_driver" },
	{ 0x4bbddbca, "hid_hw_stop" },
	{ 0x7fa795f, "_dev_err" },
	{ 0x5c8bdf32, "__hid_request" },
	{ 0x66ab689e, "hid_hw_close" },
	{ 0x3dc9fce7, "hid_hw_open" },
	{ 0xf4e9c026, "hid_hw_start" },
	{ 0xa219a88d, "hid_open_report" },
	{ 0x3eabc38c, "_dev_info" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("hid:b0003g*v00000458p00000087");
MODULE_ALIAS("hid:b0003g*v00000458p00005010");
MODULE_ALIAS("hid:b0003g*v00000458p00005011");
MODULE_ALIAS("hid:b0003g*v00000458p0000501A");
MODULE_ALIAS("hid:b0003g*v00000458p00005013");
MODULE_ALIAS("hid:b0003g*v00000458p00005019");
MODULE_ALIAS("hid:b0003g*v00000458p00000138");
MODULE_ALIAS("hid:b0003g*v00000458p00004018");
MODULE_ALIAS("hid:b0003g*v00000458p00000153");
MODULE_ALIAS("hid:b0003g*v00000458p00005015");

MODULE_INFO(srcversion, "4F02638A1432946793B9E37");
