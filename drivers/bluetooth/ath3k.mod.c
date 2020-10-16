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
	{ 0x7a8b7baa, "usb_register_driver" },
	{ 0x316b0a97, "usb_match_id" },
	{ 0x8b6486ce, "release_firmware" },
	{ 0x836b5cfc, "request_firmware" },
	{ 0xc358aaf8, "snprintf" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x7b8c32f1, "bt_err" },
	{ 0xf9a45858, "usb_bulk_msg" },
	{ 0x12a38747, "usleep_range" },
	{ 0x9d669763, "memcpy" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x37a0cba, "kfree" },
	{ 0x78c6bf66, "usb_control_msg" },
	{ 0xebaa9dc8, "kmem_cache_alloc_trace" },
	{ 0xf4610713, "kmalloc_caches" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

MODULE_INFO(depends, "bluetooth");

MODULE_ALIAS("usb:v0CF3p3000d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0489pE027d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0489pE03Dd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04F2pAFF1d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0930p0215d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0CF3p3002d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0CF3pE019d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13D3p3304d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v03F0p311Dd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0489pE04Dd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0489pE04Ed*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0489pE057d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0489pE056d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0489pE05Fd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0489pE076d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0489pE078d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0489pE095d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04C5p1330d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04CAp3004d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04CAp3005d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04CAp3006d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04CAp3007d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04CAp3008d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04CAp300Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04CAp300Dd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04CAp300Fd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04CAp3010d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04CAp3014d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04CAp3018d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0930p0219d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0930p021Cd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0930p0220d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0930p0227d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0B05p17D0d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0CF3p0036d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0CF3p3004d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0CF3p3008d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0CF3p311Dd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0CF3p311Ed*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0CF3p311Fd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0CF3p3121d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0CF3p817Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0CF3p817Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0CF3pE003d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0CF3pE004d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0CF3pE005d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0CF3pE006d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13D3p3362d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13D3p3375d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13D3p3393d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13D3p3395d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13D3p3402d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13D3p3408d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13D3p3423d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13D3p3432d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13D3p3472d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13D3p3474d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13D3p3487d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13D3p3490d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0489pE02Cd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0489pE036d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0489pE03Cd*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "76A3AF6F30098E6C760BCBB");
