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
	{ 0x2d6fcc06, "__kmalloc" },
	{ 0x9a152689, "param_ops_int" },
	{ 0xa23e0a1a, "dvb_usb_device_exit" },
	{ 0x9284512a, "dvb_usb_device_init" },
	{ 0xde45aa0d, "i2c_transfer" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0xcc854c32, "param_ops_short" },
	{ 0x183c8383, "usb_deregister" },
	{ 0x3375510b, "mutex_lock_interruptible" },
	{ 0xc5850110, "printk" },
	{ 0x78c6bf66, "usb_control_msg" },
	{ 0x868784cb, "__symbol_get" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x37a0cba, "kfree" },
	{ 0x9d669763, "memcpy" },
	{ 0x36138fcf, "param_array_ops" },
	{ 0x7a8b7baa, "usb_register_driver" },
	{ 0x836b5cfc, "request_firmware" },
	{ 0x6e9dd606, "__symbol_put" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x8b6486ce, "release_firmware" },
};

MODULE_INFO(depends, "dvb-usb");

MODULE_ALIAS("usb:v04B4p2830d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v695Cp3829d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "85B91A4A47C039F7745FDB7");
