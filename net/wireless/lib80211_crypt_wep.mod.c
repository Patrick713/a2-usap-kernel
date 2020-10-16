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
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0xebaa9dc8, "kmem_cache_alloc_trace" },
	{ 0xf4610713, "kmalloc_caches" },
	{ 0xeab3fd69, "skb_put" },
	{ 0xf68b0045, "skb_push" },
	{ 0x7a4497db, "kzfree" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x65465214, "skb_trim" },
	{ 0x28f7fb79, "skb_pull" },
	{ 0x99bb8806, "memmove" },
	{ 0x80c4c319, "crc32_le" },
	{ 0xcd47fcc4, "arc4_crypt" },
	{ 0x2bb32ad1, "arc4_setkey" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x9d669763, "memcpy" },
	{ 0xc8275115, "seq_printf" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

MODULE_INFO(depends, "lib80211,libarc4");


MODULE_INFO(srcversion, "8B81D22FB9E4D0C18F89E6E");
