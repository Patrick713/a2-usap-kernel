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
	{ 0x88161187, "i2c_del_driver" },
	{ 0xbdae2e40, "i2c_register_driver" },
	{ 0xf0cacea3, "regmap_bulk_read" },
	{ 0x7fa795f, "_dev_err" },
	{ 0x3eabc38c, "_dev_info" },
	{ 0x9d669763, "memcpy" },
	{ 0x29e6c634, "v4l2_i2c_subdev_init" },
	{ 0x53f7654, "v4l2_ctrl_auto_cluster" },
	{ 0x6f19da99, "v4l2_ctrl_new_std" },
	{ 0x5809c1c4, "v4l2_ctrl_handler_init_class" },
	{ 0xac511bf1, "__devm_regmap_init_i2c" },
	{ 0xebaa9dc8, "kmem_cache_alloc_trace" },
	{ 0xf4610713, "kmalloc_caches" },
	{ 0xeea0399, "strscpy" },
	{ 0x59e5070d, "__do_div64" },
	{ 0xf7802486, "__aeabi_uidivmod" },
	{ 0x30ddcad4, "regmap_bulk_write" },
	{ 0xc73c0dfd, "regmap_write" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xae2c61e9, "regmap_read" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x37a0cba, "kfree" },
	{ 0x78f51124, "v4l2_ctrl_handler_free" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

MODULE_INFO(depends, "videodev,regmap-i2c");

MODULE_ALIAS("i2c:e4000");

MODULE_INFO(srcversion, "CFA22283B58DCE2F54D0F0E");
