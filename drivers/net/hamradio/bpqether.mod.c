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
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0xae947aa3, "remove_proc_entry" },
	{ 0x9d0d6206, "unregister_netdevice_notifier" },
	{ 0x82910dab, "dev_remove_pack" },
	{ 0xd2da1048, "register_netdevice_notifier" },
	{ 0x3c7af4b6, "dev_add_pack" },
	{ 0xf509040f, "proc_create_seq_private" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x5f754e5a, "memset" },
	{ 0xae353d77, "arm_copy_from_user" },
	{ 0xc6cbbc89, "capable" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x2d580f47, "ax25_ip_xmit" },
	{ 0xc5850110, "printk" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0x7d6174de, "netif_tx_wake_queue" },
	{ 0x952da7ff, "dev_queue_xmit" },
	{ 0x3bdc1db7, "__pskb_pull_tail" },
	{ 0x927d2b0f, "netif_rx" },
	{ 0xf68b0045, "skb_push" },
	{ 0x65465214, "skb_trim" },
	{ 0x28f7fb79, "skb_pull" },
	{ 0xa748a031, "pskb_expand_head" },
	{ 0xa46a0f7a, "consume_skb" },
	{ 0x36f6c5e6, "skb_clone" },
	{ 0xd28c75bb, "kfree_skb" },
	{ 0x5d7776e5, "seq_puts" },
	{ 0xc8275115, "seq_printf" },
	{ 0xbadd1a4b, "free_netdev" },
	{ 0x89ea10c3, "dev_close" },
	{ 0xf6c8eae0, "register_netdevice" },
	{ 0x5c5b2589, "alloc_netdev_mqs" },
	{ 0x84b183ae, "strncmp" },
	{ 0xd2aeaa09, "init_net" },
	{ 0x4d0ad59d, "unregister_netdevice_queue" },
	{ 0x49ebacbd, "_clear_bit" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0x9d669763, "memcpy" },
	{ 0x3a5a2096, "ax25_header_ops" },
	{ 0xaeb7451e, "ax25_defaddr" },
	{ 0xac93ae05, "ax25_bcast" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

MODULE_INFO(depends, "ax25");


MODULE_INFO(srcversion, "E466A10726C58CAE0A8451C");
