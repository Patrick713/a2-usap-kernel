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
	{ 0x314b20c8, "scnprintf" },
	{ 0xfcec0987, "enable_irq" },
	{ 0x3ce4ca6f, "disable_irq" },
	{ 0xd61eeee, "__bitmap_subset" },
	{ 0xca21ebd3, "bitmap_free" },
	{ 0x1b015d25, "bitmap_parselist" },
	{ 0x2688ec10, "bitmap_zalloc" },
	{ 0xf5d3dfb9, "fwnode_property_read_string" },
	{ 0x42141f39, "irq_of_parse_and_map" },
	{ 0xcc003eb1, "fwnode_property_present" },
	{ 0x49d79425, "fwnode_property_read_u32_array" },
	{ 0xd40c2daa, "of_fwnode_ops" },
	{ 0xcb6ba75f, "device_property_read_string" },
	{ 0x8630a932, "device_property_present" },
	{ 0xa542bd02, "device_get_child_node_count" },
	{ 0x7b0629e7, "input_register_device" },
	{ 0xf0cc01cd, "gpiod_set_debounce" },
	{ 0x3518599c, "gpiod_to_irq" },
	{ 0x39073ec3, "fwnode_handle_put" },
	{ 0xe8b2edc9, "devm_fwnode_get_index_gpiod_from_child" },
	{ 0xd82b8c71, "device_get_next_child_node" },
	{ 0xe15a0868, "devm_request_any_context_irq" },
	{ 0xcb907ad6, "devm_add_action" },
	{ 0x643feb7f, "input_set_capability" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x3fdba275, "gpiod_is_active_low" },
	{ 0x4decaf39, "gpio_to_desc" },
	{ 0x5cdc4c99, "devm_gpio_request_one" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0xebcbcc65, "devm_input_allocate_device" },
	{ 0xe544be36, "devm_kmalloc" },
	{ 0xea4a09cb, "mod_delayed_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x526c3a6c, "jiffies" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x39a12ca7, "_raw_spin_unlock_irqrestore" },
	{ 0x5f849a69, "_raw_spin_lock_irqsave" },
	{ 0x38ea3b28, "input_event" },
	{ 0x5dc31eaa, "gpiod_get_value_cansleep" },
	{ 0xf65110e8, "_dev_warn" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0x7fa795f, "_dev_err" },
	{ 0xbc477a2, "irq_set_irq_type" },
	{ 0xce2840e7, "irq_set_irq_wake" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0x29d9f26e, "cancel_delayed_work_sync" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Cgpio-keys");
MODULE_ALIAS("of:N*T*Cgpio-keysC*");

MODULE_INFO(srcversion, "AEB794702F49A782EE87AD6");
