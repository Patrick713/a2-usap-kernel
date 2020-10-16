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
	{ 0x36138fcf, "param_array_ops" },
	{ 0xe1bf6b5b, "param_ops_ushort" },
	{ 0x65e2bb05, "unregister_pernet_subsys" },
	{ 0xb041ec8d, "register_pernet_subsys" },
	{ 0xe0642ebe, "ip_vs_conn_in_get" },
	{ 0x76c4b4a2, "skb_ensure_writable" },
	{ 0xc358aaf8, "snprintf" },
	{ 0xc00689c7, "ip_vs_conn_new" },
	{ 0xc4a9747f, "ip_vs_nfct_expect_related" },
	{ 0x907618af, "__nf_nat_mangle_tcp_packet" },
	{ 0x97255bdf, "strlen" },
	{ 0xc49c3005, "ip_vs_conn_put" },
	{ 0x84199398, "ip_vs_tcp_conn_listen" },
	{ 0xc9f366f, "ip_vs_conn_out_get" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x609bcd98, "in6_pton" },
	{ 0xac5fcec0, "in4_pton" },
	{ 0x2aa0e4fc, "strncasecmp" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xc5850110, "printk" },
	{ 0x2466c8f1, "register_ip_vs_app_inc" },
	{ 0x9d647041, "register_ip_vs_app" },
	{ 0xa312e0a1, "unregister_ip_vs_app" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

MODULE_INFO(depends, "ip_vs,nf_nat");


MODULE_INFO(srcversion, "4625A1061038DA4191556E9");
