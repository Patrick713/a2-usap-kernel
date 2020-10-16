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
	{ 0x2c161dc3, "cx231xx_unregister_extension" },
	{ 0x5c6d9542, "cx231xx_register_extension" },
	{ 0xf65110e8, "_dev_warn" },
	{ 0xc5850110, "printk" },
	{ 0xa24f23d8, "__request_module" },
	{ 0x7fa795f, "_dev_err" },
	{ 0x6e9dd606, "__symbol_put" },
	{ 0x3eabc38c, "_dev_info" },
	{ 0x2eab75ee, "dvb_create_media_graph" },
	{ 0x7686edc0, "dvb_net_init" },
	{ 0x9345d57b, "dvb_dmxdev_init" },
	{ 0x4be5c646, "dvb_dmx_init" },
	{ 0x88634ea0, "dvb_register_frontend" },
	{ 0x796bc8b2, "dvb_register_adapter" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0x868784cb, "__symbol_get" },
	{ 0x9d669763, "memcpy" },
	{ 0x17ea7c7, "cx231xx_tuner_callback" },
	{ 0x901b96f7, "dvb_module_probe" },
	{ 0xdf61a8d7, "cx231xx_demod_reset" },
	{ 0x54bec137, "cx231xx_get_i2c_adap" },
	{ 0xebaa9dc8, "kmem_cache_alloc_trace" },
	{ 0xf4610713, "kmalloc_caches" },
	{ 0x6d6880, "dvb_dmx_swfilter" },
	{ 0x37a0cba, "kfree" },
	{ 0xe4c0dd5, "dvb_module_release" },
	{ 0xffa8bc3b, "dvb_unregister_adapter" },
	{ 0xcf76bcd2, "dvb_frontend_detach" },
	{ 0x5e2113db, "dvb_unregister_frontend" },
	{ 0x7b334d3c, "dvb_dmx_release" },
	{ 0x1802e58c, "dvb_dmxdev_release" },
	{ 0x70f5a068, "dvb_net_release" },
	{ 0x637f2928, "cx231xx_init_bulk" },
	{ 0xe68216a5, "cx231xx_init_isoc" },
	{ 0xd3f45e33, "cx231xx_set_alt_setting" },
	{ 0x5ad5f6a5, "cx231xx_uninit_isoc" },
	{ 0x7d4adcee, "cx231xx_uninit_bulk" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0x21e3f05d, "cx231xx_set_mode" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

MODULE_INFO(depends, "cx231xx,dvb-core");


MODULE_INFO(srcversion, "65988010C2915E840DF0678");
