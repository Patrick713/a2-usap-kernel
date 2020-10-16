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
	{ 0x132653a2, "v4l2_event_unsubscribe" },
	{ 0x55c771cf, "video_device_release_empty" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0xeea0399, "strscpy" },
	{ 0x51a910c0, "arm_copy_to_user" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0xf65110e8, "_dev_warn" },
	{ 0xbab33d1f, "v4l2_ctrl_subscribe_event" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x849f8001, "video_devdata" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x1000e51, "schedule" },
	{ 0x647af474, "prepare_to_wait_event" },
	{ 0x49970de8, "finish_wait" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xe1bf6b5b, "param_ops_ushort" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0xd83dc5e6, "wait_for_completion_timeout" },
	{ 0x8a331d2b, "param_ops_uint" },
	{ 0xf4e9b1be, "video_ioctl2" },
	{ 0xd69954e, "v4l2_ctrl_poll" },
};

MODULE_INFO(depends, "videodev");


MODULE_INFO(srcversion, "6E9F9A9C2A87A98993D0616");
