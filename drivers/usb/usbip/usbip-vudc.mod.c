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
	{ 0xf4610713, "kmalloc_caches" },
	{ 0x18fad990, "usbip_event_happened" },
	{ 0x2d6fcc06, "__kmalloc" },
	{ 0xd02753dc, "usbip_header_correct_endian" },
	{ 0x11201734, "kernel_sendmsg" },
	{ 0x9b182b2, "sockfd_lookup" },
	{ 0xf7802486, "__aeabi_uidivmod" },
	{ 0x16c2456b, "usbip_alloc_iso_desc_pdu" },
	{ 0xd2c46c56, "usb_del_gadget_udc" },
	{ 0x3876bbe5, "usb_gadget_giveback_request" },
	{ 0xb1b939e, "kmemdup" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xd697e69a, "trace_hardirqs_on" },
	{ 0xdd34010a, "kthread_create_on_node" },
	{ 0x610b1492, "__platform_driver_register" },
	{ 0x526c3a6c, "jiffies" },
	{ 0x52598bf0, "usbip_event_add" },
	{ 0x5bbe49f4, "__init_waitqueue_head" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0x5f754e5a, "memset" },
	{ 0xaef8da95, "usb_gadget_udc_reset" },
	{ 0x39a12ca7, "_raw_spin_unlock_irqrestore" },
	{ 0xc5850110, "printk" },
	{ 0x7bfbe88e, "kthread_stop" },
	{ 0xf130cb40, "platform_device_del" },
	{ 0xb6fa5281, "platform_device_alloc" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0xcef15c38, "platform_device_add" },
	{ 0x101cdb2, "kernel_sock_shutdown" },
	{ 0x98ab0be0, "usbip_stop_eh" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0xc1e58a5f, "refcount_dec_and_test_checked" },
	{ 0x8c8569cb, "kstrtoint" },
	{ 0x7fa795f, "_dev_err" },
	{ 0xa92173df, "fput" },
	{ 0xfbc0cca9, "usbip_recv_iso" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xd7f72d8c, "usbip_recv" },
	{ 0x334d300e, "usb_add_gadget_udc" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x1000e51, "schedule" },
	{ 0x2da81bff, "_raw_spin_lock_irq" },
	{ 0xf122d9df, "usb_ep_set_maxpacket_limit" },
	{ 0xb35d51ab, "wake_up_process" },
	{ 0xebaa9dc8, "kmem_cache_alloc_trace" },
	{ 0xdb9ca3c5, "_raw_spin_lock" },
	{ 0x5f849a69, "_raw_spin_lock_irqsave" },
	{ 0x3dcf1ffa, "__wake_up" },
	{ 0xb3f7646e, "kthread_should_stop" },
	{ 0x647af474, "prepare_to_wait_event" },
	{ 0x19a304ba, "usb_disabled" },
	{ 0x37a0cba, "kfree" },
	{ 0x9d669763, "memcpy" },
	{ 0xa84de94e, "usbip_recv_xbuff" },
	{ 0xd7c104ee, "__put_task_struct" },
	{ 0x49970de8, "finish_wait" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xc358aaf8, "snprintf" },
	{ 0x8ad83553, "platform_driver_unregister" },
	{ 0x1ee8d6d4, "refcount_inc_checked" },
	{ 0x5e515be6, "ktime_get_ts64" },
	{ 0x75caf431, "usbip_start_eh" },
	{ 0x8a331d2b, "param_ops_uint" },
	{ 0x184a7893, "usb_free_urb" },
	{ 0xb077ec5, "usbip_pack_pdu" },
	{ 0x9f49ab55, "usb_alloc_urb" },
	{ 0xda3400b3, "platform_device_put" },
};

MODULE_INFO(depends, "usbip-core,udc-core");


MODULE_INFO(srcversion, "11AFC1F4135F0A5E9EBFA4E");
