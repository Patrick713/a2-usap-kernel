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
	{ 0x565379a3, "aead_register_instance" },
	{ 0xc358aaf8, "snprintf" },
	{ 0x37a0cba, "kfree" },
	{ 0x5da731d, "crypto_drop_spawn" },
	{ 0xde54b964, "crypto_grab_skcipher" },
	{ 0xfb14bad4, "crypto_init_ahash_spawn" },
	{ 0xebaa9dc8, "kmem_cache_alloc_trace" },
	{ 0xf4610713, "kmalloc_caches" },
	{ 0x7ed5fd24, "crypto_mod_put" },
	{ 0x9a11a0fc, "crypto_attr_alg_name" },
	{ 0xca36a62a, "ahash_attr_alg" },
	{ 0xfdbd7a17, "crypto_get_attr_type" },
	{ 0x536ca19c, "crypto_get_default_null_skcipher" },
	{ 0xc4b25829, "crypto_spawn_tfm2" },
	{ 0x21cd536a, "crypto_put_default_null_skcipher" },
	{ 0xae6283c2, "crypto_destroy_tfm" },
	{ 0xd9b879d9, "crypto_ahash_setkey" },
	{ 0x2479193e, "crypto_authenc_extractkeys" },
	{ 0xdce19627, "crypto_ahash_digest" },
	{ 0x4c6b4c3, "__crypto_memneq" },
	{ 0x4f4a3988, "scatterwalk_map_and_copy" },
	{ 0xdfd3ce3b, "crypto_skcipher_decrypt" },
	{ 0x23b0577a, "scatterwalk_ffwd" },
	{ 0xee4d1bfd, "sg_init_table" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xa36ae624, "crypto_skcipher_encrypt" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

MODULE_INFO(depends, "authenc");


MODULE_INFO(srcversion, "5FDD8192473912DE9317E23");
