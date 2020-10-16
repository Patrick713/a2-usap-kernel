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
	{ 0x183c8383, "usb_deregister" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x7a8b7baa, "usb_register_driver" },
	{ 0xdf9208c0, "alloc_workqueue" },
	{ 0xf65110e8, "_dev_warn" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xa7070b5f, "scsi_add_host_with_dma" },
	{ 0x5bbe49f4, "__init_waitqueue_head" },
	{ 0x5f754e5a, "memset" },
	{ 0x668320b7, "scsi_host_alloc" },
	{ 0x3cc3e7ca, "usb_stor_adjust_quirks" },
	{ 0xde8d355a, "usb_unlink_urb" },
	{ 0xac4ab4ed, "sdev_prefix_printk" },
	{ 0x1bc3edc2, "usb_stor_sense_invalidCDB" },
	{ 0xb2d48a2e, "queue_work_on" },
	{ 0x9d669763, "memcpy" },
	{ 0x5ed90adc, "int_to_scsilun" },
	{ 0x2d6fcc06, "__kmalloc" },
	{ 0xaf3c6135, "usb_unanchor_urb" },
	{ 0xebaa9dc8, "kmem_cache_alloc_trace" },
	{ 0xf4610713, "kmalloc_caches" },
	{ 0x305d8a65, "usb_submit_urb" },
	{ 0x7609cb29, "usb_anchor_urb" },
	{ 0x9f49ab55, "usb_alloc_urb" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0x86d3d8f5, "usb_lock_device_for_reset" },
	{ 0x4b723b28, "scsi_host_put" },
	{ 0xb251377, "scsi_remove_host" },
	{ 0xf47de486, "usb_kill_anchored_urbs" },
	{ 0x4205ad24, "cancel_work_sync" },
	{ 0x2cfde9a2, "warn_slowpath_fmt" },
	{ 0xcace8430, "blk_queue_max_hw_sectors" },
	{ 0x240ecaba, "blk_queue_update_dma_alignment" },
	{ 0xf88db2a2, "usb_kill_urb" },
	{ 0xd28de09a, "usb_get_urb" },
	{ 0x7a88844b, "scsi_change_queue_depth" },
	{ 0x548310ca, "scsi_is_host_device" },
	{ 0x7fa795f, "_dev_err" },
	{ 0x54420dd8, "scsi_scan_host" },
	{ 0x184a7893, "usb_free_urb" },
	{ 0x7a8fd30a, "scsi_print_command" },
	{ 0x5ddb648c, "scmd_printk" },
	{ 0x3fc18f8d, "scsi_block_requests" },
	{ 0x3c72724e, "usb_wait_anchor_empty_timeout" },
	{ 0x92b57248, "flush_work" },
	{ 0x526c3a6c, "jiffies" },
	{ 0xe1eeef9c, "scsi_unblock_requests" },
	{ 0x39a12ca7, "_raw_spin_unlock_irqrestore" },
	{ 0xca9fc251, "scsi_report_bus_reset" },
	{ 0x5f849a69, "_raw_spin_lock_irqsave" },
	{ 0x56a78f1, "dev_printk" },
	{ 0xaa343155, "usb_alloc_streams" },
	{ 0xaebeda32, "usb_reset_device" },
	{ 0x6b60a022, "usb_set_interface" },
	{ 0x15af7f4, "system_state" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x74b527d8, "usb_free_streams" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("usb:v054Cp087Dd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v059Fp105Fd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0984p0301d0128dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BC2p331Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13FDp3940d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v152Dp0539d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v152Dp0567d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v152Dp0578d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v154BpF00Dd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2109p0711d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2537p1068d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v357Dp7788d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v4971p1012d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v4971p8017d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v4971p8024d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v*p*d*dc*dsc*dp*ic08isc06ip50in*");
MODULE_ALIAS("usb:v*p*d*dc*dsc*dp*ic08isc06ip62in*");

MODULE_INFO(srcversion, "772E35D05A66EDC659368D2");
