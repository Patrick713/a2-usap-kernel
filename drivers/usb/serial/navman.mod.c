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
	{ 0x8fe591af, "usb_serial_deregister_drivers" },
	{ 0xf0d3e765, "usb_serial_register_drivers" },
	{ 0x43adaa1, "tty_flip_buffer_push" },
	{ 0x965bc3b1, "tty_insert_flip_string_fixed_flag" },
	{ 0xf88db2a2, "usb_kill_urb" },
	{ 0x7fa795f, "_dev_err" },
	{ 0x305d8a65, "usb_submit_urb" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

MODULE_INFO(depends, "usbserial");

MODULE_ALIAS("usb:v0A99p0001d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0DF7p0900d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "8A5E7DA078CB1C8D02A2C29");
