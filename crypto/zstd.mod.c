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
	{ 0xa877eb99, "crypto_unregister_scomp" },
	{ 0xbaf3bdff, "crypto_unregister_alg" },
	{ 0x5e2e2595, "crypto_register_scomp" },
	{ 0x8ab0c3b8, "crypto_register_alg" },
	{ 0x37a0cba, "kfree" },
	{ 0xebaa9dc8, "kmem_cache_alloc_trace" },
	{ 0xf4610713, "kmalloc_caches" },
	{ 0x4ee0e846, "ZSTD_initDCtx" },
	{ 0x1aded990, "ZSTD_DCtxWorkspaceBound" },
	{ 0xdac739f6, "ZSTD_initCCtx" },
	{ 0x40a9b349, "vzalloc" },
	{ 0x71432c37, "ZSTD_CCtxWorkspaceBound" },
	{ 0x7a4497db, "kzfree" },
	{ 0x999e8297, "vfree" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xc04b3f8c, "ZSTD_compressCCtx" },
	{ 0x7aba5c0b, "ZSTD_getParams" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x8aa30959, "ZSTD_decompressDCtx" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

MODULE_INFO(depends, "zstd_decompress,zstd_compress");


MODULE_INFO(srcversion, "C7202986707338D8145923A");
