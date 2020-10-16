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
	{ 0xab6c68ac, "fsg_config_from_params" },
	{ 0x1ccb58f7, "fsg_common_set_num_buffers" },
	{ 0x6acb4179, "fsg_common_set_inquiry_string" },
	{ 0xdbe81b9c, "usb_add_config" },
	{ 0x141fce2a, "fsg_common_remove_luns" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0xfe41fb0b, "param_ops_bool" },
	{ 0xe4495801, "gether_set_host_addr" },
	{ 0x9a0221c7, "fsg_common_free_buffers" },
	{ 0x4be0fc9e, "param_ops_charp" },
	{ 0xf7a5266, "fsg_common_set_cdev" },
	{ 0x7592e5b, "usb_put_function_instance" },
	{ 0xc5850110, "printk" },
	{ 0xe7746b2d, "gether_set_qmult" },
	{ 0x7fa795f, "_dev_err" },
	{ 0x17850e79, "usb_composite_overwrite_options" },
	{ 0x3eabc38c, "_dev_info" },
	{ 0xc6697bb1, "usb_composite_probe" },
	{ 0xca93b44e, "usb_add_function" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xd1a3e8e0, "fsg_common_create_luns" },
	{ 0xc28d00d5, "usb_put_function" },
	{ 0xad98c5fe, "gether_set_dev_addr" },
	{ 0x219fe38e, "usb_composite_unregister" },
	{ 0xf5ad3070, "usb_get_function" },
	{ 0x37a0cba, "kfree" },
	{ 0xa4c0a692, "usb_string_ids_tab" },
	{ 0x36138fcf, "param_array_ops" },
	{ 0xed79a960, "usb_get_function_instance" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x7e26d4a5, "fsg_common_set_sysfs" },
	{ 0xe1bf6b5b, "param_ops_ushort" },
	{ 0x8a331d2b, "param_ops_uint" },
	{ 0x81dfa0f, "usb_remove_function" },
};

MODULE_INFO(depends, "usb_f_mass_storage,libcomposite,u_ether");


MODULE_INFO(srcversion, "79A7CAB5498CD5A861D98D4");
