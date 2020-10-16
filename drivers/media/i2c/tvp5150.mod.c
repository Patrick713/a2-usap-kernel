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
	{ 0x9a152689, "param_ops_int" },
	{ 0x88161187, "i2c_del_driver" },
	{ 0xbdae2e40, "i2c_register_driver" },
	{ 0xe620347, "v4l2_async_register_subdev" },
	{ 0xab26b88f, "devm_request_threaded_irq" },
	{ 0xc1d00dc6, "v4l2_ctrl_new_std_menu_items" },
	{ 0x6f19da99, "v4l2_ctrl_new_std" },
	{ 0x5809c1c4, "v4l2_ctrl_handler_init_class" },
	{ 0x3eabc38c, "_dev_info" },
	{ 0xf0cacea3, "regmap_bulk_read" },
	{ 0x29e6c634, "v4l2_i2c_subdev_init" },
	{ 0xfeb02014, "of_node_put" },
	{ 0x34e942aa, "of_property_read_string" },
	{ 0xfc60f402, "of_property_read_variable_u32_array" },
	{ 0xa9993bc, "of_get_next_available_child" },
	{ 0x26b8796a, "of_get_child_by_name" },
	{ 0xc321f85e, "v4l2_fwnode_endpoint_parse" },
	{ 0x4e56a3c2, "of_graph_get_next_endpoint" },
	{ 0xac511bf1, "__devm_regmap_init_i2c" },
	{ 0xe544be36, "devm_kmalloc" },
	{ 0x12a38747, "usleep_range" },
	{ 0x8e865d3c, "arm_delay_ops" },
	{ 0xf9a482f9, "msleep" },
	{ 0x84b498ef, "gpiod_set_value_cansleep" },
	{ 0x62182082, "devm_gpiod_get_optional" },
	{ 0x78f51124, "v4l2_ctrl_handler_free" },
	{ 0xa2c2b403, "v4l2_async_unregister_subdev" },
	{ 0xe109a68, "v4l2_ctrl_handler_setup" },
	{ 0x7fa795f, "_dev_err" },
	{ 0x5f754e5a, "memset" },
	{ 0xf5ef842e, "v4l_bound_align_image" },
	{ 0x6c4fbb46, "media_device_unregister_entity" },
	{ 0xa597670a, "media_create_pad_link" },
	{ 0x4dc17984, "media_device_register_entity" },
	{ 0x9690c99b, "media_entity_pads_init" },
	{ 0xe4f477be, "regmap_update_bits_base" },
	{ 0x334f9b29, "v4l2_subdev_notify_event" },
	{ 0xc73c0dfd, "regmap_write" },
	{ 0x56a78f1, "dev_printk" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xae2c61e9, "regmap_read" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

MODULE_INFO(depends, "videodev,v4l2-fwnode,regmap-i2c,mc");

MODULE_ALIAS("of:N*T*Cti,tvp5150");
MODULE_ALIAS("of:N*T*Cti,tvp5150C*");
MODULE_ALIAS("i2c:tvp5150");

MODULE_INFO(srcversion, "D0F16A11C658B9EFDA487AC");
