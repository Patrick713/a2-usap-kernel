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
	{ 0x2680385, "kmem_cache_destroy" },
	{ 0xcb8c753b, "mempool_exit" },
	{ 0xf4610713, "kmalloc_caches" },
	{ 0x8eea7b99, "cn_add_callback" },
	{ 0x2d6fcc06, "__kmalloc" },
	{ 0x349cba85, "strchr" },
	{ 0x97255bdf, "strlen" },
	{ 0x95c6b89, "dm_get_device" },
	{ 0x579ebcbd, "dm_dirty_log_type_unregister" },
	{ 0xc66d919f, "dm_table_get_mode" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x526c3a6c, "jiffies" },
	{ 0xff5a8cfe, "cn_del_callback" },
	{ 0x5bbe49f4, "__init_waitqueue_head" },
	{ 0xc972449f, "mempool_alloc_slab" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0xad84bef8, "dm_table_event" },
	{ 0x5f754e5a, "memset" },
	{ 0xa15d0131, "cancel_delayed_work" },
	{ 0x39a12ca7, "_raw_spin_unlock_irqrestore" },
	{ 0xc5850110, "printk" },
	{ 0xaafdc258, "strcasecmp" },
	{ 0x328a05f1, "strncpy" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x8a99a016, "mempool_free_slab" },
	{ 0xa6c4041, "cn_netlink_send" },
	{ 0x59e5070d, "__do_div64" },
	{ 0xc6cbbc89, "capable" },
	{ 0xfb5059ef, "dm_dirty_log_type_register" },
	{ 0xd8410611, "mempool_alloc" },
	{ 0xcf86cdac, "queue_delayed_work_on" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0xd46b54dd, "flush_delayed_work" },
	{ 0xebaa9dc8, "kmem_cache_alloc_trace" },
	{ 0x794765d1, "mempool_free" },
	{ 0xdb9ca3c5, "_raw_spin_lock" },
	{ 0x5f849a69, "_raw_spin_lock_irqsave" },
	{ 0x4c0e8130, "kmem_cache_create" },
	{ 0x37a0cba, "kfree" },
	{ 0x9d669763, "memcpy" },
	{ 0xc4657dc8, "mempool_init" },
	{ 0x314b20c8, "scnprintf" },
	{ 0xc9b8af52, "dm_put_device" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xe6c12171, "complete" },
	{ 0xd83dc5e6, "wait_for_completion_timeout" },
	{ 0xdf9208c0, "alloc_workqueue" },
};

MODULE_INFO(depends, "cn,dm-mod,dm-log");


MODULE_INFO(srcversion, "AA8AA2F5EBDB27CDC5B8875");
