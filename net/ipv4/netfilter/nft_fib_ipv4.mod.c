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
	{ 0x53e58893, "__fib_lookup" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0x468fae3b, "nft_register_expr" },
	{ 0x5f754e5a, "memset" },
	{ 0xc11ce336, "inet_dev_addr_type" },
	{ 0xf3a36ef2, "nft_fib_validate" },
	{ 0x1ee7bc89, "nft_fib_store_result" },
	{ 0x793ec61d, "nft_unregister_expr" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x830f2d6d, "fib_info_nh_uses_dev" },
	{ 0x1c9db082, "nft_fib_init" },
	{ 0xd6679e85, "fib_table_lookup" },
	{ 0x6d5bf833, "nft_fib_policy" },
	{ 0xf8831683, "nft_fib_dump" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x9b73dda5, "skb_copy_bits" },
};

MODULE_INFO(depends, "nf_tables,nft_fib");


MODULE_INFO(srcversion, "210EF046EC2824F4622D288");
