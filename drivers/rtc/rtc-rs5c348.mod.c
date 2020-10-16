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
	{ 0x85c6e59a, "driver_unregister" },
	{ 0x31655912, "__spi_register_driver" },
	{ 0x5f9ee03a, "__rtc_register_device" },
	{ 0x6f94f4ae, "devm_rtc_allocate_device" },
	{ 0x3eabc38c, "_dev_info" },
	{ 0x7fa795f, "_dev_err" },
	{ 0xe544be36, "devm_kmalloc" },
	{ 0xb6936ffe, "_bcd2bin" },
	{ 0xf65110e8, "_dev_warn" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x8e865d3c, "arm_delay_ops" },
	{ 0x80ca5026, "_bin2bcd" },
	{ 0x367f91d1, "spi_write_then_read" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "AB5EFDE94CBB07BA034BB68");
