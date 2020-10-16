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
	{ 0xf4610713, "kmalloc_caches" },
	{ 0xe1d9cb60, "usb_gstrings_attach" },
	{ 0x4e412961, "usb_free_all_descriptors" },
	{ 0x6273259a, "gserial_connect" },
	{ 0x4d127d75, "usb_ep_disable" },
	{ 0xcdbf753d, "usb_ep_enable" },
	{ 0x1bee5592, "usb_ep_queue" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0x9232c06c, "usb_ep_set_halt" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xf6dc7e70, "usb_function_unregister" },
	{ 0x7592e5b, "usb_put_function_instance" },
	{ 0xaea4b69b, "usb_ep_autoconfig" },
	{ 0x1af9f379, "gserial_disconnect" },
	{ 0xb96f8bda, "gs_alloc_req" },
	{ 0xc847167e, "config_group_init_type_name" },
	{ 0x7fa795f, "_dev_err" },
	{ 0x33bfdca2, "gserial_alloc_line" },
	{ 0x38aa9a6c, "usb_function_register" },
	{ 0x53ff8a7d, "config_ep_by_speed" },
	{ 0xebaa9dc8, "kmem_cache_alloc_trace" },
	{ 0xdb9ca3c5, "_raw_spin_lock" },
	{ 0x37a0cba, "kfree" },
	{ 0x9d669763, "memcpy" },
	{ 0xb6652875, "gserial_free_line" },
	{ 0xf43cbd3, "usb_assign_descriptors" },
	{ 0xc4bd6698, "usb_interface_id" },
	{ 0xf0ed2522, "gs_free_req" },
};

MODULE_INFO(depends, "libcomposite,u_serial,udc-core");


MODULE_INFO(srcversion, "02E722A6C6662FDF62554A8");
