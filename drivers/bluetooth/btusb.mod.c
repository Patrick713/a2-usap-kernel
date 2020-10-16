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
	{ 0xfe41fb0b, "param_ops_bool" },
	{ 0x183c8383, "usb_deregister" },
	{ 0x7a8b7baa, "usb_register_driver" },
	{ 0x3ce4ca6f, "disable_irq" },
	{ 0x4150b3e8, "usb_get_from_anchor" },
	{ 0xe4fde370, "btintel_set_diag" },
	{ 0xf9304dc6, "btintel_hw_error" },
	{ 0x7f7f94b4, "btintel_set_bdaddr" },
	{ 0xe6b20acb, "btintel_set_diag_mfg" },
	{ 0xef13f217, "btbcm_setup_apple" },
	{ 0xb08828fb, "usb_ifnum_to_if" },
	{ 0x2516d0a7, "btbcm_set_bdaddr" },
	{ 0x48d635c7, "btbcm_setup_patchram" },
	{ 0x285132b5, "btrtl_shutdown_realtek" },
	{ 0xc125e5e3, "btrtl_setup_realtek" },
	{ 0x3eee1530, "usb_enable_autosuspend" },
	{ 0x316b0a97, "usb_match_id" },
	{ 0xfc07b551, "of_property_read_variable_u16_array" },
	{ 0x937c4867, "hci_register_dev" },
	{ 0x5262881b, "usb_driver_claim_interface" },
	{ 0xab26b88f, "devm_request_threaded_irq" },
	{ 0x7522f3ba, "irq_modify_status" },
	{ 0x2724257d, "of_irq_get_byname" },
	{ 0x3884d478, "of_match_device" },
	{ 0x7e71294b, "gpiod_get_optional" },
	{ 0xfaf119af, "hci_alloc_dev" },
	{ 0x5bbe49f4, "__init_waitqueue_head" },
	{ 0x5f754e5a, "memset" },
	{ 0xe544be36, "devm_kmalloc" },
	{ 0x7fa795f, "_dev_err" },
	{ 0x6b60a022, "usb_set_interface" },
	{ 0x31dc07ca, "hci_recv_diag" },
	{ 0xfcec0987, "enable_irq" },
	{ 0xd697e69a, "trace_hardirqs_on" },
	{ 0x2da81bff, "_raw_spin_lock_irq" },
	{ 0x22bf2ba1, "__alloc_skb" },
	{ 0xeab3fd69, "skb_put" },
	{ 0x4071b517, "out_of_line_wait_on_bit_timeout" },
	{ 0x44bae227, "bit_wait_timeout" },
	{ 0xa7b9df8e, "btintel_set_event_mask" },
	{ 0xba7cb589, "btintel_load_ddc_config" },
	{ 0x2251e29c, "btintel_send_intel_reset" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0xda7dbc3, "btintel_download_firmware" },
	{ 0x57efbfd, "btintel_read_boot_params" },
	{ 0x8f809c7a, "btintel_version_info" },
	{ 0xb43f9365, "ktime_get" },
	{ 0xa0fbac79, "wake_up_bit" },
	{ 0xee946877, "hci_recv_frame" },
	{ 0xce2840e7, "irq_set_irq_wake" },
	{ 0x27bbf221, "disable_irq_nosync" },
	{ 0x2a3aa678, "_test_and_clear_bit" },
	{ 0x2d6fcc06, "__kmalloc" },
	{ 0xfaba248a, "usb_scuttle_anchored_urbs" },
	{ 0x3d0f3514, "usb_autopm_put_interface" },
	{ 0xdebe62e1, "usb_autopm_get_interface" },
	{ 0x4205ad24, "cancel_work_sync" },
	{ 0xa48f48a9, "btintel_check_bdaddr" },
	{ 0xd6baed80, "btintel_set_event_mask_mfg" },
	{ 0xc6e40b8c, "btintel_exit_mfg" },
	{ 0x8b6486ce, "release_firmware" },
	{ 0x71c90087, "memcmp" },
	{ 0x6bafbbe6, "__hci_cmd_sync_ev" },
	{ 0xc82e7d43, "btintel_enter_mfg" },
	{ 0x836b5cfc, "request_firmware" },
	{ 0xc358aaf8, "snprintf" },
	{ 0x718b8b7, "bt_info" },
	{ 0x76243ac6, "btintel_read_version" },
	{ 0xf9a45858, "usb_bulk_msg" },
	{ 0x78c6bf66, "usb_control_msg" },
	{ 0x9d669763, "memcpy" },
	{ 0xf9a482f9, "msleep" },
	{ 0x84b498ef, "gpiod_set_value_cansleep" },
	{ 0xca54fee, "_test_and_set_bit" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0x49ebacbd, "_clear_bit" },
	{ 0xbdf80cb7, "__hci_cmd_sync" },
	{ 0xc967f035, "usb_driver_release_interface" },
	{ 0xcb560b41, "hci_free_dev" },
	{ 0x694174f5, "gpiod_put" },
	{ 0xc68ddd29, "hci_unregister_dev" },
	{ 0xf47de486, "usb_kill_anchored_urbs" },
	{ 0xb2d48a2e, "queue_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xd28c75bb, "kfree_skb" },
	{ 0x37a0cba, "kfree" },
	{ 0x39a12ca7, "_raw_spin_unlock_irqrestore" },
	{ 0x5f849a69, "_raw_spin_lock_irqsave" },
	{ 0x184a7893, "usb_free_urb" },
	{ 0xebaa9dc8, "kmem_cache_alloc_trace" },
	{ 0xf4610713, "kmalloc_caches" },
	{ 0x7b8c32f1, "bt_err" },
	{ 0xaf3c6135, "usb_unanchor_urb" },
	{ 0x305d8a65, "usb_submit_urb" },
	{ 0x6ebe366f, "ktime_get_mono_fast_ns" },
	{ 0x7609cb29, "usb_anchor_urb" },
	{ 0x9f49ab55, "usb_alloc_urb" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

MODULE_INFO(depends, "btintel,btbcm,btrtl,bluetooth");

MODULE_ALIAS("of:N*T*Cusb1286,204e");
MODULE_ALIAS("of:N*T*Cusb1286,204eC*");
MODULE_ALIAS("of:N*T*Cusbcf3,e300");
MODULE_ALIAS("of:N*T*Cusbcf3,e300C*");
MODULE_ALIAS("of:N*T*Cusb4ca,301a");
MODULE_ALIAS("of:N*T*Cusb4ca,301aC*");
MODULE_ALIAS("usb:v*p*d*dcE0dsc01dp01ic*isc*ip*in*");
MODULE_ALIAS("usb:v*p*d*dcE0dsc01dp04ic*isc*ip*in*");
MODULE_ALIAS("usb:v*p*d*dc*dsc*dp*icE0isc01ip01in*");
MODULE_ALIAS("usb:v05ACp*d*dc*dsc*dp*icFFisc01ip01in*");
MODULE_ALIAS("usb:v0E8Dp763Fd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0A5Cp21E1d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v05ACp8213d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v05ACp8215d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v05ACp8218d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v05ACp821Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v05ACp821Fd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v05ACp821Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v05ACp8281d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v057Cp3800d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04BFp030Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v044Ep3001d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v044Ep3002d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BDBp1002d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0C10p0000d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v413Cp8197d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v19FFp0239d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v105Bp*d*dc*dsc*dp*icFFisc01ip01in*");
MODULE_ALIAS("usb:v0BB4p*d*dc*dsc*dp*icFFisc01ip01in*");
MODULE_ALIAS("usb:v0489p*d*dc*dsc*dp*icFFisc01ip01in*");
MODULE_ALIAS("usb:v04CAp*d*dc*dsc*dp*icFFisc01ip01in*");
MODULE_ALIAS("usb:v0A5Cp*d*dc*dsc*dp*icFFisc01ip01in*");
MODULE_ALIAS("usb:v0B05p*d*dc*dsc*dp*icFFisc01ip01in*");
MODULE_ALIAS("usb:v050Dp*d*dc*dsc*dp*icFFisc01ip01in*");
MODULE_ALIAS("usb:v13D3p*d*dc*dsc*dp*icFFisc01ip01in*");
MODULE_ALIAS("usb:v413Cp*d*dc*dsc*dp*icFFisc01ip01in*");
MODULE_ALIAS("usb:v0930p*d*dc*dsc*dp*icFFisc01ip01in*");
MODULE_ALIAS("usb:v8087p0A5Ad*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "B5DF9CB7F64EBCD65160359");
