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
	{ 0xc4d28e9b, "nf_ct_remove_expectations" },
	{ 0xec2f00c, "nf_ct_unexpect_related" },
	{ 0x9a152689, "param_ops_int" },
	{ 0x631dd718, "nf_conntrack_helper_register" },
	{ 0x61279834, "__nf_ct_refresh_acct" },
	{ 0xddbd7c72, "nf_conntrack_helper_unregister" },
	{ 0xb545fc7c, "dst_release" },
	{ 0x2b5ab97d, "_raw_spin_lock_bh" },
	{ 0x4a3bee79, "nf_ct_expect_init" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0xfe41fb0b, "param_ops_bool" },
	{ 0x526c3a6c, "jiffies" },
	{ 0x8cee3114, "nf_ip_route" },
	{ 0x97a2cafb, "nf_conntrack_helpers_register" },
	{ 0x5f754e5a, "memset" },
	{ 0x71c90087, "memcmp" },
	{ 0xcb28fe43, "nf_ct_expect_put" },
	{ 0xc1769b54, "nf_ct_expect_alloc" },
	{ 0x8525bff4, "nf_ct_expect_related_report" },
	{ 0x55f9e831, "nf_conntrack_helpers_unregister" },
	{ 0x35805034, "__nf_ct_expect_find" },
	{ 0xf455ca51, "nf_ipv6_ops" },
	{ 0x4ea258d2, "nf_conntrack_expect_lock" },
	{ 0x8f3625fe, "_raw_spin_unlock_bh" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x77f6f183, "kmalloc_order_trace" },
	{ 0xef399fa8, "nf_ct_helper_log" },
	{ 0x37a0cba, "kfree" },
	{ 0x9d669763, "memcpy" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x1e0a0c24, "mod_timer_pending" },
	{ 0x8a331d2b, "param_ops_uint" },
	{ 0x9b73dda5, "skb_copy_bits" },
};

MODULE_INFO(depends, "nf_conntrack");


MODULE_INFO(srcversion, "A5BC75D5FDF3ED009BF6294");
