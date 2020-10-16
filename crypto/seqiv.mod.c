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
	{ 0x27a9bdc5, "crypto_unregister_template" },
	{ 0x4178df23, "crypto_register_template" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xb1b939e, "kmemdup" },
	{ 0x49d89cc7, "crypto_aead_encrypt" },
	{ 0xa36ae624, "crypto_skcipher_encrypt" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x9d669763, "memcpy" },
	{ 0x7a4497db, "kzfree" },
	{ 0x2e859034, "crypto_aead_decrypt" },
	{ 0x4f4a3988, "scatterwalk_map_and_copy" },
	{ 0x565379a3, "aead_register_instance" },
	{ 0x75400b2f, "aead_exit_geniv" },
	{ 0x98515dad, "aead_init_geniv" },
	{ 0xb5061e51, "aead_geniv_free" },
	{ 0xa47cdb5c, "aead_geniv_alloc" },
	{ 0xfdbd7a17, "crypto_get_attr_type" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "5F6D9146A022BF361064A0C");
