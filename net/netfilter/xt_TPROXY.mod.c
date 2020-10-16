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
	{ 0x91ae6be7, "xt_unregister_targets" },
	{ 0x343c048e, "xt_register_targets" },
	{ 0x12f4dfe, "nf_tproxy_handle_time_wait4" },
	{ 0x36eda71e, "nf_tproxy_laddr4" },
	{ 0x27f3aef2, "nf_tproxy_get_sock_v4" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x6c3f8aa6, "nf_tproxy_handle_time_wait6" },
	{ 0x1bdc61f0, "sock_edemux" },
	{ 0x5261c012, "sock_gen_put" },
	{ 0x14af0bc6, "nf_tproxy_laddr6" },
	{ 0xf435f29a, "nf_tproxy_get_sock_v6" },
	{ 0x9b73dda5, "skb_copy_bits" },
	{ 0xe970d719, "ipv6_find_hdr" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x89500f80, "nf_defrag_ipv4_enable" },
	{ 0xc5850110, "printk" },
	{ 0xee43fd9b, "___ratelimit" },
	{ 0x930d4789, "nf_defrag_ipv6_enable" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

MODULE_INFO(depends, "x_tables,nf_tproxy_ipv4,nf_tproxy_ipv6,nf_defrag_ipv4,nf_defrag_ipv6");


MODULE_INFO(srcversion, "D7DB050158C2CB7B3B5305A");
