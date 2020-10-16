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
	{ 0x9a152689, "param_ops_int" },
	{ 0x1bf20403, "tcp_unregister_congestion_control" },
	{ 0x52351e6a, "tcp_register_congestion_control" },
	{ 0x5f754e5a, "memset" },
	{ 0x9d69bde7, "tcp_slow_start" },
	{ 0x2196324, "__aeabi_idiv" },
	{ 0x738b84dc, "tcp_reno_undo_cwnd" },
	{ 0xf1969a8e, "__usecs_to_jiffies" },
	{ 0x526c3a6c, "jiffies" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0xe707d823, "__aeabi_uidiv" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "E6A2B6EADFAB8CC253A1D52");
