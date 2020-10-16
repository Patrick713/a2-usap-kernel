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
	{ 0xe90193b4, "w1_reset_select_slave" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0xb6fa5281, "platform_device_alloc" },
	{ 0xcef15c38, "platform_device_add" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0xf11cd95c, "platform_device_unregister" },
	{ 0x53368e08, "w1_write_block" },
	{ 0xacccdef1, "w1_write_8" },
	{ 0x163de26f, "w1_read_block" },
	{ 0xd7b783a3, "w1_register_family" },
	{ 0xda3400b3, "platform_device_put" },
	{ 0xbbc4b581, "w1_unregister_family" },
};

MODULE_INFO(depends, "wire");


MODULE_INFO(srcversion, "B8D797D07D4ABF693E10E12");
