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

static const struct modversion_info ____versions[]
__used __section(__versions) = {
	{ 0xe9942317, "module_layout" },
	{ 0xf4610713, "kmalloc_caches" },
	{ 0x4150b3e8, "usb_get_from_anchor" },
	{ 0xf88db2a2, "usb_kill_urb" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0xdebe62e1, "usb_autopm_get_interface" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0xde8d355a, "usb_unlink_urb" },
	{ 0xd697e69a, "trace_hardirqs_on" },
	{ 0x526c3a6c, "jiffies" },
	{ 0x5bbe49f4, "__init_waitqueue_head" },
	{ 0x5f754e5a, "memset" },
	{ 0x39a12ca7, "_raw_spin_unlock_irqrestore" },
	{ 0x9c318595, "usb_autopm_put_interface_async" },
	{ 0x78c6bf66, "usb_control_msg" },
	{ 0x965bc3b1, "tty_insert_flip_string_fixed_flag" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0x7fa795f, "_dev_err" },
	{ 0xc6cbbc89, "capable" },
	{ 0x305d8a65, "usb_submit_urb" },
	{ 0x5d3759e2, "usb_autopm_get_interface_async" },
	{ 0x6a5cb5ee, "__get_free_pages" },
	{ 0x2da81bff, "_raw_spin_lock_irq" },
	{ 0xebaa9dc8, "kmem_cache_alloc_trace" },
	{ 0x5f849a69, "_raw_spin_lock_irqsave" },
	{ 0x4302d0eb, "free_pages" },
	{ 0x1cd0f58d, "usb_autopm_get_interface_no_resume" },
	{ 0x409873e3, "tty_termios_baud_rate" },
	{ 0x37a0cba, "kfree" },
	{ 0x9d669763, "memcpy" },
	{ 0x43adaa1, "tty_flip_buffer_push" },
	{ 0xca54fee, "_test_and_set_bit" },
	{ 0x6ebe366f, "ktime_get_mono_fast_ns" },
	{ 0xe0d1054, "usb_serial_port_softint" },
	{ 0x49ebacbd, "_clear_bit" },
	{ 0x184a7893, "usb_free_urb" },
	{ 0x3d0f3514, "usb_autopm_put_interface" },
	{ 0x7609cb29, "usb_anchor_urb" },
	{ 0x9f49ab55, "usb_alloc_urb" },
};

MODULE_INFO(depends, "usbserial");


MODULE_INFO(srcversion, "DBF9527330C65FA3B53381E");
