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
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

static const struct modversion_info ____versions[]
__used __section(__versions) = {
	{ 0xe9942317, "module_layout" },
	{ 0x639acd78, "sock_release" },
	{ 0xc05aa870, "metadata_dst_alloc" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0x59eb8df1, "sock_create_kern" },
	{ 0xf53da447, "kernel_setsockopt" },
	{ 0xfcbf105c, "kernel_connect" },
	{ 0x4093a871, "iptunnel_xmit" },
	{ 0x101cdb2, "kernel_sock_shutdown" },
	{ 0x99517682, "udp_encap_enable" },
	{ 0xe6e04598, "ipv6_stub" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x6e4ac99c, "udp_set_csum" },
	{ 0x5388bfe1, "kernel_bind" },
	{ 0x8f678b07, "__stack_chk_guard" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "0A315BA6124B0664F4D23FB");
