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
	{ 0xae947aa3, "remove_proc_entry" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0xdea8fa68, "unregister_netdev" },
	{ 0xf509040f, "proc_create_seq_private" },
	{ 0xd2aeaa09, "init_net" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xbadd1a4b, "free_netdev" },
	{ 0xcc7044cf, "register_netdev" },
	{ 0x5c5b2589, "alloc_netdev_mqs" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x51a910c0, "arm_copy_to_user" },
	{ 0x37a0cba, "kfree" },
	{ 0xe2e8065e, "memdup_user" },
	{ 0xc6cbbc89, "capable" },
	{ 0xae353d77, "arm_copy_from_user" },
	{ 0x49ebacbd, "_clear_bit" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0xae9849dd, "__request_region" },
	{ 0x2196324, "__aeabi_idiv" },
	{ 0xa46a0f7a, "consume_skb" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0x4384eb42, "__release_region" },
	{ 0x716b58cb, "ioport_resource" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x927d2b0f, "netif_rx" },
	{ 0xeab3fd69, "skb_put" },
	{ 0x718ae3f2, "__netdev_alloc_skb" },
	{ 0xf9e956fe, "__dev_kfree_skb_any" },
	{ 0x4ac49f05, "skb_dequeue" },
	{ 0x2d580f47, "ax25_ip_xmit" },
	{ 0xac6659eb, "skb_queue_tail" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xc5850110, "printk" },
	{ 0xf11cd95c, "platform_device_unregister" },
	{ 0x836b5cfc, "request_firmware" },
	{ 0x8bcd64f8, "platform_device_register_full" },
	{ 0x5f754e5a, "memset" },
	{ 0xebaa9dc8, "kmem_cache_alloc_trace" },
	{ 0xf4610713, "kmalloc_caches" },
	{ 0x8b6486ce, "release_firmware" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x9d669763, "memcpy" },
	{ 0xfda9581f, "prandom_u32" },
	{ 0x24d273d1, "add_timer" },
	{ 0x526c3a6c, "jiffies" },
	{ 0xc8275115, "seq_printf" },
	{ 0x3a5a2096, "ax25_header_ops" },
	{ 0xaeb7451e, "ax25_defaddr" },
	{ 0xac93ae05, "ax25_bcast" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

MODULE_INFO(depends, "ax25");


MODULE_INFO(srcversion, "19DD65839C12BB08965D8E7");
