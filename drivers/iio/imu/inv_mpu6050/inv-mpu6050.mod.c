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
	{ 0xf9a482f9, "msleep" },
	{ 0xdf76bbeb, "iio_pollfunc_store_time" },
	{ 0x28d06e94, "iio_read_const_attr" },
	{ 0xdf0fc94a, "iio_trigger_notify_done" },
	{ 0x7238966a, "regulator_disable" },
	{ 0xf0cacea3, "regmap_bulk_read" },
	{ 0xa6a7a2ad, "div_s64_rem" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0x30ddcad4, "regmap_bulk_write" },
	{ 0xae2c61e9, "regmap_read" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0xb74af777, "devm_iio_trigger_alloc" },
	{ 0xf65110e8, "_dev_warn" },
	{ 0x2dd968fd, "devm_iio_device_alloc" },
	{ 0x1e83a94d, "iio_read_mount_matrix" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0xe77f95ad, "__devm_iio_device_register" },
	{ 0x19f0d9b9, "__devm_iio_trigger_register" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0x14c0904a, "irq_get_irq_data" },
	{ 0x8c8569cb, "kstrtoint" },
	{ 0x7fa795f, "_dev_err" },
	{ 0x2196324, "__aeabi_idiv" },
	{ 0x50f9f42d, "iio_device_claim_direct_mode" },
	{ 0x51601e21, "iio_show_mount_matrix" },
	{ 0xcb907ad6, "devm_add_action" },
	{ 0xc3251622, "devm_regulator_get" },
	{ 0x12a38747, "usleep_range" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xde147102, "get_device" },
	{ 0xb66bc471, "__module_get" },
	{ 0x2d6bcdcb, "iio_trigger_generic_data_rdy_poll" },
	{ 0x9dbb579d, "iio_device_release_direct_mode" },
	{ 0x9009b627, "devm_iio_triggered_buffer_setup" },
	{ 0x314b20c8, "scnprintf" },
	{ 0x87e4bbf5, "iio_push_to_buffers" },
	{ 0x6850cee, "regmap_get_device" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xab26b88f, "devm_request_threaded_irq" },
	{ 0xc73c0dfd, "regmap_write" },
	{ 0x67b83f59, "regulator_enable" },
};

MODULE_INFO(depends, "industrialio,industrialio-triggered-buffer");


MODULE_INFO(srcversion, "9CC7777F5D10A72A62D5598");
