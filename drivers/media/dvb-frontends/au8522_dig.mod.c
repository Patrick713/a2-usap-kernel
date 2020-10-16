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
	{ 0x52e79ddd, "au8522_release_state" },
	{ 0xf9a482f9, "msleep" },
	{ 0x9a152689, "param_ops_int" },
	{ 0xcf31130f, "au8522_led_ctrl" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0x595a5404, "au8522_writereg" },
	{ 0x50e6d28, "au8522_readreg" },
	{ 0xc5850110, "printk" },
	{ 0x91888366, "au8522_i2c_gate_ctrl" },
	{ 0x14970635, "au8522_sleep" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x398e7c27, "au8522_analog_i2c_gate_ctrl" },
	{ 0x201a179c, "au8522_get_state" },
	{ 0x9d669763, "memcpy" },
	{ 0xb35a37f8, "au8522_init" },
	{ 0x8f678b07, "__stack_chk_guard" },
};

MODULE_INFO(depends, "au8522_common");


MODULE_INFO(srcversion, "0C0FFE37ED9467EA0EDF7FF");
