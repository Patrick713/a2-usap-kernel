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
	{ 0xf866b118, "sock_diag_put_meminfo" },
	{ 0x97255bdf, "strlen" },
	{ 0xde004450, "from_kuid_munged" },
	{ 0x67b02e99, "sock_diag_unregister" },
	{ 0x2b5ab97d, "_raw_spin_lock_bh" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0x5b470551, "sock_i_ino" },
	{ 0xe2b5e146, "refcount_inc_not_zero_checked" },
	{ 0x526c3a6c, "jiffies" },
	{ 0x65465214, "skb_trim" },
	{ 0x16811fec, "sock_diag_register" },
	{ 0x5f754e5a, "memset" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0x71c90087, "memcmp" },
	{ 0xcd279169, "nla_find" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0xa5c2e213, "nla_put" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0xf918f903, "netlink_unicast" },
	{ 0x5807e2d3, "nla_reserve_64bit" },
	{ 0xf665f74f, "sock_load_diag_module" },
	{ 0x22bf2ba1, "__alloc_skb" },
	{ 0x8f3625fe, "_raw_spin_unlock_bh" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x2e2788c1, "sock_diag_unregister_inet_compat" },
	{ 0xd28c75bb, "kfree_skb" },
	{ 0x911ee57, "inet6_lookup" },
	{ 0x5261c012, "sock_gen_put" },
	{ 0xebaa9dc8, "kmem_cache_alloc_trace" },
	{ 0xdb9ca3c5, "_raw_spin_lock" },
	{ 0x2cfde9a2, "warn_slowpath_fmt" },
	{ 0x37a0cba, "kfree" },
	{ 0xc98565c6, "sock_diag_check_cookie" },
	{ 0x195dac30, "sock_diag_save_cookie" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x23a5ccd9, "__inet_lookup_listener" },
	{ 0x500b89be, "sock_diag_register_inet_compat" },
	{ 0x94499ccd, "__nlmsg_put" },
	{ 0x8d4db28b, "sock_i_uid" },
	{ 0x143ab15f, "__netlink_dump_start" },
	{ 0x9aed8ccb, "netlink_net_capable" },
	{ 0x1279fd9d, "__inet_lookup_established" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "19CBFA2AB1E9AA24AAC507C");
