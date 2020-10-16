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
	{ 0x731685b6, "sha1_update_arm" },
	{ 0xa8a8110c, "kernel_neon_end" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0xcdec0519, "sha1_finup_arm" },
	{ 0x5f754e5a, "memset" },
	{ 0x7ceecb96, "crypto_unregister_shash" },
	{ 0xeda30748, "crypto_register_shash" },
	{ 0x3d3c540f, "elf_hwcap" },
	{ 0x9d669763, "memcpy" },
	{ 0x8fd180e7, "kernel_neon_begin" },
};

MODULE_INFO(depends, "sha1-arm");


MODULE_INFO(srcversion, "E1370AAF08ACD45BFE1E28A");
