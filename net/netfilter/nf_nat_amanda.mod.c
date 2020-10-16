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
	{ 0x89705c09, "nf_nat_helper_register" },
	{ 0x6091797f, "synchronize_rcu" },
	{ 0x954780, "nf_nat_amanda_hook" },
	{ 0xfeb09b54, "nf_nat_helper_unregister" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xec2f00c, "nf_ct_unexpect_related" },
	{ 0xef399fa8, "nf_ct_helper_log" },
	{ 0xff3d0a15, "nf_nat_mangle_udp_packet" },
	{ 0x97255bdf, "strlen" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x8525bff4, "nf_ct_expect_related_report" },
	{ 0x1151a538, "nf_nat_follow_master" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

MODULE_INFO(depends, "nf_conntrack,nf_conntrack_amanda,nf_nat");


MODULE_INFO(srcversion, "AA923A16FE49D97DDF42459");
