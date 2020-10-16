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
	{ 0xf65110e8, "_dev_warn" },
	{ 0x7fa795f, "_dev_err" },
	{ 0x22c0fb5f, "input_register_polled_device" },
	{ 0x5b3e02e5, "input_mt_init_slots" },
	{ 0x36e24524, "touchscreen_parse_properties" },
	{ 0x297acc01, "input_set_abs_params" },
	{ 0xc02293e7, "devm_input_allocate_polled_device" },
	{ 0x588006d2, "rpi_firmware_property" },
	{ 0xcb907ad6, "devm_add_action" },
	{ 0xd494a4b6, "dma_alloc_attrs" },
	{ 0xe544be36, "devm_kmalloc" },
	{ 0xfeb02014, "of_node_put" },
	{ 0xbdafad8, "rpi_firmware_get" },
	{ 0xd9093861, "of_get_parent" },
	{ 0x13adb655, "dma_free_attrs" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x4209d0f9, "input_mt_sync_frame" },
	{ 0xd3f57a2, "_find_next_bit_le" },
	{ 0x6d662533, "_find_first_bit_le" },
	{ 0x127a1e8b, "touchscreen_report_pos" },
	{ 0x2866f6d0, "input_mt_report_slot_state" },
	{ 0x38ea3b28, "input_event" },
	{ 0x216d759a, "mmiocpy" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

MODULE_INFO(depends, "input-polldev");

MODULE_ALIAS("of:N*T*Craspberrypi,firmware-ts");
MODULE_ALIAS("of:N*T*Craspberrypi,firmware-tsC*");

MODULE_INFO(srcversion, "4BA9F5B62A4FC944CDDD91B");
