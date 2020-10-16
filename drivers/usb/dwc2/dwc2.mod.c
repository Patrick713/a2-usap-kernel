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
	{ 0x2680385, "kmem_cache_destroy" },
	{ 0xf4610713, "kmalloc_caches" },
	{ 0x7e0e6f72, "usb_gadget_map_request" },
	{ 0x2d6fcc06, "__kmalloc" },
	{ 0xf9a482f9, "msleep" },
	{ 0xff178f6, "__aeabi_idivmod" },
	{ 0x815588a6, "clk_enable" },
	{ 0x266a3636, "usb_add_hcd" },
	{ 0x93b18eee, "debugfs_create_dir" },
	{ 0x76d11765, "mem_map" },
	{ 0x72ca3468, "usb_hcd_unmap_urb_for_dma" },
	{ 0xcd34ce55, "single_open" },
	{ 0x2b68bd2f, "del_timer" },
	{ 0x9412cf18, "usb_remove_hcd" },
	{ 0xea124bd1, "gcd" },
	{ 0x7238966a, "regulator_disable" },
	{ 0x6cd901c4, "arm_dma_ops" },
	{ 0xed9f15e8, "dma_set_mask" },
	{ 0xf7c048ae, "single_release" },
	{ 0x5d7776e5, "seq_puts" },
	{ 0x56b3271e, "usb_create_hcd" },
	{ 0x4cf17d9a, "hrtimer_cancel" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0xf7802486, "__aeabi_uidivmod" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xd2c46c56, "usb_del_gadget_udc" },
	{ 0x3876bbe5, "usb_gadget_giveback_request" },
	{ 0xc8275115, "seq_printf" },
	{ 0x4205ad24, "cancel_work_sync" },
	{ 0xb43f9365, "ktime_get" },
	{ 0xfffa3100, "sg_next" },
	{ 0x6562d506, "devm_ioremap_resource" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xae353d77, "arm_copy_from_user" },
	{ 0x1cb9d752, "usb_hcd_giveback_urb" },
	{ 0x13adb655, "dma_free_attrs" },
	{ 0x7c20652d, "debugfs_create_file" },
	{ 0x922f45a6, "__bitmap_clear" },
	{ 0x35edc130, "debugfs_remove_recursive" },
	{ 0xdc0adda3, "seq_read" },
	{ 0x63421a81, "devm_clk_get_optional" },
	{ 0xd697e69a, "trace_hardirqs_on" },
	{ 0x18c21cc4, "__devm_reset_control_get" },
	{ 0x346e15fb, "dma_set_coherent_mask" },
	{ 0x610b1492, "__platform_driver_register" },
	{ 0x526c3a6c, "jiffies" },
	{ 0x237142c3, "usb_hub_clear_tt_buffer" },
	{ 0x9964bd5c, "usb_gadget_set_state" },
	{ 0xb15dea52, "usb_put_hcd" },
	{ 0xbce60500, "devm_regulator_bulk_get" },
	{ 0xa6102ad2, "regulator_bulk_enable" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0x6222ac2d, "usb_gadget_unmap_request" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0xe6d81d31, "hrtimer_start_range_ns" },
	{ 0xf65110e8, "_dev_warn" },
	{ 0x5f754e5a, "memset" },
	{ 0xf9281f01, "dmam_free_coherent" },
	{ 0x77ae495d, "usb_speed_string" },
	{ 0xd6c55d36, "usb_hcd_link_urb_to_ep" },
	{ 0x39a12ca7, "_raw_spin_unlock_irqrestore" },
	{ 0x64127b67, "bitmap_find_next_zero_area_off" },
	{ 0xc5850110, "printk" },
	{ 0xacb31ecf, "_raw_spin_trylock" },
	{ 0x3c7ad7ac, "of_find_property" },
	{ 0x84b183ae, "strncmp" },
	{ 0xc2bb1e6d, "dma_direct_map_page" },
	{ 0xd494a4b6, "dma_alloc_attrs" },
	{ 0xbb9f1908, "kmem_cache_free" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0xcb6ba75f, "device_property_read_string" },
	{ 0xb2210d64, "reset_control_deassert" },
	{ 0x7e64181d, "usb_calc_bus_time" },
	{ 0x9ec75761, "platform_get_resource" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x8e865d3c, "arm_delay_ops" },
	{ 0x7fa795f, "_dev_err" },
	{ 0x3884d478, "of_match_device" },
	{ 0x42160169, "flush_workqueue" },
	{ 0x2196324, "__aeabi_idiv" },
	{ 0xe523ad75, "synchronize_irq" },
	{ 0xef17a5a0, "usb_hcd_check_unlink_urb" },
	{ 0x615911d7, "__bitmap_set" },
	{ 0x3eabc38c, "_dev_info" },
	{ 0x4007496c, "kmem_cache_alloc" },
	{ 0xe2373f94, "debugfs_create_regset32" },
	{ 0x6ff4c298, "device_property_read_u32_array" },
	{ 0x8ede545e, "regulator_bulk_disable" },
	{ 0x12a38747, "usleep_range" },
	{ 0x334d300e, "usb_add_gadget_udc" },
	{ 0xcf86cdac, "queue_delayed_work_on" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x77f6f183, "kmalloc_order_trace" },
	{ 0xd2a7558b, "usb_hcd_map_urb_for_dma" },
	{ 0x8a7d1c31, "high_memory" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0xf122d9df, "usb_ep_set_maxpacket_limit" },
	{ 0x76d31a13, "dev_driver_string" },
	{ 0x1544a9d8, "usb_get_dr_mode" },
	{ 0xd089e9e7, "devm_regulator_get_optional" },
	{ 0xebaa9dc8, "kmem_cache_alloc_trace" },
	{ 0xdb9ca3c5, "_raw_spin_lock" },
	{ 0x5f849a69, "_raw_spin_lock_irqsave" },
	{ 0x4c0e8130, "kmem_cache_create" },
	{ 0x19a304ba, "usb_disabled" },
	{ 0x2cfde9a2, "warn_slowpath_fmt" },
	{ 0x167c65ac, "seq_lseek" },
	{ 0x37a0cba, "kfree" },
	{ 0x6c4b6684, "reset_control_assert" },
	{ 0x9d669763, "memcpy" },
	{ 0x18ddfa86, "hrtimer_init" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0xa32230b4, "dmam_alloc_attrs" },
	{ 0xb2d48a2e, "queue_work_on" },
	{ 0xc358aaf8, "snprintf" },
	{ 0x6c22925c, "platform_get_irq" },
	{ 0x8ad83553, "platform_driver_unregister" },
	{ 0x1397e7fc, "usb_wakeup_enabled_descendants" },
	{ 0x6bdbc0c6, "usb_hcd_unlink_urb_from_ep" },
	{ 0x49ebacbd, "_clear_bit" },
	{ 0x607d38e8, "usb_hcd_resume_root_hub" },
	{ 0xe544be36, "devm_kmalloc" },
	{ 0xec3d2e1b, "trace_hardirqs_off" },
	{ 0xab26b88f, "devm_request_threaded_irq" },
	{ 0xdf9208c0, "alloc_workqueue" },
	{ 0x67b83f59, "regulator_enable" },
};

