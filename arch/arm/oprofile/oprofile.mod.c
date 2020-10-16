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
	{ 0x2d3385d3, "system_wq" },
	{ 0x2d6fcc06, "__kmalloc" },
	{ 0xd20bf6ba, "dcookie_unregister" },
	{ 0x627f576f, "__cpuhp_remove_state" },
	{ 0xa7b3181c, "up_read" },
	{ 0xa9e18049, "task_handoff_unregister" },
	{ 0xdd391eff, "profile_event_unregister" },
	{ 0xc385cb58, "perf_num_counters" },
	{ 0x528c709d, "simple_read_from_buffer" },
	{ 0xd6ee688f, "vmalloc" },
	{ 0x2f4113a2, "dcookie_register" },
	{ 0xf353a698, "register_module_notifier" },
	{ 0x9a152689, "param_ops_int" },
	{ 0x97255bdf, "strlen" },
	{ 0x33dbb949, "perf_event_release_kernel" },
	{ 0x4b954b51, "get_tree_single" },
	{ 0xcc20ac52, "hrtimer_forward" },
	{ 0x6a5ecb18, "unregister_module_notifier" },
	{ 0xfc70c5d8, "ring_buffer_consume" },
	{ 0x4cf17d9a, "hrtimer_cancel" },
	{ 0xc65d3eed, "ring_buffer_entries_cpu" },
	{ 0xa0337a7f, "no_llseek" },
	{ 0xdc4137ac, "free_task" },
	{ 0x20000329, "simple_strtoul" },
	{ 0x26be65e0, "generic_delete_inode" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x5117deaf, "dput" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x9d09e8ae, "ring_buffer_event_data" },
	{ 0xae353d77, "arm_copy_from_user" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0xfe5418b, "d_add" },
	{ 0x3de2daa7, "mmput" },
	{ 0x999e8297, "vfree" },
	{ 0x8bcd64f8, "platform_device_register_full" },
	{ 0xd697e69a, "trace_hardirqs_on" },
	{ 0x610b1492, "__platform_driver_register" },
	{ 0xaec4df8e, "nonseekable_open" },
	{ 0x51a910c0, "arm_copy_to_user" },
	{ 0xfb1d7438, "down_read" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xcf3fac84, "cpumask_next" },
	{ 0xf4fc2d6c, "__ring_buffer_alloc" },
	{ 0x46066e5b, "perf_pmu_name" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0xe6d81d31, "hrtimer_start_range_ns" },
	{ 0x5f754e5a, "memset" },
	{ 0x1e96f43d, "__cpu_possible_mask" },
	{ 0xa15d0131, "cancel_delayed_work" },
	{ 0xd8be439f, "kill_litter_super" },
	{ 0x83673cbf, "default_llseek" },
	{ 0x39a12ca7, "_raw_spin_unlock_irqrestore" },
	{ 0xc5850110, "printk" },
	{ 0x921b07b1, "__cpu_online_mask" },
	{ 0x4c9376a3, "get_task_mm" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0x36ac7fd0, "noop_llseek" },
	{ 0x838b13e7, "ring_buffer_free" },
	{ 0xf11cd95c, "platform_device_unregister" },
	{ 0x81febe09, "simple_open" },
	{ 0xe3d6084a, "__cpuhp_setup_state" },
	{ 0x7e0ce0c3, "up_write" },
	{ 0x4253aa7e, "down_write" },
	{ 0xa92173df, "fput" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xb4eda0da, "ring_buffer_event_length" },
	{ 0x9b827f5f, "find_vma" },
	{ 0xc6cbbc89, "capable" },
	{ 0x78a9d114, "simple_dir_operations" },
	{ 0x7729cbdd, "task_handoff_register" },
	{ 0xfd305341, "walk_stackframe" },
	{ 0xcf86cdac, "queue_delayed_work_on" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x1000e51, "schedule" },
	{ 0x5ee9f76e, "get_mm_exe_file" },
	{ 0xd46b54dd, "flush_delayed_work" },
	{ 0xc0a98385, "profile_pc" },
	{ 0x2c81ec75, "__irq_regs" },
	{ 0xdb9ca3c5, "_raw_spin_lock" },
	{ 0x341dbfa3, "__per_cpu_offset" },
	{ 0x5f849a69, "_raw_spin_lock_irqsave" },
	{ 0xf3d8ce69, "register_filesystem" },
	{ 0x3dcf1ffa, "__wake_up" },
	{ 0x647af474, "prepare_to_wait_event" },
	{ 0x2cfde9a2, "warn_slowpath_fmt" },
	{ 0xe953b21f, "get_next_ino" },
	{ 0x37a0cba, "kfree" },
	{ 0x9812880e, "current_time" },
	{ 0x18ddfa86, "hrtimer_init" },
	{ 0x8a3c8a96, "get_dcookie" },
	{ 0xab566ebe, "d_make_root" },
	{ 0x24d8114c, "simple_statfs" },
	{ 0x3f48c5ee, "d_alloc_name" },
	{ 0x49970de8, "finish_wait" },
	{ 0xa389a49a, "profile_event_register" },
	{ 0x6b4caa76, "unregister_filesystem" },
	{ 0x9f6be13e, "perf_event_create_kernel_counter" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0xc358aaf8, "snprintf" },
	{ 0x800805e5, "new_inode" },
	{ 0x8ad83553, "platform_driver_unregister" },
	{ 0x294b9ea1, "on_each_cpu" },
	{ 0xb2109af4, "simple_dir_inode_operations" },
	{ 0xec3d2e1b, "trace_hardirqs_off" },
	{ 0x1a551022, "ring_buffer_lock_reserve" },
	{ 0xa83f641e, "ring_buffer_unlock_commit" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "D0E39295290C8EF77D4C0C5");
