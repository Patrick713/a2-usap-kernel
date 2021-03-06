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
	{ 0x3cf3183f, "arpt_register_table" },
	{ 0x5b64761f, "arpt_alloc_initial_table" },
	{ 0xb0a8757c, "arpt_do_table" },
	{ 0xf8fc8930, "arpt_unregister_table" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

MODULE_INFO(depends, "x_tables,arp_tables");


MODULE_INFO(srcversion, "4BC230A3869BD7E51A92A44");
