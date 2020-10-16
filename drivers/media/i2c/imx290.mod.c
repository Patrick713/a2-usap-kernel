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
	{ 0x87a90ed2, "v4l2_subdev_link_validate" },
	{ 0x88161187, "i2c_del_driver" },
	{ 0xbdae2e40, "i2c_register_driver" },
	{ 0x496c0885, "__v4l2_ctrl_grab" },
	{ 0xe109a68, "v4l2_ctrl_handler_setup" },
	{ 0xccae089c, "__pm_runtime_resume" },
	{ 0xae2c61e9, "regmap_read" },
	{ 0x2b981c66, "pm_runtime_get_if_in_use" },
	{ 0xf9a482f9, "msleep" },
	{ 0xc665a434, "v4l2_fwnode_endpoint_free" },
	{ 0x2d26f33a, "__pm_runtime_idle" },
	{ 0x6c3d134d, "pm_runtime_enable" },
	{ 0xe620347, "v4l2_async_register_subdev" },
	{ 0x9690c99b, "media_entity_pads_init" },
	{ 0x29e6c634, "v4l2_i2c_subdev_init" },
	{ 0xc1d00dc6, "v4l2_ctrl_new_std_menu_items" },
	{ 0x5730b7f3, "v4l2_ctrl_new_int_menu" },
	{ 0x6f19da99, "v4l2_ctrl_new_std" },
	{ 0x5809c1c4, "v4l2_ctrl_handler_init_class" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0x62182082, "devm_gpiod_get_optional" },
	{ 0xbce60500, "devm_regulator_bulk_get" },
	{ 0x76d9b876, "clk_set_rate" },
	{ 0x49d79425, "fwnode_property_read_u32_array" },
	{ 0xd77f2380, "devm_clk_get" },
	{ 0x39073ec3, "fwnode_handle_put" },
	{ 0xabfd88d1, "v4l2_fwnode_endpoint_alloc_parse" },
	{ 0x3143432, "fwnode_graph_get_next_endpoint" },
	{ 0xc7f78938, "dev_fwnode" },
	{ 0x3884d478, "of_match_device" },
	{ 0xac511bf1, "__devm_regmap_init_i2c" },
	{ 0xe544be36, "devm_kmalloc" },
	{ 0x12a38747, "usleep_range" },
	{ 0xa6102ad2, "regulator_bulk_enable" },
	{ 0x815588a6, "clk_enable" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0x7fa795f, "_dev_err" },
	{ 0xc73c0dfd, "regmap_write" },
	{ 0x6c0e2acc, "__pm_runtime_set_status" },
	{ 0x318848f2, "__pm_runtime_disable" },
	{ 0x78f51124, "v4l2_ctrl_handler_free" },
	{ 0xa2c2b403, "v4l2_async_unregister_subdev" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x5f754e5a, "memset" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x2cfde9a2, "warn_slowpath_fmt" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0x2461ed0e, "__v4l2_ctrl_modify_range" },
	{ 0xb8f49186, "__v4l2_ctrl_s_ctrl_int64" },
	{ 0x70b2bf36, "__v4l2_ctrl_s_ctrl" },
	{ 0xff76573f, "__v4l2_find_nearest_size" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0x59e5070d, "__do_div64" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0x8ede545e, "regulator_bulk_disable" },
	{ 0x84b498ef, "gpiod_set_value_cansleep" },
	{ 0xb077e70a, "clk_unprepare" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

MODULE_INFO(depends, "videodev,v4l2-fwnode,mc,regmap-i2c");

MODULE_ALIAS("of:N*T*Csony,imx290");
MODULE_ALIAS("of:N*T*Csony,imx290C*");
MODULE_ALIAS("of:N*T*Csony,imx290-mono");
MODULE_ALIAS("of:N*T*Csony,imx290-monoC*");

MODULE_INFO(srcversion, "413F5B1485DC5E6D9640AF9");
