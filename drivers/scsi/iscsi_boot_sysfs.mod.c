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
	{ 0x22f8c1ca, "kobject_put" },
	{ 0x1e6ff418, "kset_create_and_add" },
	{ 0xf4610713, "kmalloc_caches" },
	{ 0x1bdb8ad6, "kobject_uevent" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0xa4040d67, "sysfs_remove_group" },
	{ 0xfb384d37, "kasprintf" },
	{ 0xca66d0d4, "firmware_kobj" },
	{ 0xf63fc023, "sysfs_create_group" },
	{ 0x93a6913e, "kobject_init_and_add" },
	{ 0xc6cbbc89, "capable" },
	{ 0xebaa9dc8, "kmem_cache_alloc_trace" },
	{ 0x937cd95e, "kset_unregister" },
	{ 0x37a0cba, "kfree" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "C20997ECCE1CF436DF99F29");
