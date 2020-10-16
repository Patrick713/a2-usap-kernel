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
	{ 0x319ec023, "neigh_lookup" },
	{ 0x5af44712, "inet_frag_kill" },
	{ 0xb96a6616, "unregister_net_sysctl_table" },
	{ 0xb545fc7c, "dst_release" },
	{ 0x36f6c5e6, "skb_clone" },
	{ 0xb23c7123, "skb_copy" },
	{ 0x9d27e582, "lowpan_header_compress" },
	{ 0xd2da1048, "register_netdevice_notifier" },
	{ 0xb1b939e, "kmemdup" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0x37cc1f05, "init_user_ns" },
	{ 0x76dbda3b, "neigh_destroy" },
	{ 0xda80cc9a, "fqdir_exit" },
	{ 0x9d0d6206, "unregister_netdevice_notifier" },
	{ 0x4663d407, "inet_frag_find" },
	{ 0xf6bd118b, "inet_frag_reasm_prepare" },
	{ 0x927d2b0f, "netif_rx" },
	{ 0x3bdc1db7, "__pskb_pull_tail" },
	{ 0x5f754e5a, "memset" },
	{ 0x65e2bb05, "unregister_pernet_subsys" },
	{ 0xc5850110, "printk" },
	{ 0x71c90087, "memcmp" },
	{ 0x2f50cbf5, "proc_doulongvec_minmax" },
	{ 0x649ad039, "inet_frags_fini" },
	{ 0x536ed03b, "ieee802154_hdr_peek" },
	{ 0xd2584221, "dev_get_by_index" },
	{ 0x82910dab, "dev_remove_pack" },
	{ 0x814fb952, "nd_tbl" },
	{ 0xc1e58a5f, "refcount_dec_and_test_checked" },
	{ 0x28f7fb79, "skb_pull" },
	{ 0xd2aeaa09, "init_net" },
	{ 0x9cd4091f, "rtnl_link_unregister" },
	{ 0x6addd259, "lowpan_header_decompress" },
	{ 0x20f7f645, "fqdir_init" },
	{ 0x8a4d2069, "skb_copy_expand" },
	{ 0x22bf2ba1, "__alloc_skb" },
	{ 0x80bdabb2, "inet_frag_reasm_finish" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xd28c75bb, "kfree_skb" },
	{ 0x3d73d517, "inet_frag_destroy" },
	{ 0x30b499ee, "lowpan_unregister_netdevice" },
	{ 0xb041ec8d, "register_pernet_subsys" },
	{ 0xf77975a9, "ieee802154_hdr_peek_addrs" },
	{ 0xdb9ca3c5, "_raw_spin_lock" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0x2cfde9a2, "warn_slowpath_fmt" },
	{ 0x77f6c690, "_raw_read_lock_bh" },
	{ 0x9acb8066, "_raw_read_unlock_bh" },
	{ 0x37a0cba, "kfree" },
	{ 0x9d669763, "memcpy" },
	{ 0xbc20d5eb, "rtnl_link_register" },
	{ 0xc8e73021, "lowpan_register_netdevice" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xbcc897bf, "inet_frags_init" },
	{ 0x847f5803, "inet_frag_queue_insert" },
	{ 0x3c7af4b6, "dev_add_pack" },
	{ 0xa46a0f7a, "consume_skb" },
	{ 0x85670f1d, "rtnl_is_locked" },
	{ 0x952da7ff, "dev_queue_xmit" },
	{ 0xa373e597, "register_net_sysctl" },
	{ 0xeab3fd69, "skb_put" },
	{ 0x61c76b3a, "proc_dointvec_jiffies" },
	{ 0x87e2553b, "ieee802154_max_payload" },
};

MODULE_INFO(depends, "6lowpan,ieee802154,ipv6");


MODULE_INFO(srcversion, "CA07D658CDB046FA03041C1");
