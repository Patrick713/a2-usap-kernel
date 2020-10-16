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
	{ 0x3a4a2952, "v4l2_event_subdev_unsubscribe" },
	{ 0x23981a70, "v4l2_ctrl_subdev_subscribe_event" },
	{ 0x88161187, "i2c_del_driver" },
	{ 0xbdae2e40, "i2c_register_driver" },
	{ 0x70b2bf36, "__v4l2_ctrl_s_ctrl" },
	{ 0xff76573f, "__v4l2_find_nearest_size" },
	{ 0x496c0885, "__v4l2_ctrl_grab" },
	{ 0x2aff724d, "__v4l2_ctrl_handler_setup" },
	{ 0xccae089c, "__pm_runtime_resume" },
	{ 0x6c3d134d, "pm_runtime_enable" },
	{ 0xe749b05a, "v4l2_async_register_subdev_sensor_common" },
	{ 0x9690c99b, "media_entity_pads_init" },
	{ 0xfa157a33, "v4l2_ctrl_new_fwnode_properties" },
	{ 0xa6b66f5e, "v4l2_fwnode_device_parse" },
	{ 0xc1d00dc6, "v4l2_ctrl_new_std_menu_items" },
	{ 0x6f19da99, "v4l2_ctrl_new_std" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0x5809c1c4, "v4l2_ctrl_handler_init_class" },
	{ 0xde45aa0d, "i2c_transfer" },
	{ 0x62182082, "devm_gpiod_get_optional" },
	{ 0xbce60500, "devm_regulator_bulk_get" },
	{ 0x556e4390, "clk_get_rate" },
	{ 0xd77f2380, "devm_clk_get" },
	{ 0x39073ec3, "fwnode_handle_put" },
	{ 0xc665a434, "v4l2_fwnode_endpoint_free" },
	{ 0xabfd88d1, "v4l2_fwnode_endpoint_alloc_parse" },
	{ 0x3143432, "fwnode_graph_get_next_endpoint" },
	{ 0xc7f78938, "dev_fwnode" },
	{ 0x5f754e5a, "memset" },
	{ 0x29e6c634, "v4l2_i2c_subdev_init" },
	{ 0xe544be36, "devm_kmalloc" },
	{ 0x2cfde9a2, "warn_slowpath_fmt" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0x6c0e2acc, "__pm_runtime_set_status" },
	{ 0x318848f2, "__pm_runtime_disable" },
	{ 0x78f51124, "v4l2_ctrl_handler_free" },
	{ 0xa2c2b403, "v4l2_async_unregister_subdev" },
	{ 0x3eabc38c, "_dev_info" },
	{ 0x2461ed0e, "__v4l2_ctrl_modify_range" },
	{ 0x2d26f33a, "__pm_runtime_idle" },
	{ 0x2b981c66, "pm_runtime_get_if_in_use" },
	{ 0xee43fd9b, "___ratelimit" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xcb203516, "i2c_transfer_buffer_flags" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0xb077e70a, "clk_unprepare" },
	{ 0x12a38747, "usleep_range" },
	{ 0x84b498ef, "gpiod_set_value_cansleep" },
	{ 0x815588a6, "clk_enable" },
	{ 0x8ede545e, "regulator_bulk_disable" },
	{ 0x7fa795f, "_dev_err" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0xa6102ad2, "regulator_bulk_enable" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

MODULE_INFO(depends, "videodev,v4l2-fwnode,mc");

MODULE_ALIAS("of:N*T*Csony,imx219");
MODULE_ALIAS("of:N*T*Csony,imx219C*");

MODULE_INFO(srcversion, "658C7DA1DAC678AB085A604");
