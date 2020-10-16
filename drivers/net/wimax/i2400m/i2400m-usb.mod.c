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
	{ 0x956c0e1f, "i2400m_cmd_enter_powersave" },
	{ 0xf4610713, "kmalloc_caches" },
	{ 0xf9a482f9, "msleep" },
	{ 0xb9d294e9, "i2400m_dev_reset_handle" },
	{ 0x93b18eee, "debugfs_create_dir" },
	{ 0x349cba85, "strchr" },
	{ 0xa47a878, "debugfs_create_u8" },
	{ 0x8724cab2, "usb_init_urb" },
	{ 0xf88db2a2, "usb_kill_urb" },
	{ 0x6f707527, "i2400m_tx_msg_get" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0xd3edee08, "i2400m_rx" },
	{ 0xdebe62e1, "usb_autopm_get_interface" },
	{ 0x85df9b6c, "strsep" },
	{ 0x3eee1530, "usb_enable_autosuspend" },
	{ 0xd28de09a, "usb_get_urb" },
	{ 0x35edc130, "debugfs_remove_recursive" },
	{ 0x2d39b0a7, "kstrdup" },
	{ 0xdd34010a, "kthread_create_on_node" },
	{ 0x526c3a6c, "jiffies" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xe482a5a0, "param_ops_string" },
	{ 0x718ae3f2, "__netdev_alloc_skb" },
	{ 0x5bbe49f4, "__init_waitqueue_head" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0x73a84444, "i2400m_setup" },
	{ 0xf65110e8, "_dev_warn" },
	{ 0x5f754e5a, "memset" },
	{ 0x5fe52845, "i2400m_is_boot_barker" },
	{ 0x3f7eb755, "i2400m_post_reset" },
	{ 0x39a12ca7, "_raw_spin_unlock_irqrestore" },
	{ 0x183c8383, "usb_deregister" },
	{ 0xc5850110, "printk" },
	{ 0x6d0a78c4, "ethtool_op_get_link" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0x7bfbe88e, "kthread_stop" },
	{ 0x71c90087, "memcmp" },
	{ 0xde31e14c, "debugfs_create_size_t" },
	{ 0xbadd1a4b, "free_netdev" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x73e20c1c, "strlcpy" },
	{ 0xd4a60364, "i2400m_netdev_setup" },
	{ 0x7fa795f, "_dev_err" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x9dbd5d8d, "i2400m_unknown_barker" },
	{ 0xb1ed7374, "i2400m_pre_reset" },
	{ 0x280b64f0, "usb_queue_reset_device" },
	{ 0x4059792f, "print_hex_dump" },
	{ 0x8a4d2069, "skb_copy_expand" },
	{ 0x305d8a65, "usb_submit_urb" },
	{ 0xd6cf68f9, "usb_get_dev" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xaebeda32, "usb_reset_device" },
	{ 0xf9a45858, "usb_bulk_msg" },
	{ 0x822bd109, "usb_put_dev" },
	{ 0x1000e51, "schedule" },
	{ 0xd28c75bb, "kfree_skb" },
	{ 0x6edec821, "usb_clear_halt" },
	{ 0x5c5b2589, "alloc_netdev_mqs" },
	{ 0xc104368b, "wait_for_completion_interruptible_timeout" },
	{ 0x76d31a13, "dev_driver_string" },
	{ 0xb35d51ab, "wake_up_process" },
	{ 0xebaa9dc8, "kmem_cache_alloc_trace" },
	{ 0x5f849a69, "_raw_spin_lock_irqsave" },
	{ 0xb00b793c, "i2400m_bm_cmd_prepare" },
	{ 0x3dcf1ffa, "__wake_up" },
	{ 0xbd2190cf, "i2400m_release" },
	{ 0xb3f7646e, "kthread_should_stop" },
	{ 0x647af474, "prepare_to_wait_event" },
	{ 0x2cfde9a2, "warn_slowpath_fmt" },
	{ 0x451d6595, "i2400m_init" },
	{ 0x37a0cba, "kfree" },
	{ 0x9d669763, "memcpy" },
	{ 0x6128b5fc, "__printk_ratelimit" },
	{ 0x7a8b7baa, "usb_register_driver" },
	{ 0x49970de8, "finish_wait" },
	{ 0xbe0fab2a, "pm_runtime_set_autosuspend_delay" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xe6c12171, "complete" },
	{ 0xc358aaf8, "snprintf" },
	{ 0x99bb8806, "memmove" },
	{ 0x6ebe366f, "ktime_get_mono_fast_ns" },
	{ 0xeab3fd69, "skb_put" },
	{ 0x35084e74, "i2400m_tx_msg_sent" },
	{ 0x184a7893, "usb_free_urb" },
	{ 0x3d0f3514, "usb_autopm_put_interface" },
	{ 0x9f49ab55, "usb_alloc_urb" },
};

MODULE_INFO(depends, "i2400m");

MODULE_ALIAS("usb:v8086p0186d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v8086p0188d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v8087p07D6d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v8087p07D7d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v8087p07D9d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v8086p0187d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v8086p0181d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v8086p1403d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v8086p1405d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v8086p0180d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v8086p0182d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v8086p1406d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v8086p1403d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "0234F85B691422B922C97D2");
