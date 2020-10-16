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
	{ 0xf839637, "rt_mutex_lock" },
	{ 0xde45aa0d, "i2c_transfer" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0xe331ef92, "i2c_add_adapter" },
	{ 0x2772ec97, "__i2c_smbus_xfer" },
	{ 0x5028fca3, "rt_mutex_trylock" },
	{ 0x937ded18, "rt_mutex_unlock" },
	{ 0x6f8a0fde, "sysfs_remove_link" },
	{ 0x7fa795f, "_dev_err" },
	{ 0x26b8796a, "of_get_child_by_name" },
	{ 0xfecf4d23, "i2c_adapter_type" },
	{ 0x9cb0f84b, "sysfs_create_link" },
	{ 0x75685c7c, "i2c_del_adapter" },
	{ 0x3eabc38c, "_dev_info" },
	{ 0xcb3e7453, "i2c_smbus_xfer" },
	{ 0x69fb96f7, "i2c_add_numbered_adapter" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xd3039845, "of_get_next_child" },
	{ 0xebaa9dc8, "kmem_cache_alloc_trace" },
	{ 0x2cfde9a2, "warn_slowpath_fmt" },
	{ 0xcaabcedb, "of_node_get" },
	{ 0x37a0cba, "kfree" },
	{ 0x1c062251, "__i2c_transfer" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xc358aaf8, "snprintf" },
	{ 0xfc60f402, "of_property_read_variable_u32_array" },
	{ 0xfeb02014, "of_node_put" },
	{ 0xe544be36, "devm_kmalloc" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "7BED06BCD5A3F14A81CCD58");
