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
	{ 0xa7e816fb, "pskb_trim_rcsum_slow" },
	{ 0x4d35f969, "skb_ext_add" },
	{ 0xb96a6616, "unregister_net_sysctl_table" },
	{ 0xf83eb940, "ip_do_fragment" },
	{ 0x86eb0c08, "proc_dointvec" },
	{ 0xb545fc7c, "dst_release" },
	{ 0xf513bc98, "__vlan_find_dev_deep_rcu" },
	{ 0xd2da1048, "register_netdevice_notifier" },
	{ 0xb1b939e, "kmemdup" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0x76dbda3b, "neigh_destroy" },
	{ 0x422678a0, "nf_hooks_needed" },
	{ 0x9d0d6206, "unregister_netdevice_notifier" },
	{ 0xf5cdf088, "nf_hook_slow" },
	{ 0x3bdc1db7, "__pskb_pull_tail" },
	{ 0x5f754e5a, "memset" },
	{ 0x65e2bb05, "unregister_pernet_subsys" },
	{ 0x9dad2be, "br_dev_queue_push_xmit" },
	{ 0xc5850110, "printk" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0x71c90087, "memcmp" },
	{ 0x19ad474, "nf_unregister_net_hooks" },
	{ 0xf68b0045, "skb_push" },
	{ 0xc1e58a5f, "refcount_dec_and_test_checked" },
	{ 0x28f7fb79, "skb_pull" },
	{ 0xd2aeaa09, "init_net" },
	{ 0xcfb63992, "br_forward_finish" },
	{ 0x437eb1df, "ipv6_mod_enabled" },
	{ 0x95800620, "ip_route_input_noref" },
	{ 0xf455ca51, "nf_ipv6_ops" },
	{ 0xf6e27651, "nf_register_net_hooks" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xd28c75bb, "kfree_skb" },
	{ 0xb041ec8d, "register_pernet_subsys" },
	{ 0xa748a031, "pskb_expand_head" },
	{ 0x1555017a, "skb_pull_rcsum" },
	{ 0xa3066230, "ip_route_output_flow" },
	{ 0x31b9195c, "__local_bh_disable_ip" },
	{ 0x2cfde9a2, "warn_slowpath_fmt" },
	{ 0x37a0cba, "kfree" },
	{ 0x9d669763, "memcpy" },
	{ 0xe8a95f9e, "nf_br_ops" },
	{ 0x9d8a03e9, "__skb_ext_del" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x85670f1d, "rtnl_is_locked" },
	{ 0xa829e98a, "br_handle_frame_finish" },
	{ 0xa373e597, "register_net_sysctl" },
};

MODULE_INFO(depends, "bridge,ipv6");


MODULE_INFO(srcversion, "5C863D021D075D6531920BA");
