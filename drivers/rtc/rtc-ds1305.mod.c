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
	{ 0x4f2250ba, "rtc_tm_to_time64" },
	{ 0xb6936ffe, "_bcd2bin" },
	{ 0x80ca5026, "_bin2bcd" },
	{ 0x7fa795f, "_dev_err" },
	{ 0xab26b88f, "devm_request_threaded_irq" },
	{ 0x46637278, "rtc_nvmem_register" },
	{ 0x5f9ee03a, "__rtc_register_device" },
	{ 0xf65110e8, "_dev_warn" },
	{ 0x6f94f4ae, "devm_rtc_allocate_device" },
	{ 0xe544be36, "devm_kmalloc" },
	{ 0x5d2f2b13, "spi_sync" },
	{ 0x5f754e5a, "memset" },
	{ 0xc8275115, "seq_printf" },
	{ 0xfcec0987, "enable_irq" },
	{ 0xf13f4b27, "rtc_update_irq" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0xb2d48a2e, "queue_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x3ce4ca6f, "disable_irq" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x367f91d1, "spi_write_then_read" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x4205ad24, "cancel_work_sync" },
	{ 0x4fb45f83, "devm_free_irq" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "81D384CB2FB10C13D3FADEF");
