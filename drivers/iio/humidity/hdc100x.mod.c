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
	{ 0xe77f95ad, "__devm_iio_device_register" },
	{ 0x9009b627, "devm_iio_triggered_buffer_setup" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0x2dd968fd, "devm_iio_device_alloc" },
	{ 0x478ae3e8, "iio_triggered_buffer_predisable" },
	{ 0x771e6f3e, "iio_triggered_buffer_postenable" },
	{ 0xa96a4023, "i2c_smbus_write_word_data" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x9dbb579d, "iio_device_release_direct_mode" },
	{ 0x50f9f42d, "iio_device_claim_direct_mode" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x7fa795f, "_dev_err" },
	{ 0xdf0fc94a, "iio_trigger_notify_done" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0x87e4bbf5, "iio_push_to_buffers" },
	{ 0x1d3deeee, "iio_get_time_ns" },
	{ 0xcb203516, "i2c_transfer_buffer_flags" },
	{ 0x12a38747, "usleep_range" },
	{ 0x9dab0f7, "i2c_smbus_write_byte" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

MODULE_INFO(depends, "industrialio,industrialio-triggered-buffer");

MODULE_ALIAS("of:N*T*Cti,hdc1000");
MODULE_ALIAS("of:N*T*Cti,hdc1000C*");
MODULE_ALIAS("of:N*T*Cti,hdc1008");
MODULE_ALIAS("of:N*T*Cti,hdc1008C*");
MODULE_ALIAS("of:N*T*Cti,hdc1010");
MODULE_ALIAS("of:N*T*Cti,hdc1010C*");
MODULE_ALIAS("of:N*T*Cti,hdc1050");
MODULE_ALIAS("of:N*T*Cti,hdc1050C*");
MODULE_ALIAS("of:N*T*Cti,hdc1080");
MODULE_ALIAS("of:N*T*Cti,hdc1080C*");
MODULE_ALIAS("i2c:hdc100x");
MODULE_ALIAS("i2c:hdc1000");
MODULE_ALIAS("i2c:hdc1008");
MODULE_ALIAS("i2c:hdc1010");
MODULE_ALIAS("i2c:hdc1050");
MODULE_ALIAS("i2c:hdc1080");

MODULE_INFO(srcversion, "CA658AD9F02D46CC89356FE");
