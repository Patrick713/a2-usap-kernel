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
	{ 0xf6c8eae0, "register_netdevice" },
	{ 0x609f1c7e, "synchronize_net" },
	{ 0xa24f23d8, "__request_module" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0x2b5ab97d, "_raw_spin_lock_bh" },
	{ 0xd2da1048, "register_netdevice_notifier" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0x9d0d6206, "unregister_netdevice_notifier" },
	{ 0x3bdc1db7, "__pskb_pull_tail" },
	{ 0x5f754e5a, "memset" },
	{ 0x71c90087, "memcmp" },
	{ 0x4d9b652b, "rb_erase" },
	{ 0xf68b0045, "skb_push" },
	{ 0x28f7fb79, "skb_pull" },
	{ 0x8f3625fe, "_raw_spin_unlock_bh" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xa748a031, "pskb_expand_head" },
	{ 0xa5526619, "rb_insert_color" },
	{ 0x4d0ad59d, "unregister_netdevice_queue" },
	{ 0x9c64d457, "netdev_warn" },
	{ 0x1738c19e, "_raw_write_unlock_bh" },
	{ 0x2cfde9a2, "warn_slowpath_fmt" },
	{ 0x77f6c690, "_raw_read_lock_bh" },
	{ 0x40f2ccab, "addrconf_prefix_rcv_add_addr" },
	{ 0x9acb8066, "_raw_read_unlock_bh" },
	{ 0x9d669763, "memcpy" },
	{ 0x7e759ed8, "addrconf_add_linklocal" },
	{ 0xf626c583, "__ndisc_fill_addr_option" },
	{ 0xefb7bccf, "_raw_write_lock_bh" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x49ebacbd, "_clear_bit" },
	{ 0xd542439, "__ipv6_addr_type" },
	{ 0x6e720ff2, "rtnl_unlock" },
};

MODULE_INFO(depends, "ipv6");


MODULE_INFO(srcversion, "DA9FF2AE9A5FCA56519128A");
