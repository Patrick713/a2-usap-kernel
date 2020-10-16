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
	{ 0xa24f23d8, "__request_module" },
	{ 0xf4610713, "kmalloc_caches" },
	{ 0x55e00c3a, "put_pid" },
	{ 0xa7b3181c, "up_read" },
	{ 0x526d84ac, "snd_register_device" },
	{ 0x7aa1756e, "kvfree" },
	{ 0x9a152689, "param_ops_int" },
	{ 0x151f4898, "schedule_timeout_uninterruptible" },
	{ 0xc6bdb4d8, "pid_vnr" },
	{ 0x2dfdedea, "stream_open" },
	{ 0x983ac031, "remove_wait_queue" },
	{ 0x2478eb83, "snd_device_initialize" },
	{ 0xa0337a7f, "no_llseek" },
	{ 0x3b697738, "_raw_read_lock" },
	{ 0xf7802486, "__aeabi_uidivmod" },
	{ 0x6339b6d0, "snd_seq_device_load_drivers" },
	{ 0x2a3aa678, "_test_and_clear_bit" },
	{ 0xc8275115, "seq_printf" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0xae353d77, "arm_copy_from_user" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0xeea0399, "strscpy" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xd697e69a, "trace_hardirqs_on" },
	{ 0x51a910c0, "arm_copy_to_user" },
	{ 0xfb1d7438, "down_read" },
	{ 0x5bbe49f4, "__init_waitqueue_head" },
	{ 0xaad8c7d6, "default_wake_function" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0x91def1c, "snd_seq_autoload_exit" },
	{ 0x5f754e5a, "memset" },
	{ 0x39a12ca7, "_raw_spin_unlock_irqrestore" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0x84eb8acb, "snd_unregister_device" },
	{ 0x3971b4df, "snd_ecards_limit" },
	{ 0x365acda7, "set_normalized_timespec64" },
	{ 0x84b183ae, "strncmp" },
	{ 0x73e20c1c, "strlcpy" },
	{ 0xf5c28b6, "snd_timer_pause" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0xfcd69d5a, "snd_timer_resolution" },
	{ 0x7e0ce0c3, "up_write" },
	{ 0x4253aa7e, "down_write" },
	{ 0x2196324, "__aeabi_idiv" },
	{ 0x8dfefc0d, "kvmalloc_node" },
	{ 0x12b548f6, "module_put" },
	{ 0xa8a22f31, "snd_timer_start" },
	{ 0xebcc8bdd, "put_device" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x1000e51, "schedule" },
	{ 0x3e781157, "snd_timer_open" },
	{ 0x2da81bff, "_raw_spin_lock_irq" },
	{ 0x4d634803, "_raw_write_lock_irq" },
	{ 0xebaa9dc8, "kmem_cache_alloc_trace" },
	{ 0xdb9ca3c5, "_raw_spin_lock" },
	{ 0x5f849a69, "_raw_spin_lock_irqsave" },
	{ 0x2c9d3756, "vsnprintf" },
	{ 0x3dcf1ffa, "__wake_up" },
	{ 0x2cfde9a2, "warn_slowpath_fmt" },
	{ 0xa17bd3fc, "add_wait_queue" },
	{ 0x37a0cba, "kfree" },
	{ 0x9d669763, "memcpy" },
	{ 0x6a3490db, "snd_timer_close" },
	{ 0x4883fef8, "snd_seq_root" },
	{ 0xee2f893d, "snd_info_free_entry" },
	{ 0x36138fcf, "param_array_ops" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x4a3ea5c0, "snd_request_card" },
	{ 0xc358aaf8, "snprintf" },
	{ 0xca54fee, "_test_and_set_bit" },
	{ 0xe54dbfa5, "dev_set_name" },
	{ 0x1ee8d6d4, "refcount_inc_checked" },
	{ 0x5e515be6, "ktime_get_ts64" },
	{ 0x370a0736, "snd_seq_autoload_init" },
	{ 0x27f7f9ed, "snd_info_create_module_entry" },
	{ 0x88cc6f48, "snd_info_register" },
	{ 0x6f013ecd, "__init_rwsem" },
	{ 0x717bcdac, "try_module_get" },
	{ 0xe914e41e, "strcpy" },
};

MODULE_INFO(depends, "snd,snd-seq-device,snd-timer");


MODULE_INFO(srcversion, "77736CAA46C629E3E2B826B");
