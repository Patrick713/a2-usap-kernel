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
	{ 0x91ae6be7, "xt_unregister_targets" },
	{ 0x343c048e, "xt_register_targets" },
	{ 0xff178f6, "__aeabi_idivmod" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x9b73dda5, "skb_copy_bits" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xc5850110, "printk" },
	{ 0xee43fd9b, "___ratelimit" },
	{ 0xfda9581f, "prandom_u32" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

MODULE_INFO(depends, "x_tables");


MODULE_INFO(srcversion, "B6E251481845B4C697B605F");
