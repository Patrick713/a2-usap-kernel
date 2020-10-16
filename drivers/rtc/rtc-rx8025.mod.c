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
	{ 0xab26b88f, "devm_request_threaded_irq" },
	{ 0x3eabc38c, "_dev_info" },
	{ 0x7fa795f, "_dev_err" },
	{ 0xd95a2cd, "device_create_file" },
	{ 0xf2dee791, "devm_rtc_device_register" },
	{ 0xe544be36, "devm_kmalloc" },
	{ 0xb6936ffe, "_bcd2bin" },
	{ 0x9ac00b96, "i2c_smbus_read_i2c_block_data" },
	{ 0x356461c8, "rtc_time64_to_tm" },
	{ 0x4f2250ba, "rtc_tm_to_time64" },
	{ 0x702b3e98, "i2c_smbus_write_i2c_block_data" },
	{ 0x80ca5026, "_bin2bcd" },
	{ 0xf13f4b27, "rtc_update_irq" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0xf65110e8, "_dev_warn" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x824e6bcf, "i2c_smbus_read_byte_data" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x2d2f1e0c, "i2c_smbus_write_byte_data" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x480a268d, "device_remove_file" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("i2c:rx8025");

MODULE_INFO(srcversion, "89DD5B0BB84B0D2F49EB2FF");