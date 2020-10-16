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
	{ 0x25dc6fdf, "usb_serial_generic_write" },
	{ 0x6a3f486c, "usb_serial_handle_break" },
	{ 0x7950f61e, "usb_serial_generic_process_read_urb" },
	{ 0x71c90087, "memcmp" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

MODULE_INFO(depends, "usbserial");

MODULE_ALIAS("usb:v0525p127Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1D6Bp0010d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1D6Bp0011d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "50DB587AC68ABC29779D36A");
