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
	{ 0x824e6bcf, "i2c_smbus_read_byte_data" },
	{ 0x88161187, "i2c_del_driver" },
	{ 0x4decaf39, "gpio_to_desc" },
	{ 0x76d0d88f, "devm_gpiod_get" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0xf65110e8, "_dev_warn" },
	{ 0xb6fa5281, "platform_device_alloc" },
	{ 0xcef15c38, "platform_device_add" },
	{ 0xf11cd95c, "platform_device_unregister" },
	{ 0x7fa795f, "_dev_err" },
	{ 0xbdae2e40, "i2c_register_driver" },
	{ 0x3eabc38c, "_dev_info" },
	{ 0xcb203516, "i2c_transfer_buffer_flags" },
	{ 0xe544be36, "devm_kmalloc" },
	{ 0xda3400b3, "platform_device_put" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Crpi,rpi-sense");
MODULE_ALIAS("of:N*T*Crpi,rpi-senseC*");
MODULE_ALIAS("i2c:rpi-sense");

MODULE_INFO(srcversion, "A7DC91DFB60B9F164003CAC");
