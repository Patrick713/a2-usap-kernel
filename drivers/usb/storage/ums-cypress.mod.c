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
	{ 0x12f4b5a7, "usb_stor_post_reset" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0x1bc3edc2, "usb_stor_sense_invalidCDB" },
	{ 0xed81d3ee, "usb_stor_disconnect" },
	{ 0x43c152e9, "scsi_eh_restore_cmnd" },
	{ 0x5f754e5a, "memset" },
	{ 0x183c8383, "usb_deregister" },
	{ 0x71c90087, "memcmp" },
	{ 0x9e7fdde8, "usb_stor_probe2" },
	{ 0xf0cfe09a, "usb_stor_transparent_scsi_command" },
	{ 0x31db386e, "usb_stor_host_template_init" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x66d60ffd, "usb_stor_pre_reset" },
	{ 0x6aa3d6e0, "usb_stor_reset_resume" },
	{ 0xecbc0cf1, "usb_stor_suspend" },
	{ 0x970c8cfb, "usb_stor_probe1" },
	{ 0xd4708ceb, "scsi_eh_prep_cmnd" },
	{ 0x829fa821, "usb_stor_resume" },
	{ 0x7a8b7baa, "usb_register_driver" },
	{ 0x8f678b07, "__stack_chk_guard" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("usb:v04B4p6830d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04B4p6831d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v14CDp6116d0160dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "90EF7C6C3F24254FF4072EF");
