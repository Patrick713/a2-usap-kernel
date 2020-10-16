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
	{ 0x23b0577a, "scatterwalk_ffwd" },
	{ 0xee4d1bfd, "sg_init_table" },
	{ 0x76d11765, "mem_map" },
	{ 0xb561ac5b, "wait_for_completion" },
	{ 0x7a4497db, "kzfree" },
	{ 0xd9b879d9, "crypto_ahash_setkey" },
	{ 0xe7446dc3, "crypto_req_done" },
	{ 0x5bbe49f4, "__init_waitqueue_head" },
	{ 0x2d6fcc06, "__kmalloc" },
	{ 0xdfd3ce3b, "crypto_skcipher_decrypt" },
	{ 0x4c6b4c3, "__crypto_memneq" },
	{ 0x4f4a3988, "scatterwalk_map_and_copy" },
	{ 0xfffa3100, "sg_next" },
	{ 0xa201ea0e, "crypto_ahash_finup" },
	{ 0xa9487fae, "sg_init_one" },
	{ 0x84b183ae, "strncmp" },
	{ 0xde54b964, "crypto_grab_skcipher" },
	{ 0x7ed5fd24, "crypto_mod_put" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xfb14bad4, "crypto_init_ahash_spawn" },
	{ 0x86934afb, "crypto_find_alg" },
	{ 0x4ab3bf2a, "crypto_ahash_type" },
	{ 0x565379a3, "aead_register_instance" },
	{ 0xc358aaf8, "snprintf" },
	{ 0x4b5954d3, "crypto_grab_aead" },
	{ 0xebaa9dc8, "kmem_cache_alloc_trace" },
	{ 0xf4610713, "kmalloc_caches" },
	{ 0x9a11a0fc, "crypto_attr_alg_name" },
	{ 0xfdbd7a17, "crypto_get_attr_type" },
	{ 0x37a0cba, "kfree" },
	{ 0x5da731d, "crypto_drop_spawn" },
	{ 0x536ca19c, "crypto_get_default_null_skcipher" },
	{ 0xc4b25829, "crypto_spawn_tfm2" },
	{ 0x21cd536a, "crypto_put_default_null_skcipher" },
	{ 0xae6283c2, "crypto_destroy_tfm" },
	{ 0x8b2bc06d, "crypto_aead_setkey" },
	{ 0xe82bfbf1, "crypto_aead_setauthsize" },
	{ 0x2e859034, "crypto_aead_decrypt" },
	{ 0x49d89cc7, "crypto_aead_encrypt" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xa36ae624, "crypto_skcipher_encrypt" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "133945D489164A71804396D");
