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
	{ 0x1bee5592, "usb_ep_queue" },
	{ 0xcff37ce1, "g_audio_cleanup" },
	{ 0xcde6997f, "u_audio_start_capture" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xf6dc7e70, "usb_function_unregister" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0x7592e5b, "usb_put_function_instance" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0xaea4b69b, "usb_ep_autoconfig" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0xc847167e, "config_group_init_type_name" },
	{ 0x7fa795f, "_dev_err" },
	{ 0x5c4e4d11, "g_audio_setup" },
	{ 0x38aa9a6c, "usb_function_register" },
	{ 0xe5e0b421, "u_audio_stop_playback" },
	{ 0x8c4fdbfb, "u_audio_stop_capture" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xf745a5a, "u_audio_start_playback" },
	{ 0xebaa9dc8, "kmem_cache_alloc_trace" },
	{ 0x37a0cba, "kfree" },
	{ 0x3b6c41ea, "kstrtouint" },
	{ 0x9d669763, "memcpy" },
	{ 0xf43cbd3, "usb_assign_descriptors" },
	{ 0xc4bd6698, "usb_interface_id" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xc358aaf8, "snprintf" },
};

MODULE_INFO(depends, "libcomposite,udc-core,u_audio");


MODULE_INFO(srcversion, "2766C7249F10AED8DBB9A4F");
