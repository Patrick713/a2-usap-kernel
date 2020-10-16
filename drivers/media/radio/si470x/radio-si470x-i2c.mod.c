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
	{ 0xe1bf6b5b, "param_ops_ushort" },
	{ 0x88161187, "i2c_del_driver" },
	{ 0xbdae2e40, "i2c_register_driver" },
	{ 0x3dcf1ffa, "__wake_up" },
	{ 0xe6c12171, "complete" },
	{ 0x284686f5, "video_unregister_device" },
	{ 0xa13bd40a, "__video_register_device" },
	{ 0xab26b88f, "devm_request_threaded_irq" },
	{ 0x7fa795f, "_dev_err" },
	{ 0x31b9d7ce, "v4l2_device_unregister" },
	{ 0x78f51124, "v4l2_ctrl_handler_free" },
	{ 0x5d3e1cfb, "si470x_set_freq" },
	{ 0xf65110e8, "_dev_warn" },
	{ 0x3eabc38c, "_dev_info" },
	{ 0xf9a482f9, "msleep" },
	{ 0xfb5d3e3c, "gpiod_set_value" },
	{ 0x62182082, "devm_gpiod_get_optional" },
	{ 0x55c771cf, "video_device_release_empty" },
	{ 0x9d669763, "memcpy" },
	{ 0x252dc791, "si470x_viddev_template" },
	{ 0x6f19da99, "v4l2_ctrl_new_std" },
	{ 0xe1e0dcec, "si470x_ctrl_ops" },
	{ 0x5809c1c4, "v4l2_ctrl_handler_init_class" },
	{ 0x4f91b42f, "v4l2_device_register" },
	{ 0x5bbe49f4, "__init_waitqueue_head" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0xe544be36, "devm_kmalloc" },
	{ 0x9b71be53, "si470x_start" },
	{ 0x50a1fc01, "v4l2_fh_open" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xde45aa0d, "i2c_transfer" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x8a1954a3, "si470x_stop" },
	{ 0xf83180f5, "v4l2_fh_release" },
	{ 0xaa6aac95, "v4l2_fh_is_singular" },
	{ 0x849f8001, "video_devdata" },
	{ 0xeea0399, "strscpy" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

MODULE_INFO(depends, "videodev,radio-si470x-common");

MODULE_ALIAS("of:N*T*Csilabs,si470x");
MODULE_ALIAS("of:N*T*Csilabs,si470xC*");
MODULE_ALIAS("i2c:si470x");

MODULE_INFO(srcversion, "E506E0DBCFF3AEF4D278BC6");
