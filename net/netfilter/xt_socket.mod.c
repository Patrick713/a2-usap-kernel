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
	{ 0x5139fc22, "xt_unregister_matches" },
	{ 0xc9e3fe05, "xt_register_matches" },
	{ 0xc5850110, "printk" },
	{ 0xee43fd9b, "___ratelimit" },
	{ 0x2cfde9a2, "warn_slowpath_fmt" },
	{ 0x930d4789, "nf_defrag_ipv6_enable" },
	{ 0x89500f80, "nf_defrag_ipv4_enable" },
	{ 0xba7e2d8c, "nf_sk_lookup_slow_v4" },
	{ 0x5261c012, "sock_gen_put" },
	{ 0x3d198ce5, "nf_sk_lookup_slow_v6" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

MODULE_INFO(depends, "x_tables,nf_defrag_ipv6,nf_defrag_ipv4,nf_socket_ipv4,nf_socket_ipv6");


MODULE_INFO(srcversion, "737B54582F44E4F3FF50FAC");
