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
	{ 0xa24f23d8, "__request_module" },
	{ 0xf4610713, "kmalloc_caches" },
	{ 0x9a152689, "param_ops_int" },
	{ 0x4be5c646, "dvb_dmx_init" },
	{ 0xffa8bc3b, "dvb_unregister_adapter" },
	{ 0x88634ea0, "dvb_register_frontend" },
	{ 0xf88db2a2, "usb_kill_urb" },
	{ 0x5770f36c, "usb_deregister_dev" },
	{ 0x5e2113db, "dvb_unregister_frontend" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0xcf76bcd2, "dvb_frontend_detach" },
	{ 0x5f754e5a, "memset" },
	{ 0xcc854c32, "param_ops_short" },
	{ 0x11089ac7, "_ctype" },
	{ 0x1802e58c, "dvb_dmxdev_release" },
	{ 0x183c8383, "usb_deregister" },
	{ 0x3375510b, "mutex_lock_interruptible" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0x6d6880, "dvb_dmx_swfilter" },
	{ 0x586d5091, "usb_register_dev" },
	{ 0x78c6bf66, "usb_control_msg" },
	{ 0xc1e58a5f, "refcount_dec_and_test_checked" },
	{ 0x8e865d3c, "arm_delay_ops" },
	{ 0xf412120a, "usb_free_coherent" },
	{ 0x7fa795f, "_dev_err" },
	{ 0x7b334d3c, "dvb_dmx_release" },
	{ 0x868784cb, "__symbol_get" },
	{ 0x305d8a65, "usb_submit_urb" },
	{ 0xd6cf68f9, "usb_get_dev" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xf9a45858, "usb_bulk_msg" },
	{ 0x822bd109, "usb_put_dev" },
	{ 0x69e1d120, "usb_find_interface" },
	{ 0x796bc8b2, "dvb_register_adapter" },
	{ 0xebaa9dc8, "kmem_cache_alloc_trace" },
	{ 0x37a0cba, "kfree" },
	{ 0x36138fcf, "param_array_ops" },
	{ 0x7a8b7baa, "usb_register_driver" },
	{ 0x836b5cfc, "request_firmware" },
	{ 0x6e9dd606, "__symbol_put" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xc28c6b00, "usb_alloc_coherent" },
	{ 0x1ee8d6d4, "refcount_inc_checked" },
	{ 0x184a7893, "usb_free_urb" },
	{ 0x8b6486ce, "release_firmware" },
	{ 0x9f49ab55, "usb_alloc_urb" },
	{ 0x9345d57b, "dvb_dmxdev_init" },
};

MODULE_INFO(depends, "dvb-core");

MODULE_ALIAS("usb:v1BA6p0001d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2013p0246d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0FD9p002Cd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0B89p0007d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2137p0001d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "55CDD519AC3555F93DB5E23");
