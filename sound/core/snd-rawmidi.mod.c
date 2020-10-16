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
	{ 0xf4610713, "kmalloc_caches" },
	{ 0xf9a482f9, "msleep" },
	{ 0x55e00c3a, "put_pid" },
	{ 0x526d84ac, "snd_register_device" },
	{ 0x38cf2776, "snd_device_register" },
	{ 0x7aa1756e, "kvfree" },
	{ 0x9a152689, "param_ops_int" },
	{ 0x7fd46992, "snd_card_file_remove" },
	{ 0xc6bdb4d8, "pid_vnr" },
	{ 0x2dfdedea, "stream_open" },
	{ 0x983ac031, "remove_wait_queue" },
	{ 0x2478eb83, "snd_device_initialize" },
	{ 0xa0337a7f, "no_llseek" },
	{ 0xe17b7611, "snd_info_create_card_entry" },
	{ 0xf7802486, "__aeabi_uidivmod" },
	{ 0xb2e5ae4a, "snd_lookup_minor_data" },
	{ 0xc8275115, "seq_printf" },
	{ 0x4205ad24, "cancel_work_sync" },
	{ 0x353e3fa5, "__get_user_4" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0xae353d77, "arm_copy_from_user" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0x198788b4, "snd_lookup_oss_minor_data" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xd697e69a, "trace_hardirqs_on" },
	{ 0x51a910c0, "arm_copy_to_user" },
	{ 0xb9f5bdf6, "snd_ctl_unregister_ioctl" },
	{ 0x5bbe49f4, "__init_waitqueue_head" },
	{ 0xaad8c7d6, "default_wake_function" },
	{ 0xf65110e8, "_dev_warn" },
	{ 0x5f754e5a, "memset" },
	{ 0x988a694f, "snd_device_new" },
	{ 0x39a12ca7, "_raw_spin_unlock_irqrestore" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0x84eb8acb, "snd_unregister_device" },
	{ 0x8df3789f, "snd_oss_info_register" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x73e20c1c, "strlcpy" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0x8f595b11, "snd_major" },
	{ 0x7fa795f, "_dev_err" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x8dfefc0d, "kvmalloc_node" },
	{ 0x12b548f6, "module_put" },
	{ 0xbc10dd97, "__put_user_4" },
	{ 0xba3e2639, "snd_card_file_add" },
	{ 0x52cf4e10, "snd_ctl_register_ioctl" },
	{ 0xebcc8bdd, "put_device" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x1000e51, "schedule" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x2da81bff, "_raw_spin_lock_irq" },
	{ 0xc5029509, "snd_register_oss_device" },
	{ 0xebaa9dc8, "kmem_cache_alloc_trace" },
	{ 0x5f849a69, "_raw_spin_lock_irqsave" },
	{ 0x3dcf1ffa, "__wake_up" },
	{ 0x647af474, "prepare_to_wait_event" },
	{ 0xbeac96f7, "snd_unregister_oss_device" },
	{ 0x2cfde9a2, "warn_slowpath_fmt" },
	{ 0xa17bd3fc, "add_wait_queue" },
	{ 0x37a0cba, "kfree" },
	{ 0x9d669763, "memcpy" },
	{ 0xee2f893d, "snd_info_free_entry" },
	{ 0x36138fcf, "param_array_ops" },
	{ 0x49970de8, "finish_wait" },
	{ 0xc777b308, "snd_ctl_get_preferred_subdevice" },
	{ 0x8d4cee70, "snd_seq_device_new" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xb2d48a2e, "queue_work_on" },
	{ 0xe54dbfa5, "dev_set_name" },
	{ 0x1ee8d6d4, "refcount_inc_checked" },
	{ 0x88cc6f48, "snd_info_register" },
	{ 0x717bcdac, "try_module_get" },
	{ 0xe914e41e, "strcpy" },
};

MODULE_INFO(depends, "snd,snd-seq-device");


MODULE_INFO(srcversion, "7C4D705E6FE375585FFE3EC");
