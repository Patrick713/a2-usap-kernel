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
	{ 0x8a331d2b, "param_ops_uint" },
	{ 0xf4e9b1be, "video_ioctl2" },
	{ 0x8ad83553, "platform_driver_unregister" },
	{ 0x610b1492, "__platform_driver_register" },
	{ 0x51a910c0, "arm_copy_to_user" },
	{ 0x49970de8, "finish_wait" },
	{ 0x647af474, "prepare_to_wait_event" },
	{ 0x1000e51, "schedule" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0xc5850110, "printk" },
	{ 0xa13bd40a, "__video_register_device" },
	{ 0x3fa86437, "v4l2_ctrl_new_std_menu" },
	{ 0x6f19da99, "v4l2_ctrl_new_std" },
	{ 0x5809c1c4, "v4l2_ctrl_handler_init_class" },
	{ 0x4f91b42f, "v4l2_device_register" },
	{ 0x5bbe49f4, "__init_waitqueue_head" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0xe544be36, "devm_kmalloc" },
	{ 0xe6c12171, "complete" },
	{ 0x5f754e5a, "memset" },
	{ 0xae353d77, "arm_copy_from_user" },
	{ 0xeea0399, "strscpy" },
	{ 0x3dcf1ffa, "__wake_up" },
	{ 0x849f8001, "video_devdata" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0x8b6486ce, "release_firmware" },
	{ 0xde45aa0d, "i2c_transfer" },
	{ 0x836b5cfc, "request_firmware" },
	{ 0xf9a482f9, "msleep" },
	{ 0x12a38747, "usleep_range" },
	{ 0xd83dc5e6, "wait_for_completion_timeout" },
	{ 0xf65110e8, "_dev_warn" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0x3375510b, "mutex_lock_interruptible" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x7fa795f, "_dev_err" },
	{ 0x31b9d7ce, "v4l2_device_unregister" },
	{ 0x284686f5, "video_unregister_device" },
	{ 0x78f51124, "v4l2_ctrl_handler_free" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x3eabc38c, "_dev_info" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

MODULE_INFO(depends, "videodev");


MODULE_INFO(srcversion, "145A0FD51572248FAFB95A6");
