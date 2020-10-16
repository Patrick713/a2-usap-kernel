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

MODULE_INFO(staging, "Y");

static const struct modversion_info ____versions[]
__used __section(__versions) = {
	{ 0xe9942317, "module_layout" },
	{ 0x21063f04, "vb2_ioctl_reqbufs" },
	{ 0x84b4c5e8, "vchiq_mmal_port_set_format" },
	{ 0xf4610713, "kmalloc_caches" },
	{ 0x132653a2, "v4l2_event_unsubscribe" },
	{ 0x3cd9589e, "vchiq_mmal_port_disable" },
	{ 0x55c771cf, "video_device_release_empty" },
	{ 0x6c4fbb46, "media_device_unregister_entity" },
	{ 0xeabf73e2, "media_devnode_create" },
	{ 0xb16fb881, "vchiq_mmal_port_parameter_set" },
	{ 0x79962c9e, "vb2_wait_for_all_buffers" },
	{ 0x31b9d7ce, "v4l2_device_unregister" },
	{ 0x78f51124, "v4l2_ctrl_handler_free" },
	{ 0x6f19da99, "v4l2_ctrl_new_std" },
	{ 0x7d2b729b, "vb2_fop_poll" },
	{ 0x32f5332, "vb2_ioctl_streamon" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0xa13bd40a, "__video_register_device" },
	{ 0xeea0399, "strscpy" },
	{ 0x610b1492, "__platform_driver_register" },
	{ 0x4f91b42f, "v4l2_device_register" },
	{ 0x5bbe49f4, "__init_waitqueue_head" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0x3e212f19, "media_remove_intf_links" },
	{ 0xa4044618, "vchiq_mmal_component_finalise" },
	{ 0x5f754e5a, "memset" },
	{ 0xdb37f0fa, "vb2_fop_mmap" },
	{ 0x74abc468, "vb2_ioctl_qbuf" },
	{ 0x20bbee0b, "v4l2_event_subscribe" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0x284686f5, "video_unregister_device" },
	{ 0x9690c99b, "media_entity_pads_init" },
	{ 0xf6f96fcd, "vc_sm_cma_import_dmabuf" },
	{ 0xbab33d1f, "v4l2_ctrl_subscribe_event" },
	{ 0x9fd9a9a3, "vb2_plane_vaddr" },
	{ 0x61982a60, "vb2_buffer_done" },
	{ 0xe693b64, "dma_buf_put" },
	{ 0xc51e9eec, "dma_buf_get" },
	{ 0xc8dd28a1, "vchiq_mmal_component_enable" },
	{ 0x70b46ed8, "vb2_ioctl_prepare_buf" },
	{ 0xc9e6816, "v4l2_ctrl_new_custom" },
	{ 0x521d3eae, "vb2_ioctl_create_bufs" },
	{ 0x1db5f1f6, "vb2_ioctl_dqbuf" },
	{ 0x73577d20, "vchiq_mmal_finalise" },
	{ 0x360dd97f, "media_device_cleanup" },
	{ 0x4dc17984, "media_device_register_entity" },
	{ 0xce0ed3ff, "vchiq_mmal_component_init" },
	{ 0x54a185b1, "vb2_fop_release" },
	{ 0x849f8001, "video_devdata" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xf90c5a49, "vchiq_mmal_component_disable" },
	{ 0xb360525e, "mmal_vchi_buffer_init" },
	{ 0xa597670a, "media_create_pad_link" },
	{ 0xc2d2fa1b, "media_entity_remove_links" },
	{ 0x18082420, "media_create_intf_link" },
	{ 0xebaa9dc8, "kmem_cache_alloc_trace" },
	{ 0x50a1fc01, "v4l2_fh_open" },
	{ 0x93871f42, "vchiq_mmal_port_enable" },
	{ 0x39706eaf, "vb2_ioctl_querybuf" },
	{ 0xa386cf16, "__media_device_register" },
	{ 0x53b52981, "vc_sm_cma_free" },
	{ 0x8200f167, "vb2_dma_contig_memops" },
	{ 0x37a0cba, "kfree" },
	{ 0xb55f006c, "vchiq_mmal_submit_buffer" },
	{ 0x5809c1c4, "v4l2_ctrl_handler_init_class" },
	{ 0xaca4dd80, "vchiq_mmal_init" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0xe6c12171, "complete" },
	{ 0xc358aaf8, "snprintf" },
	{ 0xf663d36, "media_device_init" },
	{ 0x66ca5b7b, "vb2_ioctl_expbuf" },
	{ 0xa661c1b1, "mmal_vchi_buffer_cleanup" },
	{ 0x8ad83553, "platform_driver_unregister" },
	{ 0x19186c63, "vb2_ioctl_streamoff" },
	{ 0xe544be36, "devm_kmalloc" },
	{ 0xd83dc5e6, "wait_for_completion_timeout" },
	{ 0x93c1ba54, "vb2_queue_release" },
	{ 0x8a331d2b, "param_ops_uint" },
	{ 0x6fa2a386, "vc_sm_cma_int_handle" },
	{ 0xe5efc4f5, "media_device_unregister" },
	{ 0xf4e9b1be, "video_ioctl2" },
	{ 0xae08b89e, "vb2_core_expbuf_dmabuf" },
	{ 0xf463ef51, "media_devnode_remove" },
	{ 0xabb4dabb, "vchiq_mmal_port_parameter_get" },
	{ 0xadb269e7, "vb2_queue_init" },
};

MODULE_INFO(depends, "videobuf2-v4l2,bcm2835-mmal-vchiq,videodev,mc,videobuf2-common,vc-sm-cma,videobuf2-dma-contig");


MODULE_INFO(srcversion, "A6FF47E29D2E10C4004D441");
