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
	{ 0x586d5091, "usb_register_dev" },
	{ 0xc28c6b00, "usb_alloc_coherent" },
	{ 0x9f49ab55, "usb_alloc_urb" },
	{ 0x93c7edeb, "usb_find_common_endpoints" },
	{ 0xc0599906, "usb_get_intf" },
	{ 0xd6cf68f9, "usb_get_dev" },
	{ 0x5bbe49f4, "__init_waitqueue_head" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0xebaa9dc8, "kmem_cache_alloc_trace" },
	{ 0xf4610713, "kmalloc_caches" },
	{ 0x3eabc38c, "_dev_info" },
	{ 0xc1e58a5f, "refcount_dec_and_test_checked" },
	{ 0x1a8f01de, "usb_poison_urb" },
	{ 0x5770f36c, "usb_deregister_dev" },
	{ 0x2cfde9a2, "warn_slowpath_fmt" },
	{ 0x528c709d, "simple_read_from_buffer" },
	{ 0xc358aaf8, "snprintf" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x5f754e5a, "memset" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x49970de8, "finish_wait" },
	{ 0x6578533e, "prepare_to_wait" },
	{ 0x61b7b126, "simple_strtoull" },
	{ 0xae353d77, "arm_copy_from_user" },
	{ 0xad73041f, "autoremove_wake_function" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x9707a604, "kill_fasync" },
	{ 0x39a12ca7, "_raw_spin_unlock_irqrestore" },
	{ 0x5f849a69, "_raw_spin_lock_irqsave" },
	{ 0x7fa795f, "_dev_err" },
	{ 0x305d8a65, "usb_submit_urb" },
	{ 0x3dcf1ffa, "__wake_up" },
	{ 0xc5850110, "printk" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0x1ee8d6d4, "refcount_inc_checked" },
	{ 0x69e1d120, "usb_find_interface" },
	{ 0x3b00de61, "fasync_helper" },
	{ 0x822bd109, "usb_put_dev" },
	{ 0xecf8b294, "usb_put_intf" },
	{ 0x184a7893, "usb_free_urb" },
	{ 0xf412120a, "usb_free_coherent" },
	{ 0x37a0cba, "kfree" },
	{ 0xf88db2a2, "usb_kill_urb" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("usb:v0C45p1010d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "8DA70FE4A07D500139BFD5D");
