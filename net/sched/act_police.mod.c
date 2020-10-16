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
	{ 0x41d90f33, "tcf_unregister_action" },
	{ 0x40f38988, "tcf_register_action" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0x4df2ea84, "gen_estimator_read" },
	{ 0x2cfde9a2, "warn_slowpath_fmt" },
	{ 0x65465214, "skb_trim" },
	{ 0xa8cd6c47, "nla_put_64bit" },
	{ 0x7d0db45c, "jiffies_to_clock_t" },
	{ 0x526c3a6c, "jiffies" },
	{ 0xa5c2e213, "nla_put" },
	{ 0x5f754e5a, "memset" },
	{ 0x72005a57, "tcf_idr_search" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xa7be7ade, "tcf_idr_cleanup" },
	{ 0xa3b1302a, "tcf_idr_insert" },
	{ 0x6203a9bc, "tcf_idr_create" },
	{ 0xa28cfcc0, "gen_estimator_active" },
	{ 0x58145967, "__tcf_idr_release" },
	{ 0xd042475c, "qdisc_get_rtab" },
	{ 0x1da05d4d, "tcf_chain_put_by_act" },
	{ 0x89b3dc61, "tcf_action_set_ctrlact" },
	{ 0x8f3625fe, "_raw_spin_unlock_bh" },
	{ 0xb43f9365, "ktime_get" },
	{ 0x2b5ab97d, "_raw_spin_lock_bh" },
	{ 0xa61ced89, "qdisc_put_rtab" },
	{ 0xb2cb334, "psched_ratecfg_precompute" },
	{ 0xf1db1704, "nla_memcpy" },
	{ 0xebaa9dc8, "kmem_cache_alloc_trace" },
	{ 0xf4610713, "kmalloc_caches" },
	{ 0x2acfa402, "gen_replace_estimator" },
	{ 0x53ab904e, "tcf_action_check_ctrlact" },
	{ 0x53fe2ad5, "tcf_idr_check_alloc" },
	{ 0x984ce9bd, "__nla_parse" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x19f462ab, "kfree_call_rcu" },
	{ 0xfe19b1cb, "tcf_generic_walker" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0x37a0cba, "kfree" },
	{ 0x7d8a860b, "tcf_idrinfo_destroy" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "46467299F419FAA9920EC71");
