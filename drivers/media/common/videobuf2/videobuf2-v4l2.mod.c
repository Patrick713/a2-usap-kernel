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
	{ 0xf0caa6ac, "vb2_core_streamoff" },
	{ 0x9a152689, "param_ops_int" },
	{ 0x83537339, "vb2_core_dqbuf" },
	{ 0x9bbb1b8f, "vb2_mmap" },
	{ 0x406336e0, "vb2_core_qbuf" },
	{ 0xefc737af, "vb2_core_querybuf" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0x144ae91a, "vb2_core_streamon" },
	{ 0xba41f175, "vb2_core_poll" },
	{ 0xe28f0a71, "vb2_read" },
	{ 0xdfc383f3, "vb2_core_prepare_buf" },
	{ 0x5f754e5a, "memset" },
	{ 0x3375510b, "mutex_lock_interruptible" },
	{ 0xc5850110, "printk" },
	{ 0x5fc86a5f, "v4l2_event_pending" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0xf83180f5, "v4l2_fh_release" },
	{ 0xbbc6cdb0, "media_request_put" },
	{ 0x34d39b8a, "vb2_core_queue_release" },
	{ 0x6881f386, "vb2_request_buffer_cnt" },
	{ 0x69ff38bc, "vb2_write" },
	{ 0x5f95c39, "media_request_get_by_fd" },
	{ 0x849f8001, "video_devdata" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x2cfde9a2, "warn_slowpath_fmt" },
	{ 0xc523bb75, "vb2_core_create_bufs" },
	{ 0x50edda58, "vb2_core_expbuf" },
	{ 0xe6370407, "vb2_core_reqbufs" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x129a3550, "vb2_verify_memory_type" },
	{ 0x9a365cf6, "vb2_core_queue_init" },
	{ 0xe2987029, "vb2_buffer_in_use" },
	{ 0x2f548802, "ns_to_timeval" },
};

MODULE_INFO(depends, "videobuf2-common,videodev,mc");


MODULE_INFO(srcversion, "AE1BE83CC323581F28910A4");
