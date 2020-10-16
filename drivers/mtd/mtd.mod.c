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
	{ 0x6bc3fbc0, "__unregister_chrdev" },
	{ 0xa24f23d8, "__request_module" },
	{ 0xf4610713, "kmalloc_caches" },
	{ 0x2d6fcc06, "__kmalloc" },
	{ 0x93b18eee, "debugfs_create_dir" },
	{ 0xcd34ce55, "single_open" },
	{ 0x53adbbd1, "proc_create_single_data" },
	{ 0x97b4e10, "nvmem_register" },
	{ 0xf7c048ae, "single_release" },
	{ 0x5d7776e5, "seq_puts" },
	{ 0x20000329, "simple_strtoul" },
	{ 0xf7802486, "__aeabi_uidivmod" },
	{ 0x25b775bc, "deactivate_locked_super" },
	{ 0xd32d6c08, "lockref_get" },
	{ 0xc8275115, "seq_printf" },
	{ 0xf1941f1b, "sysfs_create_files" },
	{ 0xae947aa3, "remove_proc_entry" },
	{ 0xda800db5, "device_destroy" },
	{ 0x353e3fa5, "__get_user_4" },
	{ 0xb1b939e, "kmemdup" },
	{ 0xc21bb13c, "__register_chrdev" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0xae353d77, "arm_copy_from_user" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0x7c20652d, "debugfs_create_file" },
	{ 0x35edc130, "debugfs_remove_recursive" },
	{ 0xdc0adda3, "seq_read" },
	{ 0x2d39b0a7, "kstrdup" },
	{ 0x5721cbad, "lookup_bdev" },
	{ 0x51a910c0, "arm_copy_to_user" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0x5f754e5a, "memset" },
	{ 0x2878e15a, "idr_destroy" },
	{ 0xdffa7c8e, "bdi_alloc_node" },
	{ 0x5c2640cb, "device_register" },
	{ 0xc5850110, "printk" },
	{ 0xe4c122d0, "class_unregister" },
	{ 0x3c7ad7ac, "of_find_property" },
	{ 0x39b1a775, "fixed_size_llseek" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0x13e86e9b, "device_create" },
	{ 0x692a4f08, "idr_alloc" },
	{ 0xc0dc577e, "of_prop_next_string" },
	{ 0x621255c5, "__class_register" },
	{ 0x7fa795f, "_dev_err" },
	{ 0x2196324, "__aeabi_idiv" },
	{ 0x59e5070d, "__do_div64" },
	{ 0x26b8796a, "of_get_child_by_name" },
	{ 0xa346975c, "idr_remove" },
	{ 0xac1a55be, "unregister_reboot_notifier" },
	{ 0x12b548f6, "module_put" },
	{ 0xc6cbbc89, "capable" },
	{ 0x65d411e9, "idr_get_next" },
	{ 0xbc10dd97, "__put_user_4" },
	{ 0x3517383e, "register_reboot_notifier" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xa8816af1, "bdi_put" },
	{ 0xebaa9dc8, "kmem_cache_alloc_trace" },
	{ 0xdb9ca3c5, "_raw_spin_lock" },
	{ 0xb66bc471, "__module_get" },
	{ 0x43ab8abd, "sysfs_remove_files" },
	{ 0x2cfde9a2, "warn_slowpath_fmt" },
	{ 0xa2a29a97, "logfc" },
	{ 0xcaabcedb, "of_node_get" },
	{ 0x167c65ac, "seq_lseek" },
	{ 0x37a0cba, "kfree" },
	{ 0x3b6c41ea, "kstrtouint" },
	{ 0x9d669763, "memcpy" },
	{ 0xd6c2599f, "sget_fc" },
	{ 0x4bff51b1, "nvmem_unregister" },
	{ 0x9d6eee2e, "device_unregister" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xc0917695, "bdi_register" },
	{ 0xe2e8065e, "memdup_user" },
	{ 0xc358aaf8, "snprintf" },
	{ 0xe54dbfa5, "dev_set_name" },
	{ 0x1ee8d6d4, "refcount_inc_checked" },
	{ 0xfeb02014, "of_node_put" },
	{ 0x47925794, "idr_find" },
	{ 0x3f483967, "bdput" },
	{ 0x717bcdac, "try_module_get" },
	{ 0xa6708647, "generic_shutdown_super" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "4D4FD35376C10334FF925EC");
