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
	{ 0x12f4b5a7, "usb_stor_post_reset" },
	{ 0xf88db2a2, "usb_kill_urb" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0xed81d3ee, "usb_stor_disconnect" },
	{ 0x38ea3b28, "input_event" },
	{ 0xdd0a2ba2, "strlcat" },
	{ 0x183c8383, "usb_deregister" },
	{ 0x73e20c1c, "strlcpy" },
	{ 0x9e7fdde8, "usb_stor_probe2" },
	{ 0xf412120a, "usb_free_coherent" },
	{ 0x7fa795f, "_dev_err" },
	{ 0x305d8a65, "usb_submit_urb" },
	{ 0x31db386e, "usb_stor_host_template_init" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x7b0629e7, "input_register_device" },
	{ 0x66d60ffd, "usb_stor_pre_reset" },
	{ 0x6aa3d6e0, "usb_stor_reset_resume" },
	{ 0xecbc0cf1, "usb_stor_suspend" },
	{ 0x2de4f87b, "input_free_device" },
	{ 0x970c8cfb, "usb_stor_probe1" },
	{ 0xebaa9dc8, "kmem_cache_alloc_trace" },
	{ 0x37a0cba, "kfree" },
	{ 0x829fa821, "usb_stor_resume" },
	{ 0xc0e66c25, "input_unregister_device" },
	{ 0x7a8b7baa, "usb_register_driver" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0xc358aaf8, "snprintf" },
	{ 0xc28c6b00, "usb_alloc_coherent" },
	{ 0x49ebacbd, "_clear_bit" },
	{ 0x184a7893, "usb_free_urb" },
	{ 0x9f49ab55, "usb_alloc_urb" },
	{ 0xea1c9521, "input_allocate_device" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("usb:v0D49p7000d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0D49p7010d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "AA1C72B24A7B99DC1A5153D");
