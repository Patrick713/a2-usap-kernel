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
	{ 0x3ce4ca6f, "disable_irq" },
	{ 0xbf2ad2a5, "hid_add_device" },
	{ 0x2d6fcc06, "__kmalloc" },
	{ 0xf9a482f9, "msleep" },
	{ 0x88161187, "i2c_del_driver" },
	{ 0xf10412ae, "hid_parse_report" },
	{ 0x56a78f1, "dev_printk" },
	{ 0xde45aa0d, "i2c_transfer" },
	{ 0x2a3aa678, "_test_and_clear_bit" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0xfe41fb0b, "param_ops_bool" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0x5495392, "hid_debug" },
	{ 0x11aa29ed, "hid_input_report" },
	{ 0xbce60500, "devm_regulator_bulk_get" },
	{ 0xa6102ad2, "regulator_bulk_enable" },
	{ 0x5bbe49f4, "__init_waitqueue_head" },
	{ 0xf65110e8, "_dev_warn" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0xc7c8a143, "i2c_smbus_read_byte" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x73e20c1c, "strlcpy" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0x14c0904a, "irq_get_irq_data" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x7fa795f, "_dev_err" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xbdae2e40, "i2c_register_driver" },
	{ 0x6ff4c298, "device_property_read_u32_array" },
	{ 0x8ede545e, "regulator_bulk_disable" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x281ef26a, "hid_destroy_device" },
	{ 0xed10eef9, "hid_allocate_device" },
	{ 0x3dcf1ffa, "__wake_up" },
	{ 0x647af474, "prepare_to_wait_event" },
	{ 0xcb203516, "i2c_transfer_buffer_flags" },
	{ 0xfcec0987, "enable_irq" },
	{ 0x37a0cba, "kfree" },
	{ 0x9d669763, "memcpy" },
	{ 0x49970de8, "finish_wait" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0xc358aaf8, "snprintf" },
	{ 0xfc60f402, "of_property_read_variable_u32_array" },
	{ 0x49ebacbd, "_clear_bit" },
	{ 0xe544be36, "devm_kmalloc" },
	{ 0xc1514a3b, "free_irq" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("i2c:hid");
MODULE_ALIAS("i2c:hid-over-i2c");
MODULE_ALIAS("of:N*T*Chid-over-i2c");
MODULE_ALIAS("of:N*T*Chid-over-i2cC*");

MODULE_INFO(srcversion, "39DD9AAE59EEA5431A7551C");
