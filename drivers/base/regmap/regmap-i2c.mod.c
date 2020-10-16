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
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

static const struct modversion_info ____versions[]
__used __section(__versions) = {
	{ 0xe9942317, "module_layout" },
	{ 0x92952c56, "__devm_regmap_init" },
	{ 0x824e6bcf, "i2c_smbus_read_byte_data" },
	{ 0x9ac00b96, "i2c_smbus_read_i2c_block_data" },
	{ 0xa96a4023, "i2c_smbus_write_word_data" },
	{ 0x2d2f1e0c, "i2c_smbus_write_byte_data" },
	{ 0xde45aa0d, "i2c_transfer" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0xc823420c, "i2c_smbus_read_word_data" },
	{ 0x61a8140e, "__regmap_init" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xcb203516, "i2c_transfer_buffer_flags" },
	{ 0xf5f762d7, "regmap_get_val_endian" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x702b3e98, "i2c_smbus_write_i2c_block_data" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "B8F46E38E7E7BF22F60F1E4");
