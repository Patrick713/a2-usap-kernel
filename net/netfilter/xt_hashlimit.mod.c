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
	{ 0x2680385, "kmem_cache_destroy" },
	{ 0x60a13e90, "rcu_barrier" },
	{ 0x65e2bb05, "unregister_pernet_subsys" },
	{ 0x5139fc22, "xt_unregister_matches" },
	{ 0x4c0e8130, "kmem_cache_create" },
	{ 0xc9e3fe05, "xt_register_matches" },
	{ 0xb041ec8d, "register_pernet_subsys" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0x4007496c, "kmem_cache_alloc" },
	{ 0x9b73dda5, "skb_copy_bits" },
	{ 0x31b9195c, "__local_bh_disable_ip" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0xd9fcfa3e, "ipv6_skip_exthdr" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0x71c90087, "memcmp" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x5f754e5a, "memset" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x29d9f26e, "cancel_delayed_work_sync" },
	{ 0x1b30cb84, "refcount_dec_and_mutex_lock" },
	{ 0xf617b198, "proc_mkdir" },
	{ 0x48012e28, "xt_check_proc_name" },
	{ 0x999e8297, "vfree" },
	{ 0x1ee8d6d4, "refcount_inc_checked" },
	{ 0xc5850110, "printk" },
	{ 0xee43fd9b, "___ratelimit" },
	{ 0xcf86cdac, "queue_delayed_work_on" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x47884890, "system_power_efficient_wq" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xf509040f, "proc_create_seq_private" },
	{ 0x2d39b0a7, "kstrdup" },
	{ 0xd6ee688f, "vmalloc" },
	{ 0x8039b3fd, "_totalram_pages" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xebaa9dc8, "kmem_cache_alloc_trace" },
	{ 0xf4610713, "kmalloc_caches" },
	{ 0xdb9ca3c5, "_raw_spin_lock" },
	{ 0xc8275115, "seq_printf" },
	{ 0x37a0cba, "kfree" },
	{ 0x7d518e2b, "PDE_DATA" },
	{ 0x60bffe6d, "div64_u64" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0xbb9f1908, "kmem_cache_free" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x8f3625fe, "_raw_spin_unlock_bh" },
	{ 0x28aa6a67, "call_rcu" },
	{ 0x2b5ab97d, "_raw_spin_lock_bh" },
	{ 0x526c3a6c, "jiffies" },
	{ 0xae947aa3, "remove_proc_entry" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

MODULE_INFO(depends, "x_tables");


MODULE_INFO(srcversion, "02B13465C3D0C777E317897");
