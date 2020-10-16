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
	{ 0xfe41fb0b, "param_ops_bool" },
	{ 0x88161187, "i2c_del_driver" },
	{ 0xbdae2e40, "i2c_register_driver" },
	{ 0x6f19da99, "v4l2_ctrl_new_std" },
	{ 0x5809c1c4, "v4l2_ctrl_handler_init_class" },
	{ 0x29e6c634, "v4l2_i2c_subdev_init" },
	{ 0xe544be36, "devm_kmalloc" },
	{ 0xeea0399, "strscpy" },
	{ 0x2feabf10, "v4l2_ctrl_handler_log_status" },
	{ 0x824e6bcf, "i2c_smbus_read_byte_data" },
	{ 0xc5850110, "printk" },
	{ 0x2d2f1e0c, "i2c_smbus_write_byte_data" },
	{ 0x78f51124, "v4l2_ctrl_handler_free" },
	{ 0xa8952bf4, "v4l2_device_unregister_subdev" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

MODULE_INFO(depends, "videodev");

MODULE_ALIAS("i2c:cs53l32a");

MODULE_INFO(srcversion, "8392A7E015E2E4A6D37A48C");
