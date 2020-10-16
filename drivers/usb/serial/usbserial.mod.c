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
	{ 0x34f413a3, "tty_port_tty_get" },
	{ 0x6d662533, "_find_first_bit_le" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x64568c4f, "bus_register" },
	{ 0xf4610713, "kmalloc_caches" },
	{ 0x2d6fcc06, "__kmalloc" },
	{ 0xc9c2e149, "driver_register" },
	{ 0x13d0adf7, "__kfifo_out" },
	{ 0xd39fa6ab, "__kfifo_alloc" },
	{ 0x7647726c, "handle_sysrq" },
	{ 0x5d7776e5, "seq_puts" },
	{ 0xf9b3ce30, "tty_port_open" },
	{ 0x2a3aa678, "_test_and_clear_bit" },
	{ 0xc8275115, "seq_printf" },
	{ 0x5a29c639, "tty_port_hangup" },
	{ 0x4205ad24, "cancel_work_sync" },
	{ 0xf88db2a2, "usb_kill_urb" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0xe9779a91, "tty_register_driver" },
	{ 0xdebe62e1, "usb_autopm_get_interface" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0x9eeac662, "put_tty_driver" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x526c3a6c, "jiffies" },
	{ 0x17f68cc0, "tty_set_operations" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0xf65110e8, "_dev_warn" },
	{ 0x5e2fb1e7, "__tty_insert_flip_char" },
	{ 0x6fe4407e, "tty_port_close" },
	{ 0x2878e15a, "idr_destroy" },
	{ 0xc1c73f49, "device_del" },
	{ 0x39a12ca7, "_raw_spin_unlock_irqrestore" },
	{ 0x183c8383, "usb_deregister" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0x90525ba0, "tty_ldisc_deref" },
	{ 0x9a91d7d7, "tty_port_register_device" },
	{ 0x85c6e59a, "driver_unregister" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x444b10df, "usb_unpoison_urb" },
	{ 0x1a8f01de, "usb_poison_urb" },
	{ 0x17a7462, "seq_putc" },
	{ 0x53adf080, "tty_port_init" },
	{ 0x965bc3b1, "tty_insert_flip_string_fixed_flag" },
	{ 0xfa593d65, "tty_port_destroy" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0xc1e58a5f, "refcount_dec_and_test_checked" },
	{ 0xbbcd9ca2, "tty_vhangup" },
	{ 0xb9b5bf21, "tty_ldisc_ref" },
	{ 0x692a4f08, "idr_alloc" },
	{ 0x1b018b60, "device_add" },
	{ 0x7fa795f, "_dev_err" },
	{ 0x7f99f66a, "bus_unregister" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xa511978d, "usb_store_new_id" },
	{ 0x316b0a97, "usb_match_id" },
	{ 0xa346975c, "idr_remove" },
	{ 0xbc531634, "tty_port_tty_wakeup" },
	{ 0x12b548f6, "module_put" },
	{ 0xa4de0c85, "tty_unregister_device" },
	{ 0x3eabc38c, "_dev_info" },
	{ 0x305d8a65, "usb_submit_urb" },
	{ 0x67b27ec1, "tty_std_termios" },
	{ 0xd6cf68f9, "usb_get_dev" },
	{ 0xebcc8bdd, "put_device" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x822bd109, "usb_put_dev" },
	{ 0x1000e51, "schedule" },
	{ 0xebaa9dc8, "kmem_cache_alloc_trace" },
	{ 0xdb9ca3c5, "_raw_spin_lock" },
	{ 0xc0599906, "usb_get_intf" },
	{ 0x5f849a69, "_raw_spin_lock_irqsave" },
	{ 0x30e74134, "tty_termios_copy_hw" },
	{ 0xdb760f52, "__kfifo_free" },
	{ 0x3874e5dd, "tty_unregister_driver" },
	{ 0x25441fc2, "tty_hangup" },
	{ 0x845b2069, "usb_show_dynids" },
	{ 0x3dcf1ffa, "__wake_up" },
	{ 0xdf09f9c5, "tty_standard_install" },
	{ 0x647af474, "prepare_to_wait_event" },
	{ 0x8ad8abd6, "__tty_alloc_driver" },
	{ 0x19a304ba, "usb_disabled" },
	{ 0x2cfde9a2, "warn_slowpath_fmt" },
	{ 0x409873e3, "tty_termios_baud_rate" },
	{ 0x54496b4, "schedule_timeout_interruptible" },
	{ 0x37a0cba, "kfree" },
	{ 0x9dc3b2ba, "device_initialize" },
	{ 0x71480154, "usb_match_one_id" },
	{ 0x7a8b7baa, "usb_register_driver" },
	{ 0xb6c9fca8, "tty_kref_put" },
	{ 0x49970de8, "finish_wait" },
	{ 0x6e0633e2, "driver_attach" },
	{ 0x43adaa1, "tty_flip_buffer_push" },
	{ 0xf23fcb99, "__kfifo_in" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0xb2d48a2e, "queue_work_on" },
	{ 0xc358aaf8, "snprintf" },
	{ 0xe1bf6b5b, "param_ops_ushort" },
	{ 0xe54dbfa5, "dev_set_name" },
	{ 0x1ee8d6d4, "refcount_inc_checked" },
	{ 0x49ebacbd, "_clear_bit" },
	{ 0x47925794, "idr_find" },
	{ 0x184a7893, "usb_free_urb" },
	{ 0x717bcdac, "try_module_get" },
	{ 0x3d0f3514, "usb_autopm_put_interface" },
	{ 0x9f49ab55, "usb_alloc_urb" },
	{ 0xecf8b294, "usb_put_intf" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "AD14EE38A11E09A5E7CC930");
