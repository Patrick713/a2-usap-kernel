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
	{ 0x6d662533, "_find_first_bit_le" },
	{ 0x9714e0bb, "ktime_get_raw" },
	{ 0x64568c4f, "bus_register" },
	{ 0xf4610713, "kmalloc_caches" },
	{ 0x2d6fcc06, "__kmalloc" },
	{ 0xad534415, "cdev_init" },
	{ 0xc4f0da12, "ktime_get_with_offset" },
	{ 0x528c709d, "simple_read_from_buffer" },
	{ 0x93b18eee, "debugfs_create_dir" },
	{ 0x1e4d3064, "irq_set_chip" },
	{ 0xf8815d7, "__irq_set_handler" },
	{ 0x983ac031, "remove_wait_queue" },
	{ 0xb308c97d, "wait_woken" },
	{ 0xd3f57a2, "_find_next_bit_le" },
	{ 0xb43f9365, "ktime_get" },
	{ 0xe93e49c3, "devres_free" },
	{ 0xa6a7a2ad, "div_s64_rem" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0x63a7c28c, "bitmap_find_free_region" },
	{ 0xae353d77, "arm_copy_from_user" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0x6091b333, "unregister_chrdev_region" },
	{ 0x7c20652d, "debugfs_create_file" },
	{ 0xd7b411cb, "__irq_alloc_descs" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x35edc130, "debugfs_remove_recursive" },
	{ 0x7b113694, "devres_alloc_node" },
	{ 0x2d39b0a7, "kstrdup" },
	{ 0x51a910c0, "arm_copy_to_user" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xfb384d37, "kasprintf" },
	{ 0x5bbe49f4, "__init_waitqueue_head" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0xa084749a, "__bitmap_or" },
	{ 0x2688ec10, "bitmap_zalloc" },
	{ 0x549525ef, "handle_nested_irq" },
	{ 0x40b51c05, "__sysfs_match_string" },
	{ 0x124bad4d, "kstrtobool" },
	{ 0xc1c73f49, "device_del" },
	{ 0x4578f528, "__kfifo_to_user" },
	{ 0x3375510b, "mutex_lock_interruptible" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0xd61eeee, "__bitmap_subset" },
	{ 0xa24491bf, "ida_free" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x56017d92, "device_property_read_string_array" },
	{ 0x47915c30, "debugfs_remove" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0x36ac7fd0, "noop_llseek" },
	{ 0xc1e58a5f, "refcount_dec_and_test_checked" },
	{ 0x1cb2c6d8, "kvasprintf" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x8c8569cb, "kstrtoint" },
	{ 0x1b018b60, "device_add" },
	{ 0xc5fd6834, "bus_find_device" },
	{ 0x81febe09, "simple_open" },
	{ 0x7fa795f, "_dev_err" },
	{ 0x7f99f66a, "bus_unregister" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xf5e7ea40, "ktime_get_coarse_ts64" },
	{ 0x12b548f6, "module_put" },
	{ 0x406c4cb1, "hrtimer_resolution" },
	{ 0xd0654aba, "woken_wake_function" },
	{ 0x3eabc38c, "_dev_info" },
	{ 0xf67e5e33, "handle_simple_irq" },
	{ 0x1c5b1f28, "irq_free_descs" },
	{ 0xd178ddc, "devres_release" },
	{ 0xebcc8bdd, "put_device" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x339545ea, "anon_inode_getfd" },
	{ 0x1000e51, "schedule" },
	{ 0x26800c62, "cdev_device_add" },
	{ 0x7522f3ba, "irq_modify_status" },
	{ 0xf3e6402e, "__bitmap_equal" },
	{ 0xf7bc2652, "of_get_property" },
	{ 0x915b35eb, "devres_add" },
	{ 0xebaa9dc8, "kmem_cache_alloc_trace" },
	{ 0xca21ebd3, "bitmap_free" },
	{ 0xde147102, "get_device" },
	{ 0xb66bc471, "__module_get" },
	{ 0x3dcf1ffa, "__wake_up" },
	{ 0x647af474, "prepare_to_wait_event" },
	{ 0x2cfde9a2, "warn_slowpath_fmt" },
	{ 0xa17bd3fc, "add_wait_queue" },
	{ 0x37a0cba, "kfree" },
	{ 0x7ceaf0d5, "generic_handle_irq" },
	{ 0x3b6c41ea, "kstrtouint" },
	{ 0x9d669763, "memcpy" },
	{ 0x9dc3b2ba, "device_initialize" },
	{ 0x314b20c8, "scnprintf" },
	{ 0x74c134b9, "__sw_hweight32" },
	{ 0x4432a2cc, "of_parse_phandle_with_args" },
	{ 0x49970de8, "finish_wait" },
	{ 0x63c4d61f, "__bitmap_weight" },
	{ 0x38c891ae, "cdev_device_del" },
	{ 0x222e7ce2, "sysfs_streq" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0xc358aaf8, "snprintf" },
	{ 0x6fe5cae9, "of_property_match_string" },
	{ 0xca54fee, "_test_and_set_bit" },
	{ 0xe54dbfa5, "dev_set_name" },
	{ 0xbcc15e75, "ktime_get_coarse_with_offset" },
	{ 0x1ee8d6d4, "refcount_inc_checked" },
	{ 0x49ebacbd, "_clear_bit" },
	{ 0xfeb02014, "of_node_put" },
	{ 0xe3ec2f2b, "alloc_chrdev_region" },
	{ 0xa5684076, "ida_alloc_range" },
	{ 0xc1514a3b, "free_irq" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "5F97EA11E5C30BCAD7FFE98");
