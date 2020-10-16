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
	{ 0x387f9157, "deregister_mtd_parser" },
	{ 0x93273843, "__register_mtd_parser" },
	{ 0x37a0cba, "kfree" },
	{ 0xfeb02014, "of_node_put" },
	{ 0x53aa3262, "of_n_size_cells" },
	{ 0x5980fade, "of_n_addr_cells" },
	{ 0xd3039845, "of_get_next_child" },
	{ 0xe3f75967, "of_device_is_compatible" },
	{ 0x26b8796a, "of_get_child_by_name" },
	{ 0x97255bdf, "strlen" },
	{ 0x2d6fcc06, "__kmalloc" },
	{ 0xc5850110, "printk" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xf7bc2652, "of_get_property" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

MODULE_INFO(depends, "mtd");

MODULE_ALIAS("of:N*T*Cfixed-partitions");
MODULE_ALIAS("of:N*T*Cfixed-partitionsC*");

MODULE_INFO(srcversion, "06949DBF1206BE11BF87EA0");
