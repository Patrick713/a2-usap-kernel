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
	{ 0xa120d33c, "tty_unregister_ldisc" },
	{ 0x2508784d, "tty_register_ldisc" },
	{ 0xd05976b1, "ppp_channel_index" },
	{ 0x50ce7a48, "tty_mode_ioctl" },
	{ 0xfa6f3dbc, "n_tty_ioctl_helper" },
	{ 0x91c4dbfc, "ppp_unit_number" },
	{ 0xc5850110, "printk" },
	{ 0x28f7fb79, "skb_pull" },
	{ 0xfaef0ed, "__tasklet_schedule" },
	{ 0xac6659eb, "skb_queue_tail" },
	{ 0xae81d874, "stop_tty" },
	{ 0x76a17d8b, "start_tty" },
	{ 0x718ae3f2, "__netdev_alloc_skb" },
	{ 0x9d669763, "memcpy" },
	{ 0xeab3fd69, "skb_put" },
	{ 0x65465214, "skb_trim" },
	{ 0x3ea6f72f, "tty_unthrottle" },
	{ 0x39a12ca7, "_raw_spin_unlock_irqrestore" },
	{ 0x5f849a69, "_raw_spin_lock_irqsave" },
	{ 0x1ee8d6d4, "refcount_inc_checked" },
	{ 0x3b697738, "_raw_read_lock" },
	{ 0xb561ac5b, "wait_for_completion" },
	{ 0x2d9ecd4c, "skb_queue_purge" },
	{ 0x7661f8c0, "ppp_unregister_channel" },
	{ 0x82072614, "tasklet_kill" },
	{ 0x4d634803, "_raw_write_lock_irq" },
	{ 0x37a0cba, "kfree" },
	{ 0x53f20e4b, "ppp_register_channel" },
	{ 0x409873e3, "tty_termios_baud_rate" },
	{ 0x5bbe49f4, "__init_waitqueue_head" },
	{ 0x9545af6d, "tasklet_init" },
	{ 0xebaa9dc8, "kmem_cache_alloc_trace" },
	{ 0xf4610713, "kmalloc_caches" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x51a910c0, "arm_copy_to_user" },
	{ 0xae353d77, "arm_copy_from_user" },
	{ 0xd697e69a, "trace_hardirqs_on" },
	{ 0x2da81bff, "_raw_spin_lock_irq" },
	{ 0x353e3fa5, "__get_user_4" },
	{ 0xbc10dd97, "__put_user_4" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xd7a36d7f, "ppp_output_wakeup" },
	{ 0xa5e5cb9d, "ppp_input_error" },
	{ 0x4ac49f05, "skb_dequeue" },
	{ 0x48b7c34, "ppp_input" },
	{ 0xd28c75bb, "kfree_skb" },
	{ 0xa46a0f7a, "consume_skb" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0x8f3625fe, "_raw_spin_unlock_bh" },
	{ 0x49ebacbd, "_clear_bit" },
	{ 0x2a3aa678, "_test_and_clear_bit" },
	{ 0x526c3a6c, "jiffies" },
	{ 0x2b5ab97d, "_raw_spin_lock_bh" },
	{ 0xca54fee, "_test_and_set_bit" },
	{ 0xe6c12171, "complete" },
	{ 0xc1e58a5f, "refcount_dec_and_test_checked" },
	{ 0x7f03b6a9, "crc_ccitt_table" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

MODULE_INFO(depends, "ppp_generic,crc-ccitt");


MODULE_INFO(srcversion, "BC6F52804B158380AAFA03F");
