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
	{ 0x279fc956, "lib80211_unregister_crypto_ops" },
	{ 0x309e048b, "lib80211_register_crypto_ops" },
	{ 0x65465214, "skb_trim" },
	{ 0x28f7fb79, "skb_pull" },
	{ 0x2e859034, "crypto_aead_decrypt" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x7a4497db, "kzfree" },
	{ 0x49d89cc7, "crypto_aead_encrypt" },
	{ 0x76d11765, "mem_map" },
	{ 0xee4d1bfd, "sg_init_table" },
	{ 0xeab3fd69, "skb_put" },
	{ 0x2d6fcc06, "__kmalloc" },
	{ 0x99bb8806, "memmove" },
	{ 0xf68b0045, "skb_push" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x4d4ce517, "crypto_alloc_aead" },
	{ 0xebaa9dc8, "kmem_cache_alloc_trace" },
	{ 0xf4610713, "kmalloc_caches" },
	{ 0x37a0cba, "kfree" },
	{ 0xae6283c2, "crypto_destroy_tfm" },
	{ 0x8b2bc06d, "crypto_aead_setkey" },
	{ 0xe82bfbf1, "crypto_aead_setauthsize" },
	{ 0x5f754e5a, "memset" },
	{ 0xc8275115, "seq_printf" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

MODULE_INFO(depends, "lib80211");


MODULE_INFO(srcversion, "843C3708FAD475ADEDDCAA4");
