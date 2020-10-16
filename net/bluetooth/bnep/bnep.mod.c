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
	{ 0x92849d17, "sock_init_data" },
	{ 0xa7b3181c, "up_read" },
	{ 0x11201734, "kernel_sendmsg" },
	{ 0x9b182b2, "sockfd_lookup" },
	{ 0xf07b6b1c, "sock_no_setsockopt" },
	{ 0xa2d19421, "sock_no_getsockopt" },
	{ 0x983ac031, "remove_wait_queue" },
	{ 0xb308c97d, "wait_woken" },
	{ 0x873315f7, "sock_no_getname" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0xfe41fb0b, "param_ops_bool" },
	{ 0xae353d77, "arm_copy_from_user" },
	{ 0xc5d177df, "bt_sock_register" },
	{ 0xdd34010a, "kthread_create_on_node" },
	{ 0x526c3a6c, "jiffies" },
	{ 0x51a910c0, "arm_copy_to_user" },
	{ 0xfb1d7438, "down_read" },
	{ 0x7b8c32f1, "bt_err" },
	{ 0x718b8b7, "bt_info" },
	{ 0x3bdc1db7, "__pskb_pull_tail" },
	{ 0x2478a81f, "sock_no_mmap" },
	{ 0x7291521b, "sock_no_recvmsg" },
	{ 0x4dee5051, "bt_sock_unlink" },
	{ 0x5f754e5a, "memset" },
	{ 0x80df3806, "netif_rx_ni" },
	{ 0x8ea569b7, "sock_no_socketpair" },
	{ 0x7d6174de, "netif_tx_wake_queue" },
	{ 0x27073f33, "sk_alloc" },
	{ 0x4281b819, "l2cap_is_socket" },
	{ 0x26dd6bb9, "sock_no_bind" },
	{ 0x71c90087, "memcmp" },
	{ 0x7b5ce5c3, "baswap" },
	{ 0xbadd1a4b, "free_netdev" },
	{ 0xcc7044cf, "register_netdev" },
	{ 0x65923774, "sock_no_listen" },
	{ 0xdabddb4d, "sock_no_accept" },
	{ 0xecd247a4, "sk_free" },
	{ 0xc1e58a5f, "refcount_dec_and_test_checked" },
	{ 0x8fea24bd, "bt_sock_unregister" },
	{ 0x28f7fb79, "skb_pull" },
	{ 0x7e0ce0c3, "up_write" },
	{ 0xd2aeaa09, "init_net" },
	{ 0x4253aa7e, "down_write" },
	{ 0xa92173df, "fput" },
	{ 0xdb30a522, "sock_no_shutdown" },
	{ 0x8e03ed31, "bt_sock_link" },
	{ 0x12b548f6, "module_put" },
	{ 0xac6659eb, "skb_queue_tail" },
	{ 0xc6cbbc89, "capable" },
	{ 0xd0654aba, "woken_wake_function" },
	{ 0x9adc4641, "proto_register" },
	{ 0x22bf2ba1, "__alloc_skb" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xd28c75bb, "kfree_skb" },
	{ 0x7c4749d7, "proto_unregister" },
	{ 0x5c5b2589, "alloc_netdev_mqs" },
	{ 0xc4e588b, "eth_type_trans" },
	{ 0x53dc1649, "__module_put_and_exit" },
	{ 0xb35d51ab, "wake_up_process" },
	{ 0xabf7ad06, "ether_setup" },
	{ 0xb66bc471, "__module_get" },
	{ 0x3dcf1ffa, "__wake_up" },
	{ 0xcbf0386c, "sock_no_connect" },
	{ 0x1738c19e, "_raw_write_unlock_bh" },
	{ 0x12bc1f9d, "eth_validate_addr" },
	{ 0xa17bd3fc, "add_wait_queue" },
	{ 0x9d669763, "memcpy" },
	{ 0x943dc8aa, "crc32_be" },
	{ 0x6c226e27, "sock_no_sendmsg" },
	{ 0xea48c6b2, "set_user_nice" },
	{ 0xefb7bccf, "_raw_write_lock_bh" },
	{ 0xc63f0f54, "bt_procfs_init" },
	{ 0x4ac49f05, "skb_dequeue" },
	{ 0xdea8fa68, "unregister_netdev" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0xca54fee, "_test_and_set_bit" },
	{ 0x49ebacbd, "_clear_bit" },
	{ 0xda8e882e, "bt_procfs_cleanup" },
	{ 0xe914e41e, "strcpy" },
};

MODULE_INFO(depends, "bluetooth");


MODULE_INFO(srcversion, "5EB8AAF4BEA7B3157007CA8");
