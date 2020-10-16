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
	{ 0x5b17be06, "cast_s4" },
	{ 0xbd3e7542, "cast_s1" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0x5609ce41, "cast_s2" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x8ab0c3b8, "crypto_register_alg" },
	{ 0x9d669763, "memcpy" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xb9cba57f, "cast_s3" },
	{ 0xbaf3bdff, "crypto_unregister_alg" },
};

MODULE_INFO(depends, "cast_common");


MODULE_INFO(srcversion, "4023997CD1006DD999AC6DC");
