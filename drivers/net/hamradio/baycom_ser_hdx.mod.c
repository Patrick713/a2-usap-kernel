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
	{ 0x36138fcf, "param_array_ops" },
	{ 0x4be0fc9e, "param_ops_charp" },
	{ 0x9a152689, "param_ops_int" },
	{ 0xb56c1f43, "hdlcdrv_unregister" },
	{ 0xd23a3307, "hdlcdrv_register" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xae353d77, "arm_copy_from_user" },
	{ 0x51a910c0, "arm_copy_to_user" },
	{ 0xc6cbbc89, "capable" },
	{ 0x39a12ca7, "_raw_spin_unlock_irqrestore" },
	{ 0x5f849a69, "_raw_spin_lock_irqsave" },
	{ 0x4eb634b1, "hdlcdrv_arbitrate" },
	{ 0xec3d2e1b, "trace_hardirqs_off" },
	{ 0x1b368b26, "hdlcdrv_receiver" },
	{ 0x8a72e4c9, "hdlcdrv_transmitter" },
	{ 0xd697e69a, "trace_hardirqs_on" },
	{ 0x526c3a6c, "jiffies" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x5f754e5a, "memset" },
	{ 0xae9849dd, "__request_region" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x349cba85, "strchr" },
	{ 0xc5850110, "printk" },
	{ 0x4384eb42, "__release_region" },
	{ 0x716b58cb, "ioport_resource" },
	{ 0xc1514a3b, "free_irq" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

MODULE_INFO(depends, "hdlcdrv");


MODULE_INFO(srcversion, "DCF3496ACFAEB016C43192B");
