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
	{ 0xa24f23d8, "__request_module" },
	{ 0x480a268d, "device_remove_file" },
	{ 0xf4610713, "kmalloc_caches" },
	{ 0x2d6fcc06, "__kmalloc" },
	{ 0x97adb487, "utf8s_to_utf16s" },
	{ 0x349cba85, "strchr" },
	{ 0x9c1a848c, "usb_gadget_deactivate" },
	{ 0x97255bdf, "strlen" },
	{ 0x1bee5592, "usb_ep_queue" },
	{ 0xabf32f29, "utf16s_to_utf8s" },
	{ 0x20000329, "simple_strtoul" },
	{ 0xb1b939e, "kmemdup" },
	{ 0x9f0846da, "config_item_put" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0xcbc98a7d, "config_item_init_type_name" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0x78c6faa0, "usb_gadget_unregister_driver" },
	{ 0xb0a0bfe8, "usb_ep_alloc_request" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x2d39b0a7, "kstrdup" },
	{ 0x9964bd5c, "usb_gadget_set_state" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xfb384d37, "kasprintf" },
	{ 0xf65110e8, "_dev_warn" },
	{ 0x5f754e5a, "memset" },
	{ 0x77ae495d, "usb_speed_string" },
	{ 0x124bad4d, "kstrtobool" },
	{ 0x6a6e05bf, "kstrtou8" },
	{ 0x39a12ca7, "_raw_spin_unlock_irqrestore" },
	{ 0xe0319981, "usb_gadget_clear_selfpowered" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0x5d40674d, "usb_gadget_activate" },
	{ 0xc847167e, "config_group_init_type_name" },
	{ 0x94b2702, "init_uts_ns" },
	{ 0xb85eea8e, "configfs_register_subsystem" },
	{ 0x7fa795f, "_dev_err" },
	{ 0xd95a2cd, "device_create_file" },
	{ 0xbbbb2921, "usb_ep_dequeue" },
	{ 0x12b548f6, "module_put" },
	{ 0x7243790c, "config_item_set_name" },
	{ 0x3eabc38c, "_dev_info" },
	{ 0xded68068, "usb_gadget_vbus_draw" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x4af6ddf0, "kstrtou16" },
	{ 0x5d3fcd23, "usb_gadget_set_selfpowered" },
	{ 0x1734efa0, "configfs_unregister_subsystem" },
	{ 0x81cbdd08, "usb_ep_free_request" },
	{ 0xebaa9dc8, "kmem_cache_alloc_trace" },
	{ 0xdb9ca3c5, "_raw_spin_lock" },
	{ 0x5f849a69, "_raw_spin_lock_irqsave" },
	{ 0xceb5dd3d, "usb_gadget_ep_match_desc" },
	{ 0x2cfde9a2, "warn_slowpath_fmt" },
	{ 0x7f46d51f, "usb_gadget_probe_driver" },
	{ 0x37a0cba, "kfree" },
	{ 0x9d669763, "memcpy" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0xc358aaf8, "snprintf" },
	{ 0x1890681b, "config_group_init" },
	{ 0x717bcdac, "try_module_get" },
};

MODULE_INFO(depends, "udc-core");


MODULE_INFO(srcversion, "2B0A4175BE1FCFC00DDFBFA");
