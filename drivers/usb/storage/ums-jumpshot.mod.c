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
	{ 0x2d6fcc06, "__kmalloc" },
	{ 0xf9a482f9, "msleep" },
	{ 0xec190a68, "usb_stor_set_xfer_buf" },
	{ 0xff226b04, "usb_stor_bulk_transfer_buf" },
	{ 0x1b4cdb60, "usb_stor_access_xfer_buf" },
	{ 0x12f4b5a7, "usb_stor_post_reset" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0xed81d3ee, "usb_stor_disconnect" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0x183c8383, "usb_deregister" },
	{ 0x9e7fdde8, "usb_stor_probe2" },
	{ 0x7d363fa0, "fill_inquiry_response" },
	{ 0x31db386e, "usb_stor_host_template_init" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x66d60ffd, "usb_stor_pre_reset" },
	{ 0x6aa3d6e0, "usb_stor_reset_resume" },
	{ 0xb0146f3, "usb_stor_ctrl_transfer" },
	{ 0xecbc0cf1, "usb_stor_suspend" },
	{ 0x970c8cfb, "usb_stor_probe1" },
	{ 0xebaa9dc8, "kmem_cache_alloc_trace" },
	{ 0x37a0cba, "kfree" },
	{ 0x829fa821, "usb_stor_resume" },
	{ 0x7a8b7baa, "usb_register_driver" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x8ec7fb30, "usb_stor_Bulk_reset" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("usb:v05DCp0001d000[0-1]dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "CEFC099B0B8485A4334C9CD");
