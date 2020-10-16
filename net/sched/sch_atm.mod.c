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
	{ 0x2e700e5f, "unregister_qdisc" },
	{ 0x147b80ff, "register_qdisc" },
	{ 0x7481b148, "refcount_add_checked" },
	{ 0xf68b0045, "skb_push" },
	{ 0xa46a0f7a, "consume_skb" },
	{ 0x54fbd86c, "skb_realloc_headroom" },
	{ 0x28f7fb79, "skb_pull" },
	{ 0x9d669763, "memcpy" },
	{ 0x2d6fcc06, "__kmalloc" },
	{ 0x9b182b2, "sockfd_lookup" },
	{ 0x984ce9bd, "__nla_parse" },
	{ 0x9545af6d, "tasklet_init" },
	{ 0xa49539d9, "tcf_block_get" },
	{ 0xe8486e55, "qdisc_create_dflt" },
	{ 0xf88c2f67, "pfifo_qdisc_ops" },
	{ 0x65465214, "skb_trim" },
	{ 0xa5c2e213, "nla_put" },
	{ 0x2cfde9a2, "warn_slowpath_fmt" },
	{ 0x79d8fafe, "gnet_stats_copy_queue" },
	{ 0x3d99bfc9, "gnet_stats_copy_basic" },
	{ 0x85670f1d, "rtnl_is_locked" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xfaef0ed, "__tasklet_schedule" },
	{ 0xca54fee, "_test_and_set_bit" },
	{ 0xe085e228, "__qdisc_calculate_pkt_len" },
	{ 0x2200e942, "tcf_classify" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xc8e55eef, "noop_qdisc" },
	{ 0x203ae12b, "qdisc_reset" },
	{ 0x82072614, "tasklet_kill" },
	{ 0xc5850110, "printk" },
	{ 0x37a0cba, "kfree" },
	{ 0xa92173df, "fput" },
	{ 0x30a21c39, "tcf_block_put" },
	{ 0x90407503, "qdisc_put" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "2BD3335AB38A47572A1DEDE");
