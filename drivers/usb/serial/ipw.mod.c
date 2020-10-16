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
	{ 0x773dff1f, "usb_wwan_write" },
	{ 0x9e1a0736, "usb_wwan_port_remove" },
	{ 0x3c58b8ea, "usb_wwan_port_probe" },
	{ 0x8fe591af, "usb_serial_deregister_drivers" },
	{ 0xf0d3e765, "usb_serial_register_drivers" },
	{ 0xebaa9dc8, "kmem_cache_alloc_trace" },
	{ 0xf4610713, "kmalloc_caches" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x37a0cba, "kfree" },
	{ 0x1c84bafb, "usb_wwan_open" },
	{ 0x6edec821, "usb_clear_halt" },
	{ 0xb1b939e, "kmemdup" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x69d31abd, "usb_wwan_close" },
	{ 0x7fa795f, "_dev_err" },
	{ 0x78c6bf66, "usb_control_msg" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

MODULE_INFO(depends, "usb_wwan,usbserial");

MODULE_ALIAS("usb:v0BC3p0001d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "23F4FDAF5BD313DBDE198CC");