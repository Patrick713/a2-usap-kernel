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
	{ 0x5818de12, "usb_serial_generic_get_icount" },
	{ 0x5dd4583b, "usb_serial_generic_tiocmiwait" },
	{ 0x8fe591af, "usb_serial_deregister_drivers" },
	{ 0xf0d3e765, "usb_serial_register_drivers" },
	{ 0x409873e3, "tty_termios_baud_rate" },
	{ 0xff178f6, "__aeabi_idivmod" },
	{ 0xf7802486, "__aeabi_uidivmod" },
	{ 0x2196324, "__aeabi_idiv" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0x3dcf1ffa, "__wake_up" },
	{ 0x965bc3b1, "tty_insert_flip_string_fixed_flag" },
	{ 0xf65110e8, "_dev_warn" },
	{ 0x43adaa1, "tty_flip_buffer_push" },
	{ 0x5e2fb1e7, "__tty_insert_flip_char" },
	{ 0xe0d1054, "usb_serial_port_softint" },
	{ 0x9f49ab55, "usb_alloc_urb" },
	{ 0xebaa9dc8, "kmem_cache_alloc_trace" },
	{ 0xf4610713, "kmalloc_caches" },
	{ 0x37a0cba, "kfree" },
	{ 0x184a7893, "usb_free_urb" },
	{ 0x78c6bf66, "usb_control_msg" },
	{ 0xf88db2a2, "usb_kill_urb" },
	{ 0x7fa795f, "_dev_err" },
	{ 0x305d8a65, "usb_submit_urb" },
	{ 0x9d669763, "memcpy" },
	{ 0x39a12ca7, "_raw_spin_unlock_irqrestore" },
	{ 0x5f849a69, "_raw_spin_lock_irqsave" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

MODULE_INFO(depends, "usbserial");

MODULE_ALIAS("usb:v061DpC120d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v061DpC140d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v061DpC150d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v061DpC160d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v061DpC170d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v061DpC1A0d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v061DpC180d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "D38E25D45A4AF2D6D3C2D00");
