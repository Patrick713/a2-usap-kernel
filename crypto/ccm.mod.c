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
	{ 0xa36ae624, "crypto_skcipher_encrypt" },
	{ 0x4c6b4c3, "__crypto_memneq" },
	{ 0xdfd3ce3b, "crypto_skcipher_decrypt" },
	{ 0xfffa3100, "sg_next" },
	{ 0xa201ea0e, "crypto_ahash_finup" },
	{ 0x49d89cc7, "crypto_aead_encrypt" },
	{ 0x2e859034, "crypto_aead_decrypt" },
	{ 0x23b0577a, "scatterwalk_ffwd" },
	{ 0xee4d1bfd, "sg_init_table" },
	{ 0x76d11765, "mem_map" },
	{ 0xbbe0eee7, "shash_register_instance" },
	{ 0x7593dcef, "shash_free_instance" },
	{ 0x19ce1a6, "crypto_init_spawn" },
	{ 0x85d33609, "crypto_alloc_instance" },
	{ 0xcf418512, "crypto_attr_alg2" },
	{ 0x243f0b4b, "crypto_check_attr_type" },
	{ 0x53f0650b, "crypto_spawn_tfm" },
	{ 0xa3f12f69, "__crypto_xor" },
	{ 0xd9b879d9, "crypto_ahash_setkey" },
	{ 0x5f754e5a, "memset" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xde54b964, "crypto_grab_skcipher" },
	{ 0xfb14bad4, "crypto_init_ahash_spawn" },
	{ 0x7ed5fd24, "crypto_mod_put" },
	{ 0x84b183ae, "strncmp" },
	{ 0x86934afb, "crypto_find_alg" },
	{ 0x4ab3bf2a, "crypto_ahash_type" },
	{ 0x565379a3, "aead_register_instance" },
	{ 0xc358aaf8, "snprintf" },
	{ 0x37a0cba, "kfree" },
	{ 0x5da731d, "crypto_drop_spawn" },
	{ 0x4b5954d3, "crypto_grab_aead" },
	{ 0xebaa9dc8, "kmem_cache_alloc_trace" },
	{ 0xf4610713, "kmalloc_caches" },
	{ 0x9a11a0fc, "crypto_attr_alg_name" },
	{ 0xfdbd7a17, "crypto_get_attr_type" },
	{ 0xc4b25829, "crypto_spawn_tfm2" },
	{ 0xae6283c2, "crypto_destroy_tfm" },
	{ 0x8b2bc06d, "crypto_aead_setkey" },
	{ 0xe82bfbf1, "crypto_aead_setauthsize" },
	{ 0x4f4a3988, "scatterwalk_map_and_copy" },
	{ 0x9d669763, "memcpy" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "A4F7A69BE8413A9297F404D");
