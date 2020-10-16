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
	{ 0x65e2bb05, "unregister_pernet_subsys" },
	{ 0x89b8eb05, "nfnetlink_subsys_unregister" },
	{ 0xb041ec8d, "register_pernet_subsys" },
	{ 0xcfaabdb3, "nfnetlink_subsys_register" },
	{ 0x29b565b8, "nf_ct_iterate_cleanup_net" },
	{ 0xc4d28e9b, "nf_ct_remove_expectations" },
	{ 0x79b5052f, "nf_conntrack_eventmask_report" },
	{ 0x24d273d1, "add_timer" },
	{ 0x35805034, "__nf_ct_expect_find" },
	{ 0x8525bff4, "nf_ct_expect_related_report" },
	{ 0x80377a0d, "nf_ct_delete" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0x473e385d, "nf_conntrack_lock" },
	{ 0x28eff409, "nf_conntrack_hash" },
	{ 0x8c6e11f4, "nf_conntrack_locks" },
	{ 0x31b9195c, "__local_bh_disable_ip" },
	{ 0x8ffe7e89, "nf_conntrack_htable_size" },
	{ 0xf918f903, "netlink_unicast" },
	{ 0xf38bcdf3, "nf_conntrack_max" },
	{ 0x37a0cba, "kfree" },
	{ 0x2a18c74, "nf_conntrack_destroy" },
	{ 0x47db562b, "nfnetlink_send" },
	{ 0x9b236b26, "nfnetlink_has_listeners" },
	{ 0x36c724e7, "nfnetlink_set_err" },
	{ 0xd28c75bb, "kfree_skb" },
	{ 0x22bf2ba1, "__alloc_skb" },
	{ 0x2a2fa260, "nla_policy_len" },
	{ 0x341dbfa3, "__per_cpu_offset" },
	{ 0x1e96f43d, "__cpu_possible_mask" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0xec8beba6, "nf_ct_expect_hash" },
	{ 0xc18ac88d, "nf_ct_expect_hsize" },
	{ 0xe2b5e146, "refcount_inc_not_zero_checked" },
	{ 0x2cfde9a2, "warn_slowpath_fmt" },
	{ 0x65465214, "skb_trim" },
	{ 0x94499ccd, "__nlmsg_put" },
	{ 0xab240a3, "nf_ct_helper_expectfn_find_by_symbol" },
	{ 0x97255bdf, "strlen" },
	{ 0x9a717656, "__do_once_done" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0x18e60984, "__do_once_start" },
	{ 0x12cabc89, "siphash_2u64" },
	{ 0xa59052f0, "__siphash_aligned" },
	{ 0xc4f0da12, "ktime_get_with_offset" },
	{ 0x6bad67ca, "nf_conntrack_hash_check_insert" },
	{ 0xb5b04fd7, "nf_conntrack_find_get" },
	{ 0xb6f126c2, "nf_ct_ext_add" },
	{ 0x72064ff7, "__nf_ct_try_assign_helper" },
	{ 0xe7158220, "nf_conntrack_free" },
	{ 0x6044bb2c, "nf_ct_helper_ext_add" },
	{ 0xdc41136f, "__nf_conntrack_helper_find" },
	{ 0xd49e1868, "nf_conntrack_alloc" },
	{ 0x5ce3b588, "nfnl_lock" },
	{ 0xa24f23d8, "__request_module" },
	{ 0xdb065657, "nfnl_unlock" },
	{ 0x9b1cd23b, "nf_nat_hook" },
	{ 0xcc059efb, "nf_connlabels_replace" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0xebaa9dc8, "kmem_cache_alloc_trace" },
	{ 0xf4610713, "kmalloc_caches" },
	{ 0x524e850f, "nf_ct_helper_expectfn_find_by_name" },
	{ 0xc1769b54, "nf_ct_expect_alloc" },
	{ 0xd2c223f8, "nf_ct_unlink_expect_report" },
	{ 0x89b8ff40, "nf_ct_expect_iterate_net" },
	{ 0x2b68bd2f, "del_timer" },
	{ 0x4ea258d2, "nf_conntrack_expect_lock" },
	{ 0x80ac73f1, "nf_ct_expect_find_get" },
	{ 0xf1db1704, "nla_memcpy" },
	{ 0x1fc7a59b, "__nla_validate" },
	{ 0x5f754e5a, "memset" },
	{ 0x984ce9bd, "__nla_parse" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xcb28fe43, "nf_ct_expect_put" },
	{ 0x143ab15f, "__netlink_dump_start" },
	{ 0xc5850110, "printk" },
	{ 0xf6bfa9, "nf_ct_expect_register_notifier" },
	{ 0x3b2ca06c, "nf_conntrack_register_notifier" },
	{ 0xa8cd6c47, "nla_put_64bit" },
	{ 0x8f3625fe, "_raw_spin_unlock_bh" },
	{ 0x2b5ab97d, "_raw_spin_lock_bh" },
	{ 0x526c3a6c, "jiffies" },
	{ 0x317abc75, "nf_ct_get_id" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xa5c2e213, "nla_put" },
	{ 0xa149ba95, "nf_ct_l4proto_find" },
	{ 0x6091797f, "synchronize_rcu" },
	{ 0x883d5857, "nf_conntrack_unregister_notifier" },
	{ 0x7600f99, "nf_ct_expect_unregister_notifier" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

MODULE_INFO(depends, "nfnetlink,nf_conntrack");


MODULE_INFO(srcversion, "5161F46B8B48CF05FB94F86");
