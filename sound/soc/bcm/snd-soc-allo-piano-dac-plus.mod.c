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
	{ 0x889e7573, "of_parse_phandle" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0x610b1492, "__platform_driver_register" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x9d85156b, "snd_soc_info_enum_double" },
	{ 0xf65110e8, "_dev_warn" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0x3c7ad7ac, "of_find_property" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0x436b7464, "snd_soc_unregister_card" },
	{ 0x7fa795f, "_dev_err" },
	{ 0xee44765a, "snd_soc_info_volsw" },
	{ 0xeea26813, "snd_soc_get_pcm_runtime" },
	{ 0x3eabc38c, "_dev_info" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x2c4bfd80, "snd_soc_component_write" },
	{ 0xebaa9dc8, "kmem_cache_alloc_trace" },
	{ 0x62182082, "devm_gpiod_get_optional" },
	{ 0x37a0cba, "kfree" },
	{ 0x836b5cfc, "request_firmware" },
	{ 0x84b498ef, "gpiod_set_value_cansleep" },
	{ 0xf132b06e, "snd_soc_component_read" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xc358aaf8, "snprintf" },
	{ 0xde0fa257, "snd_soc_limit_volume" },
	{ 0x8ad83553, "platform_driver_unregister" },
	{ 0x7447738e, "snd_soc_register_card" },
	{ 0x8b6486ce, "release_firmware" },
};

MODULE_INFO(depends, "snd-soc-core");

MODULE_ALIAS("of:N*T*Callo,piano-dac-plus");
MODULE_ALIAS("of:N*T*Callo,piano-dac-plusC*");

MODULE_INFO(srcversion, "AC87C99A0C1BC2A0406D99D");
