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
	{ 0x9a152689, "param_ops_int" },
	{ 0x2e700e5f, "unregister_qdisc" },
	{ 0xbadd1a4b, "free_netdev" },
	{ 0xdea8fa68, "unregister_netdev" },
	{ 0x147b80ff, "register_qdisc" },
	{ 0x73e20c1c, "strlcpy" },
	{ 0xcc7044cf, "register_netdev" },
	{ 0x5c5b2589, "alloc_netdev_mqs" },
	{ 0x8da4fe14, "softnet_data" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xa67c21ce, "__neigh_event_send" },
	{ 0x6ab6c6ff, "__neigh_create" },
	{ 0x76dbda3b, "neigh_destroy" },
	{ 0x9d669763, "memcpy" },
	{ 0xc1e58a5f, "refcount_dec_and_test_checked" },
	{ 0x319ec023, "neigh_lookup" },
	{ 0xa46a0f7a, "consume_skb" },
	{ 0xacb31ecf, "_raw_spin_trylock" },
	{ 0x526c3a6c, "jiffies" },
	{ 0xc8e55eef, "noop_qdisc" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x2cfde9a2, "warn_slowpath_fmt" },
	{ 0x8f3625fe, "_raw_spin_unlock_bh" },
	{ 0x203ae12b, "qdisc_reset" },
	{ 0x2b5ab97d, "_raw_spin_lock_bh" },
	{ 0x85670f1d, "rtnl_is_locked" },
	{ 0x2d9ecd4c, "skb_queue_purge" },
	{ 0x49ebacbd, "_clear_bit" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0x7d6174de, "netif_tx_wake_queue" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "6CEAE89785AD5EABE918185");
