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
	{ 0x30a34053, "nft_unregister_obj" },
	{ 0x793ec61d, "nft_unregister_expr" },
	{ 0xb12e4cd9, "nft_register_obj" },
	{ 0x468fae3b, "nft_register_expr" },
	{ 0xb545fc7c, "dst_release" },
	{ 0xae39f80e, "dst_cache_init" },
	{ 0x9d669763, "memcpy" },
	{ 0xc05aa870, "metadata_dst_alloc" },
	{ 0x5f754e5a, "memset" },
	{ 0x984ce9bd, "__nla_parse" },
	{ 0x7e5cb191, "nft_validate_register_store" },
	{ 0x1e6b75a3, "nft_parse_register" },
	{ 0x2b805a6, "nft_dump_register" },
	{ 0x2cfde9a2, "warn_slowpath_fmt" },
	{ 0xd10d61ee, "metadata_dst_free" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xa5c2e213, "nla_put" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

MODULE_INFO(depends, "nf_tables");


MODULE_INFO(srcversion, "E3B16F15179492C9DBB2397");
