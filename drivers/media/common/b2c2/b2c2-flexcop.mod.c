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
	{ 0x2d6fcc06, "__kmalloc" },
	{ 0xf9a482f9, "msleep" },
	{ 0x3c062e44, "s5h1420_get_tuner_i2c_adapter" },
	{ 0x9a152689, "param_ops_int" },
	{ 0x4be5c646, "dvb_dmx_init" },
	{ 0xffa8bc3b, "dvb_unregister_adapter" },
	{ 0x2b6f662b, "cx24113_agc_callback" },
	{ 0x88634ea0, "dvb_register_frontend" },
	{ 0x6afa656, "cx24123_get_tuner_i2c_adapter" },
	{ 0x5e2113db, "dvb_unregister_frontend" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0xeea0399, "strscpy" },
	{ 0x70f5a068, "dvb_net_release" },
	{ 0xe331ef92, "i2c_add_adapter" },
	{ 0xcf76bcd2, "dvb_frontend_detach" },
	{ 0xcc854c32, "param_ops_short" },
	{ 0x1802e58c, "dvb_dmxdev_release" },
	{ 0x3375510b, "mutex_lock_interruptible" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0x6d6880, "dvb_dmx_swfilter" },
	{ 0x7686edc0, "dvb_net_init" },
	{ 0x8e865d3c, "arm_delay_ops" },
	{ 0x7b334d3c, "dvb_dmx_release" },
	{ 0x868784cb, "__symbol_get" },
	{ 0x75685c7c, "i2c_del_adapter" },
	{ 0xdafc31c5, "dvb_dmx_swfilter_packets" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x796bc8b2, "dvb_register_adapter" },
	{ 0xebaa9dc8, "kmem_cache_alloc_trace" },
	{ 0x37a0cba, "kfree" },
	{ 0x36138fcf, "param_array_ops" },
	{ 0x836b5cfc, "request_firmware" },
	{ 0x6e9dd606, "__symbol_put" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x9345d57b, "dvb_dmxdev_init" },
};

MODULE_INFO(depends, "s5h1420,dvb-core,cx24113,cx24123");


MODULE_INFO(srcversion, "99DAA093927433C0AB79241");
