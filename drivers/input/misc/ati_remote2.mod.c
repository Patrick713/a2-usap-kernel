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
	{ 0x2de4f87b, "input_free_device" },
	{ 0x7b0629e7, "input_register_device" },
	{ 0xea1c9521, "input_allocate_device" },
	{ 0xf63fc023, "sysfs_create_group" },
	{ 0xdd0a2ba2, "strlcat" },
	{ 0xc358aaf8, "snprintf" },
	{ 0x9f49ab55, "usb_alloc_urb" },
	{ 0xc28c6b00, "usb_alloc_coherent" },
	{ 0x5262881b, "usb_driver_claim_interface" },
	{ 0xebaa9dc8, "kmem_cache_alloc_trace" },
	{ 0xf4610713, "kmalloc_caches" },
	{ 0x37a0cba, "kfree" },
	{ 0xc967f035, "usb_driver_release_interface" },
	{ 0xa4040d67, "sysfs_remove_group" },
	{ 0xc0e66c25, "input_unregister_device" },
	{ 0x2c256e1f, "input_scancode_to_scalar" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x526c3a6c, "jiffies" },
	{ 0x38ea3b28, "input_event" },
	{ 0x6ebe366f, "ktime_get_mono_fast_ns" },
	{ 0xf412120a, "usb_free_coherent" },
	{ 0x184a7893, "usb_free_urb" },
	{ 0x3d0f3514, "usb_autopm_put_interface" },
	{ 0xdebe62e1, "usb_autopm_get_interface" },
	{ 0xb08828fb, "usb_ifnum_to_if" },
	{ 0x78c6bf66, "usb_control_msg" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0x7fa795f, "_dev_err" },
	{ 0xf88db2a2, "usb_kill_urb" },
	{ 0x305d8a65, "usb_submit_urb" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x3b6c41ea, "kstrtouint" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("usb:v0471p0602d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "52FC8925F330686D0AFA95C");
