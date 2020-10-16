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
	{ 0xab26b88f, "devm_request_threaded_irq" },
	{ 0xd75cf3bb, "devm_rc_register_device" },
	{ 0xf7bc2652, "of_get_property" },
	{ 0x8bf399f8, "devm_rc_allocate_device" },
	{ 0x3518599c, "gpiod_to_irq" },
	{ 0x7fa795f, "_dev_err" },
	{ 0x76d0d88f, "devm_gpiod_get" },
	{ 0xe544be36, "devm_kmalloc" },
	{ 0xd2b73a0f, "ir_raw_event_store_edge" },
	{ 0x6d55919b, "gpiod_get_value" },
	{ 0x3ce4ca6f, "disable_irq" },
	{ 0xfcec0987, "enable_irq" },
	{ 0xce2840e7, "irq_set_irq_wake" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Cgpio-ir-receiver");
MODULE_ALIAS("of:N*T*Cgpio-ir-receiverC*");

MODULE_INFO(srcversion, "6077CA643E38B48054F9201");
