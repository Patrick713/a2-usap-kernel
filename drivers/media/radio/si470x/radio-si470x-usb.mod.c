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
	{ 0x9a152689, "param_ops_int" },
	{ 0x8a331d2b, "param_ops_uint" },
	{ 0xe1bf6b5b, "param_ops_ushort" },
	{ 0x183c8383, "usb_deregister" },
	{ 0x7a8b7baa, "usb_register_driver" },
	{ 0xa13bd40a, "__video_register_device" },
	{ 0x5d3e1cfb, "si470x_set_freq" },
	{ 0x7fa795f, "_dev_err" },
	{ 0x55c771cf, "video_device_release_empty" },
	{ 0x9d669763, "memcpy" },
	{ 0x252dc791, "si470x_viddev_template" },
	{ 0x6f19da99, "v4l2_ctrl_new_std" },
	{ 0xe1e0dcec, "si470x_ctrl_ops" },
	{ 0x5809c1c4, "v4l2_ctrl_handler_init_class" },
	{ 0x4f91b42f, "v4l2_device_register" },
	{ 0x9f49ab55, "usb_alloc_urb" },
	{ 0x2d6fcc06, "__kmalloc" },
	{ 0x5bbe49f4, "__init_waitqueue_head" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0xebaa9dc8, "kmem_cache_alloc_trace" },
	{ 0xf4610713, "kmalloc_caches" },
	{ 0x50a1fc01, "v4l2_fh_open" },
	{ 0xf83180f5, "v4l2_fh_release" },
	{ 0xc358aaf8, "snprintf" },
	{ 0xeea0399, "strscpy" },
	{ 0x849f8001, "video_devdata" },
	{ 0x37a0cba, "kfree" },
	{ 0x31b9d7ce, "v4l2_device_unregister" },
	{ 0x78f51124, "v4l2_ctrl_handler_free" },
	{ 0x184a7893, "usb_free_urb" },
	{ 0x78c6bf66, "usb_control_msg" },
	{ 0x9783aa95, "v4l2_device_put" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0x284686f5, "video_unregister_device" },
	{ 0x7fe02901, "v4l2_device_disconnect" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0x8a1954a3, "si470x_stop" },
	{ 0xf88db2a2, "usb_kill_urb" },
	{ 0xf65110e8, "_dev_warn" },
	{ 0xe6c12171, "complete" },
	{ 0x3dcf1ffa, "__wake_up" },
	{ 0xe109a68, "v4l2_ctrl_handler_setup" },
	{ 0x9b71be53, "si470x_start" },
	{ 0x3eabc38c, "_dev_info" },
	{ 0x305d8a65, "usb_submit_urb" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

MODULE_INFO(depends, "videodev,radio-si470x-common");

MODULE_ALIAS("usb:v10C4p818Ad*dc*dsc*dp*ic03isc00ip00in*");
MODULE_ALIAS("usb:v06E1pA155d*dc*dsc*dp*ic03isc00ip00in*");
MODULE_ALIAS("usb:v1B80pD700d*dc*dsc*dp*ic03isc00ip00in*");
MODULE_ALIAS("usb:v10C5p819Ad*dc*dsc*dp*ic03isc00ip00in*");
MODULE_ALIAS("usb:v12CFp7111d*dc*dsc*dp*ic03isc00ip00in*");

MODULE_INFO(srcversion, "62FCC59E842267299C03FB2");
