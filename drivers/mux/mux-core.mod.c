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
	{ 0x93c5088e, "class_find_device" },
	{ 0x2d6fcc06, "__kmalloc" },
	{ 0x16adbf67, "down_killable" },
	{ 0xe93e49c3, "devres_free" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0x7b113694, "devres_alloc_node" },
	{ 0xc1c73f49, "device_del" },
	{ 0xb4471bfe, "down_trylock" },
	{ 0xc5850110, "printk" },
	{ 0xe4c122d0, "class_unregister" },
	{ 0xa24491bf, "ida_free" },
	{ 0x1b018b60, "device_add" },
	{ 0x621255c5, "__class_register" },
	{ 0x7fa795f, "_dev_err" },
	{ 0xebcc8bdd, "put_device" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x915b35eb, "devres_add" },
	{ 0x2cfde9a2, "warn_slowpath_fmt" },
	{ 0x37a0cba, "kfree" },
	{ 0x9dc3b2ba, "device_initialize" },
	{ 0x581cde4e, "up" },
	{ 0x4432a2cc, "of_parse_phandle_with_args" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xd87507a6, "device_match_of_node" },
	{ 0x6fe5cae9, "of_property_match_string" },
	{ 0xe54dbfa5, "dev_set_name" },
	{ 0xfeb02014, "of_node_put" },
	{ 0x4756260d, "ida_destroy" },
	{ 0xa5684076, "ida_alloc_range" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "708AF91964D29E44FAACDA8");
