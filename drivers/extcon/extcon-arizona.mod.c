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
	{ 0x37a0cba, "kfree" },
	{ 0x2d6fcc06, "__kmalloc" },
	{ 0x8630a932, "device_property_present" },
	{ 0x6ff4c298, "device_property_read_u32_array" },
	{ 0x7e71294b, "gpiod_get_optional" },
	{ 0x7b0629e7, "input_register_device" },
	{ 0x293efc05, "arizona_clk32k_enable" },
	{ 0x901319d1, "arizona_request_irq" },
	{ 0x6c3d134d, "pm_runtime_enable" },
	{ 0x643feb7f, "input_set_capability" },
	{ 0x5cdc4c99, "devm_gpio_request_one" },
	{ 0xebcbcc65, "devm_input_allocate_device" },
	{ 0x327067a, "devm_extcon_dev_register" },
	{ 0xcba36886, "devm_extcon_dev_allocate" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0xc3251622, "devm_regulator_get" },
	{ 0xe544be36, "devm_kmalloc" },
	{ 0x2cfde9a2, "warn_slowpath_fmt" },
	{ 0x84b498ef, "gpiod_set_value_cansleep" },
	{ 0xff178f6, "__aeabi_idivmod" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0xcf86cdac, "queue_delayed_work_on" },
	{ 0x47884890, "system_power_efficient_wq" },
	{ 0xf9a482f9, "msleep" },
	{ 0x38ea3b28, "input_event" },
	{ 0x6ebe366f, "ktime_get_mono_fast_ns" },
	{ 0xae2c61e9, "regmap_read" },
	{ 0x3b6836ea, "extcon_get_state" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0x8fac8f23, "__pm_runtime_suspend" },
	{ 0xc73c0dfd, "regmap_write" },
	{ 0x3cd188b7, "regulator_allow_bypass" },
	{ 0x67b83f59, "regulator_enable" },
	{ 0x4c5fbb88, "snd_soc_component_disable_pin" },
	{ 0xbce4c93e, "snd_soc_dapm_sync" },
	{ 0x904ac03b, "snd_soc_component_force_enable_pin" },
	{ 0x7987328e, "gpiod_set_raw_value_cansleep" },
	{ 0x4decaf39, "gpio_to_desc" },
	{ 0x648b0fb3, "extcon_set_state_sync" },
	{ 0xccae089c, "__pm_runtime_resume" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0xf65110e8, "_dev_warn" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0x7fa795f, "_dev_err" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x2d26f33a, "__pm_runtime_idle" },
	{ 0x7238966a, "regulator_disable" },
	{ 0xba2e0f37, "arizona_clk32k_disable" },
	{ 0x29d9f26e, "cancel_delayed_work_sync" },
	{ 0xc67fd118, "arizona_free_irq" },
	{ 0x76244537, "arizona_set_irq_wake" },
	{ 0x318848f2, "__pm_runtime_disable" },
	{ 0x694174f5, "gpiod_put" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xe4f477be, "regmap_update_bits_base" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

MODULE_INFO(depends, "extcon-core,snd-soc-core");


MODULE_INFO(srcversion, "F2D9EB1BD8C1AEA246CE651");
