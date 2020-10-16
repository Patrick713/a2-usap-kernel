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
	{ 0x5dd4583b, "usb_serial_generic_tiocmiwait" },
	{ 0x8fe591af, "usb_serial_deregister_drivers" },
	{ 0xf0d3e765, "usb_serial_register_drivers" },
	{ 0x6a3f486c, "usb_serial_handle_break" },
	{ 0xfd84b491, "usb_serial_handle_sysrq_char" },
	{ 0x43adaa1, "tty_flip_buffer_push" },
	{ 0x5e2fb1e7, "__tty_insert_flip_char" },
	{ 0x88ee1cdc, "usb_serial_generic_open" },
	{ 0xa388bb6b, "tty_encode_baud_rate" },
	{ 0x409873e3, "tty_termios_baud_rate" },
	{ 0x6c257ac0, "tty_termios_hw_change" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0xf7802486, "__aeabi_uidivmod" },
	{ 0xb2d48a2e, "queue_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xf65110e8, "_dev_warn" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0x7e79f080, "usb_serial_generic_resume" },
	{ 0x305d8a65, "usb_submit_urb" },
	{ 0x92b57248, "flush_work" },
	{ 0xf88db2a2, "usb_kill_urb" },
	{ 0x81fed812, "usb_serial_generic_close" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xb6c9fca8, "tty_kref_put" },
	{ 0x865da15c, "usb_serial_handle_dcd_change" },
	{ 0x34f413a3, "tty_port_tty_get" },
	{ 0x3dcf1ffa, "__wake_up" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x7fa795f, "_dev_err" },
	{ 0x78c6bf66, "usb_control_msg" },
	{ 0xebaa9dc8, "kmem_cache_alloc_trace" },
	{ 0xf4610713, "kmalloc_caches" },
	{ 0x37a0cba, "kfree" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

MODULE_INFO(depends, "usbserial");

MODULE_ALIAS("usb:v1934p0706d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "46A3092E8BADC4F07F65591");
