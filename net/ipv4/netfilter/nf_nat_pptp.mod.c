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
	{ 0xc1e18df5, "nf_nat_pptp_hook_expectfn" },
	{ 0x72e12c20, "nf_nat_pptp_hook_exp_gre" },
	{ 0xf548685c, "nf_nat_pptp_hook_inbound" },
	{ 0x4eccfd17, "nf_nat_pptp_hook_outbound" },
	{ 0x907618af, "__nf_nat_mangle_tcp_packet" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x988e1dc8, "nf_nat_setup_info" },
	{ 0xcb28fe43, "nf_ct_expect_put" },
	{ 0xec2f00c, "nf_ct_unexpect_related" },
	{ 0x80ac73f1, "nf_ct_expect_find_get" },
	{ 0x45e36696, "nf_ct_nat_ext_add" },
	{ 0x5f754e5a, "memset" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x2cfde9a2, "warn_slowpath_fmt" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

MODULE_INFO(depends, "nf_conntrack_pptp,nf_nat,nf_conntrack");


MODULE_INFO(srcversion, "7FFBF2B61F70FF1D9671451");
