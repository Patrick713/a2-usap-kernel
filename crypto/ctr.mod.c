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
	{ 0x7f7df5e4, "skcipher_walk_done" },
	{ 0x3ef051c8, "crypto_inc" },
	{ 0xa3f12f69, "__crypto_xor" },
	{ 0x5da611bc, "skcipher_walk_virt" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x7ed5fd24, "crypto_mod_put" },
	{ 0x532f6fc0, "skcipher_alloc_instance_simple" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xe214e31, "skcipher_register_instance" },
	{ 0xc358aaf8, "snprintf" },
	{ 0x37a0cba, "kfree" },
	{ 0x5da731d, "crypto_drop_spawn" },
	{ 0xde54b964, "crypto_grab_skcipher" },
	{ 0xebaa9dc8, "kmem_cache_alloc_trace" },
	{ 0xf4610713, "kmalloc_caches" },
	{ 0x9a11a0fc, "crypto_attr_alg_name" },
	{ 0xfdbd7a17, "crypto_get_attr_type" },
	{ 0xa36ae624, "crypto_skcipher_encrypt" },
	{ 0xc4b25829, "crypto_spawn_tfm2" },
	{ 0xae6283c2, "crypto_destroy_tfm" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "6CC9FB9A159298A880DF36B");
