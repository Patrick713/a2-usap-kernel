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
	{ 0x2680385, "kmem_cache_destroy" },
	{ 0xf4610713, "kmalloc_caches" },
	{ 0x18fad990, "usbip_event_happened" },
	{ 0x2d6fcc06, "__kmalloc" },
	{ 0xfab5b0d0, "sgl_free" },
	{ 0xd02753dc, "usbip_header_correct_endian" },
	{ 0x11201734, "kernel_sendmsg" },
	{ 0x9b182b2, "sockfd_lookup" },
	{ 0x76d11765, "mem_map" },
	{ 0x9985b2a0, "usb_set_configuration" },
	{ 0x16c2456b, "usbip_alloc_iso_desc_pdu" },
	{ 0xf88db2a2, "usb_kill_urb" },
	{ 0xb1b939e, "kmemdup" },
	{ 0xfffa3100, "sg_next" },
	{ 0x987c11c7, "__pv_phys_pfn_offset" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0xfc5541cc, "usb_hub_claim_port" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xde8d355a, "usb_unlink_urb" },
	{ 0xd697e69a, "trace_hardirqs_on" },
	{ 0xdd34010a, "kthread_create_on_node" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x52598bf0, "usbip_event_add" },
	{ 0x5bbe49f4, "__init_waitqueue_head" },
	{ 0xe1ea0586, "usbip_dump_header" },
	{ 0x5f754e5a, "memset" },
	{ 0xbf7fcf0b, "usbip_in_eh" },
	{ 0x86d3d8f5, "usb_lock_device_for_reset" },
	{ 0x39a12ca7, "_raw_spin_unlock_irqrestore" },
	{ 0xc5850110, "printk" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0x7bfbe88e, "kthread_stop" },
	{ 0x6b60a022, "usb_set_interface" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x84b183ae, "strncmp" },
	{ 0x73e20c1c, "strlcpy" },
	{ 0xee94dd24, "usb_register_device_driver" },
	{ 0xbb9f1908, "kmem_cache_free" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0x101cdb2, "kernel_sock_shutdown" },
	{ 0xd7865ed0, "device_attach" },
	{ 0x98ab0be0, "usbip_stop_eh" },
	{ 0xe9be74a7, "dev_attr_usbip_debug" },
	{ 0xc1e58a5f, "refcount_dec_and_test_checked" },
	{ 0x7fa795f, "_dev_err" },
	{ 0xa92173df, "fput" },
	{ 0xfbc0cca9, "usbip_recv_iso" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x3eabc38c, "_dev_info" },
	{ 0x305d8a65, "usb_submit_urb" },
	{ 0x4007496c, "kmem_cache_alloc" },
	{ 0x253d3306, "usbip_dump_urb" },
	{ 0xd6cf68f9, "usb_get_dev" },
	{ 0xe86c86a6, "sgl_alloc" },
	{ 0xd9ce8f0c, "strnlen" },
	{ 0x2767b9ca, "driver_create_file" },
	{ 0xd7f72d8c, "usbip_recv" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xaebeda32, "usb_reset_device" },
	{ 0x822bd109, "usb_put_dev" },
	{ 0x1000e51, "schedule" },
	{ 0x6edec821, "usb_clear_halt" },
	{ 0x2da81bff, "_raw_spin_lock_irq" },
	{ 0xb35d51ab, "wake_up_process" },
	{ 0xa9d56d52, "usb_deregister_device_driver" },
	{ 0xebaa9dc8, "kmem_cache_alloc_trace" },
	{ 0xdb9ca3c5, "_raw_spin_lock" },
	{ 0x5f849a69, "_raw_spin_lock_irqsave" },
	{ 0x4c0e8130, "kmem_cache_create" },
	{ 0x3dcf1ffa, "__wake_up" },
	{ 0xb3f7646e, "kthread_should_stop" },
	{ 0x647af474, "prepare_to_wait_event" },
	{ 0x37a0cba, "kfree" },
	{ 0xa84de94e, "usbip_recv_xbuff" },
	{ 0x4034dd87, "usb_hub_release_port" },
	{ 0xd7c104ee, "__put_task_struct" },
	{ 0x78b72f44, "usbip_debug_flag" },
	{ 0x49970de8, "finish_wait" },
	{ 0xaf52ddc6, "driver_remove_file" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xc358aaf8, "snprintf" },
	{ 0x1ee8d6d4, "refcount_inc_checked" },
	{ 0x75caf431, "usbip_start_eh" },
	{ 0x184a7893, "usb_free_urb" },
	{ 0xb077ec5, "usbip_pack_pdu" },
	{ 0x9f49ab55, "usb_alloc_urb" },
};

MODULE_INFO(depends, "usbip-core");


MODULE_INFO(srcversion, "A706755C3797B38D095777B");
