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
	{ 0x2f357d74, "hid_unregister_driver" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x84ead130, "__hid_register_driver" },
	{ 0xdf9208c0, "alloc_workqueue" },
	{ 0x38ea3b28, "input_event" },
	{ 0xcf86cdac, "queue_delayed_work_on" },
	{ 0x3eabc38c, "_dev_info" },
	{ 0x7fa795f, "_dev_err" },
	{ 0x36cd1957, "usb_hub_find_child" },
	{ 0xf4e9c026, "hid_hw_start" },
	{ 0xa219a88d, "hid_open_report" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xebaa9dc8, "kmem_cache_alloc_trace" },
	{ 0xf4610713, "kmalloc_caches" },
	{ 0x78c6bf66, "usb_control_msg" },
	{ 0x37a0cba, "kfree" },
	{ 0x29d9f26e, "cancel_delayed_work_sync" },
	{ 0x4bbddbca, "hid_hw_stop" },
	{ 0x297acc01, "input_set_abs_params" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0x49ebacbd, "_clear_bit" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("hid:b0003g*v000004E7p00000009");
MODULE_ALIAS("hid:b0003g*v000004E7p00000030");

MODULE_INFO(srcversion, "36D0EF0ADBDAB21C6A41D73");