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
	{ 0x24d273d1, "add_timer" },
	{ 0x526c3a6c, "jiffies" },
	{ 0x3c7ad7ac, "of_find_property" },
	{ 0xfc60f402, "of_property_read_variable_u32_array" },
	{ 0x62182082, "devm_gpiod_get_optional" },
	{ 0x76d0d88f, "devm_gpiod_get" },
	{ 0x7fa795f, "_dev_err" },
	{ 0xab26b88f, "devm_request_threaded_irq" },
	{ 0x663712a0, "pps_register_source" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0xc358aaf8, "snprintf" },
	{ 0x3518599c, "gpiod_to_irq" },
	{ 0xe544be36, "devm_kmalloc" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x7ba644ff, "pps_event" },
	{ 0x6d55919b, "gpiod_get_value" },
	{ 0x1e1e140e, "ns_to_timespec64" },
	{ 0xdafcdc3a, "ktime_get_snapshot" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x3eabc38c, "_dev_info" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0x9b47cb4e, "pps_unregister_source" },
	{ 0xfb5d3e3c, "gpiod_set_value" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

MODULE_INFO(depends, "pps_core");

MODULE_ALIAS("of:N*T*Cpps-gpio");
MODULE_ALIAS("of:N*T*Cpps-gpioC*");

MODULE_INFO(srcversion, "2099E891538104A4F9778A1");
