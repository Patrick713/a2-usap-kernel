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
	{ 0x52cb560, "dm_unregister_target" },
	{ 0x6d17d0e8, "dm_register_target" },
	{ 0xc5850110, "printk" },
	{ 0xdf9208c0, "alloc_workqueue" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xebaa9dc8, "kmem_cache_alloc_trace" },
	{ 0xf4610713, "kmalloc_caches" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x95c6b89, "dm_get_device" },
	{ 0xc66d919f, "dm_table_get_mode" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xb2d48a2e, "queue_work_on" },
	{ 0x37a0cba, "kfree" },
	{ 0xc9b8af52, "dm_put_device" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0xb815eeea, "bio_associate_blkg" },
	{ 0x48a9c5d0, "dm_per_bio_data" },
	{ 0x3e3928a, "generic_make_request" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0x793b9e4d, "dm_bio_from_per_bio_data" },
	{ 0x526c3a6c, "jiffies" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0x314b20c8, "scnprintf" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

MODULE_INFO(depends, "dm-mod");


MODULE_INFO(srcversion, "A239C0131B654EB7DED1C54");
