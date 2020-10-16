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
	{ 0x7fa795f, "_dev_err" },
	{ 0xf4e9c026, "hid_hw_start" },
	{ 0xa219a88d, "hid_open_report" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("hid:b0003g*v0000044Fp0000B300");
MODULE_ALIAS("hid:b0003g*v0000044Fp0000B304");
MODULE_ALIAS("hid:b0003g*v0000044Fp0000B320");
MODULE_ALIAS("hid:b0003g*v0000044Fp0000B323");
MODULE_ALIAS("hid:b0003g*v0000044Fp0000B324");
MODULE_ALIAS("hid:b0003g*v0000044Fp0000B605");
MODULE_ALIAS("hid:b0003g*v0000044Fp0000B651");
MODULE_ALIAS("hid:b0003g*v0000044Fp0000B653");
MODULE_ALIAS("hid:b0003g*v0000044Fp0000B654");
MODULE_ALIAS("hid:b0003g*v0000044Fp0000B65A");

MODULE_INFO(srcversion, "8E1CA2711123E2EDAE150AC");
