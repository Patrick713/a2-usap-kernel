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
	{ 0x8ad83553, "platform_driver_unregister" },
	{ 0x610b1492, "__platform_driver_register" },
	{ 0x8e865d3c, "arm_delay_ops" },
	{ 0x7791c185, "stmpe_reg_read" },
	{ 0xcf86cdac, "queue_delayed_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x38ea3b28, "input_event" },
	{ 0xa257f6fa, "stmpe_block_read" },
	{ 0x7fa795f, "_dev_err" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x7b0629e7, "input_register_device" },
	{ 0x297acc01, "input_set_abs_params" },
	{ 0x643feb7f, "input_set_capability" },
	{ 0xc849f646, "stmpe_reg_write" },
	{ 0xb72a9342, "stmpe811_adc_common_init" },
	{ 0x80edeeae, "stmpe_enable" },
	{ 0xab26b88f, "devm_request_threaded_irq" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xfc60f402, "of_property_read_variable_u32_array" },
	{ 0xebcbcc65, "devm_input_allocate_device" },
	{ 0xe544be36, "devm_kmalloc" },
	{ 0xfe525614, "platform_get_irq_byname" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x75253f95, "stmpe_set_bits" },
	{ 0x29d9f26e, "cancel_delayed_work_sync" },
	{ 0xa6e085f8, "stmpe_disable" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Cst,stmpe-ts");
MODULE_ALIAS("of:N*T*Cst,stmpe-tsC*");

MODULE_INFO(srcversion, "CF501C084AA61B24D42814D");
