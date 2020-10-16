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
	{ 0x9a152689, "param_ops_int" },
	{ 0x36138fcf, "param_array_ops" },
	{ 0xcc854c32, "param_ops_short" },
	{ 0x3de2461c, "em28xx_unregister_extension" },
	{ 0x8b801dbe, "em28xx_register_extension" },
	{ 0x6d6880, "dvb_dmx_swfilter" },
	{ 0x1ee8d6d4, "refcount_inc_checked" },
	{ 0x2eab75ee, "dvb_create_media_graph" },
	{ 0x7686edc0, "dvb_net_init" },
	{ 0x9345d57b, "dvb_dmxdev_init" },
	{ 0x4be5c646, "dvb_dmx_init" },
	{ 0x88634ea0, "dvb_register_frontend" },
	{ 0xf65110e8, "_dev_warn" },
	{ 0x796bc8b2, "dvb_register_adapter" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0x7fc8652c, "em28xx_tuner_callback" },
	{ 0x901b96f7, "dvb_module_probe" },
	{ 0xbf9e8037, "em28xx_alloc_urbs" },
	{ 0xebaa9dc8, "kmem_cache_alloc_trace" },
	{ 0xf4610713, "kmalloc_caches" },
	{ 0xc5850110, "printk" },
	{ 0x6e9dd606, "__symbol_put" },
	{ 0xa24f23d8, "__request_module" },
	{ 0x868784cb, "__symbol_get" },
	{ 0xc77baeaa, "em28xx_setup_xc3028" },
	{ 0x721f7cc7, "em28xx_free_device" },
	{ 0xc1e58a5f, "refcount_dec_and_test_checked" },
	{ 0x37a0cba, "kfree" },
	{ 0xe4c0dd5, "dvb_module_release" },
	{ 0xffa8bc3b, "dvb_unregister_adapter" },
	{ 0xcf76bcd2, "dvb_frontend_detach" },
	{ 0x5e2113db, "dvb_unregister_frontend" },
	{ 0x7b334d3c, "dvb_dmx_release" },
	{ 0x1802e58c, "dvb_dmxdev_release" },
	{ 0x70f5a068, "dvb_net_release" },
	{ 0x150e7ae5, "em28xx_uninit_usb_xfer" },
	{ 0x1da70cfd, "dvb_frontend_suspend" },
	{ 0xb5e7d036, "dvb_frontend_resume" },
	{ 0x3eabc38c, "_dev_info" },
	{ 0x6b60a022, "usb_set_interface" },
	{ 0xa930a60d, "em28xx_init_usb_xfer" },
	{ 0x56a78f1, "dev_printk" },
	{ 0x6d1f81a4, "em28xx_stop_urbs" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0x5a2c17c5, "em28xx_write_reg_bits" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xf9a482f9, "msleep" },
	{ 0xcb203516, "i2c_transfer_buffer_flags" },
	{ 0xeaf60704, "em28xx_write_reg" },
	{ 0x7bb6c2ce, "em28xx_gpio_set" },
	{ 0x5f754e5a, "memset" },
	{ 0x9d669763, "memcpy" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x12a38747, "usleep_range" },
	{ 0xf0ef52e8, "down" },
	{ 0x581cde4e, "up" },
	{ 0x7fa795f, "_dev_err" },
	{ 0xfe990052, "gpio_free" },
	{ 0x403f9529, "gpio_request_one" },
	{ 0x1450358d, "em28xx_set_mode" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

MODULE_INFO(depends, "em28xx,dvb-core");


MODULE_INFO(srcversion, "F3DF3D47242A31857C962F0");
