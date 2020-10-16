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
	{ 0x60ba1462, "sock_no_sendpage" },
	{ 0x2478a81f, "sock_no_mmap" },
	{ 0xa2d19421, "sock_no_getsockopt" },
	{ 0xf07b6b1c, "sock_no_setsockopt" },
	{ 0xdb30a522, "sock_no_shutdown" },
	{ 0x65923774, "sock_no_listen" },
	{ 0x99ed2265, "sock_no_ioctl" },
	{ 0xf56b644d, "datagram_poll" },
	{ 0x873315f7, "sock_no_getname" },
	{ 0xdabddb4d, "sock_no_accept" },
	{ 0x8ea569b7, "sock_no_socketpair" },
	{ 0xcbf0386c, "sock_no_connect" },
	{ 0x26dd6bb9, "sock_no_bind" },
	{ 0xe701b8d9, "xfrm_register_km" },
	{ 0xb28dc78c, "sock_register" },
	{ 0xb041ec8d, "register_pernet_subsys" },
	{ 0x9adc4641, "proto_register" },
	{ 0x7c4749d7, "proto_unregister" },
	{ 0x65e2bb05, "unregister_pernet_subsys" },
	{ 0x62737e1d, "sock_unregister" },
	{ 0xdfc4c98d, "xfrm_unregister_km" },
	{ 0x22623ee8, "xfrm_audit_policy_add" },
	{ 0x41d2b880, "xfrm_policy_insert" },
	{ 0xc50437d1, "xfrm_policy_alloc" },
	{ 0x55b045d4, "xfrm_policy_bysel_ctx" },
	{ 0x72395dc1, "xfrm_calg_get_byid" },
	{ 0x5c699441, "xfrm_aalg_get_byid" },
	{ 0xbbce0880, "xfrm_state_add" },
	{ 0x886f7e52, "xfrm_audit_state_add" },
	{ 0xcf81b3c5, "xfrm_state_update" },
	{ 0x4d14e4ab, "xfrm_init_state" },
	{ 0xe914e41e, "strcpy" },
	{ 0xc80741, "xfrm_ealg_get_byid" },
	{ 0x37a0cba, "kfree" },
	{ 0x2d6fcc06, "__kmalloc" },
	{ 0x97702496, "xfrm_state_alloc" },
	{ 0xbe6928dc, "xfrm_alloc_spi" },
	{ 0xfeb5d0aa, "verify_spi_info" },
	{ 0x7762c91d, "xfrm_find_acq" },
	{ 0xdb9ca3c5, "_raw_spin_lock" },
	{ 0xb09dba87, "__sock_recv_ts_and_drops" },
	{ 0xba4f7810, "skb_free_datagram" },
	{ 0x7d80fa7, "skb_copy_datagram_iter" },
	{ 0xd1355a85, "skb_recv_datagram" },
	{ 0x8f3625fe, "_raw_spin_unlock_bh" },
	{ 0x2b5ab97d, "_raw_spin_lock_bh" },
	{ 0x9355e2a7, "xfrm_find_acq_byseq" },
	{ 0x4c3275a, "__xfrm_state_destroy" },
	{ 0x8c487c02, "xfrm_state_delete" },
	{ 0x37701c60, "xfrm_audit_state_delete" },
	{ 0xd6f50cf7, "xfrm_ealg_get_byname" },
	{ 0xaab23340, "xfrm_calg_get_byname" },
	{ 0x37a02412, "xfrm_aalg_get_byname" },
	{ 0x1e4f113d, "xfrm_policy_destroy" },
	{ 0x234200ee, "xfrm_audit_policy_delete" },
	{ 0xc81eb005, "xfrm_policy_byid" },
	{ 0x7a8ca627, "xfrm_count_pfkey_enc_supported" },
	{ 0xa575945, "xfrm_count_pfkey_auth_supported" },
	{ 0x28e23139, "xfrm_probe_algs" },
	{ 0xae947aa3, "remove_proc_entry" },
	{ 0xb73be794, "xfrm_ealg_get_byidx" },
	{ 0xc6b1fdbe, "xfrm_aalg_get_byidx" },
	{ 0x9d669763, "memcpy" },
	{ 0x2782b393, "xfrm_state_walk_init" },
	{ 0xebaa9dc8, "kmem_cache_alloc_trace" },
	{ 0xf4610713, "kmalloc_caches" },
	{ 0xc5850110, "printk" },
	{ 0x1e9edfb7, "seq_hlist_start_head_rcu" },
	{ 0x67b78eb3, "seq_hlist_next_rcu" },
	{ 0xc8275115, "seq_printf" },
	{ 0x5b470551, "sock_i_ino" },
	{ 0xde004450, "from_kuid_munged" },
	{ 0x8d4db28b, "sock_i_uid" },
	{ 0x1fe88ae5, "proc_create_net_data" },
	{ 0xecd247a4, "sk_free" },
	{ 0xc1e58a5f, "refcount_dec_and_test_checked" },
	{ 0x6091797f, "synchronize_rcu" },
	{ 0x2d9ecd4c, "skb_queue_purge" },
	{ 0x1738c19e, "_raw_write_unlock_bh" },
	{ 0xefb7bccf, "_raw_write_lock_bh" },
	{ 0xa8223179, "refcount_dec_checked" },
	{ 0x1ee8d6d4, "refcount_inc_checked" },
	{ 0x92849d17, "sock_init_data" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0x27073f33, "sk_alloc" },
	{ 0x4025fd3f, "ns_capable" },
	{ 0xa83a35ad, "xfrm_state_lookup" },
	{ 0x20ac6310, "km_state_notify" },
	{ 0x60a8ec3a, "xfrm_state_flush" },
	{ 0xe8bdb8a7, "xfrm_state_walk" },
	{ 0x509f57f5, "xfrm_state_walk_done" },
	{ 0xb23c7123, "skb_copy" },
	{ 0xd18a14a2, "km_policy_notify" },
	{ 0x2db9bd4e, "xfrm_policy_flush" },
	{ 0x2cfde9a2, "warn_slowpath_fmt" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0xe16c6b8b, "_copy_from_iter_full" },
	{ 0xd69531bf, "xfrm_policy_walk_done" },
	{ 0xc9df055a, "xfrm_policy_walk_init" },
	{ 0x6bf4bc8f, "xfrm_policy_walk" },
	{ 0xeab3fd69, "skb_put" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x5f754e5a, "memset" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xd28c75bb, "kfree_skb" },
	{ 0xac6659eb, "skb_queue_tail" },
	{ 0x313e4801, "sock_rfree" },
	{ 0x36f6c5e6, "skb_clone" },
	{ 0x22bf2ba1, "__alloc_skb" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "47C977A73B5D8B4E48836E1");
