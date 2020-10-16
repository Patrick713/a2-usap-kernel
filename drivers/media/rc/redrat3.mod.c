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
	{ 0x8a331d2b, "param_ops_uint" },
	{ 0x183c8383, "usb_deregister" },
	{ 0x7a8b7baa, "usb_register_driver" },
	{ 0xe01f1504, "rc_unregister_device" },
	{ 0xf9a45858, "usb_bulk_msg" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0x79727164, "led_classdev_unregister" },
	{ 0xd03009bf, "rc_free_device" },
	{ 0xf412120a, "usb_free_coherent" },
	{ 0x184a7893, "usb_free_urb" },
	{ 0xa8dadf72, "rc_register_device" },
	{ 0xc358aaf8, "snprintf" },
	{ 0x3cd17765, "rc_allocate_device" },
	{ 0x760a7600, "led_classdev_register_ext" },
	{ 0xc28c6b00, "usb_alloc_coherent" },
	{ 0x9f49ab55, "usb_alloc_urb" },
	{ 0x37a0cba, "kfree" },
	{ 0x78c6bf66, "usb_control_msg" },
	{ 0xebaa9dc8, "kmem_cache_alloc_trace" },
	{ 0xf4610713, "kmalloc_caches" },
	{ 0xf65110e8, "_dev_warn" },
	{ 0xc5850110, "printk" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x3eabc38c, "_dev_info" },
	{ 0x3a1b37e9, "ir_raw_event_handle" },
	{ 0x1409805e, "ir_raw_event_store_with_filter" },
	{ 0x5f34c0db, "ir_raw_event_store" },
	{ 0x9d669763, "memcpy" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x2196324, "__aeabi_idiv" },
	{ 0xde8d355a, "usb_unlink_urb" },
	{ 0x7fa795f, "_dev_err" },
	{ 0xf88db2a2, "usb_kill_urb" },
	{ 0x2b4a3023, "led_classdev_suspend" },
	{ 0xcd5af56b, "led_classdev_resume" },
	{ 0x305d8a65, "usb_submit_urb" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("usb:v112Ap0001d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v112Ap0005d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "846A72CA7FA8DEE17D82438");
