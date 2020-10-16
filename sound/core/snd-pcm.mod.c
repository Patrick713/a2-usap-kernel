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
	{ 0xf4610713, "kmalloc_caches" },
	{ 0x2d6fcc06, "__kmalloc" },
	{ 0x24a94b26, "snd_info_get_line" },
	{ 0x55e00c3a, "put_pid" },
	{ 0xa7b3181c, "up_read" },
	{ 0x526d84ac, "snd_register_device" },
	{ 0x38cf2776, "snd_device_register" },
	{ 0x76d11765, "mem_map" },
	{ 0x9a152689, "param_ops_int" },
	{ 0xea124bd1, "gcd" },
	{ 0xc1d8cfaf, "__fdget" },
	{ 0x7fd46992, "snd_card_file_remove" },
	{ 0xc158d914, "snd_device_free" },
	{ 0xc6bdb4d8, "pid_vnr" },
	{ 0x20fcb408, "dma_mmap_attrs" },
	{ 0x983ac031, "remove_wait_queue" },
	{ 0xfbfee84a, "snd_power_wait" },
	{ 0x2478eb83, "snd_device_initialize" },
	{ 0x2ee26c1, "free_pages_exact" },
	{ 0xa0337a7f, "no_llseek" },
	{ 0xe17b7611, "snd_info_create_card_entry" },
	{ 0x8570f468, "pm_qos_add_request" },
	{ 0x4df391d4, "pm_qos_remove_request" },
	{ 0x20000329, "simple_strtoul" },
	{ 0xf7802486, "__aeabi_uidivmod" },
	{ 0xb2e5ae4a, "snd_lookup_minor_data" },
	{ 0xc8275115, "seq_printf" },
	{ 0x69f5b1b7, "of_gen_pool_get" },
	{ 0x353e3fa5, "__get_user_4" },
	{ 0xf705fa49, "gen_pool_free_owner" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0xae353d77, "arm_copy_from_user" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0x999e8297, "vfree" },
	{ 0x13adb655, "dma_free_attrs" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x66decfd5, "ns_to_timespec" },
	{ 0xd697e69a, "trace_hardirqs_on" },
	{ 0xaec4df8e, "nonseekable_open" },
	{ 0x526c3a6c, "jiffies" },
	{ 0x51a910c0, "arm_copy_to_user" },
	{ 0xdd4ffa9b, "mutex_trylock" },
	{ 0xfb1d7438, "down_read" },
	{ 0xb9f5bdf6, "snd_ctl_unregister_ioctl" },
	{ 0x5bbe49f4, "__init_waitqueue_head" },
	{ 0xaad8c7d6, "default_wake_function" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0x5f754e5a, "memset" },
	{ 0x988a694f, "snd_device_new" },
	{ 0x5fb01358, "alloc_pages_exact" },
	{ 0x39a12ca7, "_raw_spin_unlock_irqrestore" },
	{ 0xad9eaec5, "snd_timer_new" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0xacb31ecf, "_raw_spin_trylock" },
	{ 0x71c90087, "memcmp" },
	{ 0x9ec6ca96, "ktime_get_real_ts64" },
	{ 0x1edb69d6, "ktime_get_raw_ts64" },
	{ 0x84eb8acb, "snd_unregister_device" },
	{ 0x3b00de61, "fasync_helper" },
	{ 0x73e20c1c, "strlcpy" },
	{ 0xd494a4b6, "dma_alloc_attrs" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0x8f595b11, "snd_major" },
	{ 0xc1e58a5f, "refcount_dec_and_test_checked" },
	{ 0x7e0ce0c3, "up_write" },
	{ 0x7fa795f, "_dev_err" },
	{ 0x4253aa7e, "down_write" },
	{ 0xa92173df, "fput" },
	{ 0x59e5070d, "__do_div64" },
	{ 0x12b548f6, "module_put" },
	{ 0xbc10dd97, "__put_user_4" },
	{ 0xba3e2639, "snd_card_file_add" },
	{ 0x52cf4e10, "snd_ctl_register_ioctl" },
	{ 0xebcc8bdd, "put_device" },
	{ 0xa8223179, "refcount_dec_checked" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x1000e51, "schedule" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x639acf3b, "pm_qos_request_active" },
	{ 0x2da81bff, "_raw_spin_lock_irq" },
	{ 0xf1d33562, "snd_ctl_new1" },
	{ 0x7ade9187, "gen_pool_dma_alloc" },
	{ 0xebaa9dc8, "kmem_cache_alloc_trace" },
	{ 0xdb9ca3c5, "_raw_spin_lock" },
	{ 0xe1908f1e, "snd_ctl_remove" },
	{ 0x5f849a69, "_raw_spin_lock_irqsave" },
	{ 0x3dcf1ffa, "__wake_up" },
	{ 0x2cfde9a2, "warn_slowpath_fmt" },
	{ 0xa17bd3fc, "add_wait_queue" },
	{ 0x9e6d79f8, "snd_info_get_str" },
	{ 0x109d0eca, "__vmalloc" },
	{ 0x37a0cba, "kfree" },
	{ 0xb7897628, "remap_pfn_range" },
	{ 0x9d669763, "memcpy" },
	{ 0xee2f893d, "snd_info_free_entry" },
	{ 0xc17072f3, "snd_timer_interrupt" },
	{ 0x6128b5fc, "__printk_ratelimit" },
	{ 0x9dc08a71, "pgprot_kernel" },
	{ 0x9707a604, "kill_fasync" },
	{ 0xc777b308, "snd_ctl_get_preferred_subdevice" },
	{ 0x4c92d609, "snd_timer_notify" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xe2e8065e, "memdup_user" },
	{ 0xc358aaf8, "snprintf" },
	{ 0x12c76c9d, "vmalloc_to_page" },
	{ 0xda621c75, "snd_ctl_add" },
	{ 0xe54dbfa5, "dev_set_name" },
	{ 0x1ee8d6d4, "refcount_inc_checked" },
	{ 0x5e515be6, "ktime_get_ts64" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x27f7f9ed, "snd_info_create_module_entry" },
	{ 0x88cc6f48, "snd_info_register" },
	{ 0x717bcdac, "try_module_get" },
	{ 0x34b84850, "dma_can_mmap" },
	{ 0x421d4dcf, "krealloc" },
};

MODULE_INFO(depends, "snd,snd-timer");


MODULE_INFO(srcversion, "6D112129795DC4BB5BBCD5C");
