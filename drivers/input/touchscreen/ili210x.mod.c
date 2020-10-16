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
	{ 0x88161187, "i2c_del_driver" },
	{ 0xbdae2e40, "i2c_register_driver" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0xbd159bd6, "input_mt_report_pointer_emulation" },
	{ 0x127a1e8b, "touchscreen_report_pos" },
	{ 0x2866f6d0, "input_mt_report_slot_state" },
	{ 0x38ea3b28, "input_event" },
	{ 0x5f754e5a, "memset" },
	{ 0x7b0629e7, "input_register_device" },
	{ 0xdd9a789d, "devm_device_add_group" },
	{ 0xab26b88f, "devm_request_threaded_irq" },
	{ 0x5b3e02e5, "input_mt_init_slots" },
	{ 0x36e24524, "touchscreen_parse_properties" },
	{ 0x297acc01, "input_set_abs_params" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xebcbcc65, "devm_input_allocate_device" },
	{ 0xe544be36, "devm_kmalloc" },
	{ 0xf9a482f9, "msleep" },
	{ 0xcb907ad6, "devm_add_action" },
	{ 0x62182082, "devm_gpiod_get_optional" },
	{ 0x7fa795f, "_dev_err" },
	{ 0x12a38747, "usleep_range" },
	{ 0xde45aa0d, "i2c_transfer" },
	{ 0x29d9f26e, "cancel_delayed_work_sync" },
	{ 0xcf86cdac, "queue_delayed_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xcb203516, "i2c_transfer_buffer_flags" },
	{ 0x668b595, "_kstrtoul" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x84b498ef, "gpiod_set_value_cansleep" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Cilitek,ili210x");
MODULE_ALIAS("of:N*T*Cilitek,ili210xC*");
MODULE_ALIAS("of:N*T*Cilitek,ili251x");
MODULE_ALIAS("of:N*T*Cilitek,ili251xC*");
MODULE_ALIAS("i2c:ili210x");
MODULE_ALIAS("i2c:ili251x");

MODULE_INFO(srcversion, "B9529B03C6E56805AE11438");
