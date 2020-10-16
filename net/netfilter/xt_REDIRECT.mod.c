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
	{ 0x91ae6be7, "xt_unregister_targets" },
	{ 0x343c048e, "xt_register_targets" },
	{ 0xc6473d45, "nf_nat_redirect_ipv6" },
	{ 0x20e1a7dd, "nf_ct_netns_put" },
	{ 0xabf78831, "nf_nat_redirect_ipv4" },
	{ 0xd8ba03c2, "nf_ct_netns_get" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

MODULE_INFO(depends, "x_tables,nf_nat,nf_conntrack");


MODULE_INFO(srcversion, "80AFB1D49799AC137463AAC");
