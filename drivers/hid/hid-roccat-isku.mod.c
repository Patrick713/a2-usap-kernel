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
	{ 0x2f357d74, "hid_unregister_driver" },
	{ 0x254652b1, "class_destroy" },
	{ 0x84ead130, "__hid_register_driver" },
	{ 0xe6d85203, "__class_create" },
	{ 0xc358aaf8, "snprintf" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0x47e97424, "roccat_common2_send_with_status" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0x668b595, "_kstrtoul" },
	{ 0x5c66f448, "roccat_connect" },
	{ 0x7fa795f, "_dev_err" },
	{ 0xebe5636d, "roccat_common2_receive" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0xebaa9dc8, "kmem_cache_alloc_trace" },
	{ 0xf4610713, "kmalloc_caches" },
	{ 0xf4e9c026, "hid_hw_start" },
	{ 0xa219a88d, "hid_open_report" },
	{ 0x2f622ea1, "roccat_disconnect" },
	{ 0x4bbddbca, "hid_hw_stop" },
	{ 0x37a0cba, "kfree" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x3e4427c8, "roccat_report_event" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

MODULE_INFO(depends, "hid-roccat-common,hid-roccat");

MODULE_ALIAS("hid:b0003g*v00001E7Dp0000319C");
MODULE_ALIAS("hid:b0003g*v00001E7Dp00003264");

MODULE_INFO(srcversion, "3673149B307A3E38D98C475");
