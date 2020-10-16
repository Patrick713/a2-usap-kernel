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
	{ 0x9d0d6206, "unregister_netdevice_notifier" },
	{ 0x65e2bb05, "unregister_pernet_subsys" },
	{ 0x91ae6be7, "xt_unregister_targets" },
	{ 0xd2da1048, "register_netdevice_notifier" },
	{ 0x343c048e, "xt_register_targets" },
	{ 0xb041ec8d, "register_pernet_subsys" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0x946ff31b, "nf_dup_ipv4" },
	{ 0xfc07c74, "static_key_slow_inc" },
	{ 0x98335fc9, "dev_get_by_name" },
	{ 0xebaa9dc8, "kmem_cache_alloc_trace" },
	{ 0xf4610713, "kmalloc_caches" },
	{ 0x71c90087, "memcmp" },
	{ 0x182e681b, "static_key_slow_dec" },
	{ 0xd2b30083, "xt_tee_enabled" },
	{ 0x37a0cba, "kfree" },
	{ 0x37de2cbb, "nf_dup_ipv6" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

MODULE_INFO(depends, "x_tables,nf_dup_ipv4,nf_dup_ipv6");


MODULE_INFO(srcversion, "26459F75F8CD9F5E61EB421");
