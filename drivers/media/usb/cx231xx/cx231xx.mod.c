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
	{ 0xa291e806, "videobuf_mmap_free" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xa24f23d8, "__request_module" },
	{ 0xf4610713, "kmalloc_caches" },
	{ 0x132653a2, "v4l2_event_unsubscribe" },
	{ 0x2d6fcc06, "__kmalloc" },
	{ 0xf9a482f9, "msleep" },
	{ 0x2ce5182e, "i2c_mux_add_adapter" },
	{ 0x55c771cf, "video_device_release_empty" },
	{ 0xd6ee688f, "vmalloc" },
	{ 0x9a152689, "param_ops_int" },
	{ 0xddff0fc9, "videobuf_mmap_mapper" },
	{ 0xf94c7158, "v4l2_i2c_new_subdev" },
	{ 0x3e7b8ff9, "v4l2_ctrl_log_status" },
	{ 0xf954570, "v4l2_subdev_call_wrappers" },
	{ 0xdbf0296, "tveeprom_hauppauge_analog" },
	{ 0xfe90c4a6, "_find_first_zero_bit_le" },
	{ 0xa9644ec2, "i2c_mux_del_adapters" },
	{ 0xb550ced2, "usb_reset_endpoint" },
	{ 0x31b9d7ce, "v4l2_device_unregister" },
	{ 0xde45aa0d, "i2c_transfer" },
	{ 0x78f51124, "v4l2_ctrl_handler_free" },
	{ 0xcf255457, "__media_device_usb_init" },
	{ 0x879fda30, "cx2341x_handler_set_50hz" },
	{ 0x5ca8fd3d, "cx2341x_handler_init" },
	{ 0xf83bbc3a, "videobuf_queue_vmalloc_init" },
	{ 0x11163de, "v4l2_mc_create_media_graph" },
	{ 0xb43f9365, "ktime_get" },
	{ 0xf88db2a2, "usb_kill_urb" },
	{ 0x6ca35c29, "videobuf_streamon" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0xa13bd40a, "__video_register_device" },
	{ 0x318bb1f0, "videobuf_iolock" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0x999e8297, "vfree" },
	{ 0xeea0399, "strscpy" },
	{ 0x257dc320, "media_entity_setup_link" },
	{ 0xde8d355a, "usb_unlink_urb" },
	{ 0x3cd17765, "rc_allocate_device" },
	{ 0x526c3a6c, "jiffies" },
	{ 0xe331ef92, "i2c_add_adapter" },
	{ 0x4f91b42f, "v4l2_device_register" },
	{ 0x5bbe49f4, "__init_waitqueue_head" },
	{ 0xf65110e8, "_dev_warn" },
	{ 0x5f754e5a, "memset" },
	{ 0x28f70f7f, "i2c_mux_alloc" },
	{ 0xa988a58d, "v4l2_s_ctrl" },
	{ 0x39a12ca7, "_raw_spin_unlock_irqrestore" },
	{ 0x183c8383, "usb_deregister" },
	{ 0x3375510b, "mutex_lock_interruptible" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0x4648df44, "videobuf_qbuf" },
	{ 0x71c90087, "memcmp" },
	{ 0x284686f5, "video_unregister_device" },
	{ 0x9690c99b, "media_entity_pads_init" },
	{ 0x6b60a022, "usb_set_interface" },
	{ 0xb77392a9, "v4l2_fh_init" },
	{ 0x5fc86a5f, "v4l2_event_pending" },
	{ 0xbab33d1f, "v4l2_ctrl_subscribe_event" },
	{ 0x1f70a9d8, "videobuf_querybuf" },
	{ 0x78c6bf66, "usb_control_msg" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0x7015cd60, "videobuf_read_stream" },
	{ 0x8e865d3c, "arm_delay_ops" },
	{ 0xf412120a, "usb_free_coherent" },
	{ 0xe52760d4, "i2c_unregister_device" },
	{ 0x7fa795f, "_dev_err" },
	{ 0x360dd97f, "media_device_cleanup" },
	{ 0x4dc17984, "media_device_register_entity" },
	{ 0xdd9d4acc, "videobuf_stop" },
	{ 0x123959a1, "v4l2_type_names" },
	{ 0x75685c7c, "i2c_del_adapter" },
	{ 0x3eabc38c, "_dev_info" },
	{ 0x305d8a65, "usb_submit_urb" },
	{ 0xf5ef842e, "v4l_bound_align_image" },
	{ 0xd6cf68f9, "usb_get_dev" },
	{ 0x4f4fe35b, "cx2341x_handler_setup" },
	{ 0x849f8001, "video_devdata" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xf9a45858, "usb_bulk_msg" },
	{ 0x822bd109, "usb_put_dev" },
	{ 0x6edec821, "usb_clear_halt" },
	{ 0xc0d4e5d2, "videobuf_vmalloc_free" },
	{ 0xb111b062, "videobuf_to_vmalloc" },
	{ 0xebaa9dc8, "kmem_cache_alloc_trace" },
	{ 0x5f849a69, "_raw_spin_lock_irqsave" },
	{ 0x2d4ad6f5, "videobuf_dqbuf" },
	{ 0xf0de075e, "videobuf_queue_is_busy" },
	{ 0x3dcf1ffa, "__wake_up" },
	{ 0xcb203516, "i2c_transfer_buffer_flags" },
	{ 0xa386cf16, "__media_device_register" },
	{ 0xb533afa0, "videobuf_waiton" },
	{ 0x37a0cba, "kfree" },
	{ 0x9d669763, "memcpy" },
	{ 0x36138fcf, "param_array_ops" },
	{ 0xca4400eb, "videobuf_reqbufs" },
	{ 0x5809c1c4, "v4l2_ctrl_handler_init_class" },
	{ 0x7a8b7baa, "usb_register_driver" },
	{ 0x836b5cfc, "request_firmware" },
	{ 0xa7e902d0, "v4l2_fh_add" },
	{ 0x70244b25, "v4l2_fh_del" },
	{ 0x563fa5c9, "v4l2_ctrl_add_handler" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0xb2d48a2e, "queue_work_on" },
	{ 0xc358aaf8, "snprintf" },
	{ 0xca54fee, "_test_and_set_bit" },
	{ 0xc28c6b00, "usb_alloc_coherent" },
	{ 0x9ceabad7, "v4l2_ctrl_radio_filter" },
	{ 0x49ebacbd, "_clear_bit" },
	{ 0xe544be36, "devm_kmalloc" },
	{ 0xca54a5ea, "videobuf_read_stop" },
	{ 0x7e3aa9b7, "i2c_new_device" },
	{ 0x184a7893, "usb_free_urb" },
	{ 0xe5efc4f5, "media_device_unregister" },
	{ 0x8b6486ce, "release_firmware" },
	{ 0xf4e9b1be, "video_ioctl2" },
	{ 0x1faed36b, "videobuf_poll_stream" },
	{ 0xd69954e, "v4l2_ctrl_poll" },
	{ 0x9f49ab55, "usb_alloc_urb" },
	{ 0x5ea26567, "v4l2_fh_exit" },
	{ 0xb2117ec6, "videobuf_streamoff" },
};

MODULE_INFO(depends, "videobuf-core,videodev,i2c-mux,tveeprom,mc,cx2341x,videobuf-vmalloc");

MODULE_ALIAS("usb:v1D19p6109d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0572p5A3Cd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0572p58A2d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0572p58A1d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0572p58A4d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0572p58A5d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0572p58A6d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0572p589Ed*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0572p58A0d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07CApC039d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040pB110d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040pB111d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040pB120d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040pB123d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040pB124d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040pB151d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040pB150d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040pB130d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040pB131d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040pB138d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040pB139d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040pB140d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040pC200d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2013p0259d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2013p025Ed*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1554p5010d400[0-1]dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1554p5014d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1B80pE424d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1B80pE421d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1F4Dp0237d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0FD9p0037d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1F4Dp0102d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0CCDp00A6d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1B80pD3B2d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v15F4p0135d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v199Ep8002d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "5E50A27CC109D09817686B0");
