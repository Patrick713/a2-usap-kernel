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
	{ 0x21063f04, "vb2_ioctl_reqbufs" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xa24f23d8, "__request_module" },
	{ 0xf4610713, "kmalloc_caches" },
	{ 0x132653a2, "v4l2_event_unsubscribe" },
	{ 0xcb0782d, "media_device_usb_allocate" },
	{ 0xe01f1504, "rc_unregister_device" },
	{ 0xf9a482f9, "msleep" },
	{ 0xff178f6, "__aeabi_idivmod" },
	{ 0x5cb72632, "__media_pipeline_start" },
	{ 0xef32bf79, "media_device_unregister_entity_notify" },
	{ 0xf2583762, "_vb2_fop_release" },
	{ 0x55c771cf, "video_device_release_empty" },
	{ 0x9a152689, "param_ops_int" },
	{ 0x4be5c646, "dvb_dmx_init" },
	{ 0x2b68bd2f, "del_timer" },
	{ 0xffa8bc3b, "dvb_unregister_adapter" },
	{ 0x6c4fbb46, "media_device_unregister_entity" },
	{ 0xf94c7158, "v4l2_i2c_new_subdev" },
	{ 0x2eab75ee, "dvb_create_media_graph" },
	{ 0x3e7b8ff9, "v4l2_ctrl_log_status" },
	{ 0xdbf0296, "tveeprom_hauppauge_analog" },
	{ 0x1da70cfd, "dvb_frontend_suspend" },
	{ 0x88634ea0, "dvb_register_frontend" },
	{ 0x31b9d7ce, "v4l2_device_unregister" },
	{ 0xb5e7d036, "dvb_frontend_resume" },
	{ 0xde45aa0d, "i2c_transfer" },
	{ 0x78f51124, "v4l2_ctrl_handler_free" },
	{ 0x7d2b729b, "vb2_fop_poll" },
	{ 0x11163de, "v4l2_mc_create_media_graph" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x32f5332, "vb2_ioctl_streamon" },
	{ 0x4205ad24, "cancel_work_sync" },
	{ 0xb43f9365, "ktime_get" },
	{ 0xf88db2a2, "usb_kill_urb" },
	{ 0xe3bba074, "v4l_disable_media_source" },
	{ 0x9e1acb34, "vb2_ops_wait_prepare" },
	{ 0x5dfb89e4, "media_device_delete" },
	{ 0x5e2113db, "dvb_unregister_frontend" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0xa13bd40a, "__video_register_device" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x29d9f26e, "cancel_delayed_work_sync" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0xeea0399, "strscpy" },
	{ 0x257dc320, "media_entity_setup_link" },
	{ 0xbe9a4121, "media_get_pad_index" },
	{ 0xde8d355a, "usb_unlink_urb" },
	{ 0x3cd17765, "rc_allocate_device" },
	{ 0x70f5a068, "dvb_net_release" },
	{ 0x526c3a6c, "jiffies" },
	{ 0xe331ef92, "i2c_add_adapter" },
	{ 0xcf76bcd2, "dvb_frontend_detach" },
	{ 0x4f91b42f, "v4l2_device_register" },
	{ 0xadb4ec70, "vb2_fop_read" },
	{ 0x5bbe49f4, "__init_waitqueue_head" },
	{ 0xdd0a2ba2, "strlcat" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0x7fe02901, "v4l2_device_disconnect" },
	{ 0x5f754e5a, "memset" },
	{ 0xb3611c57, "vb2_vmalloc_memops" },
	{ 0xd03009bf, "rc_free_device" },
	{ 0xcc854c32, "param_ops_short" },
	{ 0x39a12ca7, "_raw_spin_unlock_irqrestore" },
	{ 0xdb37f0fa, "vb2_fop_mmap" },
	{ 0x74abc468, "vb2_ioctl_qbuf" },
	{ 0x183c8383, "usb_deregister" },
	{ 0x1802e58c, "dvb_dmxdev_release" },
	{ 0x3375510b, "mutex_lock_interruptible" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0x284686f5, "video_unregister_device" },
	{ 0x9690c99b, "media_entity_pads_init" },
	{ 0x7686edc0, "dvb_net_init" },
	{ 0x6b60a022, "usb_set_interface" },
	{ 0xbab33d1f, "v4l2_ctrl_subscribe_event" },
	{ 0x9fd9a9a3, "vb2_plane_vaddr" },
	{ 0x61982a60, "vb2_buffer_done" },
	{ 0x78c6bf66, "usb_control_msg" },
	{ 0xa8dadf72, "rc_register_device" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0x70b46ed8, "vb2_ioctl_prepare_buf" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0xb884507c, "tveeprom_read" },
	{ 0x8e865d3c, "arm_delay_ops" },
	{ 0x521d3eae, "vb2_ioctl_create_bufs" },
	{ 0xf412120a, "usb_free_coherent" },
	{ 0x7fa795f, "_dev_err" },
	{ 0x7b334d3c, "dvb_dmx_release" },
	{ 0x1db5f1f6, "vb2_ioctl_dqbuf" },
	{ 0x868784cb, "__symbol_get" },
	{ 0x57860255, "v4l_enable_media_source" },
	{ 0x4dc17984, "media_device_register_entity" },
	{ 0x75685c7c, "i2c_del_adapter" },
	{ 0x305d8a65, "usb_submit_urb" },
	{ 0x968c416d, "media_device_register_entity_notify" },
	{ 0xdafc31c5, "dvb_dmx_swfilter_packets" },
	{ 0x849f8001, "video_devdata" },
	{ 0xcf86cdac, "queue_delayed_work_on" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x6456c22d, "__media_pipeline_stop" },
	{ 0x77f6f183, "kmalloc_order_trace" },
	{ 0xa597670a, "media_create_pad_link" },
	{ 0x796bc8b2, "dvb_register_adapter" },
	{ 0xebaa9dc8, "kmem_cache_alloc_trace" },
	{ 0x5f849a69, "_raw_spin_lock_irqsave" },
	{ 0x50a1fc01, "v4l2_fh_open" },
	{ 0xcb203516, "i2c_transfer_buffer_flags" },
	{ 0x39706eaf, "vb2_ioctl_querybuf" },
	{ 0xa386cf16, "__media_device_register" },
	{ 0x37a0cba, "kfree" },
	{ 0x5ae3884c, "__media_entity_setup_link" },
	{ 0x9d669763, "memcpy" },
	{ 0x36138fcf, "param_array_ops" },
	{ 0x5809c1c4, "v4l2_ctrl_handler_init_class" },
	{ 0x7a8b7baa, "usb_register_driver" },
	{ 0x25adf702, "vb2_ops_wait_finish" },
	{ 0x5f34c0db, "ir_raw_event_store" },
	{ 0x743beebe, "i2c_probe_func_quick_read" },
	{ 0x6e9dd606, "__symbol_put" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0xb08828fb, "usb_ifnum_to_if" },
	{ 0xb2d48a2e, "queue_work_on" },
	{ 0xc358aaf8, "snprintf" },
	{ 0x66ca5b7b, "vb2_ioctl_expbuf" },
	{ 0xc28c6b00, "usb_alloc_coherent" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x19186c63, "vb2_ioctl_streamoff" },
	{ 0x93c1ba54, "vb2_queue_release" },
	{ 0x9783aa95, "v4l2_device_put" },
	{ 0x3a1b37e9, "ir_raw_event_handle" },
	{ 0x184a7893, "usb_free_urb" },
	{ 0xf4e9b1be, "video_ioctl2" },
	{ 0x9f49ab55, "usb_alloc_urb" },
	{ 0x9345d57b, "dvb_dmxdev_init" },
	{ 0xadb269e7, "vb2_queue_init" },
};

MODULE_INFO(depends, "videobuf2-v4l2,videodev,mc,dvb-core,tveeprom,videobuf2-vmalloc,videobuf2-common");

MODULE_ALIAS("usb:v2040p7200d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040p7240d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0FE9pD620d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040p7210d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040p7217d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040p721Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040p721Ed*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040p721Fd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040p7280d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0FD9p0008d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040p7201d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040p7211d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040p7281d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v05E1p0480d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040p8200d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040p7260d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040p7213d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040p7270d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "5F198037FCC48918D2DD139");
