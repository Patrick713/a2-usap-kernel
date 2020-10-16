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
	{ 0xa866b0d6, "crypto_unregister_scomps" },
	{ 0xbaf3bdff, "crypto_unregister_alg" },
	{ 0xaedf736a, "crypto_register_scomps" },
	{ 0x8ab0c3b8, "crypto_register_alg" },
	{ 0x37a0cba, "kfree" },
	{ 0xebaa9dc8, "kmem_cache_alloc_trace" },
	{ 0xf4610713, "kmalloc_caches" },
	{ 0x7a4497db, "kzfree" },
	{ 0x107e5878, "zlib_inflateEnd" },
	{ 0xc890c008, "zlib_deflateEnd" },
	{ 0xf2c43f3f, "zlib_deflate" },
	{ 0x6aeefac4, "zlib_deflateReset" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x581f98da, "zlib_inflate" },
	{ 0xbb0540aa, "zlib_inflateReset" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x35a88f28, "zlib_inflateInit2" },
	{ 0xce5ac24f, "zlib_inflate_workspacesize" },
	{ 0x999e8297, "vfree" },
	{ 0x5a0b73d0, "zlib_deflateInit2" },
	{ 0x40a9b349, "vzalloc" },
	{ 0xe9f7149c, "zlib_deflate_workspacesize" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

MODULE_INFO(depends, "zlib_deflate");


MODULE_INFO(srcversion, "A5D13BAB6398F593E6E2C8A");
