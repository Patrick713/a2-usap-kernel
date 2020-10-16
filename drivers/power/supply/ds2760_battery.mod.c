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
	{ 0x8a331d2b, "param_ops_uint" },
	{ 0xbbc4b581, "w1_unregister_family" },
	{ 0xd7b783a3, "w1_register_family" },
	{ 0x7fa795f, "_dev_err" },
	{ 0xdf9208c0, "alloc_workqueue" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xbf0d88b8, "power_supply_register" },
	{ 0xfc60f402, "of_property_read_variable_u32_array" },
	{ 0x3c7ad7ac, "of_find_property" },
	{ 0xc358aaf8, "snprintf" },
	{ 0xe544be36, "devm_kmalloc" },
	{ 0xd7c5fc2f, "_dev_notice" },
	{ 0xcf86cdac, "queue_delayed_work_on" },
	{ 0xd0146ae3, "power_supply_am_i_supplied" },
	{ 0x7b7034ab, "power_supply_changed" },
	{ 0xf65110e8, "_dev_warn" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x526c3a6c, "jiffies" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x2196324, "__aeabi_idiv" },
	{ 0xea4a09cb, "mod_delayed_work_on" },
	{ 0x85ae30c8, "power_supply_get_drvdata" },
	{ 0xf66ad8b2, "power_supply_unregister" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x29d9f26e, "cancel_delayed_work_sync" },
	{ 0x53368e08, "w1_write_block" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0x163de26f, "w1_read_block" },
	{ 0xacccdef1, "w1_write_8" },
	{ 0xe90193b4, "w1_reset_select_slave" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

MODULE_INFO(depends, "wire");


MODULE_INFO(srcversion, "CEBED0968B0BEB73D67F4D8");
