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
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

static const struct modversion_info ____versions[]
__used __section(__versions) = {
	{ 0xe9942317, "module_layout" },
	{ 0x1b02aeb, "crypto_alloc_skcipher" },
	{ 0xf4610713, "kmalloc_caches" },
	{ 0x6b9736f8, "cryptd_free_skcipher" },
	{ 0xe4f09f46, "crypto_unregister_skciphers" },
	{ 0x5d827992, "cryptd_free_aead" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0x3df7a85b, "cryptd_skcipher_queued" },
	{ 0x4518dea9, "crypto_register_skciphers" },
	{ 0x3813d99a, "crypto_unregister_skcipher" },
	{ 0x84b183ae, "strncmp" },
	{ 0xa0b86ec4, "cryptd_aead_queued" },
	{ 0x49d89cc7, "crypto_aead_encrypt" },
	{ 0xb27409e5, "crypto_register_skcipher" },
	{ 0x8b2bc06d, "crypto_aead_setkey" },
	{ 0xf7ba06b2, "cryptd_alloc_skcipher" },
	{ 0xdfd3ce3b, "crypto_skcipher_decrypt" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x2b60acdd, "cryptd_skcipher_child" },
	{ 0xae6283c2, "crypto_destroy_tfm" },
	{ 0x548ab180, "crypto_unregister_aeads" },
	{ 0xebaa9dc8, "kmem_cache_alloc_trace" },
	{ 0x2e859034, "crypto_aead_decrypt" },
	{ 0xe82bfbf1, "crypto_aead_setauthsize" },
	{ 0x4d4ce517, "crypto_alloc_aead" },
	{ 0x2cfde9a2, "warn_slowpath_fmt" },
	{ 0xa85445f9, "crypto_register_aeads" },
	{ 0x37a0cba, "kfree" },
	{ 0x76cbecf9, "crypto_unregister_aead" },
	{ 0xcbb36553, "crypto_register_aead" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x782ddf07, "cryptd_aead_child" },
	{ 0xc358aaf8, "snprintf" },
	{ 0x49e18bfc, "cryptd_alloc_aead" },
	{ 0xa36ae624, "crypto_skcipher_encrypt" },
};

MODULE_INFO(depends, "cryptd");


MODULE_INFO(srcversion, "3305741DF4314BB5351FF6F");
