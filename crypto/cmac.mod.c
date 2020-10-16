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
	{ 0xa3f12f69, "__crypto_xor" },
	{ 0x9d669763, "memcpy" },
	{ 0xbbe0eee7, "shash_register_instance" },
	{ 0x7593dcef, "shash_free_instance" },
	{ 0x19ce1a6, "crypto_init_spawn" },
	{ 0x85d33609, "crypto_alloc_instance" },
	{ 0x7ed5fd24, "crypto_mod_put" },
	{ 0xcf418512, "crypto_attr_alg2" },
	{ 0x243f0b4b, "crypto_check_attr_type" },
	{ 0x53f0650b, "crypto_spawn_tfm" },
	{ 0xae6283c2, "crypto_destroy_tfm" },
	{ 0x5f754e5a, "memset" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "FED0BD16DA4F7788278E80D");