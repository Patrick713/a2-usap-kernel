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
	{ 0x2d26f33a, "__pm_runtime_idle" },
	{ 0x318848f2, "__pm_runtime_disable" },
	{ 0x8096cd10, "__pm_runtime_use_autosuspend" },
	{ 0x8fac8f23, "__pm_runtime_suspend" },
	{ 0x7238966a, "regulator_disable" },
	{ 0xe4f477be, "regmap_update_bits_base" },
	{ 0xf0cacea3, "regmap_bulk_read" },
	{ 0x76d0d88f, "devm_gpiod_get" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0xccae089c, "__pm_runtime_resume" },
	{ 0xae2c61e9, "regmap_read" },
	{ 0x1eb64646, "div64_s64" },
	{ 0x62654a76, "iio_device_unregister" },
	{ 0x5bbe49f4, "__init_waitqueue_head" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0x2dd968fd, "devm_iio_device_alloc" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0x435c666a, "__iio_device_register" },
	{ 0x14c0904a, "irq_get_irq_data" },
	{ 0x7fa795f, "_dev_err" },
	{ 0x2196324, "__aeabi_idiv" },
	{ 0x3eabc38c, "_dev_info" },
	{ 0xc3251622, "devm_regulator_get" },
	{ 0x12a38747, "usleep_range" },
	{ 0x6c3d134d, "pm_runtime_enable" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x2fb6de5d, "add_device_randomness" },
	{ 0x6c0e2acc, "__pm_runtime_set_status" },
	{ 0x314b20c8, "scnprintf" },
	{ 0xbe0fab2a, "pm_runtime_set_autosuspend_delay" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xe6c12171, "complete" },
	{ 0x6ebe366f, "ktime_get_mono_fast_ns" },
	{ 0xfb5d3e3c, "gpiod_set_value" },
	{ 0xd83dc5e6, "wait_for_completion_timeout" },
	{ 0xab26b88f, "devm_request_threaded_irq" },
	{ 0xc73c0dfd, "regmap_write" },
	{ 0x67b83f59, "regulator_enable" },
};

MODULE_INFO(depends, "industrialio");


MODULE_INFO(srcversion, "847BA63E319EC9C50666EC3");
