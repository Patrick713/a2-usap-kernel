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
	{ 0xc943d916, "em28xx_read_reg" },
	{ 0xf4610713, "kmalloc_caches" },
	{ 0x132653a2, "v4l2_event_unsubscribe" },
	{ 0x55c771cf, "video_device_release_empty" },
	{ 0x9a152689, "param_ops_int" },
	{ 0x6c4fbb46, "media_device_unregister_entity" },
	{ 0xf94c7158, "v4l2_i2c_new_subdev" },
	{ 0x721f7cc7, "em28xx_free_device" },
	{ 0x614dd5a, "v4l2_video_std_frame_period" },
	{ 0x80cebd89, "em28xx_write_regs" },
	{ 0x6c141a97, "v4l2_ctrl_notify" },
	{ 0xc77baeaa, "em28xx_setup_xc3028" },
	{ 0x56a78f1, "dev_printk" },
	{ 0x31b9d7ce, "v4l2_device_unregister" },
	{ 0x78f51124, "v4l2_ctrl_handler_free" },
	{ 0x7fc8652c, "em28xx_tuner_callback" },
	{ 0xf2a353ac, "v4l2_i2c_tuner_addrs" },
	{ 0x6f19da99, "v4l2_ctrl_new_std" },
	{ 0x7d2b729b, "vb2_fop_poll" },
	{ 0x11163de, "v4l2_mc_create_media_graph" },
	{ 0xf7802486, "__aeabi_uidivmod" },
	{ 0x32f5332, "vb2_ioctl_streamon" },
	{ 0xb43f9365, "ktime_get" },
	{ 0x9e1acb34, "vb2_ops_wait_prepare" },
	{ 0xa930a60d, "em28xx_init_usb_xfer" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0xa13bd40a, "__video_register_device" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0x8b801dbe, "em28xx_register_extension" },
	{ 0xeea0399, "strscpy" },
	{ 0x257dc320, "media_entity_setup_link" },
	{ 0x4f91b42f, "v4l2_device_register" },
	{ 0xadb4ec70, "vb2_fop_read" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0x7fe02901, "v4l2_device_disconnect" },
	{ 0x5f754e5a, "memset" },
	{ 0xb3611c57, "vb2_vmalloc_memops" },
	{ 0x39a12ca7, "_raw_spin_unlock_irqrestore" },
	{ 0xdb37f0fa, "vb2_fop_mmap" },
	{ 0x74abc468, "vb2_ioctl_qbuf" },
	{ 0x3375510b, "mutex_lock_interruptible" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0x284686f5, "video_unregister_device" },
	{ 0x9690c99b, "media_entity_pads_init" },
	{ 0x6b60a022, "usb_set_interface" },
	{ 0xbab33d1f, "v4l2_ctrl_subscribe_event" },
	{ 0x9fd9a9a3, "vb2_plane_vaddr" },
	{ 0x61982a60, "vb2_buffer_done" },
	{ 0x3de2461c, "em28xx_unregister_extension" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0x70b46ed8, "vb2_ioctl_prepare_buf" },
	{ 0xc1e58a5f, "refcount_dec_and_test_checked" },
	{ 0x150e7ae5, "em28xx_uninit_usb_xfer" },
	{ 0x521d3eae, "vb2_ioctl_create_bufs" },
	{ 0x7fa795f, "_dev_err" },
	{ 0x1db5f1f6, "vb2_ioctl_dqbuf" },
	{ 0x4dc17984, "media_device_register_entity" },
	{ 0x123959a1, "v4l2_type_names" },
	{ 0x3eabc38c, "_dev_info" },
	{ 0x825c252e, "v4l2_ctrl_find" },
	{ 0xf5ef842e, "v4l_bound_align_image" },
	{ 0x12a38747, "usleep_range" },
	{ 0x54a185b1, "vb2_fop_release" },
	{ 0x849f8001, "video_devdata" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x172c001a, "em28xx_audio_setup" },
	{ 0xe109a68, "v4l2_ctrl_handler_setup" },
	{ 0xfc4054c0, "v4l2_i2c_subdev_addr" },
	{ 0xebaa9dc8, "kmem_cache_alloc_trace" },
	{ 0x5f849a69, "_raw_spin_lock_irqsave" },
	{ 0x50a1fc01, "v4l2_fh_open" },
	{ 0x1450358d, "em28xx_set_mode" },
	{ 0x2cfde9a2, "warn_slowpath_fmt" },
	{ 0x39706eaf, "vb2_ioctl_querybuf" },
	{ 0x37a0cba, "kfree" },
	{ 0x9d669763, "memcpy" },
	{ 0x36138fcf, "param_array_ops" },
	{ 0x5809c1c4, "v4l2_ctrl_handler_init_class" },
	{ 0x25adf702, "vb2_ops_wait_finish" },
	{ 0x6d1f81a4, "em28xx_stop_urbs" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0xc358aaf8, "snprintf" },
	{ 0xeaf60704, "em28xx_write_reg" },
	{ 0x1ee8d6d4, "refcount_inc_checked" },
	{ 0x14129d88, "em28xx_audio_analog_set" },
	{ 0x19186c63, "vb2_ioctl_streamoff" },
	{ 0xf4e9b1be, "video_ioctl2" },
	{ 0x921d7c65, "em28xx_boards" },
	{ 0xfd2f6198, "em28xx_init_camera" },
	{ 0xadb269e7, "vb2_queue_init" },
};

MODULE_INFO(depends, "videobuf2-v4l2,em28xx,videodev,mc,videobuf2-vmalloc,videobuf2-common");


MODULE_INFO(srcversion, "68717C4A9D9A1C081FF8F20");
