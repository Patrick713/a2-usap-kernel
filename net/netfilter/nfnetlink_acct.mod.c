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
	{ 0xf4610713, "kmalloc_caches" },
	{ 0x2d6fcc06, "__kmalloc" },
	{ 0x984ce9bd, "__nla_parse" },
	{ 0x97255bdf, "strlen" },
	{ 0x19f462ab, "kfree_call_rcu" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0xe2b5e146, "refcount_inc_not_zero_checked" },
	{ 0x65465214, "skb_trim" },
	{ 0x89b8eb05, "nfnetlink_subsys_unregister" },
	{ 0xf1db1704, "nla_memcpy" },
	{ 0x65e2bb05, "unregister_pernet_subsys" },
	{ 0xc5850110, "printk" },
	{ 0xa5c2e213, "nla_put" },
	{ 0x84b183ae, "strncmp" },
	{ 0xf918f903, "netlink_unicast" },
	{ 0xc6f3b3fc, "refcount_dec_if_one" },
	{ 0xc1e58a5f, "refcount_dec_and_test_checked" },
	{ 0x12b548f6, "module_put" },
	{ 0x22bf2ba1, "__alloc_skb" },
	{ 0x2b560e16, "netlink_broadcast" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xd28c75bb, "kfree_skb" },
	{ 0xb041ec8d, "register_pernet_subsys" },
	{ 0xebaa9dc8, "kmem_cache_alloc_trace" },
	{ 0x2cfde9a2, "warn_slowpath_fmt" },
	{ 0xcfaabdb3, "nfnetlink_subsys_register" },
	{ 0x37a0cba, "kfree" },
	{ 0x6cdc5c6b, "nla_strlcpy" },
	{ 0xa8cd6c47, "nla_put_64bit" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xca54fee, "_test_and_set_bit" },
	{ 0x49ebacbd, "_clear_bit" },
	{ 0x94499ccd, "__nlmsg_put" },
	{ 0x717bcdac, "try_module_get" },
	{ 0x143ab15f, "__netlink_dump_start" },
};

MODULE_INFO(depends, "nfnetlink");


MODULE_INFO(srcversion, "C38EEB634016DCC446DE405");
