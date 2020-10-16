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
	{ 0xf861fb87, "xfrm6_rcv" },
	{ 0x1e3e1676, "xfrm6_find_1stfragopt" },
	{ 0xa7c8b410, "ipcomp_output" },
	{ 0x7724efbc, "ipcomp_input" },
	{ 0x7281e78, "ipcomp_destroy" },
	{ 0x58e7a3f2, "xfrm6_protocol_deregister" },
	{ 0x94d5774d, "xfrm_unregister_type" },
	{ 0x7007414f, "xfrm6_protocol_register" },
	{ 0xc5850110, "printk" },
	{ 0xb0304352, "xfrm_register_type" },
	{ 0x1ee8d6d4, "refcount_inc_checked" },
	{ 0xff84b004, "xfrm_state_insert" },
	{ 0x4d14e4ab, "xfrm_init_state" },
	{ 0x6d13f51b, "xfrm6_tunnel_alloc_spi" },
	{ 0x97702496, "xfrm_state_alloc" },
	{ 0x7f1fb1d1, "xfrm6_tunnel_spi_lookup" },
	{ 0xbd9e0c75, "ipcomp_init_state" },
	{ 0xe75a6fd8, "ip6_redirect" },
	{ 0x4c3275a, "__xfrm_state_destroy" },
	{ 0xc1e58a5f, "refcount_dec_and_test_checked" },
	{ 0x5c289110, "ip6_update_pmtu" },
	{ 0xb8886e84, "make_kuid" },
	{ 0xa83a35ad, "xfrm_state_lookup" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

MODULE_INFO(depends, "ipv6,xfrm_ipcomp,xfrm6_tunnel");


MODULE_INFO(srcversion, "3FD06C69DE229434461DF73");
