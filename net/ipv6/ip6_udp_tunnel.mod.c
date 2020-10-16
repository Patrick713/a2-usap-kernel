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
	{ 0x8ef81ae8, "udp6_set_csum" },
	{ 0x639acd78, "sock_release" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0x59eb8df1, "sock_create_kern" },
	{ 0xf53da447, "kernel_setsockopt" },
	{ 0xfcbf105c, "kernel_connect" },
	{ 0x101cdb2, "kernel_sock_shutdown" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x5388bfe1, "kernel_bind" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x2bf8ed1d, "ip6_local_out" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "56C72BFC40F54931C4FFEDB");
