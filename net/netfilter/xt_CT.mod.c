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
	{ 0xbc25f9f7, "xt_unregister_target" },
	{ 0x343c048e, "xt_register_targets" },
	{ 0xb02595c, "xt_register_target" },
	{ 0xee43fd9b, "___ratelimit" },
	{ 0x6044bb2c, "nf_ct_helper_ext_add" },
	{ 0x3294371a, "nf_conntrack_helper_try_module_get" },
	{ 0xd9ce8f0c, "strnlen" },
	{ 0xb6f126c2, "nf_ct_ext_add" },
	{ 0x7c30edcc, "nf_ct_tmpl_free" },
	{ 0x4cbe5db1, "nf_ct_tmpl_alloc" },
	{ 0xd8ba03c2, "nf_ct_netns_get" },
	{ 0xc5850110, "printk" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x5f754e5a, "memset" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x2cfde9a2, "warn_slowpath_fmt" },
	{ 0x2a18c74, "nf_conntrack_destroy" },
	{ 0x20e1a7dd, "nf_ct_netns_put" },
	{ 0x23642cb6, "nf_conntrack_helper_put" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

MODULE_INFO(depends, "x_tables,nf_conntrack");


MODULE_INFO(srcversion, "7D4AFAF6904113AA04ED85D");
