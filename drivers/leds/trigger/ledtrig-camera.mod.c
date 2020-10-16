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
	{ 0xaf215b9b, "led_trigger_event" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0xbb614ade, "led_trigger_unregister_simple" },
	{ 0xf7296f89, "led_trigger_register_simple" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "6E60B514F68428C61AC0A92");
