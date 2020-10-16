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
	{ 0xfebfca3a, "tcf_em_unregister" },
	{ 0x2d6cf2f6, "tcf_em_register" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x2cfde9a2, "warn_slowpath_fmt" },
	{ 0x3bdc1db7, "__pskb_pull_tail" },
	{ 0x2f780b39, "dev_get_by_index_rcu" },
	{ 0x9b73dda5, "skb_copy_bits" },
	{ 0xf68b0045, "skb_push" },
	{ 0x61e36238, "ip_set_test" },
	{ 0x28f7fb79, "skb_pull" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xb1b939e, "kmemdup" },
	{ 0x76a05ef6, "ip_set_nfnl_get_byindex" },
	{ 0x37a0cba, "kfree" },
	{ 0x2525497f, "ip_set_nfnl_put" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

MODULE_INFO(depends, "ip_set");


MODULE_INFO(srcversion, "2FFEEF47248D946AED3F588");
