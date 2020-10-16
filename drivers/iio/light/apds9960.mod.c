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
	{ 0x28d06e94, "iio_read_const_attr" },
	{ 0x88161187, "i2c_del_driver" },
	{ 0xbdae2e40, "i2c_register_driver" },
	{ 0x30ddcad4, "regmap_bulk_write" },
	{ 0x435c666a, "__iio_device_register" },
	{ 0xab26b88f, "devm_request_threaded_irq" },
	{ 0x498938dd, "regmap_field_update_bits_base" },
	{ 0x3c806805, "devm_regmap_field_alloc" },
	{ 0x8096cd10, "__pm_runtime_use_autosuspend" },
	{ 0xbe0fab2a, "pm_runtime_set_autosuspend_delay" },
	{ 0x6c3d134d, "pm_runtime_enable" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0xac511bf1, "__devm_regmap_init_i2c" },
	{ 0xf7d90df8, "iio_device_attach_buffer" },
	{ 0x4061a39e, "devm_iio_kfifo_allocate" },
	{ 0x2dd968fd, "devm_iio_device_alloc" },
	{ 0x8fac8f23, "__pm_runtime_suspend" },
	{ 0x6ebe366f, "ktime_get_mono_fast_ns" },
	{ 0x12a38747, "usleep_range" },
	{ 0xccae089c, "__pm_runtime_resume" },
	{ 0x7fa795f, "_dev_err" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0x87e4bbf5, "iio_push_to_buffers" },
	{ 0xf0cacea3, "regmap_bulk_read" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0xc73c0dfd, "regmap_write" },
	{ 0xf00f9de2, "iio_push_event" },
	{ 0x1d3deeee, "iio_get_time_ns" },
	{ 0xae2c61e9, "regmap_read" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x6c0e2acc, "__pm_runtime_set_status" },
	{ 0x318848f2, "__pm_runtime_disable" },
	{ 0x62654a76, "iio_device_unregister" },
	{ 0xe4f477be, "regmap_update_bits_base" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

MODULE_INFO(depends, "industrialio,regmap-i2c,kfifo_buf");

MODULE_ALIAS("of:N*T*Cavago,apds9960");
MODULE_ALIAS("of:N*T*Cavago,apds9960C*");
MODULE_ALIAS("i2c:apds9960");

MODULE_INFO(srcversion, "1C62D4FADF9BBAAFFDC5B3B");
