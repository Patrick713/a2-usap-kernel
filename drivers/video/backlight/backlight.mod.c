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
	{ 0x93c5088e, "class_find_device" },
	{ 0xf4610713, "kmalloc_caches" },
	{ 0x80d68d3e, "fb_register_client" },
	{ 0x889e7573, "of_parse_phandle" },
	{ 0xe93e49c3, "devres_free" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0xfb24d4ab, "blocking_notifier_chain_unregister" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x7b113694, "devres_alloc_node" },
	{ 0x5c2640cb, "device_register" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0x6b57e67d, "kobject_uevent_env" },
	{ 0xcb907ad6, "devm_add_action" },
	{ 0xd178ddc, "devres_release" },
	{ 0xebcc8bdd, "put_device" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x8805a073, "blocking_notifier_call_chain" },
	{ 0x668b595, "_kstrtoul" },
	{ 0xf218ef74, "sysfs_notify" },
	{ 0xd5ac24e5, "blocking_notifier_chain_register" },
	{ 0x915b35eb, "devres_add" },
	{ 0xebaa9dc8, "kmem_cache_alloc_trace" },
	{ 0x2cfde9a2, "warn_slowpath_fmt" },
	{ 0x37a0cba, "kfree" },
	{ 0x254652b1, "class_destroy" },
	{ 0xb12cbacb, "fb_unregister_client" },
	{ 0x9d6eee2e, "device_unregister" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xe54dbfa5, "dev_set_name" },
	{ 0xfeb02014, "of_node_put" },
	{ 0xe6d85203, "__class_create" },
	{ 0x6f013ecd, "__init_rwsem" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "6D7E2EF9BD5B27700DB5D67");
