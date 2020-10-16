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
	{ 0xb077e70a, "clk_unprepare" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x4199fd5c, "skb_queue_head" },
	{ 0x31dc07ca, "hci_recv_diag" },
	{ 0xf4610713, "kmalloc_caches" },
	{ 0xf9a482f9, "msleep" },
	{ 0xff178f6, "__aeabi_idivmod" },
	{ 0x815588a6, "clk_enable" },
	{ 0x318848f2, "__pm_runtime_disable" },
	{ 0xbdf80cb7, "__hci_cmd_sync" },
	{ 0x9a152689, "param_ops_int" },
	{ 0x2b68bd2f, "del_timer" },
	{ 0xa0fbac79, "wake_up_bit" },
	{ 0x8096cd10, "__pm_runtime_use_autosuspend" },
	{ 0x937c4867, "hci_register_dev" },
	{ 0x8fac8f23, "__pm_runtime_suspend" },
	{ 0x26394ee8, "btbcm_patchram" },
	{ 0x91c04574, "btbcm_check_bdaddr" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0xce026c79, "hci_reset_dev" },
	{ 0x3ea6f72f, "tty_unthrottle" },
	{ 0x2516d0a7, "btbcm_set_bdaddr" },
	{ 0x218abdd7, "btbcm_write_pcm_int_params" },
	{ 0xd0bf263a, "__percpu_down_read" },
	{ 0xf7802486, "__aeabi_uidivmod" },
	{ 0x2a3aa678, "_test_and_clear_bit" },
	{ 0x5641485b, "tty_termios_encode_baud_rate" },
	{ 0x4205ad24, "cancel_work_sync" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0xb8d326c3, "serdev_device_close" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0xee946877, "hci_recv_frame" },
	{ 0xccae089c, "__pm_runtime_resume" },
	{ 0x44bae227, "bit_wait_timeout" },
	{ 0xc68ddd29, "hci_unregister_dev" },
	{ 0x610b1492, "__platform_driver_register" },
	{ 0xa120d33c, "tty_unregister_ldisc" },
	{ 0x526c3a6c, "jiffies" },
	{ 0x3b9ae61c, "serdev_device_write_buf" },
	{ 0x7b8c32f1, "bt_err" },
	{ 0xbce60500, "devm_regulator_bulk_get" },
	{ 0xa6102ad2, "regulator_bulk_enable" },
	{ 0x718b8b7, "bt_info" },
	{ 0x31e4ce85, "serdev_device_set_tiocm" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0x2d9ecd4c, "skb_queue_purge" },
	{ 0x59c7dbe, "device_get_match_data" },
	{ 0xf65110e8, "_dev_warn" },
	{ 0x5f754e5a, "memset" },
	{ 0x39a12ca7, "_raw_spin_unlock_irqrestore" },
	{ 0x867c273b, "__serdev_device_driver_register" },
	{ 0x9822e3a1, "__percpu_init_rwsem" },
	{ 0xf4ebb570, "tty_ldisc_flush" },
	{ 0x85c6e59a, "driver_unregister" },
	{ 0xfa6f3dbc, "n_tty_ioctl_helper" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0xfaf119af, "hci_alloc_dev" },
	{ 0xf68b0045, "skb_push" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0x4071b517, "out_of_line_wait_on_bit_timeout" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x85651c77, "serdev_device_write_flush" },
	{ 0xeb15054b, "devm_clk_put" },
	{ 0x2f746528, "device_property_read_u8_array" },
	{ 0x28f7fb79, "skb_pull" },
	{ 0x7fa795f, "_dev_err" },
	{ 0x1daf28ae, "percpu_up_write" },
	{ 0x2d7e8d70, "btbcm_read_pcm_int_params" },
	{ 0xac6659eb, "skb_queue_tail" },
	{ 0x8b149c36, "clk_is_match" },
	{ 0x3eabc38c, "_dev_info" },
	{ 0x6ff4c298, "device_property_read_u32_array" },
	{ 0x8ede545e, "regulator_bulk_disable" },
	{ 0x22bf2ba1, "__alloc_skb" },
	{ 0x12a38747, "usleep_range" },
	{ 0x6c3d134d, "pm_runtime_enable" },
	{ 0xa739ab9, "tty_driver_flush_buffer" },
	{ 0x4fb45f83, "devm_free_irq" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xd28c75bb, "kfree_skb" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0x6c0e2acc, "__pm_runtime_set_status" },
	{ 0xd77f2380, "devm_clk_get" },
	{ 0xebaa9dc8, "kmem_cache_alloc_trace" },
	{ 0x5f849a69, "_raw_spin_lock_irqsave" },
	{ 0x76d9b876, "clk_set_rate" },
	{ 0x62182082, "devm_gpiod_get_optional" },
	{ 0x2cfde9a2, "warn_slowpath_fmt" },
	{ 0xfd59bd79, "serdev_device_open" },
	{ 0x37a0cba, "kfree" },
	{ 0xb0488bf8, "__percpu_up_read" },
	{ 0x9d669763, "memcpy" },
	{ 0x3518599c, "gpiod_to_irq" },
	{ 0xae39ae3a, "serdev_device_set_flow_control" },
	{ 0xc11e1684, "btbcm_initialize" },
	{ 0x836b5cfc, "request_firmware" },
	{ 0x84b498ef, "gpiod_set_value_cansleep" },
	{ 0xbe0fab2a, "pm_runtime_set_autosuspend_delay" },
	{ 0x4ac49f05, "skb_dequeue" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0xb2d48a2e, "queue_work_on" },
	{ 0x9bfae00, "btbcm_finalize" },
	{ 0x6c22925c, "platform_get_irq" },
	{ 0xca54fee, "_test_and_set_bit" },
	{ 0xcb560b41, "hci_free_dev" },
	{ 0x6ebe366f, "ktime_get_mono_fast_ns" },
	{ 0x8ad83553, "platform_driver_unregister" },
	{ 0xdb7965ed, "serdev_device_set_baudrate" },
	{ 0x2508784d, "tty_register_ldisc" },
	{ 0x49ebacbd, "_clear_bit" },
	{ 0xeab3fd69, "skb_put" },
	{ 0xe544be36, "devm_kmalloc" },
	{ 0x5807a1a9, "percpu_down_write" },
	{ 0xab26b88f, "devm_request_threaded_irq" },
	{ 0x8b6486ce, "release_firmware" },
	{ 0xafcd556, "tty_set_termios" },
	{ 0x15fc4f06, "percpu_free_rwsem" },
};

MODULE_INFO(depends, "bluetooth,btbcm");

MODULE_ALIAS("of:N*T*Cbrcm,bcm20702a1");
MODULE_ALIAS("of:N*T*Cbrcm,bcm20702a1C*");
MODULE_ALIAS("of:N*T*Cbrcm,bcm4345c5");
MODULE_ALIAS("of:N*T*Cbrcm,bcm4345c5C*");
MODULE_ALIAS("of:N*T*Cbrcm,bcm4330-bt");
MODULE_ALIAS("of:N*T*Cbrcm,bcm4330-btC*");
MODULE_ALIAS("of:N*T*Cbrcm,bcm43438-bt");
MODULE_ALIAS("of:N*T*Cbrcm,bcm43438-btC*");
MODULE_ALIAS("of:N*T*Cbrcm,bcm43540-bt");
MODULE_ALIAS("of:N*T*Cbrcm,bcm43540-btC*");
MODULE_ALIAS("of:N*T*Cbrcm,bcm4335a0");
MODULE_ALIAS("of:N*T*Cbrcm,bcm4335a0C*");

MODULE_INFO(srcversion, "27647853FCD860D787A2E33");
