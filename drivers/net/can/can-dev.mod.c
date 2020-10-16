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
	{ 0x6339eaf6, "netdev_info" },
	{ 0xcb0dc57f, "napi_schedule_prep" },
	{ 0xa513fc17, "netif_carrier_on" },
	{ 0x36f6c5e6, "skb_clone" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xa35dc8c8, "netif_carrier_off" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0xf9e956fe, "__dev_kfree_skb_any" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x29d9f26e, "cancel_delayed_work_sync" },
	{ 0x14bd341b, "netif_napi_del" },
	{ 0x718ae3f2, "__netdev_alloc_skb" },
	{ 0x927d2b0f, "netif_rx" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0x2d9ecd4c, "skb_queue_purge" },
	{ 0xd04e2845, "sock_efree" },
	{ 0x5f754e5a, "memset" },
	{ 0x39a12ca7, "_raw_spin_unlock_irqrestore" },
	{ 0xc5850110, "printk" },
	{ 0xbadd1a4b, "free_netdev" },
	{ 0xcc7044cf, "register_netdev" },
	{ 0xa5c2e213, "nla_put" },
	{ 0x36fbf3aa, "netif_receive_skb" },
	{ 0x9f00a796, "netif_napi_add" },
	{ 0x9cd4091f, "rtnl_link_unregister" },
	{ 0x2196324, "__aeabi_idiv" },
	{ 0x59e5070d, "__do_div64" },
	{ 0x26b8796a, "of_get_child_by_name" },
	{ 0xac6659eb, "skb_queue_tail" },
	{ 0x899a31fa, "__napi_schedule" },
	{ 0xcf86cdac, "queue_delayed_work_on" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xd28c75bb, "kfree_skb" },
	{ 0x5c5b2589, "alloc_netdev_mqs" },
	{ 0x837332a0, "napi_complete_done" },
	{ 0x2404021a, "netdev_err" },
	{ 0x5f849a69, "_raw_spin_lock_irqsave" },
	{ 0x9c64d457, "netdev_warn" },
	{ 0x2cfde9a2, "warn_slowpath_fmt" },
	{ 0xbc20d5eb, "rtnl_link_register" },
	{ 0x4ac49f05, "skb_dequeue" },
	{ 0xdea8fa68, "unregister_netdev" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xa46a0f7a, "consume_skb" },
	{ 0x1ee8d6d4, "refcount_inc_checked" },
	{ 0x85670f1d, "rtnl_is_locked" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0xfc60f402, "of_property_read_variable_u32_array" },
	{ 0x49ebacbd, "_clear_bit" },
	{ 0xeab3fd69, "skb_put" },
	{ 0xfeb02014, "of_node_put" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "C64190941F04E816A53893F");
