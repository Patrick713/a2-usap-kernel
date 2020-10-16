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
	{ 0x3f0307fe, "icmpv6_send" },
	{ 0x5af44712, "inet_frag_kill" },
	{ 0xa7e816fb, "pskb_trim_rcsum_slow" },
	{ 0xb96a6616, "unregister_net_sysctl_table" },
	{ 0xa8f6c843, "ip_frag_ecn_table" },
	{ 0xb545fc7c, "dst_release" },
	{ 0x2b5ab97d, "_raw_spin_lock_bh" },
	{ 0xb1b939e, "kmemdup" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0xda80cc9a, "fqdir_exit" },
	{ 0x4663d407, "inet_frag_find" },
	{ 0xf6bd118b, "inet_frag_reasm_prepare" },
	{ 0x3bdc1db7, "__pskb_pull_tail" },
	{ 0x65e2bb05, "unregister_pernet_subsys" },
	{ 0xc5850110, "printk" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0x71c90087, "memcmp" },
	{ 0x19ad474, "nf_unregister_net_hooks" },
	{ 0x452ba683, "ipv6_ext_hdr" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x2f50cbf5, "proc_doulongvec_minmax" },
	{ 0x649ad039, "inet_frags_fini" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0x2f780b39, "dev_get_by_index_rcu" },
	{ 0xc1e58a5f, "refcount_dec_and_test_checked" },
	{ 0xd2aeaa09, "init_net" },
	{ 0x20f7f645, "fqdir_init" },
	{ 0xf6e27651, "nf_register_net_hooks" },
	{ 0x80bdabb2, "inet_frag_reasm_finish" },
	{ 0x8f3625fe, "_raw_spin_unlock_bh" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xd28c75bb, "kfree_skb" },
	{ 0x3d73d517, "inet_frag_destroy" },
	{ 0xb041ec8d, "register_pernet_subsys" },
	{ 0xdb9ca3c5, "_raw_spin_lock" },
	{ 0x31b9195c, "__local_bh_disable_ip" },
	{ 0x37a0cba, "kfree" },
	{ 0x8a2c417b, "inet_frag_pull_head" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xbcc897bf, "inet_frags_init" },
	{ 0x847f5803, "inet_frag_queue_insert" },
	{ 0x99bb8806, "memmove" },
	{ 0xe113bbbc, "csum_partial" },
	{ 0xa373e597, "register_net_sysctl" },
	{ 0x61c76b3a, "proc_dointvec_jiffies" },
	{ 0x9b73dda5, "skb_copy_bits" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "529E0694C49601ED89FB521");
