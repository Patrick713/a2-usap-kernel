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
	{ 0x183c8383, "usb_deregister" },
	{ 0x7a8b7baa, "usb_register_driver" },
	{ 0x586d5091, "usb_register_dev" },
	{ 0x9f49ab55, "usb_alloc_urb" },
	{ 0x2d6fcc06, "__kmalloc" },
	{ 0x1e9c590a, "usb_find_common_endpoints_reverse" },
	{ 0x5bbe49f4, "__init_waitqueue_head" },
	{ 0xd6cf68f9, "usb_get_dev" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0x3eabc38c, "_dev_info" },
	{ 0x1a8f01de, "usb_poison_urb" },
	{ 0x5770f36c, "usb_deregister_dev" },
	{ 0x5f754e5a, "memset" },
	{ 0x1000e51, "schedule" },
	{ 0xae353d77, "arm_copy_from_user" },
	{ 0x2cfde9a2, "warn_slowpath_fmt" },
	{ 0x51a910c0, "arm_copy_to_user" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0xd697e69a, "trace_hardirqs_on" },
	{ 0x2da81bff, "_raw_spin_lock_irq" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x822bd109, "usb_put_dev" },
	{ 0x184a7893, "usb_free_urb" },
	{ 0xf88db2a2, "usb_kill_urb" },
	{ 0x49970de8, "finish_wait" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x647af474, "prepare_to_wait_event" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xfb384d37, "kasprintf" },
	{ 0x78c6bf66, "usb_control_msg" },
	{ 0x37a0cba, "kfree" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0x3375510b, "mutex_lock_interruptible" },
	{ 0x69e1d120, "usb_find_interface" },
	{ 0xaec4df8e, "nonseekable_open" },
	{ 0xebaa9dc8, "kmem_cache_alloc_trace" },
	{ 0xf4610713, "kmalloc_caches" },
	{ 0xc5850110, "printk" },
	{ 0x7fa795f, "_dev_err" },
	{ 0x305d8a65, "usb_submit_urb" },
	{ 0x39a12ca7, "_raw_spin_unlock_irqrestore" },
	{ 0x526c3a6c, "jiffies" },
	{ 0x9d669763, "memcpy" },
	{ 0x5f849a69, "_raw_spin_lock_irqsave" },
	{ 0x3dcf1ffa, "__wake_up" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("usb:v0694p0001d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "4A6FE42EF68DBD55DB3D75D");
