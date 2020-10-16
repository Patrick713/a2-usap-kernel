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
	{ 0x51a910c0, "arm_copy_to_user" },
	{ 0xfc60f402, "of_property_read_variable_u32_array" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x5f9ee03a, "__rtc_register_device" },
	{ 0xff440b0a, "rtc_add_group" },
	{ 0xab26b88f, "devm_request_threaded_irq" },
	{ 0x8db1c66b, "devm_watchdog_register_device" },
	{ 0x6f94f4ae, "devm_rtc_allocate_device" },
	{ 0xe544be36, "devm_kmalloc" },
	{ 0x34e942aa, "of_property_read_string" },
	{ 0x3eabc38c, "_dev_info" },
	{ 0xb6936ffe, "_bcd2bin" },
	{ 0x9ac00b96, "i2c_smbus_read_i2c_block_data" },
	{ 0x702b3e98, "i2c_smbus_write_i2c_block_data" },
	{ 0x80ca5026, "_bin2bcd" },
	{ 0xf13f4b27, "rtc_update_irq" },
	{ 0xca348324, "_dev_alert" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x668b595, "_kstrtoul" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x84b183ae, "strncmp" },
	{ 0x2d2f1e0c, "i2c_smbus_write_byte_data" },
	{ 0x7fa795f, "_dev_err" },
	{ 0x824e6bcf, "i2c_smbus_read_byte_data" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("i2c:abx80x");
MODULE_ALIAS("i2c:ab0801");
MODULE_ALIAS("i2c:ab0803");
MODULE_ALIAS("i2c:ab0804");
MODULE_ALIAS("i2c:ab0805");
MODULE_ALIAS("i2c:ab1801");
MODULE_ALIAS("i2c:ab1803");
MODULE_ALIAS("i2c:ab1804");
MODULE_ALIAS("i2c:ab1805");
MODULE_ALIAS("i2c:rv1805");

MODULE_INFO(srcversion, "A190EA3AD84CD3F0B97AF90");
