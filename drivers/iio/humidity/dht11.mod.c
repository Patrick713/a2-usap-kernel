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
	{ 0xe6c12171, "complete" },
	{ 0x6d55919b, "gpiod_get_value" },
	{ 0xc24b5aae, "desc_to_gpio" },
	{ 0xe77f95ad, "__devm_iio_device_register" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0x5bbe49f4, "__init_waitqueue_head" },
	{ 0x3518599c, "gpiod_to_irq" },
	{ 0x76d0d88f, "devm_gpiod_get" },
	{ 0x2dd968fd, "devm_iio_device_alloc" },
	{ 0x7fa795f, "_dev_err" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xc1514a3b, "free_irq" },
	{ 0xeb0b9bf9, "wait_for_completion_killable_timeout" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x8752ad47, "gpiod_direction_input" },
	{ 0x12a38747, "usleep_range" },
	{ 0xee3bb34c, "gpiod_direction_output" },
	{ 0xf65110e8, "_dev_warn" },
	{ 0xfe476039, "ktime_get_resolution_ns" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0xc4f0da12, "ktime_get_with_offset" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

MODULE_INFO(depends, "industrialio");

MODULE_ALIAS("of:N*T*Cdht11");
MODULE_ALIAS("of:N*T*Cdht11C*");

MODULE_INFO(srcversion, "9A869538A82E3EF19567146");
