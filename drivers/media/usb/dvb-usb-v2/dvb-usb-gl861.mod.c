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
	{ 0xa24f23d8, "__request_module" },
	{ 0xf4610713, "kmalloc_caches" },
	{ 0x2d6fcc06, "__kmalloc" },
	{ 0xf9a482f9, "msleep" },
	{ 0x901b96f7, "dvb_module_probe" },
	{ 0xde45aa0d, "i2c_transfer" },
	{ 0xb1b939e, "kmemdup" },
	{ 0x270a3ebf, "dvb_usbv2_resume" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0xeea0399, "strscpy" },
	{ 0xe331ef92, "i2c_add_adapter" },
	{ 0xdd0a2ba2, "strlcat" },
	{ 0xcc854c32, "param_ops_short" },
	{ 0x183c8383, "usb_deregister" },
	{ 0x3375510b, "mutex_lock_interruptible" },
	{ 0xc5850110, "printk" },
	{ 0x6b60a022, "usb_set_interface" },
	{ 0x38583939, "dvb_usbv2_probe" },
	{ 0x78c6bf66, "usb_control_msg" },
	{ 0x7fa795f, "_dev_err" },
	{ 0x868784cb, "__symbol_get" },
	{ 0x8ddf2687, "dvb_usbv2_disconnect" },
	{ 0xe4c0dd5, "dvb_module_release" },
	{ 0x75685c7c, "i2c_del_adapter" },
	{ 0x12a38747, "usleep_range" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x31c8afbb, "dvb_usbv2_suspend" },
	{ 0xebaa9dc8, "kmem_cache_alloc_trace" },
	{ 0xcb203516, "i2c_transfer_buffer_flags" },
	{ 0x37a0cba, "kfree" },
	{ 0x9d669763, "memcpy" },
	{ 0x36138fcf, "param_array_ops" },
	{ 0x7a8b7baa, "usb_register_driver" },
	{ 0x6e9dd606, "__symbol_put" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xdd4ea367, "dvb_usbv2_reset_resume" },
};

MODULE_INFO(depends, "dvb-core,dvb_usb_v2");

MODULE_ALIAS("usb:v0DB0p5581d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v05E3pF170d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v7A69p0001d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "C32E0F3EF3D79CF46E92A91");
