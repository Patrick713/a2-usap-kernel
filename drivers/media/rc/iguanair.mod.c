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
	{ 0x7fa795f, "_dev_err" },
	{ 0xa8dadf72, "rc_register_device" },
	{ 0xc358aaf8, "snprintf" },
	{ 0x3eabc38c, "_dev_info" },
	{ 0x5bbe49f4, "__init_waitqueue_head" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0x9f49ab55, "usb_alloc_urb" },
	{ 0xc28c6b00, "usb_alloc_coherent" },
	{ 0xd03009bf, "rc_free_device" },
	{ 0x3cd17765, "rc_allocate_device" },
	{ 0xebaa9dc8, "kmem_cache_alloc_trace" },
	{ 0xf4610713, "kmalloc_caches" },
	{ 0xd83dc5e6, "wait_for_completion_timeout" },
	{ 0x5f34c0db, "ir_raw_event_store" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x3a1b37e9, "ir_raw_event_handle" },
	{ 0xf65110e8, "_dev_warn" },
	{ 0x305d8a65, "usb_submit_urb" },
	{ 0xde8d355a, "usb_unlink_urb" },
	{ 0x1409805e, "ir_raw_event_store_with_filter" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xe6c12171, "complete" },
	{ 0x37a0cba, "kfree" },
	{ 0xf412120a, "usb_free_coherent" },
	{ 0x184a7893, "usb_free_urb" },
	{ 0xf88db2a2, "usb_kill_urb" },
	{ 0xe01f1504, "rc_unregister_device" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0xe707d823, "__aeabi_uidiv" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("usb:v1781p0938d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "ADCBAB5D4ECAF702958BFAF");
