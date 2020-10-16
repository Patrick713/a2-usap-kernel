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
	{ 0xe93e49c3, "devres_free" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0x86ff4a7e, "iio_kfifo_allocate" },
	{ 0x7b113694, "devres_alloc_node" },
	{ 0xa4e41a11, "devm_iio_device_match" },
	{ 0x771e6f3e, "iio_triggered_buffer_postenable" },
	{ 0xf7d90df8, "iio_device_attach_buffer" },
	{ 0xd178ddc, "devres_release" },
	{ 0x478ae3e8, "iio_triggered_buffer_predisable" },
	{ 0x2438dd82, "iio_kfifo_free" },
	{ 0x915b35eb, "devres_add" },
	{ 0x2cfde9a2, "warn_slowpath_fmt" },
	{ 0xba8d8fa9, "iio_alloc_pollfunc" },
	{ 0x59cf2551, "iio_dealloc_pollfunc" },
};

MODULE_INFO(depends, "kfifo_buf,industrialio");


MODULE_INFO(srcversion, "22C108E890DC32A58054AC2");
