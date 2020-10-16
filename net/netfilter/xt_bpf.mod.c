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
	{ 0xe285a18, "bpf_prog_get_type_dev" },
	{ 0x2b929620, "bpf_prog_create" },
	{ 0x93bb37aa, "bpf_prog_get_type_path" },
	{ 0xd9ce8f0c, "strnlen" },
	{ 0xc5850110, "printk" },
	{ 0xee43fd9b, "___ratelimit" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xd653b126, "sched_clock" },
	{ 0xef2f70b5, "bpf_stats_enabled_key" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x8746bf73, "bpf_prog_destroy" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

MODULE_INFO(depends, "x_tables");


MODULE_INFO(srcversion, "B11A0F67A1781608DBFDAE4");
