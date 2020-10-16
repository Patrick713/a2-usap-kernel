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
	{ 0x6091797f, "synchronize_rcu" },
	{ 0xd0e72f0c, "unregister_ip_vs_scheduler" },
	{ 0x4d0598e8, "register_ip_vs_scheduler" },
	{ 0xebaa9dc8, "kmem_cache_alloc_trace" },
	{ 0xf4610713, "kmalloc_caches" },
	{ 0x19f462ab, "kfree_call_rcu" },
	{ 0x1ee8d6d4, "refcount_inc_checked" },
	{ 0xa8223179, "refcount_dec_checked" },
	{ 0xdc5d38f2, "ip_vs_scheduler_err" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

MODULE_INFO(depends, "ip_vs");


MODULE_INFO(srcversion, "A736B773ECBB766AF6A58F1");
