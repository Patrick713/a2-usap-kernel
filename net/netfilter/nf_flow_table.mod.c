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
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

static const struct modversion_info ____versions[]
__used __section(__versions) = {
	{ 0xe9942317, "module_layout" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xf4610713, "kmalloc_caches" },
	{ 0x6309e811, "rhashtable_walk_exit" },
	{ 0x5261322c, "rht_bucket_nested" },
	{ 0x47884890, "system_power_efficient_wq" },
	{ 0x19f462ab, "kfree_call_rcu" },
	{ 0x27b05872, "rhashtable_walk_next" },
	{ 0xa149ba95, "nf_ct_l4proto_find" },
	{ 0xb545fc7c, "dst_release" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0xd5e9140, "inet_proto_csum_replace4" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x29d9f26e, "cancel_delayed_work_sync" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0xb6529965, "rhashtable_insert_slow" },
	{ 0x526c3a6c, "jiffies" },
	{ 0x3269b2ba, "inet_proto_csum_replace16" },
	{ 0x47a25702, "rhashtable_destroy" },
	{ 0x80377a0d, "nf_ct_delete" },
	{ 0x3bdc1db7, "__pskb_pull_tail" },
	{ 0x52dc69ef, "rht_bucket_nested_insert" },
	{ 0x5f754e5a, "memset" },
	{ 0xb787eee9, "rhashtable_walk_stop" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0x71c90087, "memcmp" },
	{ 0x4eeb6d2, "rhashtable_walk_start_check" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0xcf86cdac, "queue_delayed_work_on" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xd46b54dd, "flush_delayed_work" },
	{ 0xa748a031, "pskb_expand_head" },
	{ 0xebaa9dc8, "kmem_cache_alloc_trace" },
	{ 0x2a18c74, "nf_conntrack_destroy" },
	{ 0x41a17314, "rhashtable_walk_enter" },
	{ 0x31b9195c, "__local_bh_disable_ip" },
	{ 0x9405c2d3, "rhashtable_init" },
	{ 0x2cfde9a2, "warn_slowpath_fmt" },
	{ 0x37a0cba, "kfree" },
	{ 0x1f5641f1, "neigh_xmit" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xb2d48a2e, "queue_work_on" },
	{ 0x49ebacbd, "_clear_bit" },
	{ 0x1dc16019, "skb_gso_validate_network_len" },
	{ 0xa038f306, "__rht_bucket_nested" },
};

MODULE_INFO(depends, "nf_conntrack");


MODULE_INFO(srcversion, "93E2DA182B3DA6889CA12F3");
