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
	{ 0x6d5bf833, "nft_fib_policy" },
	{ 0xf3a36ef2, "nft_fib_validate" },
	{ 0xf8831683, "nft_fib_dump" },
	{ 0x1c9db082, "nft_fib_init" },
	{ 0x793ec61d, "nft_unregister_expr" },
	{ 0x468fae3b, "nft_register_expr" },
	{ 0x64d7619a, "nft_fib6_eval" },
	{ 0xb22f11df, "nft_fib4_eval" },
	{ 0xacfb20e6, "nft_fib4_eval_type" },
	{ 0xa3940ae, "nft_fib6_eval_type" },
	{ 0x437eb1df, "ipv6_mod_enabled" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

MODULE_INFO(depends, "nft_fib,nf_tables,nft_fib_ipv6,nft_fib_ipv4,ipv6");


MODULE_INFO(srcversion, "CB653652C63C162E33233FD");
