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
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

static const struct modversion_info ____versions[]
__used __section(__versions) = {
	{ 0xe9942317, "module_layout" },
	{ 0x4199fd5c, "skb_queue_head" },
	{ 0xf4610713, "kmalloc_caches" },
	{ 0x528c709d, "simple_read_from_buffer" },
	{ 0x93b18eee, "debugfs_create_dir" },
	{ 0xa47a878, "debugfs_create_u8" },
	{ 0xbdf80cb7, "__hci_cmd_sync" },
	{ 0x937c4867, "hci_register_dev" },
	{ 0x983ac031, "remove_wait_queue" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0x7c20652d, "debugfs_create_file" },
	{ 0xc68ddd29, "hci_unregister_dev" },
	{ 0x35edc130, "debugfs_remove_recursive" },
	{ 0xdd34010a, "kthread_create_on_node" },
	{ 0x7b8c32f1, "bt_err" },
	{ 0x2441592f, "debugfs_create_x16" },
	{ 0xb5cc6b7d, "of_property_read_variable_u8_array" },
	{ 0x5bbe49f4, "__init_waitqueue_head" },
	{ 0xf9f0c951, "kstrtol_from_user" },
	{ 0xaad8c7d6, "default_wake_function" },
	{ 0x2d9ecd4c, "skb_queue_purge" },
	{ 0x83673cbf, "default_llseek" },
	{ 0x39a12ca7, "_raw_spin_unlock_irqrestore" },
	{ 0x7bfbe88e, "kthread_stop" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0xfaf119af, "hci_alloc_dev" },
	{ 0xf68b0045, "skb_push" },
	{ 0x81febe09, "simple_open" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xac6659eb, "skb_queue_tail" },
	{ 0x22bf2ba1, "__alloc_skb" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x1000e51, "schedule" },
	{ 0xd28c75bb, "kfree_skb" },
	{ 0xb35d51ab, "wake_up_process" },
	{ 0xebaa9dc8, "kmem_cache_alloc_trace" },
	{ 0x5f849a69, "_raw_spin_lock_irqsave" },
	{ 0x3dcf1ffa, "__wake_up" },
	{ 0xb3f7646e, "kthread_should_stop" },
	{ 0x647af474, "prepare_to_wait_event" },
	{ 0xa17bd3fc, "add_wait_queue" },
	{ 0xfc07b551, "of_property_read_variable_u16_array" },
	{ 0x37a0cba, "kfree" },
	{ 0x9d669763, "memcpy" },
	{ 0x49970de8, "finish_wait" },
	{ 0x4ac49f05, "skb_dequeue" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xc358aaf8, "snprintf" },
	{ 0xcb560b41, "hci_free_dev" },
	{ 0xeab3fd69, "skb_put" },
};

MODULE_INFO(depends, "bluetooth");


MODULE_INFO(srcversion, "26430B0CBEB3559E1E3F861");
