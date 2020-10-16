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
	{ 0x8d2f4deb, "xfrm_input" },
	{ 0xeecff7d7, "xfrm4_rcv" },
	{ 0xa7c8b410, "ipcomp_output" },
	{ 0x7724efbc, "ipcomp_input" },
	{ 0x7281e78, "ipcomp_destroy" },
	{ 0xd54f1913, "xfrm4_protocol_deregister" },
	{ 0x94d5774d, "xfrm_unregister_type" },
	{ 0x160ab7dd, "xfrm4_protocol_register" },
	{ 0xc5850110, "printk" },
	{ 0xb0304352, "xfrm_register_type" },
	{ 0x523c1a44, "ipv4_update_pmtu" },
	{ 0x50456e2d, "ipv4_redirect" },
	{ 0x4c3275a, "__xfrm_state_destroy" },
	{ 0xc1e58a5f, "refcount_dec_and_test_checked" },
	{ 0x1ee8d6d4, "refcount_inc_checked" },
	{ 0xff84b004, "xfrm_state_insert" },
	{ 0x4d14e4ab, "xfrm_init_state" },
	{ 0x97702496, "xfrm_state_alloc" },
	{ 0xa83a35ad, "xfrm_state_lookup" },
	{ 0xbd9e0c75, "ipcomp_init_state" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

MODULE_INFO(depends, "xfrm_ipcomp");


MODULE_INFO(srcversion, "0951BE07630704C8C1376DE");
