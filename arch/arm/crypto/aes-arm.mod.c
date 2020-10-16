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
	{ 0xa84ce9e0, "crypto_aes_inv_sbox" },
	{ 0x1a10c32b, "crypto_ft_tab" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0xd697e69a, "trace_hardirqs_on" },
	{ 0x8ab0c3b8, "crypto_register_alg" },
	{ 0x7c6f8920, "crypto_aes_set_key" },
	{ 0x56054c05, "crypto_it_tab" },
	{ 0xec3d2e1b, "trace_hardirqs_off" },
	{ 0xbaf3bdff, "crypto_unregister_alg" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "65185DA0393631B8A9156F4");
