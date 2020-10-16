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
	{ 0x9a152689, "param_ops_int" },
	{ 0x183c8383, "usb_deregister" },
	{ 0x7a8b7baa, "usb_register_driver" },
	{ 0xceffc3cf, "device_create_bin_file" },
	{ 0xd95a2cd, "device_create_file" },
	{ 0x92c7ca64, "register_framebuffer" },
	{ 0xb1b939e, "kmemdup" },
	{ 0x7a890c8, "fb_alloc_cmap" },
	{ 0xc28c6b00, "usb_alloc_coherent" },
	{ 0x9f49ab55, "usb_alloc_urb" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0xfa8c2168, "fb_sys_read" },
	{ 0xf096bb54, "framebuffer_alloc" },
	{ 0x4cf24332, "__usb_get_extra_descriptor" },
	{ 0xc2e4c5c3, "usb_get_descriptor" },
	{ 0xd6cf68f9, "usb_get_dev" },
	{ 0x2023e1e3, "unregister_framebuffer" },
	{ 0xa5ac5d9b, "device_remove_bin_file" },
	{ 0x480a268d, "device_remove_file" },
	{ 0x184a7893, "usb_free_urb" },
	{ 0xf412120a, "usb_free_coherent" },
	{ 0xf0ef52e8, "down" },
	{ 0x2cfde9a2, "warn_slowpath_fmt" },
	{ 0x51a910c0, "arm_copy_to_user" },
	{ 0xae353d77, "arm_copy_from_user" },
	{ 0x12f6f69c, "fb_videomode_to_var" },
	{ 0xfdcc8a0e, "fb_find_best_display" },
	{ 0x20d65e40, "fb_find_nearest_mode" },
	{ 0xee58e970, "fb_add_videomode" },
	{ 0xdffc80fc, "vesa_modes" },
	{ 0x397edd5, "fb_edid_to_monspecs" },
	{ 0x78c6bf66, "usb_control_msg" },
	{ 0x4bd9c66c, "fb_deferred_io_init" },
	{ 0x671c0836, "fb_deferred_io_cleanup" },
	{ 0x6e61f97f, "fb_sys_write" },
	{ 0x3eabc38c, "_dev_info" },
	{ 0x40a9b349, "vzalloc" },
	{ 0xd6ee688f, "vmalloc" },
	{ 0x71c90087, "memcmp" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0xf76b0a59, "read_current_timer" },
	{ 0x5f754e5a, "memset" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0x305d8a65, "usb_submit_urb" },
	{ 0xf65110e8, "_dev_warn" },
	{ 0xd697e69a, "trace_hardirqs_on" },
	{ 0x2da81bff, "_raw_spin_lock_irq" },
	{ 0x8b5927a0, "down_timeout" },
	{ 0x98b71c6, "fb_dealloc_cmap" },
	{ 0x5e863e4c, "framebuffer_release" },
	{ 0x822bd109, "usb_put_dev" },
	{ 0x37a0cba, "kfree" },
	{ 0xc9561772, "fb_destroy_modelist" },
	{ 0x999e8297, "vfree" },
	{ 0xc07b0863, "fb_destroy_modedb" },
	{ 0x4205ad24, "cancel_work_sync" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x96c17136, "fb_var_to_videomode" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x611d5725, "sys_fillrect" },
	{ 0xe1cba094, "sys_copyarea" },
	{ 0xd32d5ae5, "sys_imageblit" },
	{ 0xb2d48a2e, "queue_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xb7897628, "remap_pfn_range" },
	{ 0x3744cf36, "vmalloc_to_pfn" },
	{ 0x7cdeeb4d, "pgprot_user" },
	{ 0xc358aaf8, "snprintf" },
	{ 0x7fa795f, "_dev_err" },
	{ 0x581cde4e, "up" },
	{ 0x39a12ca7, "_raw_spin_unlock_irqrestore" },
	{ 0x5f849a69, "_raw_spin_lock_irqsave" },
	{ 0xebaa9dc8, "kmem_cache_alloc_trace" },
	{ 0xf4610713, "kmalloc_caches" },
	{ 0x9d669763, "memcpy" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

MODULE_INFO(depends, "fb_sys_fops,sysfillrect,syscopyarea,sysimgblt");

MODULE_ALIAS("usb:v17E9p*d*dc*dsc*dp*icFFisc00ip00in*");

MODULE_INFO(srcversion, "7DBFD2A27B24702D870455F");
