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
	{ 0x88d57718, "iio_validate_scan_mask_onehot" },
	{ 0x478ae3e8, "iio_triggered_buffer_predisable" },
	{ 0x771e6f3e, "iio_triggered_buffer_postenable" },
	{ 0x88161187, "i2c_del_driver" },
	{ 0xbdae2e40, "i2c_register_driver" },
	{ 0x318848f2, "__pm_runtime_disable" },
	{ 0x62654a76, "iio_device_unregister" },
	{ 0x2cfde9a2, "warn_slowpath_fmt" },
	{ 0x9dbb579d, "iio_device_release_direct_mode" },
	{ 0x50f9f42d, "iio_device_claim_direct_mode" },
	{ 0x8fac8f23, "__pm_runtime_suspend" },
	{ 0x6ebe366f, "ktime_get_mono_fast_ns" },
	{ 0xccae089c, "__pm_runtime_resume" },
	{ 0x6850cee, "regmap_get_device" },
	{ 0xf00f9de2, "iio_push_event" },
	{ 0xfeb02014, "of_node_put" },
	{ 0x7fa795f, "_dev_err" },
	{ 0x435c666a, "__iio_device_register" },
	{ 0x6c3d134d, "pm_runtime_enable" },
	{ 0x8096cd10, "__pm_runtime_use_autosuspend" },
	{ 0xbe0fab2a, "pm_runtime_set_autosuspend_delay" },
	{ 0x6c0e2acc, "__pm_runtime_set_status" },
	{ 0xfc60f402, "of_property_read_variable_u32_array" },
	{ 0xd3039845, "of_get_next_child" },
	{ 0xab26b88f, "devm_request_threaded_irq" },
	{ 0x14c0904a, "irq_get_irq_data" },
	{ 0x9009b627, "devm_iio_triggered_buffer_setup" },
	{ 0xac511bf1, "__devm_regmap_init_i2c" },
	{ 0x9d669763, "memcpy" },
	{ 0xbec6d8a3, "of_device_get_match_data" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0x2dd968fd, "devm_iio_device_alloc" },
	{ 0xa6a7a2ad, "div_s64_rem" },
	{ 0xdf0fc94a, "iio_trigger_notify_done" },
	{ 0x87e4bbf5, "iio_push_to_buffers" },
	{ 0x1d3deeee, "iio_get_time_ns" },
	{ 0x6d662533, "_find_first_bit_le" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x12a38747, "usleep_range" },
	{ 0xc73c0dfd, "regmap_write" },
	{ 0xae2c61e9, "regmap_read" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0xe4f477be, "regmap_update_bits_base" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

MODULE_INFO(depends, "industrialio,industrialio-triggered-buffer,regmap-i2c");

MODULE_ALIAS("of:N*T*Cti,ads1015");
MODULE_ALIAS("of:N*T*Cti,ads1015C*");
MODULE_ALIAS("of:N*T*Cti,ads1115");
MODULE_ALIAS("of:N*T*Cti,ads1115C*");
MODULE_ALIAS("i2c:ads1015");
MODULE_ALIAS("i2c:ads1115");

MODULE_INFO(srcversion, "03EEB565D9D504EA61AD5F2");
