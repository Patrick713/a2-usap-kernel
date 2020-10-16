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
	{ 0x81febe09, "simple_open" },
	{ 0xc884c9b8, "simple_attr_release" },
	{ 0x9e81a568, "simple_attr_write" },
	{ 0x47e15834, "simple_attr_read" },
	{ 0x14d1b7f5, "generic_file_llseek" },
	{ 0x88161187, "i2c_del_driver" },
	{ 0xbdae2e40, "i2c_register_driver" },
	{ 0x2d6fcc06, "__kmalloc" },
	{ 0xfcec0987, "enable_irq" },
	{ 0x8e865d3c, "arm_delay_ops" },
	{ 0x3ce4ca6f, "disable_irq" },
	{ 0xc358aaf8, "snprintf" },
	{ 0x7c20652d, "debugfs_create_file" },
	{ 0x9b1651fb, "debugfs_create_u16" },
	{ 0x93b18eee, "debugfs_create_dir" },
	{ 0x76d31a13, "dev_driver_string" },
	{ 0x7b0629e7, "input_register_device" },
	{ 0xdd9a789d, "devm_device_add_group" },
	{ 0xab26b88f, "devm_request_threaded_irq" },
	{ 0x14c0904a, "irq_get_irq_data" },
	{ 0x5b3e02e5, "input_mt_init_slots" },
	{ 0x36e24524, "touchscreen_parse_properties" },
	{ 0x297acc01, "input_set_abs_params" },
	{ 0x6ff4c298, "device_property_read_u32_array" },
	{ 0x73e20c1c, "strlcpy" },
	{ 0x349cba85, "strchr" },
	{ 0x2aa0e4fc, "strncasecmp" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0xebcbcc65, "devm_input_allocate_device" },
	{ 0xf9a482f9, "msleep" },
	{ 0x84b498ef, "gpiod_set_value_cansleep" },
	{ 0x62182082, "devm_gpiod_get_optional" },
	{ 0x59c7dbe, "device_get_match_data" },
	{ 0xe544be36, "devm_kmalloc" },
	{ 0x51a910c0, "arm_copy_to_user" },
	{ 0x2cfde9a2, "warn_slowpath_fmt" },
	{ 0x12a38747, "usleep_range" },
	{ 0x3b6c41ea, "kstrtouint" },
	{ 0xc1a56bd4, "simple_attr_open" },
	{ 0xbd159bd6, "input_mt_report_pointer_emulation" },
	{ 0xee43fd9b, "___ratelimit" },
	{ 0x127a1e8b, "touchscreen_report_pos" },
	{ 0x2866f6d0, "input_mt_report_slot_state" },
	{ 0x38ea3b28, "input_event" },
	{ 0x5f754e5a, "memset" },
	{ 0x314b20c8, "scnprintf" },
	{ 0xf65110e8, "_dev_warn" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0x7fa795f, "_dev_err" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xde45aa0d, "i2c_transfer" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x37a0cba, "kfree" },
	{ 0x35edc130, "debugfs_remove_recursive" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Cedt,edt-ft5206");
MODULE_ALIAS("of:N*T*Cedt,edt-ft5206C*");
MODULE_ALIAS("of:N*T*Cedt,edt-ft5306");
MODULE_ALIAS("of:N*T*Cedt,edt-ft5306C*");
MODULE_ALIAS("of:N*T*Cedt,edt-ft5406");
MODULE_ALIAS("of:N*T*Cedt,edt-ft5406C*");
MODULE_ALIAS("of:N*T*Cedt,edt-ft5506");
MODULE_ALIAS("of:N*T*Cedt,edt-ft5506C*");
MODULE_ALIAS("of:N*T*Cevervision,ev-ft5726");
MODULE_ALIAS("of:N*T*Cevervision,ev-ft5726C*");
MODULE_ALIAS("of:N*T*Cfocaltech,ft6236");
MODULE_ALIAS("of:N*T*Cfocaltech,ft6236C*");
MODULE_ALIAS("i2c:edt-ft5x06");
MODULE_ALIAS("i2c:edt-ft5506");
MODULE_ALIAS("i2c:ev-ft5726");
MODULE_ALIAS("i2c:ft6236");

MODULE_INFO(srcversion, "799C5BAB14A9D98AF7D66C8");
