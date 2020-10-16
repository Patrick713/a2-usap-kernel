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
	{ 0xbb46448d, "scsi_set_medium_removal" },
	{ 0xf4610713, "kmalloc_caches" },
	{ 0x40495d8, "blk_queue_rq_timeout" },
	{ 0xf9a482f9, "msleep" },
	{ 0x9a152689, "param_ops_int" },
	{ 0x4eb46688, "cdrom_number_of_slots" },
	{ 0xfe90c4a6, "_find_first_zero_bit_le" },
	{ 0xf64d4d70, "scsi_ioctl_block_when_processing_errors" },
	{ 0x791a4625, "unregister_cdrom" },
	{ 0xf7802486, "__aeabi_uidivmod" },
	{ 0x59d29ee4, "blk_dump_rq_flags" },
	{ 0xfffa3100, "sg_next" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0x5ddb648c, "scmd_printk" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0x53ab3827, "cdrom_open" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x29e4f3b5, "scsi_autopm_get_device" },
	{ 0x43c0c01d, "__alloc_disk_node" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0x5f754e5a, "memset" },
	{ 0xd8a0c864, "check_disk_change" },
	{ 0x2d0cb5f5, "cdrom_release" },
	{ 0x929dcabf, "del_gendisk" },
	{ 0x30a093a7, "__scsi_execute" },
	{ 0x85c6e59a, "driver_unregister" },
	{ 0x84b183ae, "strncmp" },
	{ 0xac4ab4ed, "sdev_prefix_printk" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0x59c97091, "cdrom_get_media_event" },
	{ 0x71a50dbc, "register_blkdev" },
	{ 0xc1e58a5f, "refcount_dec_and_test_checked" },
	{ 0x16f7d3a4, "cdrom_check_events" },
	{ 0xb6936ffe, "_bcd2bin" },
	{ 0xb5a459dc, "unregister_blkdev" },
	{ 0x34572ba, "cdrom_get_last_written" },
	{ 0x41fda1e5, "scsi_device_put" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x816a7c8d, "scsi_ioctl" },
	{ 0x76799abc, "put_disk" },
	{ 0x79df25b9, "scsi_register_driver" },
	{ 0x59786620, "scsi_block_when_processing_errors" },
	{ 0x8f777e5e, "scsi_test_unit_ready" },
	{ 0xfe747a77, "scsi_init_io" },
	{ 0xebaa9dc8, "kmem_cache_alloc_trace" },
	{ 0xdb9ca3c5, "_raw_spin_lock" },
	{ 0x37a0cba, "kfree" },
	{ 0x4e34799e, "cdrom_ioctl" },
	{ 0x6441079c, "blk_pm_runtime_init" },
	{ 0x87aac178, "register_cdrom" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x6e08e459, "device_add_disk" },
	{ 0x1ee8d6d4, "refcount_inc_checked" },
	{ 0xef5f0082, "scsi_device_get" },
	{ 0x19fad624, "scsi_autopm_put_device" },
	{ 0x49ebacbd, "_clear_bit" },
	{ 0xff97825e, "blk_queue_logical_block_size" },
	{ 0xcdf191c6, "scsi_mode_sense" },
};

MODULE_INFO(depends, "cdrom");


MODULE_INFO(srcversion, "942D4B22F352236F11A0A76");
