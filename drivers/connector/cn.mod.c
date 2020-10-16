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
	{ 0xf4610713, "kmalloc_caches" },
	{ 0xf9a482f9, "msleep" },
	{ 0x2c837732, "netlink_has_listeners" },
	{ 0x53adbbd1, "proc_create_single_data" },
	{ 0x2b5ab97d, "_raw_spin_lock_bh" },
	{ 0xc8275115, "seq_printf" },
	{ 0xae947aa3, "remove_proc_entry" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0xc5850110, "printk" },
	{ 0x3f151d75, "netlink_kernel_release" },
	{ 0xf918f903, "netlink_unicast" },
	{ 0xc1e58a5f, "refcount_dec_and_test_checked" },
	{ 0xd2aeaa09, "init_net" },
	{ 0x22bf2ba1, "__alloc_skb" },
	{ 0x2b560e16, "netlink_broadcast" },
	{ 0x8f3625fe, "_raw_spin_unlock_bh" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xd28c75bb, "kfree_skb" },
	{ 0xebaa9dc8, "kmem_cache_alloc_trace" },
	{ 0x5e031234, "__netlink_kernel_create" },
	{ 0x37a0cba, "kfree" },
	{ 0x9d669763, "memcpy" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xc358aaf8, "snprintf" },
	{ 0x1ee8d6d4, "refcount_inc_checked" },
	{ 0x94499ccd, "__nlmsg_put" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "2ECC6930AB12A2AB5D86F00");
