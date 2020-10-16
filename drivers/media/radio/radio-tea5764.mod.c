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
	{ 0x9a152689, "param_ops_int" },
	{ 0x132653a2, "v4l2_event_unsubscribe" },
	{ 0xbab33d1f, "v4l2_ctrl_subscribe_event" },
	{ 0x3e7b8ff9, "v4l2_ctrl_log_status" },
	{ 0xf83180f5, "v4l2_fh_release" },
	{ 0x50a1fc01, "v4l2_fh_open" },
	{ 0xf4e9b1be, "video_ioctl2" },
	{ 0xd69954e, "v4l2_ctrl_poll" },
	{ 0x88161187, "i2c_del_driver" },
	{ 0xbdae2e40, "i2c_register_driver" },
	{ 0xa13bd40a, "__video_register_device" },
	{ 0x55c771cf, "video_device_release_empty" },
	{ 0x5f754e5a, "memset" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0x6f19da99, "v4l2_ctrl_new_std" },
	{ 0x5809c1c4, "v4l2_ctrl_handler_init_class" },
	{ 0x4f91b42f, "v4l2_device_register" },
	{ 0xebaa9dc8, "kmem_cache_alloc_trace" },
	{ 0xf4610713, "kmalloc_caches" },
	{ 0xc358aaf8, "snprintf" },
	{ 0xeea0399, "strscpy" },
	{ 0x849f8001, "video_devdata" },
	{ 0x37a0cba, "kfree" },
	{ 0x31b9d7ce, "v4l2_device_unregister" },
	{ 0x78f51124, "v4l2_ctrl_handler_free" },
	{ 0x284686f5, "video_unregister_device" },
	{ 0xc5850110, "printk" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xde45aa0d, "i2c_transfer" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

MODULE_INFO(depends, "videodev");

MODULE_ALIAS("i2c:radio-tea5764");

MODULE_INFO(srcversion, "9A5ED1B887657471E957EE5");
