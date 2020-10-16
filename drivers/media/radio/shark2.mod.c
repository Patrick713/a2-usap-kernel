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
	{ 0x2d3385d3, "system_wq" },
	{ 0xf4610713, "kmalloc_caches" },
	{ 0x132653a2, "v4l2_event_unsubscribe" },
	{ 0x55c771cf, "video_device_release_empty" },
	{ 0x9a152689, "param_ops_int" },
	{ 0x3e7b8ff9, "v4l2_ctrl_log_status" },
	{ 0x31b9d7ce, "v4l2_device_unregister" },
	{ 0x78f51124, "v4l2_ctrl_handler_free" },
	{ 0x6f19da99, "v4l2_ctrl_new_std" },
	{ 0x2a3aa678, "_test_and_clear_bit" },
	{ 0x4205ad24, "cancel_work_sync" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0xa13bd40a, "__video_register_device" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0xeea0399, "strscpy" },
	{ 0x526c3a6c, "jiffies" },
	{ 0x4f91b42f, "v4l2_device_register" },
	{ 0xdd0a2ba2, "strlcat" },
	{ 0x7fe02901, "v4l2_device_disconnect" },
	{ 0x5f754e5a, "memset" },
	{ 0x183c8383, "usb_deregister" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0x760a7600, "led_classdev_register_ext" },
	{ 0x284686f5, "video_unregister_device" },
	{ 0xbab33d1f, "v4l2_ctrl_subscribe_event" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0xf83180f5, "v4l2_fh_release" },
	{ 0x30e40628, "v4l2_device_set_name" },
	{ 0x849f8001, "video_devdata" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xe109a68, "v4l2_ctrl_handler_setup" },
	{ 0xfde8a122, "usb_interrupt_msg" },
	{ 0xebaa9dc8, "kmem_cache_alloc_trace" },
	{ 0x50a1fc01, "v4l2_fh_open" },
	{ 0x79727164, "led_classdev_unregister" },
	{ 0x54496b4, "schedule_timeout_interruptible" },
	{ 0x37a0cba, "kfree" },
	{ 0x5809c1c4, "v4l2_ctrl_handler_init_class" },
	{ 0x7a8b7baa, "usb_register_driver" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0xb2d48a2e, "queue_work_on" },
	{ 0xc358aaf8, "snprintf" },
	{ 0x9783aa95, "v4l2_device_put" },
	{ 0xf4e9b1be, "video_ioctl2" },
	{ 0xd69954e, "v4l2_ctrl_poll" },
};

MODULE_INFO(depends, "videodev");

MODULE_ALIAS("usb:v077Dp627Ad0010dc*dsc*dp*ic03isc*ip*in*");

MODULE_INFO(srcversion, "C1E6C5826F76D377F7C3061");
