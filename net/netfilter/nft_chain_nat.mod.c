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
	{ 0xbe78ca11, "nf_nat_ipv4_unregister_fn" },
	{ 0xc7f2f82a, "nf_nat_ipv4_register_fn" },
	{ 0xe4dc180c, "nf_nat_ipv6_unregister_fn" },
	{ 0x1b67788b, "nf_nat_ipv6_register_fn" },
	{ 0x63cce86b, "nft_unregister_chain_type" },
	{ 0xd4b439e2, "nft_register_chain_type" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x96014bc3, "nft_do_chain" },
	{ 0xe970d719, "ipv6_find_hdr" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x4be994d0, "nf_nat_inet_register_fn" },
	{ 0x142f624e, "nf_nat_inet_unregister_fn" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

MODULE_INFO(depends, "nf_nat,nf_tables");


MODULE_INFO(srcversion, "127E6F28303A0DD67539F6A");
