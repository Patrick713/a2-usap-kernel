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
	{ 0x8a331d2b, "param_ops_uint" },
	{ 0xfa8c2168, "fb_sys_read" },
	{ 0x88161187, "i2c_del_driver" },
	{ 0xbdae2e40, "i2c_register_driver" },
	{ 0x3eabc38c, "_dev_info" },
	{ 0x7238966a, "regulator_disable" },
	{ 0x3ab12ccd, "backlight_device_register" },
	{ 0xc358aaf8, "snprintf" },
	{ 0x92c7ca64, "register_framebuffer" },
	{ 0xf65110e8, "_dev_warn" },
	{ 0x1ca94e4b, "pwm_get" },
	{ 0x67b83f59, "regulator_enable" },
	{ 0x84b498ef, "gpiod_set_value_cansleep" },
	{ 0x8e865d3c, "arm_delay_ops" },
	{ 0x4bd9c66c, "fb_deferred_io_init" },
	{ 0xe544be36, "devm_kmalloc" },
	{ 0x6a5cb5ee, "__get_free_pages" },
	{ 0x3c7ad7ac, "of_find_property" },
	{ 0xb5cc6b7d, "of_property_read_variable_u8_array" },
	{ 0xfc60f402, "of_property_read_variable_u32_array" },
	{ 0xd089e9e7, "devm_regulator_get_optional" },
	{ 0x62182082, "devm_gpiod_get_optional" },
	{ 0xbec6d8a3, "of_device_get_match_data" },
	{ 0xf096bb54, "framebuffer_alloc" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x9f8dab2f, "pwm_put" },
	{ 0x7941ad4, "pwm_apply_state" },
	{ 0x5e863e4c, "framebuffer_release" },
	{ 0xda2a4834, "__free_pages" },
	{ 0x671c0836, "fb_deferred_io_cleanup" },
	{ 0x2023e1e3, "unregister_framebuffer" },
	{ 0x4b9f78d, "backlight_device_unregister" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xebaa9dc8, "kmem_cache_alloc_trace" },
	{ 0xf4610713, "kmalloc_caches" },
	{ 0x611d5725, "sys_fillrect" },
	{ 0xe1cba094, "sys_copyarea" },
	{ 0xd32d5ae5, "sys_imageblit" },
	{ 0x5f754e5a, "memset" },
	{ 0x2cfde9a2, "warn_slowpath_fmt" },
	{ 0xae353d77, "arm_copy_from_user" },
	{ 0x37a0cba, "kfree" },
	{ 0x7fa795f, "_dev_err" },
	{ 0xcb203516, "i2c_transfer_buffer_flags" },
	{ 0x2d6fcc06, "__kmalloc" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

MODULE_INFO(depends, "fb_sys_fops,backlight,sysfillrect,syscopyarea,sysimgblt");

MODULE_ALIAS("i2c:ssd1305fb");
MODULE_ALIAS("i2c:ssd1306fb");
MODULE_ALIAS("i2c:ssd1307fb");
MODULE_ALIAS("i2c:ssd1309fb");
MODULE_ALIAS("of:N*T*Csolomon,ssd1305fb-i2c");
MODULE_ALIAS("of:N*T*Csolomon,ssd1305fb-i2cC*");
MODULE_ALIAS("of:N*T*Csolomon,ssd1306fb-i2c");
MODULE_ALIAS("of:N*T*Csolomon,ssd1306fb-i2cC*");
MODULE_ALIAS("of:N*T*Csolomon,ssd1307fb-i2c");
MODULE_ALIAS("of:N*T*Csolomon,ssd1307fb-i2cC*");
MODULE_ALIAS("of:N*T*Csolomon,ssd1309fb-i2c");
MODULE_ALIAS("of:N*T*Csolomon,ssd1309fb-i2cC*");

MODULE_INFO(srcversion, "04490A26F94E4038A78574F");
