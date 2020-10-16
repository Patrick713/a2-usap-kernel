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
	{ 0x38ea3b28, "input_event" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x5d2f2b13, "spi_sync" },
	{ 0x5f754e5a, "memset" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x7fa795f, "_dev_err" },
	{ 0x6c3d134d, "pm_runtime_enable" },
	{ 0x22c0fb5f, "input_register_polled_device" },
	{ 0x6663995b, "spi_setup" },
	{ 0xe4e5c1d9, "input_ff_create_memless" },
	{ 0x643feb7f, "input_set_capability" },
	{ 0x297acc01, "input_set_abs_params" },
	{ 0xc358aaf8, "snprintf" },
	{ 0xc02293e7, "devm_input_allocate_polled_device" },
	{ 0xe544be36, "devm_kmalloc" },
	{ 0xccae089c, "__pm_runtime_resume" },
	{ 0x2d26f33a, "__pm_runtime_idle" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

MODULE_INFO(depends, "input-polldev,ff-memless");

MODULE_ALIAS("spi:psxpad-spi");

MODULE_INFO(srcversion, "31F1D922D1B07BD535886DA");
