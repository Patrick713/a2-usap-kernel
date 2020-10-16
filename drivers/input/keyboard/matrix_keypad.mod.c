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
	{ 0xd46b54dd, "flush_delayed_work" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xd697e69a, "trace_hardirqs_on" },
	{ 0xfcec0987, "enable_irq" },
	{ 0x2da81bff, "_raw_spin_lock_irq" },
	{ 0x9d669763, "memcpy" },
	{ 0x38ea3b28, "input_event" },
	{ 0xdb34708f, "gpiod_get_raw_value_cansleep" },
	{ 0x8e865d3c, "arm_delay_ops" },
	{ 0x5f754e5a, "memset" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x39a12ca7, "_raw_spin_unlock_irqrestore" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x5f849a69, "_raw_spin_lock_irqsave" },
	{ 0x5bdcebf5, "of_get_named_gpio_flags" },
	{ 0xfc60f402, "of_property_read_variable_u32_array" },
	{ 0x3c7ad7ac, "of_find_property" },
	{ 0xf7bc2652, "of_get_property" },
	{ 0xbaf9d156, "of_count_phandle_with_args" },
	{ 0xe544be36, "devm_kmalloc" },
	{ 0x7fa795f, "_dev_err" },
	{ 0x2de4f87b, "input_free_device" },
	{ 0x7b0629e7, "input_register_device" },
	{ 0xdbdb0e8b, "request_any_context_irq" },
	{ 0x47229b5c, "gpio_request" },
	{ 0x643feb7f, "input_set_capability" },
	{ 0x260737e6, "matrix_keypad_build_keymap" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xea1c9521, "input_allocate_device" },
	{ 0xebaa9dc8, "kmem_cache_alloc_trace" },
	{ 0xf4610713, "kmalloc_caches" },
	{ 0x8752ad47, "gpiod_direction_input" },
	{ 0x7987328e, "gpiod_set_raw_value_cansleep" },
	{ 0xf5142424, "gpiod_direction_output_raw" },
	{ 0xcf86cdac, "queue_delayed_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x27bbf221, "disable_irq_nosync" },
	{ 0x37a0cba, "kfree" },
	{ 0xc0e66c25, "input_unregister_device" },
	{ 0xfe990052, "gpio_free" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x3518599c, "gpiod_to_irq" },
	{ 0x4decaf39, "gpio_to_desc" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

MODULE_INFO(depends, "matrix-keymap");

MODULE_ALIAS("of:N*T*Cgpio-matrix-keypad");
MODULE_ALIAS("of:N*T*Cgpio-matrix-keypadC*");

MODULE_INFO(srcversion, "BEECF11A9AAE07F003A4CAE");
