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
	{ 0x6091797f, "synchronize_rcu" },
	{ 0xed2ee303, "nf_ct_helper_expectfn_unregister" },
	{ 0x876a17a3, "nf_ct_helper_expectfn_register" },
	{ 0x83a3bdfd, "nat_q931_hook" },
	{ 0xb3be4457, "nat_callforwarding_hook" },
	{ 0x62a89d64, "nat_h245_hook" },
	{ 0x2880e210, "nat_t120_hook" },
	{ 0x42b02690, "nat_rtp_rtcp_hook" },
	{ 0x6ac1ffb, "set_ras_addr_hook" },
	{ 0xbf68044a, "set_sig_addr_hook" },
	{ 0x236250d2, "set_h225_addr_hook" },
	{ 0xf58116c7, "set_h245_addr_hook" },
	{ 0xec2f00c, "nf_ct_unexpect_related" },
	{ 0x40c8cddf, "get_h225_addr" },
	{ 0x8525bff4, "nf_ct_expect_related_report" },
	{ 0xc5850110, "printk" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0x9b73dda5, "skb_copy_bits" },
	{ 0x907618af, "__nf_nat_mangle_tcp_packet" },
	{ 0xff3d0a15, "nf_nat_mangle_udp_packet" },
	{ 0x1151a538, "nf_nat_follow_master" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x988e1dc8, "nf_nat_setup_info" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

MODULE_INFO(depends, "nf_conntrack,nf_conntrack_h323,nf_nat");


MODULE_INFO(srcversion, "6444D29D128E41F19DC10B8");
