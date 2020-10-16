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
	{ 0x19f462ab, "kfree_call_rcu" },
	{ 0x73e20c1c, "strlcpy" },
	{ 0x2d6fcc06, "__kmalloc" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x2cfde9a2, "warn_slowpath_fmt" },
	{ 0x65465214, "skb_trim" },
	{ 0xa696a4be, "ip_set_put_extensions" },
	{ 0x97255bdf, "strlen" },
	{ 0x91cb67af, "ip_set_name_byindex" },
	{ 0x93f55a06, "ip_set_get_byname" },
	{ 0x64d432b1, "ip_set_get_extensions" },
	{ 0x24d273d1, "add_timer" },
	{ 0x8f3625fe, "_raw_spin_unlock_bh" },
	{ 0x2b5ab97d, "_raw_spin_lock_bh" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0x37a0cba, "kfree" },
	{ 0x4f668306, "ip_set_extensions" },
	{ 0x765307ff, "ip_set_del" },
	{ 0xc8b248b9, "ip_set_add" },
	{ 0x5d256e4c, "ip_set_match_extensions" },
	{ 0x61e36238, "ip_set_test" },
	{ 0x5f754e5a, "memset" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xebaa9dc8, "kmem_cache_alloc_trace" },
	{ 0xf4610713, "kmalloc_caches" },
	{ 0x30adbe91, "ip_set_elem_len" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xa5c2e213, "nla_put" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x28aa6a67, "call_rcu" },
	{ 0x96e3b756, "ip_set_put_byindex" },
	{ 0x526c3a6c, "jiffies" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

MODULE_INFO(depends, "ip_set");


MODULE_INFO(srcversion, "5E7F503ADBEF0CC72FFBF73");
