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
	{ 0x3813d99a, "crypto_unregister_skcipher" },
	{ 0xb27409e5, "crypto_register_skcipher" },
	{ 0x2bb32ad1, "arc4_setkey" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x7f7df5e4, "skcipher_walk_done" },
	{ 0xcd47fcc4, "arc4_crypt" },
	{ 0x5da611bc, "skcipher_walk_virt" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

MODULE_INFO(depends, "libarc4");


MODULE_INFO(srcversion, "1DBDD1BA65A5CB9FA4B5A85");
