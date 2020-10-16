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
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

MODULE_INFO(staging, "Y");

static const struct modversion_info ____versions[]
__used __section(__versions) = {
	{ 0xe9942317, "module_layout" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x480a268d, "device_remove_file" },
	{ 0xf9a482f9, "msleep" },
	{ 0x3aeea660, "devm_gpiod_get_index_optional" },
	{ 0x97255bdf, "strlen" },
	{ 0x5e863e4c, "framebuffer_release" },
	{ 0xfa8c2168, "fb_sys_read" },
	{ 0xb43f9365, "ktime_get" },
	{ 0xb1b939e, "kmemdup" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0x85df9b6c, "strsep" },
	{ 0x999e8297, "vfree" },
	{ 0xe1cba094, "sys_copyarea" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x2f07f0db, "of_prop_next_u32" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0xf65110e8, "_dev_warn" },
	{ 0x5f754e5a, "memset" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0x3c7ad7ac, "of_find_property" },
	{ 0x34e942aa, "of_property_read_string" },
	{ 0x92c7ca64, "register_framebuffer" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0x8e865d3c, "arm_delay_ops" },
	{ 0x7fa795f, "_dev_err" },
	{ 0x3884d478, "of_match_device" },
	{ 0x2196324, "__aeabi_idiv" },
	{ 0x5d2f2b13, "spi_sync" },
	{ 0x61651be, "strcat" },
	{ 0xd95a2cd, "device_create_file" },
	{ 0x3eabc38c, "_dev_info" },
	{ 0x40a9b349, "vzalloc" },
	{ 0x12a38747, "usleep_range" },
	{ 0x611d5725, "sys_fillrect" },
	{ 0xc2acc033, "hex_dump_to_buffer" },
	{ 0xcf86cdac, "queue_delayed_work_on" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xd32d5ae5, "sys_imageblit" },
	{ 0x6e61f97f, "fb_sys_write" },
	{ 0x668b595, "_kstrtoul" },
	{ 0xdb9ca3c5, "_raw_spin_lock" },
	{ 0xf096bb54, "framebuffer_alloc" },
	{ 0x671c0836, "fb_deferred_io_cleanup" },
	{ 0x4bd9c66c, "fb_deferred_io_init" },
	{ 0x37a0cba, "kfree" },
	{ 0x9d669763, "memcpy" },
	{ 0x314b20c8, "scnprintf" },
	{ 0x84b498ef, "gpiod_set_value_cansleep" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xc358aaf8, "snprintf" },
	{ 0x77bc13a0, "strim" },
	{ 0xfc60f402, "of_property_read_variable_u32_array" },
	{ 0xfb5d3e3c, "gpiod_set_value" },
	{ 0xe544be36, "devm_kmalloc" },
	{ 0x9b8f1269, "param_ops_ulong" },
	{ 0x2bb33077, "vscnprintf" },
	{ 0x2023e1e3, "unregister_framebuffer" },
};

MODULE_INFO(depends, "fb_sys_fops,syscopyarea,sysfillrect,sysimgblt");


MODULE_INFO(srcversion, "4AC44AC72B5FC07EFAEC5E7");
