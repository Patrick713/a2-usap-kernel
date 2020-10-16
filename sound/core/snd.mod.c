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
	{ 0x55e00c3a, "put_pid" },
	{ 0xa7b3181c, "up_read" },
	{ 0xcd34ce55, "single_open" },
	{ 0x7aa1756e, "kvfree" },
	{ 0x9a152689, "param_ops_int" },
	{ 0x5099311d, "proc_symlink" },
	{ 0x97255bdf, "strlen" },
	{ 0x352c05d9, "release_resource" },
	{ 0x9fca6013, "sound_class" },
	{ 0x5ca18a2, "_raw_write_lock_irqsave" },
	{ 0xc6bdb4d8, "pid_vnr" },
	{ 0xf7c048ae, "single_release" },
	{ 0x2dfdedea, "stream_open" },
	{ 0x983ac031, "remove_wait_queue" },
	{ 0xa0337a7f, "no_llseek" },
	{ 0x3b697738, "_raw_read_lock" },
	{ 0xc8275115, "seq_printf" },
	{ 0x7dce2d53, "kobject_set_name" },
	{ 0x353e3fa5, "__get_user_4" },
	{ 0xc21bb13c, "__register_chrdev" },
	{ 0x723ac421, "proc_set_size" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0xae353d77, "arm_copy_from_user" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xdc0adda3, "seq_read" },
	{ 0xd697e69a, "trace_hardirqs_on" },
	{ 0x2d39b0a7, "kstrdup" },
	{ 0x51a910c0, "arm_copy_to_user" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xfb1d7438, "down_read" },
	{ 0xaafd9237, "_raw_write_unlock_irqrestore" },
	{ 0x31709530, "proc_remove" },
	{ 0x38ea3b28, "input_event" },
	{ 0x5bbe49f4, "__init_waitqueue_head" },
	{ 0xaad8c7d6, "default_wake_function" },
	{ 0x7d518e2b, "PDE_DATA" },
	{ 0xb561ac5b, "wait_for_completion" },
	{ 0x4be0fc9e, "param_ops_charp" },
	{ 0xf65110e8, "_dev_warn" },
	{ 0x5f754e5a, "memset" },
	{ 0xf617b198, "proc_mkdir" },
	{ 0xc1c73f49, "device_del" },
	{ 0x11089ac7, "_ctype" },
	{ 0x39a12ca7, "_raw_spin_unlock_irqrestore" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0x71c90087, "memcmp" },
	{ 0xf1e046cc, "panic" },
	{ 0x3b00de61, "fasync_helper" },
	{ 0x84b183ae, "strncmp" },
	{ 0x73e20c1c, "strlcpy" },
	{ 0x643feb7f, "input_set_capability" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0x1e6d26a8, "strstr" },
	{ 0x36ac7fd0, "noop_llseek" },
	{ 0x94b2702, "init_uts_ns" },
	{ 0x1b018b60, "device_add" },
	{ 0x7e0ce0c3, "up_write" },
	{ 0x7fa795f, "_dev_err" },
	{ 0x4253aa7e, "down_write" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x61651be, "strcat" },
	{ 0x8dfefc0d, "kvmalloc_node" },
	{ 0x12b548f6, "module_put" },
	{ 0xee3bd83c, "register_sound_special_device" },
	{ 0xbc10dd97, "__put_user_4" },
	{ 0xd9ce8f0c, "strnlen" },
	{ 0xebcc8bdd, "put_device" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x7b0629e7, "input_register_device" },
	{ 0x1000e51, "schedule" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x77f6f183, "kmalloc_order_trace" },
	{ 0x2da81bff, "_raw_spin_lock_irq" },
	{ 0x2de4f87b, "input_free_device" },
	{ 0x76d31a13, "dev_driver_string" },
	{ 0xae4b0801, "single_open_size" },
	{ 0xebaa9dc8, "kmem_cache_alloc_trace" },
	{ 0xdb9ca3c5, "_raw_spin_lock" },
	{ 0x5f849a69, "_raw_spin_lock_irqsave" },
	{ 0xde147102, "get_device" },
	{ 0x3dcf1ffa, "__wake_up" },
	{ 0x647af474, "prepare_to_wait_event" },
	{ 0x2e2d9410, "proc_create_data" },
	{ 0x2cfde9a2, "warn_slowpath_fmt" },
	{ 0xa17bd3fc, "add_wait_queue" },
	{ 0x167c65ac, "seq_lseek" },
	{ 0x37a0cba, "kfree" },
	{ 0x9d669763, "memcpy" },
	{ 0xc0e66c25, "input_unregister_device" },
	{ 0xa1d131ed, "vmemdup_user" },
	{ 0x36138fcf, "param_array_ops" },
	{ 0x9dc3b2ba, "device_initialize" },
	{ 0x89f8fff4, "proc_mkdir_mode" },
	{ 0x314b20c8, "scnprintf" },
	{ 0x99c95fa5, "unregister_sound_special" },
	{ 0x9707a604, "kill_fasync" },
	{ 0x49970de8, "finish_wait" },
	{ 0x216d759a, "mmiocpy" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xe2e8065e, "memdup_user" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0xe6c12171, "complete" },
	{ 0xc358aaf8, "snprintf" },
	{ 0xe54dbfa5, "dev_set_name" },
	{ 0x1ee8d6d4, "refcount_inc_checked" },
	{ 0x49ebacbd, "_clear_bit" },
	{ 0x6f013ecd, "__init_rwsem" },
	{ 0x717bcdac, "try_module_get" },
	{ 0xe914e41e, "strcpy" },
	{ 0xea1c9521, "input_allocate_device" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "7E1383BCC38392CF7D47C53");
