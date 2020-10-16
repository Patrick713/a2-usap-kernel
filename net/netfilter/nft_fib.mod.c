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
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

static const struct modversion_info ____versions[]
__used __section(__versions) = {
	{ 0xe9942317, "module_layout" },
	{ 0x1e6b75a3, "nft_parse_register" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0x7e5cb191, "nft_validate_register_store" },
	{ 0xf520177b, "nft_chain_validate_hooks" },
	{ 0x328a05f1, "strncpy" },
	{ 0xa5c2e213, "nla_put" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x2cfde9a2, "warn_slowpath_fmt" },
	{ 0x2b805a6, "nft_dump_register" },
	{ 0x8f678b07, "__stack_chk_guard" },
};

MODULE_INFO(depends, "nf_tables");


MODULE_INFO(srcversion, "BF08B3B89F5E1E21F34815E");
