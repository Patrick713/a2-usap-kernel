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
	{ 0x3b73d86c, "inet6_lookup_listener" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0xe2b5e146, "refcount_inc_not_zero_checked" },
	{ 0x58d4952b, "tcp_hashinfo" },
	{ 0x1ff30b14, "udp6_lib_lookup" },
	{ 0x3a295b50, "__inet6_lookup_established" },
	{ 0xecd247a4, "sk_free" },
	{ 0xc1e58a5f, "refcount_dec_and_test_checked" },
	{ 0xd47006fe, "inet_twsk_deschedule_put" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x2cfde9a2, "warn_slowpath_fmt" },
	{ 0x77f6c690, "_raw_read_lock_bh" },
	{ 0x9acb8066, "_raw_read_unlock_bh" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x9b73dda5, "skb_copy_bits" },
};

MODULE_INFO(depends, "ipv6");


MODULE_INFO(srcversion, "78B6D521AF07AEC03CA54A4");
