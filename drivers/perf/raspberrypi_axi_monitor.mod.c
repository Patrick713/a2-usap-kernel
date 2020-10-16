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
	{ 0x81febe09, "simple_open" },
	{ 0x8ad83553, "platform_driver_unregister" },
	{ 0x610b1492, "__platform_driver_register" },
	{ 0xb35d51ab, "wake_up_process" },
	{ 0x128eb416, "of_property_read_u32_index" },
	{ 0xdd34010a, "kthread_create_on_node" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0x243ce92a, "debugfs_create_u32" },
	{ 0x7c20652d, "debugfs_create_file" },
	{ 0x93b18eee, "debugfs_create_dir" },
	{ 0x6562d506, "devm_ioremap_resource" },
	{ 0x9ec75761, "platform_get_resource" },
	{ 0xbdafad8, "rpi_firmware_get" },
	{ 0x889e7573, "of_parse_phandle" },
	{ 0x37a0cba, "kfree" },
	{ 0x528c709d, "simple_read_from_buffer" },
	{ 0xc358aaf8, "snprintf" },
	{ 0xebaa9dc8, "kmem_cache_alloc_trace" },
	{ 0xf4610713, "kmalloc_caches" },
	{ 0x74c134b9, "__sw_hweight32" },
	{ 0xb3f7646e, "kthread_should_stop" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0xf9a482f9, "msleep" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x7fa795f, "_dev_err" },
	{ 0x588006d2, "rpi_firmware_property" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x35edc130, "debugfs_remove_recursive" },
	{ 0x7bfbe88e, "kthread_stop" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Cbrcm,bcm2835-axiperf");
MODULE_ALIAS("of:N*T*Cbrcm,bcm2835-axiperfC*");

MODULE_INFO(srcversion, "B7A9012E527D6DC2E9FB7D7");
