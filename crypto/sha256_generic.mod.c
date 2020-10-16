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
	{ 0x4baf7e59, "sha256_final" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0x727242a9, "sha256_update" },
	{ 0x32ec241d, "crypto_register_shashes" },
	{ 0x89b3ade2, "sha224_final" },
	{ 0x7566a2de, "crypto_unregister_shashes" },
};

MODULE_INFO(depends, "libsha256");


MODULE_INFO(srcversion, "0EE40F5DE17293B375C1090");
