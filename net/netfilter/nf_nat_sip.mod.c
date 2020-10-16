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
	{ 0x876a17a3, "nf_ct_helper_expectfn_register" },
	{ 0x89705c09, "nf_nat_helper_register" },
	{ 0x6091797f, "synchronize_rcu" },
	{ 0xed2ee303, "nf_ct_helper_expectfn_unregister" },
	{ 0x3afd9206, "nf_nat_sip_hooks" },
	{ 0xfeb09b54, "nf_nat_helper_unregister" },
	{ 0xacfe8056, "ct_sip_parse_numerical_param" },
	{ 0x9fe559f6, "ct_sip_parse_address_param" },
	{ 0x76c4b4a2, "skb_ensure_writable" },
	{ 0x11cc8002, "ct_sip_parse_request" },
	{ 0x2aa0e4fc, "strncasecmp" },
	{ 0x885159ee, "ct_sip_parse_header_uri" },
	{ 0x82c7085d, "nf_ct_seqadj_set" },
	{ 0xef399fa8, "nf_ct_helper_log" },
	{ 0xec2f00c, "nf_ct_unexpect_related" },
	{ 0x8525bff4, "nf_ct_expect_related_report" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xef9e9c42, "ct_sip_get_header" },
	{ 0x652d7f89, "ct_sip_get_sdp_header" },
	{ 0x907618af, "__nf_nat_mangle_tcp_packet" },
	{ 0xff3d0a15, "nf_nat_mangle_udp_packet" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x8f3625fe, "_raw_spin_unlock_bh" },
	{ 0x2b5ab97d, "_raw_spin_lock_bh" },
	{ 0x4ea258d2, "nf_conntrack_expect_lock" },
	{ 0x988e1dc8, "nf_nat_setup_info" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

MODULE_INFO(depends, "nf_conntrack,nf_conntrack_sip,nf_nat");


MODULE_INFO(srcversion, "C9C4A1ED825419B5DDFB7AE");
