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
	{ 0x67ea780, "mutex_unlock" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0x668b595, "_kstrtoul" },
	{ 0xf65110e8, "_dev_warn" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x7fa795f, "_dev_err" },
	{ 0x3eabc38c, "_dev_info" },
	{ 0xf2404f5, "devm_thermal_of_cooling_device_register" },
	{ 0xab26b88f, "devm_request_threaded_irq" },
	{ 0xbc477a2, "irq_set_irq_type" },
	{ 0x3518599c, "gpiod_to_irq" },
	{ 0xba8667f3, "devm_hwmon_device_register_with_groups" },
	{ 0x2f07f0db, "of_prop_next_u32" },
	{ 0x3c7ad7ac, "of_find_property" },
	{ 0xcf3487a1, "devm_gpiod_get_index" },
	{ 0x69f00f77, "gpiod_count" },
	{ 0xcb907ad6, "devm_add_action" },
	{ 0xee3bb34c, "gpiod_direction_output" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0x62182082, "devm_gpiod_get_optional" },
	{ 0xe544be36, "devm_kmalloc" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x84b498ef, "gpiod_set_value_cansleep" },
	{ 0x1bdb8ad6, "kobject_uevent" },
	{ 0xf218ef74, "sysfs_notify" },
	{ 0xb2d48a2e, "queue_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x5dc31eaa, "gpiod_get_value_cansleep" },
	{ 0x2196324, "__aeabi_idiv" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Cgpio-fan");
MODULE_ALIAS("of:N*T*Cgpio-fanC*");

MODULE_INFO(srcversion, "6DE4F129608861666CF3AF7");