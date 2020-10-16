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
	{ 0xfe41fb0b, "param_ops_bool" },
	{ 0xfa8c2168, "fb_sys_read" },
	{ 0x8ad83553, "platform_driver_unregister" },
	{ 0x610b1492, "__platform_driver_register" },
	{ 0x5f754e5a, "memset" },
	{ 0x51a910c0, "arm_copy_to_user" },
	{ 0xae353d77, "arm_copy_from_user" },
	{ 0x6e61f97f, "fb_sys_write" },
	{ 0x611d5725, "sys_fillrect" },
	{ 0xe1cba094, "sys_copyarea" },
	{ 0xd32d5ae5, "sys_imageblit" },
	{ 0xcf86cdac, "queue_delayed_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xc5850110, "printk" },
	{ 0x7fa795f, "_dev_err" },
	{ 0x92c7ca64, "register_framebuffer" },
	{ 0x4bd9c66c, "fb_deferred_io_init" },
	{ 0x9d669763, "memcpy" },
	{ 0xf096bb54, "framebuffer_alloc" },
	{ 0xe544be36, "devm_kmalloc" },
	{ 0x40a9b349, "vzalloc" },
	{ 0x91b12580, "rpisense_get_dev" },
	{ 0x5cacfbde, "rpisense_block_write" },
	{ 0x999e8297, "vfree" },
	{ 0x5e863e4c, "framebuffer_release" },
	{ 0x671c0836, "fb_deferred_io_cleanup" },
	{ 0x2023e1e3, "unregister_framebuffer" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

MODULE_INFO(depends, "fb_sys_fops,sysfillrect,syscopyarea,sysimgblt,rpisense-core");

MODULE_ALIAS("platform:rpi-sense-fb");
MODULE_ALIAS("of:N*T*Crpi,rpi-sense-fb");
MODULE_ALIAS("of:N*T*Crpi,rpi-sense-fbC*");

MODULE_INFO(srcversion, "FC554BC5F2903919A643A1E");
