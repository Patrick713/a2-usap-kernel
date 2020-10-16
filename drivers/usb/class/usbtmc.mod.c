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
	{ 0x83673cbf, "default_llseek" },
	{ 0x183c8383, "usb_deregister" },
	{ 0x7a8b7baa, "usb_register_driver" },
	{ 0x28118cb6, "__get_user_1" },
	{ 0xbb72d4fe, "__put_user_1" },
	{ 0xbc10dd97, "__put_user_4" },
	{ 0x353e3fa5, "__get_user_4" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x49970de8, "finish_wait" },
	{ 0x647af474, "prepare_to_wait_event" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x51a910c0, "arm_copy_to_user" },
	{ 0x4150b3e8, "usb_get_from_anchor" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0xf7802486, "__aeabi_uidivmod" },
	{ 0x2cfde9a2, "warn_slowpath_fmt" },
	{ 0xaf3c6135, "usb_unanchor_urb" },
	{ 0x8b5927a0, "down_timeout" },
	{ 0xb4471bfe, "down_trylock" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0xae353d77, "arm_copy_from_user" },
	{ 0xc5850110, "printk" },
	{ 0x5f754e5a, "memset" },
	{ 0x69e1d120, "usb_find_interface" },
	{ 0xd697e69a, "trace_hardirqs_on" },
	{ 0x2da81bff, "_raw_spin_lock_irq" },
	{ 0x586d5091, "usb_register_dev" },
	{ 0x2d6fcc06, "__kmalloc" },
	{ 0x1ee8d6d4, "refcount_inc_checked" },
	{ 0x93c7edeb, "usb_find_common_endpoints" },
	{ 0x5bbe49f4, "__init_waitqueue_head" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0xd6cf68f9, "usb_get_dev" },
	{ 0xf65110e8, "_dev_warn" },
	{ 0x9707a604, "kill_fasync" },
	{ 0x5770f36c, "usb_deregister_dev" },
	{ 0xc1e58a5f, "refcount_dec_and_test_checked" },
	{ 0x184a7893, "usb_free_urb" },
	{ 0x9f49ab55, "usb_alloc_urb" },
	{ 0x614782f1, "usb_anchor_empty" },
	{ 0x581cde4e, "up" },
	{ 0x3dcf1ffa, "__wake_up" },
	{ 0x7609cb29, "usb_anchor_urb" },
	{ 0x39a12ca7, "_raw_spin_unlock_irqrestore" },
	{ 0x5f849a69, "_raw_spin_lock_irqsave" },
	{ 0x6edec821, "usb_clear_halt" },
	{ 0xf9a482f9, "msleep" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xf9a45858, "usb_bulk_msg" },
	{ 0x78c6bf66, "usb_control_msg" },
	{ 0xebaa9dc8, "kmem_cache_alloc_trace" },
	{ 0xf4610713, "kmalloc_caches" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x3b00de61, "fasync_helper" },
	{ 0x37a0cba, "kfree" },
	{ 0x822bd109, "usb_put_dev" },
	{ 0xf88db2a2, "usb_kill_urb" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0xf47de486, "usb_kill_anchored_urbs" },
	{ 0xfaba248a, "usb_scuttle_anchored_urbs" },
	{ 0x3c72724e, "usb_wait_anchor_empty_timeout" },
	{ 0x7fa795f, "_dev_err" },
	{ 0x305d8a65, "usb_submit_urb" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("usb:v*p*d*dc*dsc*dp*icFEisc03ip00in*");
MODULE_ALIAS("usb:v*p*d*dc*dsc*dp*icFEisc03ip01in*");

MODULE_INFO(srcversion, "764F18DDB332DB82461D438");
