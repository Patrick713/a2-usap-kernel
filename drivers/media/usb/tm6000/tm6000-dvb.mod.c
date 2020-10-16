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
	{ 0xc6cb3238, "tm6000_unregister_extension" },
	{ 0x443c5427, "tm6000_register_extension" },
	{ 0x6edec821, "usb_clear_halt" },
	{ 0x2d6fcc06, "__kmalloc" },
	{ 0x9f49ab55, "usb_alloc_urb" },
	{ 0xeddada01, "tm6000_init_digital_mode" },
	{ 0x526c3a6c, "jiffies" },
	{ 0x6d6880, "dvb_dmx_swfilter" },
	{ 0x305d8a65, "usb_submit_urb" },
	{ 0x89b611dd, "tm6000_debug" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xa24f23d8, "__request_module" },
	{ 0x9345d57b, "dvb_dmxdev_init" },
	{ 0x4be5c646, "dvb_dmx_init" },
	{ 0xdff8e89d, "tm6000_tuner_callback" },
	{ 0x6e9dd606, "__symbol_put" },
	{ 0x88634ea0, "dvb_register_frontend" },
	{ 0x2309a6d6, "tm6000_xc5000_callback" },
	{ 0x796bc8b2, "dvb_register_adapter" },
	{ 0x868784cb, "__symbol_get" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0xebaa9dc8, "kmem_cache_alloc_trace" },
	{ 0xf4610713, "kmalloc_caches" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xffa8bc3b, "dvb_unregister_adapter" },
	{ 0x7b334d3c, "dvb_dmx_release" },
	{ 0x1802e58c, "dvb_dmxdev_release" },
	{ 0xcf76bcd2, "dvb_frontend_detach" },
	{ 0x5e2113db, "dvb_unregister_frontend" },
	{ 0xde8d355a, "usb_unlink_urb" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0x184a7893, "usb_free_urb" },
	{ 0x37a0cba, "kfree" },
	{ 0xf88db2a2, "usb_kill_urb" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0xc5850110, "printk" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

MODULE_INFO(depends, "tm6000,dvb-core");


MODULE_INFO(srcversion, "75EF8A5C8E9FA70385D02BD");
