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
	{ 0x65e2bb05, "unregister_pernet_subsys" },
	{ 0xd2aeaa09, "init_net" },
	{ 0xb041ec8d, "register_pernet_subsys" },
	{ 0x37a0cba, "kfree" },
	{ 0xc7f2f82a, "nf_nat_ipv4_register_fn" },
	{ 0x920d5a85, "ipt_register_table" },
	{ 0x77b9dca, "ipt_alloc_initial_table" },
	{ 0xb2ff4333, "ipt_unregister_table" },
	{ 0xbe78ca11, "nf_nat_ipv4_unregister_fn" },
	{ 0x4cab0dec, "ipt_do_table" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

MODULE_INFO(depends, "nf_nat,ip_tables");


MODULE_INFO(srcversion, "C927C19E86FDEE96882A5AF");
