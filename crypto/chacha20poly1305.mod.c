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
	{ 0x3152a4f9, "crypto_unregister_templates" },
	{ 0xbec667b3, "crypto_register_templates" },
	{ 0x565379a3, "aead_register_instance" },
	{ 0xc358aaf8, "snprintf" },
	{ 0x37a0cba, "kfree" },
	{ 0x5da731d, "crypto_drop_spawn" },
	{ 0xde54b964, "crypto_grab_skcipher" },
	{ 0xfb14bad4, "crypto_init_ahash_spawn" },
	{ 0xebaa9dc8, "kmem_cache_alloc_trace" },
	{ 0xf4610713, "kmalloc_caches" },
	{ 0x7ed5fd24, "crypto_mod_put" },
	{ 0x86934afb, "crypto_find_alg" },
	{ 0x4ab3bf2a, "crypto_ahash_type" },
	{ 0x9a11a0fc, "crypto_attr_alg_name" },
	{ 0xfdbd7a17, "crypto_get_attr_type" },
	{ 0xc4b25829, "crypto_spawn_tfm2" },
	{ 0xae6283c2, "crypto_destroy_tfm" },
	{ 0xa36ae624, "crypto_skcipher_encrypt" },
	{ 0x5f754e5a, "memset" },
	{ 0xa201ea0e, "crypto_ahash_finup" },
	{ 0xa9487fae, "sg_init_one" },
	{ 0xdfd3ce3b, "crypto_skcipher_decrypt" },
	{ 0x23b0577a, "scatterwalk_ffwd" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x4c6b4c3, "__crypto_memneq" },
	{ 0x4f4a3988, "scatterwalk_map_and_copy" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x9d669763, "memcpy" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "8640B5F10DADE67920A80CE");
