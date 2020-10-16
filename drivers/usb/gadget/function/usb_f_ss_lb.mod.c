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
	{ 0x4e412961, "usb_free_all_descriptors" },
	{ 0x4d127d75, "usb_ep_disable" },
	{ 0xcdbf753d, "usb_ep_enable" },
	{ 0x1bee5592, "usb_ep_queue" },
	{ 0xf7802486, "__aeabi_uidivmod" },
	{ 0x6fd4a004, "usb_ep_autoconfig_release" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0x9232c06c, "usb_ep_set_halt" },
	{ 0xb0a0bfe8, "usb_ep_alloc_request" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xf6dc7e70, "usb_function_unregister" },
	{ 0x5f754e5a, "memset" },
	{ 0x7592e5b, "usb_put_function_instance" },
	{ 0x6a6e05bf, "kstrtou8" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0xaea4b69b, "usb_ep_autoconfig" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0xc847167e, "config_group_init_type_name" },
	{ 0x7fa795f, "_dev_err" },
	{ 0x38aa9a6c, "usb_function_register" },
	{ 0xb39882ca, "alloc_ep_req" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x4af6ddf0, "kstrtou16" },
	{ 0x53ff8a7d, "config_ep_by_speed" },
	{ 0x81cbdd08, "usb_ep_free_request" },
	{ 0xebaa9dc8, "kmem_cache_alloc_trace" },
	{ 0x2cfde9a2, "warn_slowpath_fmt" },
	{ 0x37a0cba, "kfree" },
	{ 0x3b6c41ea, "kstrtouint" },
	{ 0xe3ee6957, "usb_string_id" },
	{ 0xf43cbd3, "usb_assign_descriptors" },
	{ 0xc4bd6698, "usb_interface_id" },
	{ 0x8f678b07, "__stack_chk_guard" },
};

MODULE_INFO(depends, "libcomposite,udc-core");


MODULE_INFO(srcversion, "4F36F516318992291130C1C");
