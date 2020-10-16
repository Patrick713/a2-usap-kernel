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
	{ 0x53d1d528, "dibusb_read_eeprom_byte" },
	{ 0x9a152689, "param_ops_int" },
	{ 0xa23e0a1a, "dvb_usb_device_exit" },
	{ 0x9284512a, "dvb_usb_device_init" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0x5ec4c066, "dibusb_pid_filter" },
	{ 0xcc854c32, "param_ops_short" },
	{ 0x183c8383, "usb_deregister" },
	{ 0x945e80c5, "dibusb2_0_power_ctrl" },
	{ 0x192eaac5, "dibusb_dib3000mc_frontend_attach" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xebaa9dc8, "kmem_cache_alloc_trace" },
	{ 0x68cee0e3, "dvb_usb_generic_rw" },
	{ 0x37a0cba, "kfree" },
	{ 0x36138fcf, "param_array_ops" },
	{ 0xcfb8cd7e, "dibusb_dib3000mc_tuner_attach" },
	{ 0x3901ba99, "dibusb2_0_streaming_ctrl" },
	{ 0x7a8b7baa, "usb_register_driver" },
	{ 0x3280f91, "dibusb_i2c_algo" },
	{ 0x2a223f0d, "dibusb_pid_filter_ctrl" },
	{ 0x8f678b07, "__stack_chk_guard" },
};

MODULE_INFO(depends, "dvb-usb-dibusb-common,dvb-usb,dvb-usb-dibusb-mc-common");

MODULE_ALIAS("usb:v2040p9300d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040p9301d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "13B7789F62816C96B9ED8B7");
