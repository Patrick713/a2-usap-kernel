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
	{ 0x2d6fcc06, "__kmalloc" },
	{ 0x23b0577a, "scatterwalk_ffwd" },
	{ 0x76d11765, "mem_map" },
	{ 0xee4d1bfd, "sg_init_table" },
	{ 0x4389d61a, "sg_nents_for_len" },
	{ 0x49d89cc7, "crypto_aead_encrypt" },
	{ 0x2e859034, "crypto_aead_decrypt" },
	{ 0x4f4a3988, "scatterwalk_map_and_copy" },
	{ 0xa36ae624, "crypto_skcipher_encrypt" },
	{ 0x565379a3, "aead_register_instance" },
	{ 0xe214e31, "skcipher_register_instance" },
	{ 0xc358aaf8, "snprintf" },
	{ 0x73e20c1c, "strlcpy" },
	{ 0x7ed5fd24, "crypto_mod_put" },
	{ 0x6767ee88, "shash_no_setkey" },
	{ 0x35e02677, "crypto_alg_mod_lookup" },
	{ 0x9d669763, "memcpy" },
	{ 0xc5850110, "printk" },
	{ 0x349cba85, "strchr" },
	{ 0x9f984513, "strrchr" },
	{ 0x84b183ae, "strncmp" },
	{ 0x4b5954d3, "crypto_grab_aead" },
	{ 0xde54b964, "crypto_grab_skcipher" },
	{ 0xebaa9dc8, "kmem_cache_alloc_trace" },
	{ 0xf4610713, "kmalloc_caches" },
	{ 0x9a11a0fc, "crypto_attr_alg_name" },
	{ 0xfdbd7a17, "crypto_get_attr_type" },
	{ 0xccea31f5, "crypto_shash_digest" },
	{ 0x8b2bc06d, "crypto_aead_setkey" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x8adbb848, "crypto_shash_finup" },
	{ 0x693f465b, "crypto_shash_update" },
	{ 0x2479193e, "crypto_authenc_extractkeys" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x5da731d, "crypto_drop_spawn" },
	{ 0xdfd3ce3b, "crypto_skcipher_decrypt" },
	{ 0xe82bfbf1, "crypto_aead_setauthsize" },
	{ 0xc4b25829, "crypto_spawn_tfm2" },
	{ 0x19ae5859, "crypto_alloc_shash" },
	{ 0x5dda0a58, "crypto_alloc_base" },
	{ 0xae6283c2, "crypto_destroy_tfm" },
	{ 0x37a0cba, "kfree" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

MODULE_INFO(depends, "authenc");


MODULE_INFO(srcversion, "075FFB328395C9565264369");
