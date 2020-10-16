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
	{ 0x28d06e94, "iio_read_const_attr" },
	{ 0xe4f477be, "regmap_update_bits_base" },
	{ 0xf0cacea3, "regmap_bulk_read" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0xae2c61e9, "regmap_read" },
	{ 0x1eb64646, "div64_s64" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0x2dd968fd, "devm_iio_device_alloc" },
	{ 0xe77f95ad, "__devm_iio_device_register" },
	{ 0x7fa795f, "_dev_err" },
	{ 0x2196324, "__aeabi_idiv" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x6850cee, "regmap_get_device" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xc73c0dfd, "regmap_write" },
};

MODULE_INFO(depends, "industrialio");


MODULE_INFO(srcversion, "D9DD809574246BA0694731A");
