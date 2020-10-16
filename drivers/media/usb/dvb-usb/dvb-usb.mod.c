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
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

static const struct modversion_info ____versions[]
__used __section(__versions) = {
	{ 0xe9942317, "module_layout" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xf4610713, "kmalloc_caches" },
	{ 0x2d6fcc06, "__kmalloc" },
	{ 0xe01f1504, "rc_unregister_device" },
	{ 0xf9a482f9, "msleep" },
	{ 0x9a152689, "param_ops_int" },
	{ 0x4be5c646, "dvb_dmx_init" },
	{ 0xffa8bc3b, "dvb_unregister_adapter" },
	{ 0x2eab75ee, "dvb_create_media_graph" },
	{ 0x88634ea0, "dvb_register_frontend" },
	{ 0xcf255457, "__media_device_usb_init" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xf88db2a2, "usb_kill_urb" },
	{ 0x5e2113db, "dvb_unregister_frontend" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x29d9f26e, "cancel_delayed_work_sync" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0xeea0399, "strscpy" },
	{ 0x3cd17765, "rc_allocate_device" },
	{ 0x70f5a068, "dvb_net_release" },
	{ 0xe331ef92, "i2c_add_adapter" },
	{ 0xcf76bcd2, "dvb_frontend_detach" },
	{ 0x38ea3b28, "input_event" },
	{ 0xdd0a2ba2, "strlcat" },
	{ 0x21381c3b, "dvb_dmx_swfilter_raw" },
	{ 0x5f754e5a, "memset" },
	{ 0xd03009bf, "rc_free_device" },
	{ 0x1802e58c, "dvb_dmxdev_release" },
	{ 0x3375510b, "mutex_lock_interruptible" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0x6d6880, "dvb_dmx_swfilter" },
	{ 0x7686edc0, "dvb_net_init" },
	{ 0x78c6bf66, "usb_control_msg" },
	{ 0xa8dadf72, "rc_register_device" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0xf412120a, "usb_free_coherent" },
	{ 0x7b334d3c, "dvb_dmx_release" },
	{ 0xedda2b2f, "dvb_dmx_swfilter_204" },
	{ 0x360dd97f, "media_device_cleanup" },
	{ 0x75685c7c, "i2c_del_adapter" },
	{ 0x3eabc38c, "_dev_info" },
	{ 0x305d8a65, "usb_submit_urb" },
	{ 0xcf86cdac, "queue_delayed_work_on" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x7b0629e7, "input_register_device" },
	{ 0xf9a45858, "usb_bulk_msg" },
	{ 0x6edec821, "usb_clear_halt" },
	{ 0x2de4f87b, "input_free_device" },
	{ 0x796bc8b2, "dvb_register_adapter" },
	{ 0xebaa9dc8, "kmem_cache_alloc_trace" },
	{ 0x2c256e1f, "input_scancode_to_scalar" },
	{ 0xa386cf16, "__media_device_register" },
	{ 0x37a0cba, "kfree" },
	{ 0x9d669763, "memcpy" },
	{ 0xc0e66c25, "input_unregister_device" },
	{ 0x836b5cfc, "request_firmware" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0xc358aaf8, "snprintf" },
	{ 0xc28c6b00, "usb_alloc_coherent" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x184a7893, "usb_free_urb" },
	{ 0xe5efc4f5, "media_device_unregister" },
	{ 0x8b6486ce, "release_firmware" },
	{ 0x9f49ab55, "usb_alloc_urb" },
	{ 0x9345d57b, "dvb_dmxdev_init" },
	{ 0xea1c9521, "input_allocate_device" },
};

MODULE_INFO(depends, "dvb-core,mc");


MODULE_INFO(srcversion, "A98091D964200C88ACB1A38");