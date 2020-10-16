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
	{ 0x61279834, "__nf_ct_refresh_acct" },
	{ 0x20000329, "simple_strtoul" },
	{ 0x4a3bee79, "nf_ct_expect_init" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0xa460dd23, "textsearch_prepare" },
	{ 0x97a2cafb, "nf_conntrack_helpers_register" },
	{ 0x3b5cb4ee, "skb_find_text" },
	{ 0x4be0fc9e, "param_ops_charp" },
	{ 0xc5850110, "printk" },
	{ 0xcb28fe43, "nf_ct_expect_put" },
	{ 0xc1769b54, "nf_ct_expect_alloc" },
	{ 0x8525bff4, "nf_ct_expect_related_report" },
	{ 0x55f9e831, "nf_conntrack_helpers_unregister" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xef399fa8, "nf_ct_helper_log" },
	{ 0xc7601da2, "textsearch_destroy" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x8a331d2b, "param_ops_uint" },
	{ 0x9b73dda5, "skb_copy_bits" },
};

MODULE_INFO(depends, "nf_conntrack");


MODULE_INFO(srcversion, "A89D4B0A487F3A07F03BA33");
