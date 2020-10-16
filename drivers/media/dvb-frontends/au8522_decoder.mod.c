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
	{ 0xbd5e2fd8, "v4l2_ctrl_subdev_log_status" },
	{ 0x88161187, "i2c_del_driver" },
	{ 0xbdae2e40, "i2c_register_driver" },
	{ 0xf9a482f9, "msleep" },
	{ 0x50e6d28, "au8522_readreg" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x595a5404, "au8522_writereg" },
	{ 0x6f19da99, "v4l2_ctrl_new_std" },
	{ 0x5809c1c4, "v4l2_ctrl_handler_init_class" },
	{ 0x9690c99b, "media_entity_pads_init" },
	{ 0x29e6c634, "v4l2_i2c_subdev_init" },
	{ 0xc5850110, "printk" },
	{ 0x201a179c, "au8522_get_state" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x52e79ddd, "au8522_release_state" },
	{ 0x78f51124, "v4l2_ctrl_handler_free" },
	{ 0xa8952bf4, "v4l2_device_unregister_subdev" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

MODULE_INFO(depends, "videodev,au8522_common,mc");

MODULE_ALIAS("i2c:au8522");

MODULE_INFO(srcversion, "F3D48EA2D9A1B09B0F65E39");
