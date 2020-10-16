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

MODULE_INFO(staging, "Y");

static const struct modversion_info ____versions[]
__used __section(__versions) = {
	{ 0xe9942317, "module_layout" },
	{ 0x22f8c1ca, "kobject_put" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xf4610713, "kmalloc_caches" },
	{ 0x2d6fcc06, "__kmalloc" },
	{ 0xa7b3181c, "up_read" },
	{ 0x8f355580, "tty_unlock" },
	{ 0x76a17d8b, "start_tty" },
	{ 0x349cba85, "strchr" },
	{ 0x2b68bd2f, "del_timer" },
	{ 0x97255bdf, "strlen" },
	{ 0x352c05d9, "release_resource" },
	{ 0xad73041f, "autoremove_wake_function" },
	{ 0x278ae173, "screen_pos" },
	{ 0x2f7d145c, "tty_set_ldisc" },
	{ 0xf842865, "set_selection_kernel" },
	{ 0x20000329, "simple_strtoul" },
	{ 0x38374815, "clear_selection" },
	{ 0x4205ad24, "cancel_work_sync" },
	{ 0xb1b939e, "kmemdup" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0xfe41fb0b, "param_ops_bool" },
	{ 0xae353d77, "arm_copy_from_user" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0x96554810, "register_keyboard_notifier" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x55417264, "unregister_vt_notifier" },
	{ 0xd697e69a, "trace_hardirqs_on" },
	{ 0xa4040d67, "sysfs_remove_group" },
	{ 0xdd34010a, "kthread_create_on_node" },
	{ 0x526c3a6c, "jiffies" },
	{ 0xa120d33c, "tty_unregister_ldisc" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xfb1d7438, "down_read" },
	{ 0xaf22ee50, "kobject_create_and_add" },
	{ 0xe557fa92, "vc_cons" },
	{ 0x22b325d5, "kd_mksound" },
	{ 0xc631580a, "console_unlock" },
	{ 0x38ea3b28, "input_event" },
	{ 0x5bbe49f4, "__init_waitqueue_head" },
	{ 0x4be0fc9e, "param_ops_charp" },
	{ 0xa07281f, "misc_register" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0xb11d9000, "tty_dev_name_to_number" },
	{ 0x5f754e5a, "memset" },
	{ 0x716b58cb, "ioport_resource" },
	{ 0x9ed554b3, "unregister_keyboard_notifier" },
	{ 0x11089ac7, "_ctype" },
	{ 0x39a12ca7, "_raw_spin_unlock_irqrestore" },
	{ 0xc5850110, "printk" },
	{ 0xacb31ecf, "_raw_spin_trylock" },
	{ 0x7bfbe88e, "kthread_stop" },
	{ 0xf63fc023, "sysfs_create_group" },
	{ 0x71c90087, "memcmp" },
	{ 0xaa19e4aa, "_kstrtol" },
	{ 0xf4ebb570, "tty_ldisc_flush" },
	{ 0x328a05f1, "strncpy" },
	{ 0xfbaaf01e, "console_lock" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0xf1969a8e, "__usecs_to_jiffies" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x8e865d3c, "arm_delay_ops" },
	{ 0xc8339e24, "string_unescape" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x7b0629e7, "input_register_device" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x1000e51, "schedule" },
	{ 0x2de4f87b, "input_free_device" },
	{ 0xb35d51ab, "wake_up_process" },
	{ 0xae81d874, "stop_tty" },
	{ 0x82f2a12b, "tty_write_room" },
	{ 0xebaa9dc8, "kmem_cache_alloc_trace" },
	{ 0x5f849a69, "_raw_spin_lock_irqsave" },
	{ 0x2c9d3756, "vsnprintf" },
	{ 0x3dcf1ffa, "__wake_up" },
	{ 0xcb9f0601, "tty_kopen" },
	{ 0x194a913f, "tty_kclose" },
	{ 0xb3f7646e, "kthread_should_stop" },
	{ 0x2cfde9a2, "warn_slowpath_fmt" },
	{ 0x37a0cba, "kfree" },
	{ 0x9d669763, "memcpy" },
	{ 0xc0e66c25, "input_unregister_device" },
	{ 0x6578533e, "prepare_to_wait" },
	{ 0xb71589f0, "skip_spaces" },
	{ 0x4e6e8ea7, "fg_console" },
	{ 0xea48c6b2, "set_user_nice" },
	{ 0x314b20c8, "scnprintf" },
	{ 0xb6c9fca8, "tty_kref_put" },
	{ 0x49970de8, "finish_wait" },
	{ 0xbca2b721, "inverse_translate" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xb2d48a2e, "queue_work_on" },
	{ 0x58b582a, "vt_get_leds" },
	{ 0xe6c12171, "complete" },
	{ 0xf01f24fe, "tty_schedule_flip" },
	{ 0xc358aaf8, "snprintf" },
	{ 0x1ee8d6d4, "refcount_inc_checked" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x2508784d, "tty_register_ldisc" },
	{ 0x49ebacbd, "_clear_bit" },
	{ 0xd83dc5e6, "wait_for_completion_timeout" },
	{ 0xec3d2e1b, "trace_hardirqs_off" },
	{ 0x9ec748a7, "misc_deregister" },
	{ 0xe0a6b585, "request_resource" },
	{ 0x431c14c6, "tty_lock" },
	{ 0xbf041102, "register_vt_notifier" },
	{ 0xc1514a3b, "free_irq" },
	{ 0xafcd556, "tty_set_termios" },
	{ 0xe914e41e, "strcpy" },
	{ 0x3819710b, "paste_selection" },
	{ 0xea1c9521, "input_allocate_device" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "AA6DE9D87DFE1DB4F8D4961");
