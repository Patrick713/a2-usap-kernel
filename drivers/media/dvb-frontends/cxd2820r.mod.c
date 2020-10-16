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
	{ 0xf9a482f9, "msleep" },
	{ 0x88161187, "i2c_del_driver" },
	{ 0xfb2b8a14, "regmap_exit" },
	{ 0xe4f477be, "regmap_update_bits_base" },
	{ 0xf0cacea3, "regmap_bulk_read" },
	{ 0xa6a7a2ad, "div_s64_rem" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0x30ddcad4, "regmap_bulk_write" },
	{ 0xae2c61e9, "regmap_read" },
	{ 0xeea0399, "strscpy" },
	{ 0x2310788c, "gpiochip_remove" },
	{ 0x844228a5, "gpiochip_add_data_with_key" },
	{ 0x5f2b1d95, "intlog2" },
	{ 0x5f754e5a, "memset" },
	{ 0x6c4b1218, "__regmap_init_i2c" },
	{ 0xe52760d4, "i2c_unregister_device" },
	{ 0x7fa795f, "_dev_err" },
	{ 0x52afd98, "gpiochip_get_data" },
	{ 0xbdae2e40, "i2c_register_driver" },
	{ 0x3eabc38c, "_dev_info" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xd2eb4c8d, "i2c_new_dummy_device" },
	{ 0xebaa9dc8, "kmem_cache_alloc_trace" },
	{ 0x37a0cba, "kfree" },
	{ 0x9d669763, "memcpy" },
	{ 0x8733236, "intlog10" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xc73c0dfd, "regmap_write" },
	{ 0x7e3aa9b7, "i2c_new_device" },
};

MODULE_INFO(depends, "dvb-core,regmap-i2c");

MODULE_ALIAS("i2c:cxd2820r");

MODULE_INFO(srcversion, "E4F404A300BAF312862A4DE");
