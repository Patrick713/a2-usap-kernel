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
	{ 0xf4610713, "kmalloc_caches" },
	{ 0x88161187, "i2c_del_driver" },
	{ 0x78f51124, "v4l2_ctrl_handler_free" },
	{ 0x6f19da99, "v4l2_ctrl_new_std" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0xbd5e2fd8, "v4l2_ctrl_subdev_log_status" },
	{ 0x3375510b, "mutex_lock_interruptible" },
	{ 0xc5850110, "printk" },
	{ 0x78c6bf66, "usb_control_msg" },
	{ 0xe52760d4, "i2c_unregister_device" },
	{ 0x7fa795f, "_dev_err" },
	{ 0xa8952bf4, "v4l2_device_unregister_subdev" },
	{ 0xbdae2e40, "i2c_register_driver" },
	{ 0x3eabc38c, "_dev_info" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xd2eb4c8d, "i2c_new_dummy_device" },
	{ 0xebaa9dc8, "kmem_cache_alloc_trace" },
	{ 0x37a0cba, "kfree" },
	{ 0x5809c1c4, "v4l2_ctrl_handler_init_class" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x29e6c634, "v4l2_i2c_subdev_init" },
};

MODULE_INFO(depends, "videodev");

MODULE_ALIAS("i2c:s2250");

MODULE_INFO(srcversion, "2713C78D374D3CFD7A01B3C");
