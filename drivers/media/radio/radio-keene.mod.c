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
	{ 0x132653a2, "v4l2_event_unsubscribe" },
	{ 0xbab33d1f, "v4l2_ctrl_subscribe_event" },
	{ 0x3e7b8ff9, "v4l2_ctrl_log_status" },
	{ 0xf83180f5, "v4l2_fh_release" },
	{ 0x50a1fc01, "v4l2_fh_open" },
	{ 0xf4e9b1be, "video_ioctl2" },
	{ 0xd69954e, "v4l2_ctrl_poll" },
	{ 0x183c8383, "usb_deregister" },
	{ 0x7a8b7baa, "usb_register_driver" },
	{ 0x31b9d7ce, "v4l2_device_unregister" },
	{ 0x7fa795f, "_dev_err" },
	{ 0x3eabc38c, "_dev_info" },
	{ 0xe109a68, "v4l2_ctrl_handler_setup" },
	{ 0xa13bd40a, "__video_register_device" },
	{ 0xf9a482f9, "msleep" },
	{ 0x55c771cf, "video_device_release_empty" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0x4f91b42f, "v4l2_device_register" },
	{ 0x3fa86437, "v4l2_ctrl_new_std_menu" },
	{ 0x6f19da99, "v4l2_ctrl_new_std" },
	{ 0x5809c1c4, "v4l2_ctrl_handler_init_class" },
	{ 0xebaa9dc8, "kmem_cache_alloc_trace" },
	{ 0xf4610713, "kmalloc_caches" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xc358aaf8, "snprintf" },
	{ 0xeea0399, "strscpy" },
	{ 0x849f8001, "video_devdata" },
	{ 0x37a0cba, "kfree" },
	{ 0x78f51124, "v4l2_ctrl_handler_free" },
	{ 0x9783aa95, "v4l2_device_put" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0x7fe02901, "v4l2_device_disconnect" },
	{ 0x284686f5, "video_unregister_device" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0x2196324, "__aeabi_idiv" },
	{ 0x8e865d3c, "arm_delay_ops" },
	{ 0xf65110e8, "_dev_warn" },
	{ 0x78c6bf66, "usb_control_msg" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

MODULE_INFO(depends, "videodev");

MODULE_ALIAS("usb:v046Dp0A0Ed*dc*dsc*dp*ic03isc00ip00in*");

MODULE_INFO(srcversion, "59E0A84C5C754A49FB293A7");
