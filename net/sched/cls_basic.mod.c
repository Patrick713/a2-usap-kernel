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
	{ 0xbcd58c7c, "unregister_tcf_proto_ops" },
	{ 0x2cf9b82c, "register_tcf_proto_ops" },
	{ 0x3ec40239, "idr_alloc_u32" },
	{ 0x6fbe4717, "idr_replace" },
	{ 0x8f3625fe, "_raw_spin_unlock_bh" },
	{ 0x2b5ab97d, "_raw_spin_lock_bh" },
	{ 0x85670f1d, "rtnl_is_locked" },
	{ 0x143dbdbb, "tcf_em_tree_validate" },
	{ 0xfef75240, "tcf_exts_validate" },
	{ 0x50c89f23, "__alloc_percpu" },
	{ 0x984ce9bd, "__nla_parse" },
	{ 0x19f462ab, "kfree_call_rcu" },
	{ 0x2878e15a, "idr_destroy" },
	{ 0xe2b5e146, "refcount_inc_not_zero_checked" },
	{ 0xa346975c, "idr_remove" },
	{ 0xbe0e3cba, "tcf_queue_work" },
	{ 0xda9b3222, "__tcf_em_tree_match" },
	{ 0xdfc88ebf, "tcf_action_exec" },
	{ 0xebaa9dc8, "kmem_cache_alloc_trace" },
	{ 0xf4610713, "kmalloc_caches" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0xc47638c, "__put_net" },
	{ 0x37a0cba, "kfree" },
	{ 0xc9ec4e21, "free_percpu" },
	{ 0xc1e58a5f, "refcount_dec_and_test_checked" },
	{ 0xf55ca0cf, "tcf_em_tree_destroy" },
	{ 0x371d4a39, "tcf_exts_destroy" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x2cfde9a2, "warn_slowpath_fmt" },
	{ 0x65465214, "skb_trim" },
	{ 0xccbf9c19, "tcf_exts_dump_stats" },
	{ 0xb4eb558d, "tcf_em_tree_dump" },
	{ 0xaac119a2, "tcf_exts_dump" },
	{ 0xa8cd6c47, "nla_put_64bit" },
	{ 0xcf3fac84, "cpumask_next" },
	{ 0x341dbfa3, "__per_cpu_offset" },
	{ 0x1e96f43d, "__cpu_possible_mask" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0xa5c2e213, "nla_put" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "4255F90CADE79F104660005");
