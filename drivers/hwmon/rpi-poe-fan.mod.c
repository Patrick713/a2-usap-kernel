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
	{ 0x8ad83553, "platform_driver_unregister" },
	{ 0x610b1492, "__platform_driver_register" },
	{ 0xe4530587, "thermal_cdev_update" },
	{ 0x32a237c, "thermal_of_cooling_device_register" },
	{ 0xfc60f402, "of_property_read_variable_u32_array" },
	{ 0xcf8b328f, "of_property_count_elems_of_size" },
	{ 0x3c7ad7ac, "of_find_property" },
	{ 0xba8667f3, "devm_hwmon_device_register_with_groups" },
	{ 0x3517383e, "register_reboot_notifier" },
	{ 0xbdafad8, "rpi_firmware_get" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0xe544be36, "devm_kmalloc" },
	{ 0x889e7573, "of_parse_phandle" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x668b595, "_kstrtoul" },
	{ 0x7fa795f, "_dev_err" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0x50e74ad4, "thermal_cooling_device_unregister" },
	{ 0xac1a55be, "unregister_reboot_notifier" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x588006d2, "rpi_firmware_property" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Craspberrypi,rpi-poe-fan");
MODULE_ALIAS("of:N*T*Craspberrypi,rpi-poe-fanC*");

MODULE_INFO(srcversion, "0023611D7F1F67F411540C4");
