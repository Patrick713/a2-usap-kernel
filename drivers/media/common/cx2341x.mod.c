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
	{ 0x978ca35c, "v4l2_ctrl_cluster" },
	{ 0x9a152689, "param_ops_int" },
	{ 0x78f51124, "v4l2_ctrl_handler_free" },
	{ 0xefe04e95, "v4l2_ctrl_g_ctrl" },
	{ 0x6f19da99, "v4l2_ctrl_new_std" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0x22615593, "v4l2_ctrl_activate" },
	{ 0xeea0399, "strscpy" },
	{ 0x315de2cf, "v4l2_ctrl_get_menu" },
	{ 0x3fa86437, "v4l2_ctrl_new_std_menu" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0x5f754e5a, "memset" },
	{ 0xc5850110, "printk" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0xc9e6816, "v4l2_ctrl_new_custom" },
	{ 0x496c0885, "__v4l2_ctrl_grab" },
	{ 0x2196324, "__aeabi_idiv" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xe109a68, "v4l2_ctrl_handler_setup" },
	{ 0x89e3897d, "v4l2_ctrl_query_fill" },
	{ 0x5809c1c4, "v4l2_ctrl_handler_init_class" },
	{ 0x8f678b07, "__stack_chk_guard" },
};

MODULE_INFO(depends, "videodev");


MODULE_INFO(srcversion, "B1966984D50908152D3F5B5");
