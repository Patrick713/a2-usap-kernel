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
	{ 0xce0ba017, "tty_chars_in_buffer" },
	{ 0x2d580f47, "ax25_ip_xmit" },
	{ 0x3fa2524a, "dev_trans_start" },
	{ 0xd28c75bb, "kfree_skb" },
	{ 0x526c3a6c, "jiffies" },
	{ 0xf102732a, "crc16" },
	{ 0x927d2b0f, "netif_rx" },
	{ 0xeab3fd69, "skb_put" },
	{ 0x718ae3f2, "__netdev_alloc_skb" },
	{ 0xca54fee, "_test_and_set_bit" },
	{ 0x3ea6f72f, "tty_unthrottle" },
	{ 0x2a3aa678, "_test_and_clear_bit" },
	{ 0x8f3625fe, "_raw_spin_unlock_bh" },
	{ 0x9d669763, "memcpy" },
	{ 0x2b5ab97d, "_raw_spin_lock_bh" },
	{ 0xc5850110, "printk" },
	{ 0xebaa9dc8, "kmem_cache_alloc_trace" },
	{ 0xf4610713, "kmalloc_caches" },
	{ 0xbadd1a4b, "free_netdev" },
	{ 0xcc7044cf, "register_netdev" },
	{ 0x2d6fcc06, "__kmalloc" },
	{ 0xa739ab9, "tty_driver_flush_buffer" },
	{ 0x5bbe49f4, "__init_waitqueue_head" },
	{ 0x5c5b2589, "alloc_netdev_mqs" },
	{ 0xc6cbbc89, "capable" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x5f754e5a, "memset" },
	{ 0x51a910c0, "arm_copy_to_user" },
	{ 0xbc10dd97, "__put_user_4" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0x89940b91, "netif_schedule_queue" },
	{ 0xdb9ca3c5, "_raw_spin_lock" },
	{ 0x31b9195c, "__local_bh_disable_ip" },
	{ 0xae353d77, "arm_copy_from_user" },
	{ 0x97255bdf, "strlen" },
	{ 0x353e3fa5, "__get_user_4" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x7d6174de, "netif_tx_wake_queue" },
	{ 0x1ee8d6d4, "refcount_inc_checked" },
	{ 0x3b697738, "_raw_read_lock" },
	{ 0xb561ac5b, "wait_for_completion" },
	{ 0xdea8fa68, "unregister_netdev" },
	{ 0x37a0cba, "kfree" },
	{ 0xd697e69a, "trace_hardirqs_on" },
	{ 0x4d634803, "_raw_write_lock_irq" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0x49ebacbd, "_clear_bit" },
	{ 0xe6c12171, "complete" },
	{ 0xc1e58a5f, "refcount_dec_and_test_checked" },
	{ 0x3a5a2096, "ax25_header_ops" },
	{ 0xaeb7451e, "ax25_defaddr" },
	{ 0xac93ae05, "ax25_bcast" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

MODULE_INFO(depends, "ax25");


MODULE_INFO(srcversion, "D30613825BD448E41B9B235");
