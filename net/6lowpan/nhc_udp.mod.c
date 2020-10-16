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
	{ 0x2d5c17bf, "lowpan_nhc_del" },
	{ 0xef92a09b, "lowpan_nhc_add" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xf68b0045, "skb_push" },
	{ 0x3bdc1db7, "__pskb_pull_tail" },
	{ 0xa748a031, "pskb_expand_head" },
	{ 0x28f7fb79, "skb_pull" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

MODULE_INFO(depends, "6lowpan");


MODULE_INFO(srcversion, "F8A517649AA6070920BAA3F");
