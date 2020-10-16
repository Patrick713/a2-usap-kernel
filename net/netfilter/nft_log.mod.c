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
	{ 0x468fae3b, "nft_register_expr" },
	{ 0xeb37101c, "audit_log_end" },
	{ 0x53d2a60f, "audit_log_start" },
	{ 0xb44e18ea, "audit_enabled" },
	{ 0xdbe045e6, "nf_log_packet" },
	{ 0xa5c2e213, "nla_put" },
	{ 0x97255bdf, "strlen" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xe1dcf64a, "audit_log_format" },
	{ 0xd9fcfa3e, "ipv6_skip_exthdr" },
	{ 0x9b73dda5, "skb_copy_bits" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xb8cd3a7f, "nf_logger_put" },
	{ 0x37a0cba, "kfree" },
	{ 0xd1f2eee2, "nf_logger_find_get" },
	{ 0x6cdc5c6b, "nla_strlcpy" },
	{ 0x2d6fcc06, "__kmalloc" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

MODULE_INFO(depends, "nf_tables");


MODULE_INFO(srcversion, "EBC2299A4E3F98ED39135C3");
