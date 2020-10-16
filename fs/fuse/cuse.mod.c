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
	{ 0xb9e0d789, "fuse_file_poll" },
	{ 0x36ac7fd0, "noop_llseek" },
	{ 0x9ec748a7, "misc_deregister" },
	{ 0x254652b1, "class_destroy" },
	{ 0xa07281f, "misc_register" },
	{ 0xe6d85203, "__class_create" },
	{ 0x9d669763, "memcpy" },
	{ 0xf47f9bab, "fuse_dev_operations" },
	{ 0x93f03d19, "fuse_dev_free" },
	{ 0x26140d29, "fuse_simple_background" },
	{ 0x40fd1bb5, "__alloc_pages_nodemask" },
	{ 0x6801f322, "fuse_dev_alloc_install" },
	{ 0xdca7f4bc, "fuse_conn_init" },
	{ 0xc4db99b6, "fuse_dev_fiq_ops" },
	{ 0x3fd78f3b, "register_chrdev_region" },
	{ 0x1bdb8ad6, "kobject_uevent" },
	{ 0x570c6c9a, "cdev_add" },
	{ 0x27ebf7d2, "cdev_alloc" },
	{ 0x1b018b60, "device_add" },
	{ 0xebcc8bdd, "put_device" },
	{ 0xe54dbfa5, "dev_set_name" },
	{ 0x9dc3b2ba, "device_initialize" },
	{ 0xebaa9dc8, "kmem_cache_alloc_trace" },
	{ 0xf4610713, "kmalloc_caches" },
	{ 0xe3ec2f2b, "alloc_chrdev_region" },
	{ 0xc5850110, "printk" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x77bc13a0, "strim" },
	{ 0x85df9b6c, "strsep" },
	{ 0x97255bdf, "strlen" },
	{ 0x987c11c7, "__pv_phys_pfn_offset" },
	{ 0x76d11765, "mem_map" },
	{ 0xda2a4834, "__free_pages" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x19d911d7, "fuse_direct_io" },
	{ 0x5f754e5a, "memset" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x56d67703, "fuse_do_ioctl" },
	{ 0xcf74010f, "fuse_do_open" },
	{ 0x81217903, "fuse_conn_get" },
	{ 0xbd2f434f, "fuse_sync_release" },
	{ 0x19f462ab, "kfree_call_rcu" },
	{ 0x37a0cba, "kfree" },
	{ 0xd0053ebc, "fuse_dev_release" },
	{ 0xb877e310, "fuse_conn_put" },
	{ 0xa4ab8272, "cdev_del" },
	{ 0x6091b333, "unregister_chrdev_region" },
	{ 0x9d6eee2e, "device_unregister" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x4c38de52, "fuse_abort_conn" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

MODULE_INFO(depends, "fuse");


MODULE_INFO(srcversion, "63F704B6A417BF402870705");
