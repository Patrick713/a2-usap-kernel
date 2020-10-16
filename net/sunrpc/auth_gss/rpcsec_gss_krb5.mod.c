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
	{ 0xf4610713, "kmalloc_caches" },
	{ 0x2d6fcc06, "__kmalloc" },
	{ 0xee4d1bfd, "sg_init_table" },
	{ 0x38d3dce5, "g_make_token_header" },
	{ 0xff178f6, "__aeabi_idivmod" },
	{ 0x76d11765, "mem_map" },
	{ 0x19ae5859, "crypto_alloc_shash" },
	{ 0xdc33677f, "write_bytes_to_xdr_buf" },
	{ 0xf7802486, "__aeabi_uidivmod" },
	{ 0xb1b939e, "kmemdup" },
	{ 0xf54bd49b, "lcm" },
	{ 0x987c11c7, "__pv_phys_pfn_offset" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0x83be2228, "gss_mech_register" },
	{ 0x953e1b9e, "ktime_get_real_seconds" },
	{ 0x4c6b4c3, "__crypto_memneq" },
	{ 0x803de00e, "crypto_ahash_final" },
	{ 0xae497dde, "crypto_alloc_sync_skcipher" },
	{ 0xdce19627, "crypto_ahash_digest" },
	{ 0xd7673035, "g_verify_token_header" },
	{ 0xedc85ddc, "xdr_buf_subsegment" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0x5f754e5a, "memset" },
	{ 0xc5850110, "printk" },
	{ 0x71c90087, "memcmp" },
	{ 0xccea31f5, "crypto_shash_digest" },
	{ 0xfda9581f, "prandom_u32" },
	{ 0xd6994983, "crypto_shash_setkey" },
	{ 0x2196324, "__aeabi_idiv" },
	{ 0xdfd3ce3b, "crypto_skcipher_decrypt" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xae6283c2, "crypto_destroy_tfm" },
	{ 0x3b4257c0, "gss_mech_unregister" },
	{ 0xebaa9dc8, "kmem_cache_alloc_trace" },
	{ 0xa9487fae, "sg_init_one" },
	{ 0x37a0cba, "kfree" },
	{ 0x9d669763, "memcpy" },
	{ 0xd9b879d9, "crypto_ahash_setkey" },
	{ 0x7a4497db, "kzfree" },
	{ 0xce415b80, "read_bytes_from_xdr_buf" },
	{ 0xed46ef28, "xdr_process_buf" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x99bb8806, "memmove" },
	{ 0x482ac5a4, "g_token_size" },
	{ 0x4e4e7ac8, "xdr_buf_trim" },
	{ 0x7dbc831f, "crypto_alloc_ahash" },
	{ 0xa36ae624, "crypto_skcipher_encrypt" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "CD4ABD6AB696F007796FF78");
