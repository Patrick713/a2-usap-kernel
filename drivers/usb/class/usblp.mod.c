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
	{ 0x9a152689, "param_ops_int" },
	{ 0x36ac7fd0, "noop_llseek" },
	{ 0x183c8383, "usb_deregister" },
	{ 0x7a8b7baa, "usb_register_driver" },
	{ 0x51a910c0, "arm_copy_to_user" },
	{ 0x1000e51, "schedule" },
	{ 0x2cfde9a2, "warn_slowpath_fmt" },
	{ 0xd697e69a, "trace_hardirqs_on" },
	{ 0x2da81bff, "_raw_spin_lock_irq" },
	{ 0xae353d77, "arm_copy_from_user" },
	{ 0x2d6fcc06, "__kmalloc" },
	{ 0x3eabc38c, "_dev_info" },
	{ 0x586d5091, "usb_register_dev" },
	{ 0x93c7edeb, "usb_find_common_endpoints" },
	{ 0xc0599906, "usb_get_intf" },
	{ 0x5f754e5a, "memset" },
	{ 0x5bbe49f4, "__init_waitqueue_head" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0xebaa9dc8, "kmem_cache_alloc_trace" },
	{ 0xf4610713, "kmalloc_caches" },
	{ 0x3d0f3514, "usb_autopm_put_interface" },
	{ 0xdebe62e1, "usb_autopm_get_interface" },
	{ 0x69e1d120, "usb_find_interface" },
	{ 0x7fa795f, "_dev_err" },
	{ 0x2f63e634, "usb_poison_anchored_urbs" },
	{ 0x5770f36c, "usb_deregister_dev" },
	{ 0xecf8b294, "usb_put_intf" },
	{ 0x37a0cba, "kfree" },
	{ 0xfb384d37, "kasprintf" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xee43fd9b, "___ratelimit" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0x983ac031, "remove_wait_queue" },
	{ 0x3375510b, "mutex_lock_interruptible" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0xa17bd3fc, "add_wait_queue" },
	{ 0xaad8c7d6, "default_wake_function" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x78c6bf66, "usb_control_msg" },
	{ 0x6b60a022, "usb_set_interface" },
	{ 0xf47de486, "usb_kill_anchored_urbs" },
	{ 0xc5850110, "printk" },
	{ 0x3dcf1ffa, "__wake_up" },
	{ 0x184a7893, "usb_free_urb" },
	{ 0xaf3c6135, "usb_unanchor_urb" },
	{ 0x305d8a65, "usb_submit_urb" },
	{ 0x7609cb29, "usb_anchor_urb" },
	{ 0x9f49ab55, "usb_alloc_urb" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x39a12ca7, "_raw_spin_unlock_irqrestore" },
	{ 0x5f849a69, "_raw_spin_lock_irqsave" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("usb:v*p*d*dc07dsc01dp01ic*isc*ip*in*");
MODULE_ALIAS("usb:v*p*d*dc07dsc01dp02ic*isc*ip*in*");
MODULE_ALIAS("usb:v*p*d*dc07dsc01dp03ic*isc*ip*in*");
MODULE_ALIAS("usb:v*p*d*dc*dsc*dp*ic07isc01ip01in*");
MODULE_ALIAS("usb:v*p*d*dc*dsc*dp*ic07isc01ip02in*");
MODULE_ALIAS("usb:v*p*d*dc*dsc*dp*ic07isc01ip03in*");
MODULE_ALIAS("usb:v04B8p0202d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "B176C123068348C792FF26D");
