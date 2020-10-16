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
	{ 0xff178f6, "__aeabi_idivmod" },
	{ 0x2ce5182e, "i2c_mux_add_adapter" },
	{ 0x88161187, "i2c_del_driver" },
	{ 0xe03d9e8f, "regmap_multi_reg_write" },
	{ 0xe4f477be, "regmap_update_bits_base" },
	{ 0xa9644ec2, "i2c_mux_del_adapters" },
	{ 0xf0cacea3, "regmap_bulk_read" },
	{ 0xa6a7a2ad, "div_s64_rem" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0x30ddcad4, "regmap_bulk_write" },
	{ 0xae2c61e9, "regmap_read" },
	{ 0xeea0399, "strscpy" },
	{ 0x526c3a6c, "jiffies" },
	{ 0x5f2b1d95, "intlog2" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0xf65110e8, "_dev_warn" },
	{ 0x5f754e5a, "memset" },
	{ 0x28f70f7f, "i2c_mux_alloc" },
	{ 0xe52760d4, "i2c_unregister_device" },
	{ 0x7fa795f, "_dev_err" },
	{ 0x2196324, "__aeabi_idiv" },
	{ 0x59e5070d, "__do_div64" },
	{ 0xbdae2e40, "i2c_register_driver" },
	{ 0x3eabc38c, "_dev_info" },
	{ 0x12a38747, "usleep_range" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xac511bf1, "__devm_regmap_init_i2c" },
	{ 0xebaa9dc8, "kmem_cache_alloc_trace" },
	{ 0x37a0cba, "kfree" },
	{ 0x1c062251, "__i2c_transfer" },
	{ 0x9d669763, "memcpy" },
	{ 0x8733236, "intlog10" },
	{ 0x836b5cfc, "request_firmware" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xc73c0dfd, "regmap_write" },
	{ 0x7e3aa9b7, "i2c_new_device" },
	{ 0x8b6486ce, "release_firmware" },
};

MODULE_INFO(depends, "i2c-mux,dvb-core,regmap-i2c");

MODULE_ALIAS("i2c:m88ds3103");

MODULE_INFO(srcversion, "B899261B3E1AB56CB11EDF9");
