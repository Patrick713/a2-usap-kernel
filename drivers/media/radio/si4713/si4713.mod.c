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
	{ 0x5f754e5a, "memset" },
	{ 0x97255bdf, "strlen" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0xf11cd95c, "platform_device_unregister" },
	{ 0xcef15c38, "platform_device_add" },
	{ 0xa8952bf4, "v4l2_device_unregister_subdev" },
	{ 0xda3400b3, "platform_device_put" },
	{ 0x6572df43, "platform_device_add_data" },
	{ 0xb6fa5281, "platform_device_alloc" },
	{ 0x7fa795f, "_dev_err" },
	{ 0xab26b88f, "devm_request_threaded_irq" },
	{ 0x978ca35c, "v4l2_ctrl_cluster" },
	{ 0x78f51124, "v4l2_ctrl_handler_free" },
	{ 0x3fa86437, "v4l2_ctrl_new_std_menu" },
	{ 0xc9e6816, "v4l2_ctrl_new_custom" },
	{ 0x6f19da99, "v4l2_ctrl_new_std" },
	{ 0x5809c1c4, "v4l2_ctrl_handler_init_class" },
	{ 0x5bbe49f4, "__init_waitqueue_head" },
	{ 0x29e6c634, "v4l2_i2c_subdev_init" },
	{ 0xd089e9e7, "devm_regulator_get_optional" },
	{ 0x62182082, "devm_gpiod_get_optional" },
	{ 0xe544be36, "devm_kmalloc" },
	{ 0xeea0399, "strscpy" },
	{ 0x8e865d3c, "arm_delay_ops" },
	{ 0x67b83f59, "regulator_enable" },
	{ 0xf9a482f9, "msleep" },
	{ 0x7f24de73, "jiffies_to_usecs" },
	{ 0x7238966a, "regulator_disable" },
	{ 0xfb5d3e3c, "gpiod_set_value" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x12a38747, "usleep_range" },
	{ 0xd83dc5e6, "wait_for_completion_timeout" },
	{ 0xf1969a8e, "__usecs_to_jiffies" },
	{ 0x526c3a6c, "jiffies" },
	{ 0xcb203516, "i2c_transfer_buffer_flags" },
	{ 0x9d669763, "memcpy" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xe6c12171, "complete" },
	{ 0xc5850110, "printk" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

MODULE_INFO(depends, "videodev");

MODULE_ALIAS("of:N*T*Csilabs,si4713");
MODULE_ALIAS("of:N*T*Csilabs,si4713C*");
MODULE_ALIAS("i2c:si4713");

MODULE_INFO(srcversion, "7059AB609C64F3D46E87BDD");
