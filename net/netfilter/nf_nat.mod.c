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
	{ 0x609f1c7e, "synchronize_net" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x18e60984, "__do_once_start" },
	{ 0xf4610713, "kmalloc_caches" },
	{ 0x711b8a9b, "__crc32c_le_shift" },
	{ 0x7aa1756e, "kvfree" },
	{ 0x984ce9bd, "__nla_parse" },
	{ 0xf68285c0, "register_inetaddr_notifier" },
	{ 0x19f462ab, "kfree_call_rcu" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0x9b1cd23b, "nf_nat_hook" },
	{ 0x289c3714, "nf_ct_alloc_hashtable" },
	{ 0x7e116944, "nf_ct_kill_acct" },
	{ 0xb545fc7c, "dst_release" },
	{ 0x2b5ab97d, "_raw_spin_lock_bh" },
	{ 0xf7802486, "__aeabi_uidivmod" },
	{ 0x2124474, "ip_send_check" },
	{ 0x2a3aa678, "_test_and_clear_bit" },
	{ 0xd2da1048, "register_netdevice_notifier" },
	{ 0x60352082, "register_inet6addr_notifier" },
	{ 0xb1b939e, "kmemdup" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0xd5e9140, "inet_proto_csum_replace4" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0x9ac31d03, "__skb_checksum" },
	{ 0xb15b4109, "crc32c" },
	{ 0xc47638c, "__put_net" },
	{ 0xe2b5e146, "refcount_inc_not_zero_checked" },
	{ 0x9d0d6206, "unregister_netdevice_notifier" },
	{ 0x3269b2ba, "inet_proto_csum_replace16" },
	{ 0x379b4515, "nf_ct_iterate_destroy" },
	{ 0xf3f4fee9, "nf_ip_checksum" },
	{ 0xf1db1704, "nla_memcpy" },
	{ 0x2fe252cc, "unregister_inet6addr_notifier" },
	{ 0x5f754e5a, "memset" },
	{ 0x92aeea7b, "skb_checksum" },
	{ 0x65e2bb05, "unregister_pernet_subsys" },
	{ 0xfe731af8, "nf_ct_invert_tuple" },
	{ 0xc5850110, "printk" },
	{ 0x71c90087, "memcmp" },
	{ 0x77d404e1, "inet_select_addr" },
	{ 0x19ad474, "nf_unregister_net_hooks" },
	{ 0x76c4b4a2, "skb_ensure_writable" },
	{ 0x3c896b6b, "nf_hook_entries_delete_raw" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0xdad75e3f, "ip_route_me_harder" },
	{ 0x6b14bd2b, "nf_conntrack_alter_reply" },
	{ 0xc1e58a5f, "refcount_dec_and_test_checked" },
	{ 0x8ffe7e89, "nf_conntrack_htable_size" },
	{ 0xfda9581f, "prandom_u32" },
	{ 0x12b548f6, "module_put" },
	{ 0xf455ca51, "nf_ipv6_ops" },
	{ 0xfe029963, "unregister_inetaddr_notifier" },
	{ 0xf6e27651, "nf_register_net_hooks" },
	{ 0xd9fcfa3e, "ipv6_skip_exthdr" },
	{ 0x8f3625fe, "_raw_spin_unlock_bh" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x29b565b8, "nf_ct_iterate_cleanup_net" },
	{ 0x20b6605c, "nf_conntrack_tuple_taken" },
	{ 0xb041ec8d, "register_pernet_subsys" },
	{ 0xa748a031, "pskb_expand_head" },
	{ 0xebaa9dc8, "kmem_cache_alloc_trace" },
	{ 0x2cfde9a2, "warn_slowpath_fmt" },
	{ 0x44da5d0f, "__csum_ipv6_magic" },
	{ 0x77f6c690, "_raw_read_lock_bh" },
	{ 0x9acb8066, "_raw_read_unlock_bh" },
	{ 0x37a0cba, "kfree" },
	{ 0x9d669763, "memcpy" },
	{ 0xf935e50b, "nf_ct_extend_unregister" },
	{ 0x876a17a3, "nf_ct_helper_expectfn_register" },
	{ 0xfa26dbb4, "nf_ct_extend_register" },
	{ 0x7d8723e5, "__xfrm_decode_session" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xed2ee303, "nf_ct_helper_expectfn_unregister" },
	{ 0xb2d48a2e, "queue_work_on" },
	{ 0x99bb8806, "memmove" },
	{ 0xeab3fd69, "skb_put" },
	{ 0x82c7085d, "nf_ct_seqadj_set" },
	{ 0xcd030bb7, "xfrm_lookup" },
	{ 0x86726eb4, "nf_hook_entries_insert_raw" },
	{ 0x89e39bc1, "nf_ip6_checksum" },
	{ 0x717bcdac, "try_module_get" },
	{ 0x9a717656, "__do_once_done" },
	{ 0xb6f126c2, "nf_ct_ext_add" },
};

MODULE_INFO(depends, "nf_conntrack");


MODULE_INFO(srcversion, "FAC9547A490A538B7BB7460");
