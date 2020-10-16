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
	{ 0x8a331d2b, "param_ops_uint" },
	{ 0x36138fcf, "param_array_ops" },
	{ 0x6a60169e, "usbatm_usb_disconnect" },
	{ 0x4a820490, "param_ops_byte" },
	{ 0x183c8383, "usb_deregister" },
	{ 0x7a8b7baa, "usb_register_driver" },
	{ 0x8b6486ce, "release_firmware" },
	{ 0x4302d0eb, "free_pages" },
	{ 0xf65110e8, "_dev_warn" },
	{ 0xcc5005fe, "msleep_interruptible" },
	{ 0xf9a45858, "usb_bulk_msg" },
	{ 0x6a5cb5ee, "__get_free_pages" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0xaebeda32, "usb_reset_device" },
	{ 0x9f49ab55, "usb_alloc_urb" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x6b60a022, "usb_set_interface" },
	{ 0x9d669763, "memcpy" },
	{ 0xebaa9dc8, "kmem_cache_alloc_trace" },
	{ 0xf4610713, "kmalloc_caches" },
	{ 0x5262881b, "usb_driver_claim_interface" },
	{ 0xa91287b3, "atm_dev_signal_change" },
	{ 0xb2d48a2e, "queue_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x2b68bd2f, "del_timer" },
	{ 0x71c90087, "memcmp" },
	{ 0x3eabc38c, "_dev_info" },
	{ 0x7fa795f, "_dev_err" },
	{ 0x836b5cfc, "request_firmware" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x37a0cba, "kfree" },
	{ 0xc967f035, "usb_driver_release_interface" },
	{ 0xb08828fb, "usb_ifnum_to_if" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x11f7ed4c, "hex_to_bin" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x526c3a6c, "jiffies" },
	{ 0x305d8a65, "usb_submit_urb" },
	{ 0xe3ea52a2, "usb_string" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xc5850110, "printk" },
	{ 0x78c6bf66, "usb_control_msg" },
	{ 0x92b57248, "flush_work" },
	{ 0x184a7893, "usb_free_urb" },
	{ 0xf88db2a2, "usb_kill_urb" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0xfa9668fa, "usbatm_usb_probe" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

MODULE_INFO(depends, "usbatm,atm");

MODULE_ALIAS("usb:v06B9p4061d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "830063AB5B56DA3DC21842C");
