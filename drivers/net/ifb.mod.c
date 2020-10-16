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
	{ 0x12bc1f9d, "eth_validate_addr" },
	{ 0x9cd4091f, "rtnl_link_unregister" },
	{ 0x7e0ce0c3, "up_write" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0x34b97794, "__rtnl_link_unregister" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0xbadd1a4b, "free_netdev" },
	{ 0xf6c8eae0, "register_netdevice" },
	{ 0x5c5b2589, "alloc_netdev_mqs" },
	{ 0xc2c06acb, "__rtnl_link_register" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0x4253aa7e, "down_write" },
	{ 0x21726652, "pernet_ops_rwsem" },
	{ 0x37a0cba, "kfree" },
	{ 0xd28c75bb, "kfree_skb" },
	{ 0x82072614, "tasklet_kill" },
	{ 0x7d6174de, "netif_tx_wake_queue" },
	{ 0x36fbf3aa, "netif_receive_skb" },
	{ 0x1555017a, "skb_pull_rcsum" },
	{ 0xacb31ecf, "_raw_spin_trylock" },
	{ 0x952da7ff, "dev_queue_xmit" },
	{ 0x2f780b39, "dev_get_by_index_rcu" },
	{ 0x9545af6d, "tasklet_init" },
	{ 0x2d6fcc06, "__kmalloc" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0xabf7ad06, "ether_setup" },
	{ 0x49ebacbd, "_clear_bit" },
	{ 0x15ef4f75, "netif_tx_stop_all_queues" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0xfaef0ed, "__tasklet_schedule" },
	{ 0xca54fee, "_test_and_set_bit" },
	{ 0xa46a0f7a, "consume_skb" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "A734F78712E8C29F996B503");
