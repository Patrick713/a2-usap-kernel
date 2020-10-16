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
	{ 0xd52a670d, "eth_mac_addr" },
	{ 0x337f2432, "l2tp_nl_unregister_ops" },
	{ 0xc5850110, "printk" },
	{ 0xa84ad3f4, "l2tp_nl_register_ops" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x2f19f539, "l2tp_session_free" },
	{ 0x37a0cba, "kfree" },
	{ 0xbadd1a4b, "free_netdev" },
	{ 0xd7333104, "l2tp_session_delete" },
	{ 0xb66bc471, "__module_get" },
	{ 0xc1e58a5f, "refcount_dec_and_test_checked" },
	{ 0xf6c8eae0, "register_netdevice" },
	{ 0x217754c2, "l2tp_session_register" },
	{ 0x1ee8d6d4, "refcount_inc_checked" },
	{ 0xb76b5caa, "release_sock" },
	{ 0x40f9ab4b, "kernel_sock_ip_overhead" },
	{ 0xdcb92140, "lock_sock_nested" },
	{ 0x5c5b2589, "alloc_netdev_mqs" },
	{ 0x6871f07d, "l2tp_session_create" },
	{ 0x73e20c1c, "strlcpy" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x9d8a03e9, "__skb_ext_del" },
	{ 0x3bdc1db7, "__pskb_pull_tail" },
	{ 0xb545fc7c, "dst_release" },
	{ 0x2a18c74, "nf_conntrack_destroy" },
	{ 0xd28c75bb, "kfree_skb" },
	{ 0x3b8aaf89, "dev_forward_skb" },
	{ 0x12b548f6, "module_put" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0x4d0ad59d, "unregister_netdevice_queue" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0x90ae163f, "l2tp_xmit_skb" },
	{ 0xabf7ad06, "ether_setup" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

MODULE_INFO(depends, "l2tp_netlink,l2tp_core");


MODULE_INFO(srcversion, "52DA3923CA63FF798CEC380");
