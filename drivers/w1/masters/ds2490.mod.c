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
	{ 0x183c8383, "usb_deregister" },
	{ 0x7a8b7baa, "usb_register_driver" },
	{ 0xf9a482f9, "msleep" },
	{ 0xb1b939e, "kmemdup" },
	{ 0x9d669763, "memcpy" },
	{ 0x2d6fcc06, "__kmalloc" },
	{ 0x7fa795f, "_dev_err" },
	{ 0x2a51ca8c, "w1_add_master_device" },
	{ 0x5f754e5a, "memset" },
	{ 0x6b60a022, "usb_set_interface" },
	{ 0xb96c0711, "usb_reset_configuration" },
	{ 0xd6cf68f9, "usb_get_dev" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0x3eabc38c, "_dev_info" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0xebaa9dc8, "kmem_cache_alloc_trace" },
	{ 0xf4610713, "kmalloc_caches" },
	{ 0x6edec821, "usb_clear_halt" },
	{ 0xfde8a122, "usb_interrupt_msg" },
	{ 0x78c6bf66, "usb_control_msg" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xf9a45858, "usb_bulk_msg" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xc5850110, "printk" },
	{ 0x37a0cba, "kfree" },
	{ 0x822bd109, "usb_put_dev" },
	{ 0xc9fda14c, "w1_remove_master_device" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

MODULE_INFO(depends, "wire");

MODULE_ALIAS("usb:v04FAp2490d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "A3927E6B35857A1B5A7AA39");
