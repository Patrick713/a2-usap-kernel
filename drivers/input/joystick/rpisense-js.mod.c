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
	{ 0x7fa795f, "_dev_err" },
	{ 0xab26b88f, "devm_request_threaded_irq" },
	{ 0x3518599c, "gpiod_to_irq" },
	{ 0x8752ad47, "gpiod_direction_input" },
	{ 0x7b0629e7, "input_register_device" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0xea1c9521, "input_allocate_device" },
	{ 0x91b12580, "rpisense_get_dev" },
	{ 0x38ea3b28, "input_event" },
	{ 0x67f48eef, "rpisense_reg_read" },
	{ 0xb2d48a2e, "queue_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x2de4f87b, "input_free_device" },
	{ 0xc0e66c25, "input_unregister_device" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

MODULE_INFO(depends, "rpisense-core");

MODULE_ALIAS("platform:rpi-sense-js");
MODULE_ALIAS("of:N*T*Crpi,rpi-sense-js");
MODULE_ALIAS("of:N*T*Crpi,rpi-sense-jsC*");

MODULE_INFO(srcversion, "3A1020FD8FE11A5D677800E");
