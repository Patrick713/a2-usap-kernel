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
	{ 0x480a268d, "device_remove_file" },
	{ 0x2e185f35, "usb_function_deactivate" },
	{ 0xf4610713, "kmalloc_caches" },
	{ 0x132653a2, "v4l2_event_unsubscribe" },
	{ 0x2d6fcc06, "__kmalloc" },
	{ 0x404b624f, "usb_ep_autoconfig_ss" },
	{ 0xe1d9cb60, "usb_gstrings_attach" },
	{ 0x4e412961, "usb_free_all_descriptors" },
	{ 0x55c771cf, "video_device_release_empty" },
	{ 0x4d127d75, "usb_ep_disable" },
	{ 0xcdbf753d, "usb_ep_enable" },
	{ 0xe56047ee, "v4l2_event_queue" },
	{ 0x9bbb1b8f, "vb2_mmap" },
	{ 0x1bee5592, "usb_ep_queue" },
	{ 0x31b9d7ce, "v4l2_device_unregister" },
	{ 0xb43f9365, "ktime_get" },
	{ 0x9f0846da, "config_item_put" },
	{ 0x9e1acb34, "vb2_ops_wait_prepare" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0xa13bd40a, "__video_register_device" },
	{ 0xcbc98a7d, "config_item_init_type_name" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0x9232c06c, "usb_ep_set_halt" },
	{ 0xb0a0bfe8, "usb_ep_alloc_request" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xf6dc7e70, "usb_function_unregister" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x4f91b42f, "v4l2_device_register" },
	{ 0xa404427c, "usb_function_activate" },
	{ 0x5f754e5a, "memset" },
	{ 0xb3611c57, "vb2_vmalloc_memops" },
	{ 0x7592e5b, "usb_put_function_instance" },
	{ 0x6a6e05bf, "kstrtou8" },
	{ 0x39a12ca7, "_raw_spin_unlock_irqrestore" },
	{ 0x20bbee0b, "v4l2_event_subscribe" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0x284686f5, "video_unregister_device" },
	{ 0xaea4b69b, "usb_ep_autoconfig" },
	{ 0xb77392a9, "v4l2_fh_init" },
	{ 0x9fd9a9a3, "vb2_plane_vaddr" },
	{ 0x61982a60, "vb2_buffer_done" },
	{ 0x73e20c1c, "strlcpy" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0xf0bd367f, "vb2_qbuf" },
	{ 0xc847167e, "config_group_init_type_name" },
	{ 0x310917fe, "sort" },
	{ 0x2ef90728, "vb2_querybuf" },
	{ 0x7fa795f, "_dev_err" },
	{ 0x38aa9a6c, "usb_function_register" },
	{ 0x15c41786, "usb_composite_setup_continue" },
	{ 0xd95a2cd, "device_create_file" },
	{ 0xbbbb2921, "usb_ep_dequeue" },
	{ 0x3eabc38c, "_dev_info" },
	{ 0xfd7e3411, "vb2_streamon" },
	{ 0x849f8001, "video_devdata" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x4af6ddf0, "kstrtou16" },
	{ 0x53ff8a7d, "config_ep_by_speed" },
	{ 0x6f83fba8, "hex2bin" },
	{ 0x7f422d5d, "vb2_reqbufs" },
	{ 0x81cbdd08, "usb_ep_free_request" },
	{ 0xebaa9dc8, "kmem_cache_alloc_trace" },
	{ 0x5f849a69, "_raw_spin_lock_irqsave" },
	{ 0xaa1ebdc8, "vb2_dqbuf" },
	{ 0x37a0cba, "kfree" },
	{ 0x3b6c41ea, "kstrtouint" },
	{ 0x9d669763, "memcpy" },
	{ 0x25adf702, "vb2_ops_wait_finish" },
	{ 0xa7e902d0, "v4l2_fh_add" },
	{ 0xc4bd6698, "usb_interface_id" },
	{ 0x70244b25, "v4l2_fh_del" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x74b2c4eb, "vb2_poll" },
	{ 0x93c1ba54, "vb2_queue_release" },
	{ 0x8a331d2b, "param_ops_uint" },
	{ 0x5d4a403, "config_group_find_item" },
	{ 0xead87c29, "vb2_streamoff" },
	{ 0xf4e9b1be, "video_ioctl2" },
	{ 0x5ea26567, "v4l2_fh_exit" },
	{ 0xadb269e7, "vb2_queue_init" },
};

MODULE_INFO(depends, "libcomposite,videodev,udc-core,videobuf2-common,videobuf2-v4l2,videobuf2-vmalloc");


MODULE_INFO(srcversion, "80D8855EFEDE40EBED73213");
