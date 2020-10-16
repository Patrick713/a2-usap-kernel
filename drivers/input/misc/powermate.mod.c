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
	{ 0x183c8383, "usb_deregister" },
	{ 0x7a8b7baa, "usb_register_driver" },
	{ 0xc0e66c25, "input_unregister_device" },
	{ 0x184a7893, "usb_free_urb" },
	{ 0xf88db2a2, "usb_kill_urb" },
	{ 0x2de4f87b, "input_free_device" },
	{ 0x37a0cba, "kfree" },
	{ 0xf412120a, "usb_free_coherent" },
	{ 0x7b0629e7, "input_register_device" },
	{ 0xdd0a2ba2, "strlcat" },
	{ 0xc358aaf8, "snprintf" },
	{ 0x9f49ab55, "usb_alloc_urb" },
	{ 0xc28c6b00, "usb_alloc_coherent" },
	{ 0xea1c9521, "input_allocate_device" },
	{ 0xebaa9dc8, "kmem_cache_alloc_trace" },
	{ 0x78c6bf66, "usb_control_msg" },
	{ 0xf4610713, "kmalloc_caches" },
	{ 0x7fa795f, "_dev_err" },
	{ 0x38ea3b28, "input_event" },
	{ 0x39a12ca7, "_raw_spin_unlock_irqrestore" },
	{ 0x5f849a69, "_raw_spin_lock_irqsave" },
	{ 0xc5850110, "printk" },
	{ 0x305d8a65, "usb_submit_urb" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("usb:v077Dp0410d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v077Dp04AAd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v05F3p0240d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "450560C5F73F86008941529");