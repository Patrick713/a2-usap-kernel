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
	{ 0x2e700e5f, "unregister_qdisc" },
	{ 0x2680385, "kmem_cache_destroy" },
	{ 0x147b80ff, "register_qdisc" },
	{ 0x4c0e8130, "kmem_cache_create" },
	{ 0xaf7c6bab, "qdisc_watchdog_init_clockid" },
	{ 0xc5850110, "printk" },
	{ 0xb1e8970d, "qdisc_tree_reduce_backlog" },
	{ 0xf1969a8e, "__usecs_to_jiffies" },
	{ 0xee43fd9b, "___ratelimit" },
	{ 0x984ce9bd, "__nla_parse" },
	{ 0xc158ba02, "gnet_stats_copy_app" },
	{ 0x8f3625fe, "_raw_spin_unlock_bh" },
	{ 0x2b5ab97d, "_raw_spin_lock_bh" },
	{ 0x85670f1d, "rtnl_is_locked" },
	{ 0x8dfefc0d, "kvmalloc_node" },
	{ 0x7f24de73, "jiffies_to_usecs" },
	{ 0xa5c2e213, "nla_put" },
	{ 0x59e5070d, "__do_div64" },
	{ 0x2cfde9a2, "warn_slowpath_fmt" },
	{ 0x69145d30, "qdisc_watchdog_schedule_ns" },
	{ 0x9b73dda5, "skb_copy_bits" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0xfab9ac3c, "qdisc_watchdog_cancel" },
	{ 0x7aa1756e, "kvfree" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xbb9f1908, "kmem_cache_free" },
	{ 0x27c6bc4f, "__skb_get_hash" },
	{ 0xb43f9365, "ktime_get" },
	{ 0xa5526619, "rb_insert_color" },
	{ 0x526c3a6c, "jiffies" },
	{ 0x4007496c, "kmem_cache_alloc" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x7a5f490e, "rtnl_kfree_skbs" },
	{ 0xca9360b5, "rb_next" },
	{ 0x4d9b652b, "rb_erase" },
	{ 0xece784c2, "rb_first" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "ED6ADC696180845D6B40682");
