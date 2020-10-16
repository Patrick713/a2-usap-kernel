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
	{ 0xa5f71562, "nft_reject_policy" },
	{ 0x793ec61d, "nft_unregister_expr" },
	{ 0x468fae3b, "nft_register_expr" },
	{ 0x2b23d14a, "nf_reject_ip_tcphdr_put" },
	{ 0xd1ddebdb, "nf_reject_ip_tcphdr_get" },
	{ 0x3f1bee22, "nf_reject_ip6_tcphdr_put" },
	{ 0x15b20347, "nf_reject_ip6_tcphdr_get" },
	{ 0xe2c84666, "nft_reject_icmp_code" },
	{ 0x1de558c1, "nft_reject_icmpv6_code" },
	{ 0x2124474, "ip_send_check" },
	{ 0x8e23649f, "nf_reject_iphdr_put" },
	{ 0xf3f4fee9, "nf_ip_checksum" },
	{ 0xa7e816fb, "pskb_trim_rcsum_slow" },
	{ 0x3bdc1db7, "__pskb_pull_tail" },
	{ 0xf2270f9e, "br_forward" },
	{ 0x44da5d0f, "__csum_ipv6_magic" },
	{ 0xe113bbbc, "csum_partial" },
	{ 0x9d669763, "memcpy" },
	{ 0xeab3fd69, "skb_put" },
	{ 0x5ee78166, "nf_reject_ip6hdr_put" },
	{ 0x22bf2ba1, "__alloc_skb" },
	{ 0x89e39bc1, "nf_ip6_checksum" },
	{ 0xd9fcfa3e, "ipv6_skip_exthdr" },
	{ 0x28f7fb79, "skb_pull" },
	{ 0xf68b0045, "skb_push" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xa5c2e213, "nla_put" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xf520177b, "nft_chain_validate_hooks" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

MODULE_INFO(depends, "nft_reject,nf_tables,nf_reject_ipv4,nf_reject_ipv6,bridge");


MODULE_INFO(srcversion, "443BE7A938A7A786F1CE19B");
