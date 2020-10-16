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
	{ 0x3a4a2952, "v4l2_event_subdev_unsubscribe" },
	{ 0x88161187, "i2c_del_driver" },
	{ 0xbdae2e40, "i2c_register_driver" },
	{ 0x334f9b29, "v4l2_subdev_notify_event" },
	{ 0xf777f66a, "cec_delete_adapter" },
	{ 0xf65110e8, "_dev_warn" },
	{ 0x24d273d1, "add_timer" },
	{ 0xf9a482f9, "msleep" },
	{ 0xfb5d3e3c, "gpiod_set_value" },
	{ 0x12a38747, "usleep_range" },
	{ 0x62182082, "devm_gpiod_get_optional" },
	{ 0xfeb02014, "of_node_put" },
	{ 0xc665a434, "v4l2_fwnode_endpoint_free" },
	{ 0xb077e70a, "clk_unprepare" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0x556e4390, "clk_get_rate" },
	{ 0x815588a6, "clk_enable" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0xabfd88d1, "v4l2_fwnode_endpoint_alloc_parse" },
	{ 0x4e56a3c2, "of_graph_get_next_endpoint" },
	{ 0x7fa795f, "_dev_err" },
	{ 0xd77f2380, "devm_clk_get" },
	{ 0xe109a68, "v4l2_ctrl_handler_setup" },
	{ 0xd631bc12, "cec_register_adapter" },
	{ 0xab26b88f, "devm_request_threaded_irq" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0xe620347, "v4l2_async_register_subdev" },
	{ 0x9690c99b, "media_entity_pads_init" },
	{ 0xc9e6816, "v4l2_ctrl_new_custom" },
	{ 0x6f19da99, "v4l2_ctrl_new_std" },
	{ 0x5809c1c4, "v4l2_ctrl_handler_init_class" },
	{ 0x29e6c634, "v4l2_i2c_subdev_init" },
	{ 0xe544be36, "devm_kmalloc" },
	{ 0xd034392d, "v4l2_match_dv_timings" },
	{ 0xaf3d134, "v4l2_valid_dv_timings" },
	{ 0xf1bbfb5e, "cec_s_phys_addr" },
	{ 0x7b6ac78f, "v4l2_phys_addr_validate" },
	{ 0xbe4de675, "cec_get_edid_phys_addr" },
	{ 0xcf86cdac, "queue_delayed_work_on" },
	{ 0x92b57248, "flush_work" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0x78f51124, "v4l2_ctrl_handler_free" },
	{ 0xa8952bf4, "v4l2_device_unregister_subdev" },
	{ 0xa2c2b403, "v4l2_async_unregister_subdev" },
	{ 0xec562cd, "cec_unregister_adapter" },
	{ 0xa15d0131, "cancel_delayed_work" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x526c3a6c, "jiffies" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0xb2d48a2e, "queue_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x8402862, "v4l2_print_dv_timings" },
	{ 0xb483fe38, "hdmi_infoframe_log" },
	{ 0x35696cb2, "hdmi_infoframe_unpack" },
	{ 0x23981a70, "v4l2_ctrl_subdev_subscribe_event" },
	{ 0x453a9329, "v4l2_src_change_event_subdev_subscribe" },
	{ 0x922ecd29, "v4l2_enum_dv_timings_cap" },
	{ 0x29d9f26e, "cancel_delayed_work_sync" },
	{ 0x70b2bf36, "__v4l2_ctrl_s_ctrl" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0x2196324, "__aeabi_idiv" },
	{ 0x8e865d3c, "arm_delay_ops" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xc5850110, "printk" },
	{ 0xde45aa0d, "i2c_transfer" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x5f754e5a, "memset" },
	{ 0x9d669763, "memcpy" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0xe707d823, "__aeabi_uidiv" },
};

MODULE_INFO(depends, "videodev,cec,v4l2-fwnode,mc,v4l2-dv-timings");

MODULE_ALIAS("of:N*T*Ctoshiba,tc358743");
MODULE_ALIAS("of:N*T*Ctoshiba,tc358743C*");
MODULE_ALIAS("i2c:tc358743");

MODULE_INFO(srcversion, "6C4774C50E243C9E76EDCD1");
