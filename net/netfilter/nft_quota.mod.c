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
	{ 0x793ec61d, "nft_unregister_expr" },
	{ 0x30a34053, "nft_unregister_obj" },
	{ 0x468fae3b, "nft_register_expr" },
	{ 0xb12e4cd9, "nft_register_obj" },
	{ 0x5ccd5d5a, "nft_obj_notify" },
	{ 0xca54fee, "_test_and_set_bit" },
	{ 0xf1db1704, "nla_memcpy" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x49ebacbd, "_clear_bit" },
	{ 0xa5c2e213, "nla_put" },
	{ 0xa8cd6c47, "nla_put_64bit" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

MODULE_INFO(depends, "nf_tables");


MODULE_INFO(srcversion, "B2F6C4AEA3B7F19AEF10F21");
