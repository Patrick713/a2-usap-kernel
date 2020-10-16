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
	{ 0x92b57248, "flush_work" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xf4610713, "kmalloc_caches" },
	{ 0x132653a2, "v4l2_event_unsubscribe" },
	{ 0x2d6fcc06, "__kmalloc" },
	{ 0xf9a482f9, "msleep" },
	{ 0x978ca35c, "v4l2_ctrl_cluster" },
	{ 0x9a152689, "param_ops_int" },
	{ 0x3e7b8ff9, "v4l2_ctrl_log_status" },
	{ 0x31b9d7ce, "v4l2_device_unregister" },
	{ 0x78f51124, "v4l2_ctrl_handler_free" },
	{ 0x6f19da99, "v4l2_ctrl_new_std" },
	{ 0xf88db2a2, "usb_kill_urb" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0xa13bd40a, "__video_register_device" },
	{ 0xfe41fb0b, "param_ops_bool" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0x22615593, "v4l2_ctrl_activate" },
	{ 0xeea0399, "strscpy" },
	{ 0xe331ef92, "i2c_add_adapter" },
	{ 0x51a910c0, "arm_copy_to_user" },
	{ 0x4f91b42f, "v4l2_device_register" },
	{ 0xd034392d, "v4l2_match_dv_timings" },
	{ 0x5bbe49f4, "__init_waitqueue_head" },
	{ 0x3fa86437, "v4l2_ctrl_new_std_menu" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0x7fe02901, "v4l2_device_disconnect" },
	{ 0x5f754e5a, "memset" },
	{ 0x183c8383, "usb_deregister" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0x284686f5, "video_unregister_device" },
	{ 0xb77392a9, "v4l2_fh_init" },
	{ 0xbab33d1f, "v4l2_ctrl_subscribe_event" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x78c6bf66, "usb_control_msg" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0xf83180f5, "v4l2_fh_release" },
	{ 0xf412120a, "usb_free_coherent" },
	{ 0x7fa795f, "_dev_err" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x75685c7c, "i2c_del_adapter" },
	{ 0x305d8a65, "usb_submit_urb" },
	{ 0xd6cf68f9, "usb_get_dev" },
	{ 0x849f8001, "video_devdata" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xf9a45858, "usb_bulk_msg" },
	{ 0x822bd109, "usb_put_dev" },
	{ 0x1000e51, "schedule" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0xe109a68, "v4l2_ctrl_handler_setup" },
	{ 0xebaa9dc8, "kmem_cache_alloc_trace" },
	{ 0x3dcf1ffa, "__wake_up" },
	{ 0x647af474, "prepare_to_wait_event" },
	{ 0x2cfde9a2, "warn_slowpath_fmt" },
	{ 0x37a0cba, "kfree" },
	{ 0x9d669763, "memcpy" },
	{ 0x36138fcf, "param_array_ops" },
	{ 0x5809c1c4, "v4l2_ctrl_handler_init_class" },
	{ 0x7a8b7baa, "usb_register_driver" },
	{ 0x49970de8, "finish_wait" },
	{ 0xa7e902d0, "v4l2_fh_add" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xb2d48a2e, "queue_work_on" },
	{ 0xc358aaf8, "snprintf" },
	{ 0xc28c6b00, "usb_alloc_coherent" },
	{ 0x8a331d2b, "param_ops_uint" },
	{ 0x7e3aa9b7, "i2c_new_device" },
	{ 0x184a7893, "usb_free_urb" },
	{ 0xf4e9b1be, "video_ioctl2" },
	{ 0xd69954e, "v4l2_ctrl_poll" },
	{ 0x9f49ab55, "usb_alloc_urb" },
};

MODULE_INFO(depends, "videodev,v4l2-dv-timings");

MODULE_ALIAS("usb:v2040p4900d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040p4901d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040p4902d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040p4982d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040p4903d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "852673E75D612674FF31849");
