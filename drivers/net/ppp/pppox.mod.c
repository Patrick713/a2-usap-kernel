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
	{ 0xb76b5caa, "release_sock" },
	{ 0xa24f23d8, "__request_module" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0x7661f8c0, "ppp_unregister_channel" },
	{ 0xdcb92140, "lock_sock_nested" },
	{ 0x12b548f6, "module_put" },
	{ 0xbc10dd97, "__put_user_4" },
	{ 0xb28dc78c, "sock_register" },
	{ 0x62737e1d, "sock_unregister" },
	{ 0xd05976b1, "ppp_channel_index" },
	{ 0x717bcdac, "try_module_get" },
};

MODULE_INFO(depends, "ppp_generic");


MODULE_INFO(srcversion, "01B6ECBE6751CB63A1D543B");
