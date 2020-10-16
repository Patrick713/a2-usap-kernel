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
	{ 0x2670e7b0, "xt_hook_ops_alloc" },
	{ 0x37a0cba, "kfree" },
	{ 0x26454f49, "ip6t_register_table" },
	{ 0x8d9145e1, "ip6t_alloc_initial_table" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x12d1922f, "ip6_route_me_harder" },
	{ 0xfe304074, "ip6t_do_table" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xfda317f7, "ip6t_unregister_table" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

MODULE_INFO(depends, "x_tables,ip6_tables,ipv6");


MODULE_INFO(srcversion, "6EDC0362D8388F4F371A684");
