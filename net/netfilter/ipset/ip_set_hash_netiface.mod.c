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
	{ 0xb75178bc, "ip_set_type_unregister" },
	{ 0x60a13e90, "rcu_barrier" },
	{ 0x4dc0cf96, "ip_set_type_register" },
	{ 0x6091797f, "synchronize_rcu" },
	{ 0xf7802486, "__aeabi_uidivmod" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0x49ebacbd, "_clear_bit" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0x9d669763, "memcpy" },
	{ 0x2d6fcc06, "__kmalloc" },
	{ 0x5d256e4c, "ip_set_match_extensions" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xcf86cdac, "queue_delayed_work_on" },
	{ 0x47884890, "system_power_efficient_wq" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x30adbe91, "ip_set_elem_len" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0x6344eaf6, "ip_set_alloc" },
	{ 0xebaa9dc8, "kmem_cache_alloc_trace" },
	{ 0xf4610713, "kmalloc_caches" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0xc5850110, "printk" },
	{ 0x2cfde9a2, "warn_slowpath_fmt" },
	{ 0x65465214, "skb_trim" },
	{ 0xa696a4be, "ip_set_put_extensions" },
	{ 0x97255bdf, "strlen" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x29d9f26e, "cancel_delayed_work_sync" },
	{ 0x397f6231, "ip_set_free" },
	{ 0x37a0cba, "kfree" },
	{ 0x19f462ab, "kfree_call_rcu" },
	{ 0x4f668306, "ip_set_extensions" },
	{ 0x73e20c1c, "strlcpy" },
	{ 0x8f3625fe, "_raw_spin_unlock_bh" },
	{ 0x2b5ab97d, "_raw_spin_lock_bh" },
	{ 0x7924b6de, "ip_set_hostmask_map" },
	{ 0x22d966c6, "ip_set_range_to_cidr" },
	{ 0xa293f8a6, "ip_set_get_ipaddr4" },
	{ 0x6cdc5c6b, "nla_strlcpy" },
	{ 0x81fff2d1, "ip_set_netmask_map" },
	{ 0x64d432b1, "ip_set_get_extensions" },
	{ 0x9e98722b, "ip_set_get_ipaddr6" },
	{ 0x5f754e5a, "memset" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xa5c2e213, "nla_put" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0x526c3a6c, "jiffies" },
	{ 0x31b9195c, "__local_bh_disable_ip" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

MODULE_INFO(depends, "ip_set");


MODULE_INFO(srcversion, "570D3A32858629B6CC02A28");
