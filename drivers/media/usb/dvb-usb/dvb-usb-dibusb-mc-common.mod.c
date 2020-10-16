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
	{ 0xf9a482f9, "msleep" },
	{ 0x53d1d528, "dibusb_read_eeprom_byte" },
	{ 0x64db8d9e, "dib3000mc_pid_parse" },
	{ 0x87277cd0, "dib3000mc_pid_control" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0xa4783b78, "dib3000mc_get_tuner_i2c_master" },
	{ 0xc5850110, "printk" },
	{ 0x26ec50eb, "dib3000mc_set_config" },
	{ 0x868784cb, "__symbol_get" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x6e9dd606, "__symbol_put" },
	{ 0x8f678b07, "__stack_chk_guard" },
};

MODULE_INFO(depends, "dvb-usb-dibusb-common,dib3000mc");


MODULE_INFO(srcversion, "A0688FD46F2736D07A46D76");
