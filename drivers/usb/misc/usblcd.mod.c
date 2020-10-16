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
	{ 0x36ac7fd0, "noop_llseek" },
	{ 0x183c8383, "usb_deregister" },
	{ 0x7a8b7baa, "usb_register_driver" },
	{ 0x97255bdf, "strlen" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xf65110e8, "_dev_warn" },
	{ 0x586d5091, "usb_register_dev" },
	{ 0x2d6fcc06, "__kmalloc" },
	{ 0x93c7edeb, "usb_find_common_endpoints" },
	{ 0xd6cf68f9, "usb_get_dev" },
	{ 0x5bbe49f4, "__init_waitqueue_head" },
	{ 0x6f013ecd, "__init_rwsem" },
	{ 0xebaa9dc8, "kmem_cache_alloc_trace" },
	{ 0xf4610713, "kmalloc_caches" },
	{ 0xc5850110, "printk" },
	{ 0xdebe62e1, "usb_autopm_get_interface" },
	{ 0x1ee8d6d4, "refcount_inc_checked" },
	{ 0x69e1d120, "usb_find_interface" },
	{ 0x3d0f3514, "usb_autopm_put_interface" },
	{ 0x3eabc38c, "_dev_info" },
	{ 0xc1e58a5f, "refcount_dec_and_test_checked" },
	{ 0x7e0ce0c3, "up_write" },
	{ 0x4253aa7e, "down_write" },
	{ 0x5770f36c, "usb_deregister_dev" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x51a910c0, "arm_copy_to_user" },
	{ 0xf9a45858, "usb_bulk_msg" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xaf3c6135, "usb_unanchor_urb" },
	{ 0x7fa795f, "_dev_err" },
	{ 0x5f754e5a, "memset" },
	{ 0x2cfde9a2, "warn_slowpath_fmt" },
	{ 0xa7b3181c, "up_read" },
	{ 0x184a7893, "usb_free_urb" },
	{ 0x305d8a65, "usb_submit_urb" },
	{ 0x7609cb29, "usb_anchor_urb" },
	{ 0xae353d77, "arm_copy_from_user" },
	{ 0xc28c6b00, "usb_alloc_coherent" },
	{ 0x9f49ab55, "usb_alloc_urb" },
	{ 0xfb1d7438, "down_read" },
	{ 0xca5a7528, "down_interruptible" },
	{ 0x581cde4e, "up" },
	{ 0xf412120a, "usb_free_coherent" },
	{ 0x37a0cba, "kfree" },
	{ 0x822bd109, "usb_put_dev" },
	{ 0xf47de486, "usb_kill_anchored_urbs" },
	{ 0x3c72724e, "usb_wait_anchor_empty_timeout" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("usb:v10D2p*d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "85D98268F2460D4EEB4B5F8");
