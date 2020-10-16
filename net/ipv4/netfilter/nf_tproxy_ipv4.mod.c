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
	{ 0xcf39c052, "inet_twsk_put" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0xe2b5e146, "refcount_inc_not_zero_checked" },
	{ 0x58d4952b, "tcp_hashinfo" },
	{ 0xecd247a4, "sk_free" },
	{ 0xc1e58a5f, "refcount_dec_and_test_checked" },
	{ 0xd47006fe, "inet_twsk_deschedule_put" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x2cfde9a2, "warn_slowpath_fmt" },
	{ 0xaa1427f5, "udp4_lib_lookup" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x23a5ccd9, "__inet_lookup_listener" },
	{ 0x9b73dda5, "skb_copy_bits" },
	{ 0x1279fd9d, "__inet_lookup_established" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "696B0B6333AC5FE7C9D8A23");
