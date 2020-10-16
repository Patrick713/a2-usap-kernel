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
	{ 0xf4610713, "kmalloc_caches" },
	{ 0x931f440c, "iio_channel_release_all" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0x70c78431, "iio_buffer_init" },
	{ 0x2688ec10, "bitmap_zalloc" },
	{ 0xc9cf7088, "iio_update_buffers" },
	{ 0xebaa9dc8, "kmem_cache_alloc_trace" },
	{ 0x73814087, "iio_channel_get_all" },
	{ 0xca21ebd3, "bitmap_free" },
	{ 0x37a0cba, "kfree" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0x8b58af08, "iio_buffer_put" },
};

MODULE_INFO(depends, "industrialio");


MODULE_INFO(srcversion, "0B50BA2F297191C8B3DFC1D");
