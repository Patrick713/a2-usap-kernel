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
	{ 0x36ac7fd0, "noop_llseek" },
	{ 0x183c8383, "usb_deregister" },
	{ 0x7a8b7baa, "usb_register_driver" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x526c3a6c, "jiffies" },
	{ 0xf38271ca, "rc_keydown" },
	{ 0x66453e98, "rc_keyup" },
	{ 0x39a12ca7, "_raw_spin_unlock_irqrestore" },
	{ 0x5f849a69, "_raw_spin_lock_irqsave" },
	{ 0xb43f9365, "ktime_get" },
	{ 0x38ea3b28, "input_event" },
	{ 0xd03009bf, "rc_free_device" },
	{ 0x586d5091, "usb_register_dev" },
	{ 0x7fa795f, "_dev_err" },
	{ 0xf63fc023, "sysfs_create_group" },
	{ 0x2de4f87b, "input_free_device" },
	{ 0x297acc01, "input_set_abs_params" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xa8dadf72, "rc_register_device" },
	{ 0x3cd17765, "rc_allocate_device" },
	{ 0x7b0629e7, "input_register_device" },
	{ 0xdd0a2ba2, "strlcat" },
	{ 0xea1c9521, "input_allocate_device" },
	{ 0x5bbe49f4, "__init_waitqueue_head" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0x9f49ab55, "usb_alloc_urb" },
	{ 0xb08828fb, "usb_ifnum_to_if" },
	{ 0xd6cf68f9, "usb_get_dev" },
	{ 0x735f33b0, "mutex_is_locked" },
	{ 0xf65110e8, "_dev_warn" },
	{ 0x184a7893, "usb_free_urb" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0x5770f36c, "usb_deregister_dev" },
	{ 0xe01f1504, "rc_unregister_device" },
	{ 0xc0e66c25, "input_unregister_device" },
	{ 0x822bd109, "usb_put_dev" },
	{ 0xa4040d67, "sysfs_remove_group" },
	{ 0xc358aaf8, "snprintf" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0x97255bdf, "strlen" },
	{ 0x3eabc38c, "_dev_info" },
	{ 0xeea0399, "strscpy" },
	{ 0x5f754e5a, "memset" },
	{ 0xae353d77, "arm_copy_from_user" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xebaa9dc8, "kmem_cache_alloc_trace" },
	{ 0xf4610713, "kmalloc_caches" },
	{ 0xee43fd9b, "___ratelimit" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x37a0cba, "kfree" },
	{ 0x1caf4c2b, "wait_for_completion_interruptible" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0x69e1d120, "usb_find_interface" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0xe6c12171, "complete" },
	{ 0xf88db2a2, "usb_kill_urb" },
	{ 0xc45757c4, "rc_g_keycode_from_table" },
	{ 0xc5850110, "printk" },
	{ 0x305d8a65, "usb_submit_urb" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("usb:v15C2pFFDCd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v15C2p0034d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v15C2p0035d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v15C2p0036d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v15C2p0037d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v15C2p0038d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v15C2p0039d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v15C2p003Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v15C2p003Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v15C2p003Cd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v15C2p003Dd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v15C2p003Ed*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v15C2p003Fd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v15C2p0040d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v15C2p0041d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v15C2p0042d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v15C2p0043d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v15C2p0044d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v15C2p0045d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v15C2p0046d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "F3B6BBB89337C1129902B18");
