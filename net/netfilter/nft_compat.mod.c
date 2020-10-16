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
	{ 0x89b8eb05, "nfnetlink_subsys_unregister" },
	{ 0x793ec61d, "nft_unregister_expr" },
	{ 0xcfaabdb3, "nfnetlink_subsys_register" },
	{ 0x468fae3b, "nft_register_expr" },
	{ 0x2cfde9a2, "warn_slowpath_fmt" },
	{ 0xc5850110, "printk" },
	{ 0xd28c75bb, "kfree_skb" },
	{ 0x65465214, "skb_trim" },
	{ 0xa24f23d8, "__request_module" },
	{ 0xf918f903, "netlink_unicast" },
	{ 0xa5c2e213, "nla_put" },
	{ 0x97255bdf, "strlen" },
	{ 0x94499ccd, "__nlmsg_put" },
	{ 0x22bf2ba1, "__alloc_skb" },
	{ 0xddf68fc6, "xt_find_revision" },
	{ 0x717bcdac, "try_module_get" },
	{ 0x7fba2430, "nla_reserve" },
	{ 0x2d6fcc06, "__kmalloc" },
	{ 0x12b7fe67, "xt_check_match" },
	{ 0xb44cec41, "xt_request_find_match" },
	{ 0xebaa9dc8, "kmem_cache_alloc_trace" },
	{ 0xf4610713, "kmalloc_caches" },
	{ 0x1720a9e1, "xt_request_find_target" },
	{ 0x2e052f25, "xt_check_target" },
	{ 0x9d669763, "memcpy" },
	{ 0x5f754e5a, "memset" },
	{ 0x984ce9bd, "__nla_parse" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x37a0cba, "kfree" },
	{ 0x12b548f6, "module_put" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

MODULE_INFO(depends, "nfnetlink,nf_tables,x_tables");


MODULE_INFO(srcversion, "C6E66408D0A1E3A595A4E7B");
