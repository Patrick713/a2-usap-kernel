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
	{ 0x7a1f0129, "mini_qdisc_pair_swap" },
	{ 0xe42b4138, "tcf_block_get_ext" },
	{ 0xa5a8fc37, "mini_qdisc_pair_init" },
	{ 0x7be6905, "net_inc_egress_queue" },
	{ 0x2c3054f9, "net_inc_ingress_queue" },
	{ 0x86f85114, "net_dec_egress_queue" },
	{ 0x46013233, "net_dec_ingress_queue" },
	{ 0xddb0218, "tcf_block_put_ext" },
	{ 0xa5c2e213, "nla_put" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "B8D7C882004F51E5C6B44F8");
