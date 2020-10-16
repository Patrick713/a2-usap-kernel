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
	{ 0xe01f1504, "rc_unregister_device" },
	{ 0xf9a482f9, "msleep" },
	{ 0x55c771cf, "video_device_release_empty" },
	{ 0x9a152689, "param_ops_int" },
	{ 0xddff0fc9, "videobuf_mmap_mapper" },
	{ 0xf94c7158, "v4l2_i2c_new_subdev" },
	{ 0xfe90c4a6, "_find_first_zero_bit_le" },
	{ 0x31b9d7ce, "v4l2_device_unregister" },
	{ 0x78f51124, "v4l2_ctrl_handler_free" },
	{ 0xf83bbc3a, "videobuf_queue_vmalloc_init" },
	{ 0x6f19da99, "v4l2_ctrl_new_std" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xb43f9365, "ktime_get" },
	{ 0xf88db2a2, "usb_kill_urb" },
	{ 0xb96c0711, "usb_reset_configuration" },
	{ 0x6ca35c29, "videobuf_streamon" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0xa13bd40a, "__video_register_device" },
	{ 0xfe41fb0b, "param_ops_bool" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x318bb1f0, "videobuf_iolock" },
	{ 0x29d9f26e, "cancel_delayed_work_sync" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0xeea0399, "strscpy" },
	{ 0xde8d355a, "usb_unlink_urb" },
	{ 0x3cd17765, "rc_allocate_device" },
	{ 0x526c3a6c, "jiffies" },
	{ 0xe331ef92, "i2c_add_adapter" },
	{ 0x4f91b42f, "v4l2_device_register" },
	{ 0x5bbe49f4, "__init_waitqueue_head" },
	{ 0xdd0a2ba2, "strlcat" },
	{ 0x5f754e5a, "memset" },
	{ 0xd03009bf, "rc_free_device" },
	{ 0x39a12ca7, "_raw_spin_unlock_irqrestore" },
	{ 0x183c8383, "usb_deregister" },
	{ 0x3375510b, "mutex_lock_interruptible" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0x4648df44, "videobuf_qbuf" },
	{ 0x71c90087, "memcmp" },
	{ 0x284686f5, "video_unregister_device" },
	{ 0x6b60a022, "usb_set_interface" },
	{ 0xb77392a9, "v4l2_fh_init" },
	{ 0x5fc86a5f, "v4l2_event_pending" },
	{ 0xbab33d1f, "v4l2_ctrl_subscribe_event" },
	{ 0xf38271ca, "rc_keydown" },
	{ 0x1f70a9d8, "videobuf_querybuf" },
	{ 0x78c6bf66, "usb_control_msg" },
	{ 0xa8dadf72, "rc_register_device" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0x7015cd60, "videobuf_read_stream" },
	{ 0xf412120a, "usb_free_coherent" },
	{ 0x123959a1, "v4l2_type_names" },
	{ 0x4059792f, "print_hex_dump" },
	{ 0x75685c7c, "i2c_del_adapter" },
	{ 0x305d8a65, "usb_submit_urb" },
	{ 0xd6cf68f9, "usb_get_dev" },
	{ 0x12a38747, "usleep_range" },
	{ 0x849f8001, "video_devdata" },
	{ 0xcf86cdac, "queue_delayed_work_on" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x822bd109, "usb_put_dev" },
	{ 0xc0d4e5d2, "videobuf_vmalloc_free" },
	{ 0xb111b062, "videobuf_to_vmalloc" },
	{ 0xebaa9dc8, "kmem_cache_alloc_trace" },
	{ 0x5f849a69, "_raw_spin_lock_irqsave" },
	{ 0x2d4ad6f5, "videobuf_dqbuf" },
	{ 0x3dcf1ffa, "__wake_up" },
	{ 0x37a0cba, "kfree" },
	{ 0x9d669763, "memcpy" },
	{ 0x36138fcf, "param_array_ops" },
	{ 0xca4400eb, "videobuf_reqbufs" },
	{ 0x5809c1c4, "v4l2_ctrl_handler_init_class" },
	{ 0x7a8b7baa, "usb_register_driver" },
	{ 0xa7e902d0, "v4l2_fh_add" },
	{ 0x70244b25, "v4l2_fh_del" },
	{ 0x563fa5c9, "v4l2_ctrl_add_handler" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0xb2d48a2e, "queue_work_on" },
	{ 0xc358aaf8, "snprintf" },
	{ 0xc28c6b00, "usb_alloc_coherent" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x49ebacbd, "_clear_bit" },
	{ 0x184a7893, "usb_free_urb" },
	{ 0xf4e9b1be, "video_ioctl2" },
	{ 0xd69954e, "v4l2_ctrl_poll" },
	{ 0x9f49ab55, "usb_alloc_urb" },
	{ 0x5ea26567, "v4l2_fh_exit" },
	{ 0xb2117ec6, "videobuf_streamoff" },
};

MODULE_INFO(depends, "videobuf-core,videodev,videobuf-vmalloc");

MODULE_ALIAS("usb:v6000p0001d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v6000p0002d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v06E1pF332d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v14AAp0620d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v06E1pB339d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040p6600d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040p6601d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040p6610d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040p6611d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v6000pDEC0d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v6000pDEC1d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0CCDp0086d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0CCDp00A5d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0CCDp0079d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13D3p3240d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13D3p3241d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13D3p3243d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13D3p3264d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v6000pDEC2d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v6000pDEC3d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "2AAF26BE11D22168C3E8A56");
