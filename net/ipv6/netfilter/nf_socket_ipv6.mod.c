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
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0xe970d719, "ipv6_find_hdr" },
	{ 0x58d4952b, "tcp_hashinfo" },
	{ 0x1ff30b14, "udp6_lib_lookup" },
	{ 0xd9fcfa3e, "ipv6_skip_exthdr" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x911ee57, "inet6_lookup" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x9b73dda5, "skb_copy_bits" },
};

MODULE_INFO(depends, "ipv6");


MODULE_INFO(srcversion, "D5FF68C1EECC7AB2BF6D155");
