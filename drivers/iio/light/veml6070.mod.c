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
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0xc7c8a143, "i2c_smbus_read_byte" },
	{ 0xf9a482f9, "msleep" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x7fa795f, "_dev_err" },
	{ 0x435c666a, "__iio_device_register" },
	{ 0x9dab0f7, "i2c_smbus_write_byte" },
	{ 0xd2eb4c8d, "i2c_new_dummy_device" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0x2dd968fd, "devm_iio_device_alloc" },
	{ 0xe52760d4, "i2c_unregister_device" },
	{ 0x62654a76, "iio_device_unregister" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

MODULE_INFO(depends, "industrialio");

MODULE_ALIAS("i2c:veml6070");

MODULE_INFO(srcversion, "BECDB70227421BC0C5ADCED");
