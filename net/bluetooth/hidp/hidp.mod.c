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
	{ 0x2d3385d3, "system_wq" },
	{ 0x4199fd5c, "skb_queue_head" },
	{ 0xbf2ad2a5, "hid_add_device" },
	{ 0x92849d17, "sock_init_data" },
	{ 0x53d4b4e2, "hid_ignore" },
	{ 0xa7b3181c, "up_read" },
	{ 0x11201734, "kernel_sendmsg" },
	{ 0x9b182b2, "sockfd_lookup" },
	{ 0x2b68bd2f, "del_timer" },
	{ 0xf07b6b1c, "sock_no_setsockopt" },
	{ 0xf10412ae, "hid_parse_report" },
	{ 0xa2d19421, "sock_no_getsockopt" },
	{ 0x983ac031, "remove_wait_queue" },
	{ 0xb308c97d, "wait_woken" },
	{ 0x2a3aa678, "_test_and_clear_bit" },
	{ 0x4205ad24, "cancel_work_sync" },
	{ 0x873315f7, "sock_no_getname" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xae353d77, "arm_copy_from_user" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0xc5d177df, "bt_sock_register" },
	{ 0xeea0399, "strscpy" },
	{ 0xdd34010a, "kthread_create_on_node" },
	{ 0x526c3a6c, "jiffies" },
	{ 0x11aa29ed, "hid_input_report" },
	{ 0x51a910c0, "arm_copy_to_user" },
	{ 0xfb1d7438, "down_read" },
	{ 0x7b8c32f1, "bt_err" },
	{ 0x718b8b7, "bt_info" },
	{ 0x3bdc1db7, "__pskb_pull_tail" },
	{ 0x38ea3b28, "input_event" },
	{ 0x5bbe49f4, "__init_waitqueue_head" },
	{ 0x2478a81f, "sock_no_mmap" },
	{ 0x7291521b, "sock_no_recvmsg" },
	{ 0x4dee5051, "bt_sock_unlink" },
	{ 0x2d9ecd4c, "skb_queue_purge" },
	{ 0x5f754e5a, "memset" },
	{ 0x8ea569b7, "sock_no_socketpair" },
	{ 0x82c697d7, "l2cap_conn_put" },
	{ 0x27073f33, "sk_alloc" },
	{ 0x3375510b, "mutex_lock_interruptible" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0x4281b819, "l2cap_is_socket" },
	{ 0x26dd6bb9, "sock_no_bind" },
	{ 0x71c90087, "memcmp" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x65923774, "sock_no_listen" },
	{ 0x73e20c1c, "strlcpy" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0xdabddb4d, "sock_no_accept" },
	{ 0xecd247a4, "sk_free" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0xc1e58a5f, "refcount_dec_and_test_checked" },
	{ 0x8fea24bd, "bt_sock_unregister" },
	{ 0x28f7fb79, "skb_pull" },
	{ 0x7e0ce0c3, "up_write" },
	{ 0xd2aeaa09, "init_net" },
	{ 0x4253aa7e, "down_write" },
	{ 0xa92173df, "fput" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xdb30a522, "sock_no_shutdown" },
	{ 0x8e03ed31, "bt_sock_link" },
	{ 0xac6659eb, "skb_queue_tail" },
	{ 0xc6cbbc89, "capable" },
	{ 0xd0654aba, "woken_wake_function" },
	{ 0x9adc4641, "proto_register" },
	{ 0x22bf2ba1, "__alloc_skb" },
	{ 0xebcc8bdd, "put_device" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x7b0629e7, "input_register_device" },
	{ 0x1000e51, "schedule" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x77f6f183, "kmalloc_order_trace" },
	{ 0xd28c75bb, "kfree_skb" },
	{ 0x7c4749d7, "proto_unregister" },
	{ 0xd9e658a3, "l2cap_register_user" },
	{ 0x53dc1649, "__module_put_and_exit" },
	{ 0xb35d51ab, "wake_up_process" },
	{ 0x281ef26a, "hid_destroy_device" },
	{ 0xed10eef9, "hid_allocate_device" },
	{ 0xbfee5c38, "l2cap_conn_get" },
	{ 0xde147102, "get_device" },
	{ 0xb66bc471, "__module_get" },
	{ 0x3dcf1ffa, "__wake_up" },
	{ 0x647af474, "prepare_to_wait_event" },
	{ 0xcbf0386c, "sock_no_connect" },
	{ 0x1738c19e, "_raw_write_unlock_bh" },
	{ 0xa17bd3fc, "add_wait_queue" },
	{ 0x37a0cba, "kfree" },
	{ 0x9d669763, "memcpy" },
	{ 0xc0e66c25, "input_unregister_device" },
	{ 0x6c226e27, "sock_no_sendmsg" },
	{ 0xea48c6b2, "set_user_nice" },
	{ 0xefb7bccf, "_raw_write_lock_bh" },
	{ 0x49970de8, "finish_wait" },
	{ 0xc63f0f54, "bt_procfs_init" },
	{ 0x4ac49f05, "skb_dequeue" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xe2e8065e, "memdup_user" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0xb2d48a2e, "queue_work_on" },
	{ 0xc358aaf8, "snprintf" },
	{ 0x1ee8d6d4, "refcount_inc_checked" },
	{ 0x49ebacbd, "_clear_bit" },
	{ 0xeab3fd69, "skb_put" },
	{ 0xda8e882e, "bt_procfs_cleanup" },
	{ 0x4dec6038, "memscan" },
	{ 0x14e96ec0, "l2cap_unregister_user" },
	{ 0xea1c9521, "input_allocate_device" },
};

MODULE_INFO(depends, "bluetooth");


MODULE_INFO(srcversion, "9EB8F1FB5E365A14B3F24A4");
