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
	{ 0xdbe81b9c, "usb_add_config" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0x2d39b0a7, "kstrdup" },
	{ 0xe661bd7e, "usb_ep_autoconfig_reset" },
	{ 0x4be0fc9e, "param_ops_charp" },
	{ 0x7592e5b, "usb_put_function_instance" },
	{ 0x17850e79, "usb_composite_overwrite_options" },
	{ 0xc6697bb1, "usb_composite_probe" },
	{ 0xca93b44e, "usb_add_function" },
	{ 0xc28d00d5, "usb_put_function" },
	{ 0x5d3fcd23, "usb_gadget_set_selfpowered" },
	{ 0x219fe38e, "usb_composite_unregister" },
	{ 0xf5ad3070, "usb_get_function" },
	{ 0x37a0cba, "kfree" },
	{ 0xa4c0a692, "usb_string_ids_tab" },
	{ 0xed79a960, "usb_get_function_instance" },
	{ 0xe1bf6b5b, "param_ops_ushort" },
	{ 0x8a331d2b, "param_ops_uint" },
};

MODULE_INFO(depends, "libcomposite,udc-core");


MODULE_INFO(srcversion, "B396D970AF81573DCD1B0EA");
