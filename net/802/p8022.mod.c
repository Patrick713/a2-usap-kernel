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
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0xc1e58a5f, "refcount_dec_and_test_checked" },
	{ 0xebaa9dc8, "kmem_cache_alloc_trace" },
	{ 0x406af182, "llc_sap_open" },
	{ 0x37a0cba, "kfree" },
	{ 0xf8092e1c, "llc_sap_close" },
	{ 0x6945bf28, "llc_build_and_send_ui_pkt" },
};

MODULE_INFO(depends, "llc");


MODULE_INFO(srcversion, "D2B2B9158867C779612F86E");
