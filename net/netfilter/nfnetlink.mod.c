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
	{ 0x609f1c7e, "synchronize_net" },
	{ 0xa24f23d8, "__request_module" },
	{ 0xf4610713, "kmalloc_caches" },
	{ 0x2c837732, "netlink_has_listeners" },
	{ 0x984ce9bd, "__nla_parse" },
	{ 0x36f6c5e6, "skb_clone" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0x1106529d, "nlmsg_notify" },
	{ 0x5f754e5a, "memset" },
	{ 0x65e2bb05, "unregister_pernet_subsys" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0x3f151d75, "netlink_kernel_release" },
	{ 0xe56f25dd, "netlink_rcv_skb" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0xf918f903, "netlink_unicast" },
	{ 0x6091797f, "synchronize_rcu" },
	{ 0x28f7fb79, "skb_pull" },
	{ 0x12b548f6, "module_put" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xd28c75bb, "kfree_skb" },
	{ 0x8a7d1c31, "high_memory" },
	{ 0xb041ec8d, "register_pernet_subsys" },
	{ 0x4014ccb4, "netlink_ack" },
	{ 0xebaa9dc8, "kmem_cache_alloc_trace" },
	{ 0xa69f3542, "netlink_set_err" },
	{ 0x2cfde9a2, "warn_slowpath_fmt" },
	{ 0x5e031234, "__netlink_kernel_create" },
	{ 0x37a0cba, "kfree" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x717bcdac, "try_module_get" },
	{ 0x9aed8ccb, "netlink_net_capable" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "FC2F4E6FF4F119646413F12");
