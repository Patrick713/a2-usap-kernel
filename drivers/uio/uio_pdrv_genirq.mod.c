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
	{ 0xe482a5a0, "param_ops_string" },
	{ 0x8ad83553, "platform_driver_unregister" },
	{ 0x610b1492, "__platform_driver_register" },
	{ 0xf65110e8, "_dev_warn" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x9c374319, "platform_get_irq_optional" },
	{ 0xbcc16e32, "devm_kstrdup" },
	{ 0x7fa795f, "_dev_err" },
	{ 0x1f357ded, "__uio_register_device" },
	{ 0x6c3d134d, "pm_runtime_enable" },
	{ 0x738f3a77, "devm_kasprintf" },
	{ 0x34e942aa, "of_property_read_string" },
	{ 0xe544be36, "devm_kmalloc" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xdb9ca3c5, "_raw_spin_lock" },
	{ 0xfcec0987, "enable_irq" },
	{ 0x27bbf221, "disable_irq_nosync" },
	{ 0x39a12ca7, "_raw_spin_unlock_irqrestore" },
	{ 0x5f849a69, "_raw_spin_lock_irqsave" },
	{ 0xccae089c, "__pm_runtime_resume" },
	{ 0x2d26f33a, "__pm_runtime_idle" },
	{ 0x318848f2, "__pm_runtime_disable" },
	{ 0x4f382f84, "uio_unregister_device" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

MODULE_INFO(depends, "uio");

MODULE_ALIAS("of:N*T*");
MODULE_ALIAS("of:N*T*C*");

MODULE_INFO(srcversion, "CA8D2E057FC05515033201C");
