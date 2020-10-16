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
	{ 0x21063f04, "vb2_ioctl_reqbufs" },
	{ 0xf4610713, "kmalloc_caches" },
	{ 0x132653a2, "v4l2_event_unsubscribe" },
	{ 0xf9a482f9, "msleep" },
	{ 0xff178f6, "__aeabi_idivmod" },
	{ 0x55c771cf, "video_device_release_empty" },
	{ 0xd6ee688f, "vmalloc" },
	{ 0x9a152689, "param_ops_int" },
	{ 0xe56047ee, "v4l2_event_queue" },
	{ 0x3e7b8ff9, "v4l2_ctrl_log_status" },
	{ 0xaa1a9edd, "snd_pcm_period_elapsed" },
	{ 0xf954570, "v4l2_subdev_call_wrappers" },
	{ 0x31b9d7ce, "v4l2_device_unregister" },
	{ 0x78f51124, "v4l2_ctrl_handler_free" },
	{ 0xefe04e95, "v4l2_ctrl_g_ctrl" },
	{ 0x6f19da99, "v4l2_ctrl_new_std" },
	{ 0x7d2b729b, "vb2_fop_poll" },
	{ 0x32f5332, "vb2_ioctl_streamon" },
	{ 0xb43f9365, "ktime_get" },
	{ 0xb1b939e, "kmemdup" },
	{ 0x9e1acb34, "vb2_ops_wait_prepare" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0xa13bd40a, "__video_register_device" },
	{ 0xfe41fb0b, "param_ops_bool" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0x999e8297, "vfree" },
	{ 0xeea0399, "strscpy" },
	{ 0x72241f56, "snd_card_disconnect" },
	{ 0xe331ef92, "i2c_add_adapter" },
	{ 0x4f91b42f, "v4l2_device_register" },
	{ 0xadb4ec70, "vb2_fop_read" },
	{ 0x5bbe49f4, "__init_waitqueue_head" },
	{ 0x3fa86437, "v4l2_ctrl_new_std_menu" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0x4be0fc9e, "param_ops_charp" },
	{ 0x5f754e5a, "memset" },
	{ 0xb3611c57, "vb2_vmalloc_memops" },
	{ 0x988a694f, "snd_device_new" },
	{ 0x39a12ca7, "_raw_spin_unlock_irqrestore" },
	{ 0xdb37f0fa, "vb2_fop_mmap" },
	{ 0x74abc468, "vb2_ioctl_qbuf" },
	{ 0x20bbee0b, "v4l2_event_subscribe" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0x71c90087, "memcmp" },
	{ 0x5b555848, "snd_pcm_set_ops" },
	{ 0xbab33d1f, "v4l2_ctrl_subscribe_event" },
	{ 0x9fd9a9a3, "vb2_plane_vaddr" },
	{ 0x61982a60, "vb2_buffer_done" },
	{ 0x1d7e3cd, "snd_card_free_when_closed" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0xc9e6816, "v4l2_ctrl_new_custom" },
	{ 0x5c88d591, "snd_pcm_lib_ioctl" },
	{ 0x7fa795f, "_dev_err" },
	{ 0x1db5f1f6, "vb2_ioctl_dqbuf" },
	{ 0x496c0885, "__v4l2_ctrl_grab" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x2196324, "__aeabi_idiv" },
	{ 0xdcaaae74, "snd_card_new" },
	{ 0x75685c7c, "i2c_del_adapter" },
	{ 0x3eabc38c, "_dev_info" },
	{ 0x54a185b1, "vb2_fop_release" },
	{ 0x849f8001, "video_devdata" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x77f6f183, "kmalloc_order_trace" },
	{ 0xebaa9dc8, "kmem_cache_alloc_trace" },
	{ 0x5f849a69, "_raw_spin_lock_irqsave" },
	{ 0x50a1fc01, "v4l2_fh_open" },
	{ 0x647af474, "prepare_to_wait_event" },
	{ 0x39706eaf, "vb2_ioctl_querybuf" },
	{ 0x37a0cba, "kfree" },
	{ 0x9d669763, "memcpy" },
	{ 0x36138fcf, "param_array_ops" },
	{ 0x5809c1c4, "v4l2_ctrl_handler_init_class" },
	{ 0x25adf702, "vb2_ops_wait_finish" },
	{ 0x836b5cfc, "request_firmware" },
	{ 0x49970de8, "finish_wait" },
	{ 0x952b0e1e, "snd_card_free" },
	{ 0xbace1167, "v4l2_i2c_new_subdev_board" },
	{ 0x84e5f73d, "snd_card_register" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0x883200ae, "snd_pcm_new" },
	{ 0x99bb8806, "memmove" },
	{ 0x12c76c9d, "vmalloc_to_page" },
	{ 0x1ee8d6d4, "refcount_inc_checked" },
	{ 0x19186c63, "vb2_ioctl_streamoff" },
	{ 0x9783aa95, "v4l2_device_put" },
	{ 0x8b6486ce, "release_firmware" },
	{ 0xf4e9b1be, "video_ioctl2" },
	{ 0xadb269e7, "vb2_queue_init" },
};

MODULE_INFO(depends, "videobuf2-v4l2,videodev,snd-pcm,snd,videobuf2-vmalloc,videobuf2-common");


MODULE_INFO(srcversion, "CAB68B3B1765DEE024C60DA");