MODULE_INFO(depends, "udc-core");

MODULE_ALIAS("of:N*T*Cbrcm,bcm2835-usb");
MODULE_ALIAS("of:N*T*Cbrcm,bcm2835-usbC*");
MODULE_ALIAS("of:N*T*Chisilicon,hi6220-usb");
MODULE_ALIAS("of:N*T*Chisilicon,hi6220-usbC*");
MODULE_ALIAS("of:N*T*Crockchip,rk3066-usb");
MODULE_ALIAS("of:N*T*Crockchip,rk3066-usbC*");
MODULE_ALIAS("of:N*T*Clantiq,arx100-usb");
MODULE_ALIAS("of:N*T*Clantiq,arx100-usbC*");
MODULE_ALIAS("of:N*T*Clantiq,xrx200-usb");
MODULE_ALIAS("of:N*T*Clantiq,xrx200-usbC*");
MODULE_ALIAS("of:N*T*Csnps,dwc2");
MODULE_ALIAS("of:N*T*Csnps,dwc2C*");
MODULE_ALIAS("of:N*T*Csamsung,s3c6400-hsotg");
MODULE_ALIAS("of:N*T*Csamsung,s3c6400-hsotgC*");
MODULE_ALIAS("of:N*T*Camlogic,meson8-usb");
MODULE_ALIAS("of:N*T*Camlogic,meson8-usbC*");
MODULE_ALIAS("of:N*T*Camlogic,meson8b-usb");
MODULE_ALIAS("of:N*T*Camlogic,meson8b-usbC*");
MODULE_ALIAS("of:N*T*Camlogic,meson-gxbb-usb");
MODULE_ALIAS("of:N*T*Camlogic,meson-gxbb-usbC*");
MODULE_ALIAS("of:N*T*Camlogic,meson-g12a-usb");
MODULE_ALIAS("of:N*T*Camlogic,meson-g12a-usbC*");
MODULE_ALIAS("of:N*T*Camcc,dwc-otg");
MODULE_ALIAS("of:N*T*Camcc,dwc-otgC*");
MODULE_ALIAS("of:N*T*Cst,stm32f4x9-fsotg");
MODULE_ALIAS("of:N*T*Cst,stm32f4x9-fsotgC*");
MODULE_ALIAS("of:N*T*Cst,stm32f4x9-hsotg");
MODULE_ALIAS("of:N*T*Cst,stm32f4x9-hsotgC*");
MODULE_ALIAS("of:N*T*Cst,stm32f7-hsotg");
MODULE_ALIAS("of:N*T*Cst,stm32f7-hsotgC*");

MODULE_INFO(srcversion, "80E7756E7898E37110D7922");
