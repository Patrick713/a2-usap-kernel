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
	{ 0xc38c83b8, "mod_timer" },
	{ 0x526c3a6c, "jiffies" },
	{ 0x127a1e8b, "touchscreen_report_pos" },
	{ 0x2866f6d0, "input_mt_report_slot_state" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0xcb203516, "i2c_transfer_buffer_flags" },
	{ 0xab26b88f, "devm_request_threaded_irq" },
	{ 0x7b0629e7, "input_register_device" },
	{ 0x5b3e02e5, "input_mt_init_slots" },
	{ 0x36e24524, "touchscreen_parse_properties" },
	{ 0x297acc01, "input_set_abs_params" },
	{ 0xebcbcc65, "devm_input_allocate_device" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xe544be36, "devm_kmalloc" },
	{ 0x38ea3b28, "input_event" },
	{ 0x4209d0f9, "input_mt_sync_frame" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Ceeti,exc3000");
MODULE_ALIAS("of:N*T*Ceeti,exc3000C*");
MODULE_ALIAS("i2c:exc3000");

MODULE_INFO(srcversion, "28456CB0A22A2269C188547");
