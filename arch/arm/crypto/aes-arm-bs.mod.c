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
	{ 0x77e9eb37, "aes_encrypt" },
	{ 0xe4f09f46, "crypto_unregister_skciphers" },
	{ 0xefe73979, "simd_skcipher_free" },
	{ 0xa3f12f69, "__crypto_xor" },
	{ 0xa8a8110c, "kernel_neon_end" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0x88638552, "simd_skcipher_create_compat" },
	{ 0x4f4a3988, "scatterwalk_map_and_copy" },
	{ 0xd697e69a, "trace_hardirqs_on" },
	{ 0x4c6b4c3, "__crypto_memneq" },
	{ 0x7f7df5e4, "skcipher_walk_done" },
	{ 0x4518dea9, "crypto_register_skciphers" },
	{ 0x5da611bc, "skcipher_walk_virt" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xae6283c2, "crypto_destroy_tfm" },
	{ 0x558b281d, "aes_expandkey" },
	{ 0x3d3c540f, "elf_hwcap" },
	{ 0x2cfde9a2, "warn_slowpath_fmt" },
	{ 0x9d669763, "memcpy" },
	{ 0x8fd180e7, "kernel_neon_begin" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x3ef051c8, "crypto_inc" },
	{ 0x5dda0a58, "crypto_alloc_base" },
	{ 0xec3d2e1b, "trace_hardirqs_off" },
};

MODULE_INFO(depends, "crypto_simd");


MODULE_INFO(srcversion, "DBFED1AE9AA4A9150177EC2");
