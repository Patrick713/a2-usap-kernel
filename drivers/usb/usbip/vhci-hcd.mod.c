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
	{ 0x30917aa7, "usb_create_shared_hcd" },
	{ 0xd02753dc, "usbip_header_correct_endian" },
	{ 0x11201734, "kernel_sendmsg" },
	{ 0x9b182b2, "sockfd_lookup" },
	{ 0x266a3636, "usb_add_hcd" },
	{ 0x76d11765, "mem_map" },
	{ 0x349cba85, "strchr" },
	{ 0x9412cf18, "usb_remove_hcd" },
	{ 0x56b3271e, "usb_create_hcd" },
	{ 0x63235b8f, "usb_hcd_poll_rh_status" },
	{ 0x16c2456b, "usbip_alloc_iso_desc_pdu" },
	{ 0xfffa3100, "sg_next" },
	{ 0x987c11c7, "__pv_phys_pfn_offset" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0x1cb9d752, "usb_hcd_giveback_urb" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xa4040d67, "sysfs_remove_group" },
	{ 0xdd34010a, "kthread_create_on_node" },
	{ 0x610b1492, "__platform_driver_register" },
	{ 0x526c3a6c, "jiffies" },
	{ 0xb15dea52, "usb_put_hcd" },
	{ 0x52598bf0, "usbip_event_add" },
	{ 0x5bbe49f4, "__init_waitqueue_head" },
	{ 0x5d5af80e, "usb_hcd_is_primary_hcd" },
	{ 0xe1ea0586, "usbip_dump_header" },
	{ 0x5f754e5a, "memset" },
	{ 0x77ae495d, "usb_speed_string" },
	{ 0xd6c55d36, "usb_hcd_link_urb_to_ep" },
	{ 0x39a12ca7, "_raw_spin_unlock_irqrestore" },
	{ 0xc5850110, "printk" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0x7bfbe88e, "kthread_stop" },
	{ 0xf63fc023, "sysfs_create_group" },
	{ 0xaa19e4aa, "_kstrtol" },
	{ 0xf130cb40, "platform_device_del" },
	{ 0xb6fa5281, "platform_device_alloc" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0xcef15c38, "platform_device_add" },
	{ 0x101cdb2, "kernel_sock_shutdown" },
	{ 0x98ab0be0, "usbip_stop_eh" },
	{ 0xe9be74a7, "dev_attr_usbip_debug" },
	{ 0xf11cd95c, "platform_device_unregister" },
	{ 0xc1e58a5f, "refcount_dec_and_test_checked" },
	{ 0x8c8569cb, "kstrtoint" },
	{ 0x6f8a0fde, "sysfs_remove_link" },
	{ 0x7fa795f, "_dev_err" },
	{ 0xa92173df, "fput" },
	{ 0xfbc0cca9, "usbip_recv_iso" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x1c4a6cf0, "usbip_pad_iso" },
	{ 0xef17a5a0, "usb_hcd_check_unlink_urb" },
	{ 0x3eabc38c, "_dev_info" },
	{ 0x253d3306, "usbip_dump_urb" },
	{ 0xd6cf68f9, "usb_get_dev" },
	{ 0xd7f72d8c, "usbip_recv" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x822bd109, "usb_put_dev" },
	{ 0x1000e51, "schedule" },
	{ 0xee43fd9b, "___ratelimit" },
	{ 0xb35d51ab, "wake_up_process" },
	{ 0xaefa3ecd, "platform_bus" },
	{ 0x6572df43, "platform_device_add_data" },
	{ 0xebaa9dc8, "kmem_cache_alloc_trace" },
	{ 0xdb9ca3c5, "_raw_spin_lock" },
	{ 0x5f849a69, "_raw_spin_lock_irqsave" },
	{ 0x3dcf1ffa, "__wake_up" },
	{ 0xb3f7646e, "kthread_should_stop" },
	{ 0x647af474, "prepare_to_wait_event" },
	{ 0x19a304ba, "usb_disabled" },
	{ 0x37a0cba, "kfree" },
	{ 0xa84de94e, "usbip_recv_xbuff" },
	{ 0xd7c104ee, "__put_task_struct" },
	{ 0x78b72f44, "usbip_debug_flag" },
	{ 0x49970de8, "finish_wait" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0xc358aaf8, "snprintf" },
	{ 0x8ad83553, "platform_driver_unregister" },
	{ 0x1ee8d6d4, "refcount_inc_checked" },
	{ 0x6bdbc0c6, "usb_hcd_unlink_urb_from_ep" },
	{ 0x49ebacbd, "_clear_bit" },
	{ 0x607d38e8, "usb_hcd_resume_root_hub" },
	{ 0x75caf431, "usbip_start_eh" },
	{ 0xb077ec5, "usbip_pack_pdu" },
	{ 0xda3400b3, "platform_device_put" },
};

MODULE_INFO(depends, "usbip-core");


MODULE_INFO(srcversion, "BB7D416D2CA2313C409FEF1");
