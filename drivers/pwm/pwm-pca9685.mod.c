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
	{ 0x59e5070d, "__do_div64" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0x8e865d3c, "arm_delay_ops" },
	{ 0x7fa795f, "_dev_err" },
	{ 0x6c3d134d, "pm_runtime_enable" },
	{ 0x6c0e2acc, "__pm_runtime_set_status" },
	{ 0x1498b8fe, "devm_gpiochip_add_data" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0xe5c30cca, "pwmchip_add" },
	{ 0x8630a932, "device_property_present" },
	{ 0xac511bf1, "__devm_regmap_init_i2c" },
	{ 0xe544be36, "devm_kmalloc" },
	{ 0x49ebacbd, "_clear_bit" },
	{ 0x2d26f33a, "__pm_runtime_idle" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xae2c61e9, "regmap_read" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x52afd98, "gpiochip_get_data" },
	{ 0xccae089c, "__pm_runtime_resume" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0xca54fee, "_test_and_set_bit" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0xe4f477be, "regmap_update_bits_base" },
	{ 0xc73c0dfd, "regmap_write" },
	{ 0x318848f2, "__pm_runtime_disable" },
	{ 0x6d2bf2cd, "pwmchip_remove" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

MODULE_INFO(depends, "regmap-i2c");

MODULE_ALIAS("of:N*T*Cnxp,pca9685-pwm");
MODULE_ALIAS("of:N*T*Cnxp,pca9685-pwmC*");
MODULE_ALIAS("i2c:pca9685");

MODULE_INFO(srcversion, "A191D616DBF1E4500DDED46");
