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
	{ 0xc5850110, "printk" },
	{ 0xee43fd9b, "___ratelimit" },
	{ 0x49ebacbd, "_clear_bit" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("hid:b0003g*v00000766p00000204");
MODULE_ALIAS("hid:b0003g*v0000046Ep00005578");
MODULE_ALIAS("hid:b0003g*v0000046Ep00005577");
MODULE_ALIAS("hid:b0003g*v00001784p00000004");
MODULE_ALIAS("hid:b0003g*v000004F2p00000618");
MODULE_ALIAS("hid:b0005g*v000004F2p00001408");

MODULE_INFO(srcversion, "B95F6D48FA9FEAFE2EEC74D");
