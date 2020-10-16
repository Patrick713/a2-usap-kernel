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
	{ 0xcc5005fe, "msleep_interruptible" },
	{ 0x2508784d, "tty_register_ldisc" },
	{ 0x24d273d1, "add_timer" },
	{ 0xbadd1a4b, "free_netdev" },
	{ 0xf6c8eae0, "register_netdevice" },
	{ 0x215a8ec8, "slhc_init" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x5c5b2589, "alloc_netdev_mqs" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0x89ea10c3, "dev_close" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0xc6cbbc89, "capable" },
	{ 0xebaa9dc8, "kmem_cache_alloc_trace" },
	{ 0xf4610713, "kmalloc_caches" },
	{ 0x2d6fcc06, "__kmalloc" },
	{ 0xe5bc9a53, "slhc_free" },
	{ 0x37a0cba, "kfree" },
	{ 0x6c8f2de, "slhc_compress" },
	{ 0xa46a0f7a, "consume_skb" },
	{ 0xce0ba017, "tty_chars_in_buffer" },
	{ 0x3fa2524a, "dev_trans_start" },
	{ 0x7d6174de, "netif_tx_wake_queue" },
	{ 0x25441fc2, "tty_hangup" },
	{ 0xdea8fa68, "unregister_netdev" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0x92b57248, "flush_work" },
	{ 0x6091797f, "synchronize_rcu" },
	{ 0x50ce7a48, "tty_mode_ioctl" },
	{ 0x51a910c0, "arm_copy_to_user" },
	{ 0x353e3fa5, "__get_user_4" },
	{ 0x97255bdf, "strlen" },
	{ 0xbc10dd97, "__put_user_4" },
	{ 0x2b68bd2f, "del_timer" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x526c3a6c, "jiffies" },
	{ 0xdb9ca3c5, "_raw_spin_lock" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x85fbc931, "slhc_uncompress" },
	{ 0xca54fee, "_test_and_set_bit" },
	{ 0x80df3806, "netif_rx_ni" },
	{ 0x9d669763, "memcpy" },
	{ 0xeab3fd69, "skb_put" },
	{ 0x718ae3f2, "__netdev_alloc_skb" },
	{ 0xf102033e, "slhc_remember" },
	{ 0xc5850110, "printk" },
	{ 0x2a3aa678, "_test_and_clear_bit" },
	{ 0x8f3625fe, "_raw_spin_unlock_bh" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0x2b5ab97d, "_raw_spin_lock_bh" },
	{ 0x49ebacbd, "_clear_bit" },
	{ 0xb2d48a2e, "queue_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

MODULE_INFO(depends, "slhc");


MODULE_INFO(srcversion, "10DFA6B2D989B92197EEC38");
