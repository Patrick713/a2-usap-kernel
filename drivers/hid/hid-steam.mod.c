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
	{ 0xe73ad38e, "param_get_bool" },
	{ 0x2f357d74, "hid_unregister_driver" },
	{ 0x84ead130, "__hid_register_driver" },
	{ 0x3dc9fce7, "hid_hw_open" },
	{ 0xbf2ad2a5, "hid_add_device" },
	{ 0xf4e9c026, "hid_hw_start" },
	{ 0xed10eef9, "hid_allocate_device" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0xe544be36, "devm_kmalloc" },
	{ 0xa219a88d, "hid_open_report" },
	{ 0x2f1de84d, "power_supply_powers" },
	{ 0xbf0d88b8, "power_supply_register" },
	{ 0x738f3a77, "devm_kasprintf" },
	{ 0x73e20c1c, "strlcpy" },
	{ 0x7b7034ab, "power_supply_changed" },
	{ 0x38ea3b28, "input_event" },
	{ 0x11aa29ed, "hid_input_report" },
	{ 0x4bbddbca, "hid_hw_stop" },
	{ 0x66ab689e, "hid_hw_close" },
	{ 0x4205ad24, "cancel_work_sync" },
	{ 0x281ef26a, "hid_destroy_device" },
	{ 0x3eabc38c, "_dev_info" },
	{ 0xc0e66c25, "input_unregister_device" },
	{ 0xf66ad8b2, "power_supply_unregister" },
	{ 0x6091797f, "synchronize_rcu" },
	{ 0xb2d48a2e, "queue_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xfae5ad79, "param_set_bool" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0x39a12ca7, "_raw_spin_unlock_irqrestore" },
	{ 0x5f849a69, "_raw_spin_lock_irqsave" },
	{ 0x85ae30c8, "power_supply_get_drvdata" },
	{ 0x2de4f87b, "input_free_device" },
	{ 0x7b0629e7, "input_register_device" },
	{ 0x724b676, "input_alloc_absinfo" },
	{ 0x297acc01, "input_set_abs_params" },
	{ 0x643feb7f, "input_set_capability" },
	{ 0xea1c9521, "input_allocate_device" },
	{ 0xc5850110, "printk" },
	{ 0x5495392, "hid_debug" },
	{ 0xf10412ae, "hid_parse_report" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x5f754e5a, "memset" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x7fa795f, "_dev_err" },
	{ 0x37a0cba, "kfree" },
	{ 0xf9a482f9, "msleep" },
	{ 0x9d669763, "memcpy" },
	{ 0xe816fde9, "hid_alloc_report_buf" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("hid:b0003g*v000028DEp00001102");
MODULE_ALIAS("hid:b0003g*v000028DEp00001142");

MODULE_INFO(srcversion, "468FD05751829B331BDFF2E");
