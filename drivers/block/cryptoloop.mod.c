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
	{ 0xbfee3ad5, "loop_unregister_transfer" },
	{ 0xf15b82b6, "loop_register_transfer" },
	{ 0x5f754e5a, "memset" },
	{ 0xa36ae624, "crypto_skcipher_encrypt" },
	{ 0xdfd3ce3b, "crypto_skcipher_decrypt" },
	{ 0xee4d1bfd, "sg_init_table" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xae497dde, "crypto_alloc_sync_skcipher" },
	{ 0x9d669763, "memcpy" },
	{ 0x99bb8806, "memmove" },
	{ 0x6c1ce5ce, "strcspn" },
	{ 0x328a05f1, "strncpy" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xc5850110, "printk" },
	{ 0xae6283c2, "crypto_destroy_tfm" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "9F5E377D4A071E9767DFE2C");
