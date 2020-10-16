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
	{ 0x2724257d, "of_irq_get_byname" },
	{ 0xfc60f402, "of_property_read_variable_u32_array" },
	{ 0x5f9ee03a, "__rtc_register_device" },
	{ 0x46637278, "rtc_nvmem_register" },
	{ 0xff440b0a, "rtc_add_group" },
	{ 0x5f754e5a, "memset" },
	{ 0x6f94f4ae, "devm_rtc_allocate_device" },
	{ 0xbec6d8a3, "of_device_get_match_data" },
	{ 0xe544be36, "devm_kmalloc" },
	{ 0xce2840e7, "irq_set_irq_wake" },
	{ 0xab26b88f, "devm_request_threaded_irq" },
	{ 0xf218ef74, "sysfs_notify" },
	{ 0xf65110e8, "_dev_warn" },
	{ 0xf13f4b27, "rtc_update_irq" },
	{ 0x526c3a6c, "jiffies" },
	{ 0x80ca5026, "_bin2bcd" },
	{ 0xc8275115, "seq_printf" },
	{ 0x4f2250ba, "rtc_tm_to_time64" },
	{ 0x5838f6c9, "rtc_valid_tm" },
	{ 0xb6936ffe, "_bcd2bin" },
	{ 0x9ac00b96, "i2c_smbus_read_i2c_block_data" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x2cfde9a2, "warn_slowpath_fmt" },
	{ 0x702b3e98, "i2c_smbus_write_i2c_block_data" },
	{ 0x7fa795f, "_dev_err" },
	{ 0x2d2f1e0c, "i2c_smbus_write_byte_data" },
	{ 0x824e6bcf, "i2c_smbus_read_byte_data" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Cisil,isl1208");
MODULE_ALIAS("of:N*T*Cisil,isl1208C*");
MODULE_ALIAS("of:N*T*Cisil,isl1209");
MODULE_ALIAS("of:N*T*Cisil,isl1209C*");
MODULE_ALIAS("of:N*T*Cisil,isl1218");
MODULE_ALIAS("of:N*T*Cisil,isl1218C*");
MODULE_ALIAS("of:N*T*Cisil,isl1219");
MODULE_ALIAS("of:N*T*Cisil,isl1219C*");
MODULE_ALIAS("i2c:isl1208");
MODULE_ALIAS("i2c:isl1209");
MODULE_ALIAS("i2c:isl1218");
MODULE_ALIAS("i2c:isl1219");

MODULE_INFO(srcversion, "C53982291104B3516C6C698");
