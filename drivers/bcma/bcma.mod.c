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
	{ 0x64568c4f, "bus_register" },
	{ 0xf4610713, "kmalloc_caches" },
	{ 0xb96f0ba1, "of_translate_address" },
	{ 0x2d6fcc06, "__kmalloc" },
	{ 0xc9c2e149, "driver_register" },
	{ 0xc96d4855, "irq_create_of_mapping" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0x8bcd64f8, "platform_device_register_full" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x32708c19, "of_dma_configure" },
	{ 0x526c3a6c, "jiffies" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0xf65110e8, "_dev_warn" },
	{ 0x5f754e5a, "memset" },
	{ 0x5c2640cb, "device_register" },
	{ 0x39a12ca7, "_raw_spin_unlock_irqrestore" },
	{ 0xc5850110, "printk" },
	{ 0xe97c4103, "ioremap" },
	{ 0x85c6e59a, "driver_unregister" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0xf11cd95c, "platform_device_unregister" },
	{ 0x8e865d3c, "arm_delay_ops" },
	{ 0x7fa795f, "_dev_err" },
	{ 0x7f99f66a, "bus_unregister" },
	{ 0x2196324, "__aeabi_idiv" },
	{ 0x6816b6a8, "of_get_address" },
	{ 0x3eabc38c, "_dev_info" },
	{ 0x12a38747, "usleep_range" },
	{ 0xebcc8bdd, "put_device" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xd3039845, "of_get_next_child" },
	{ 0xd04d8589, "of_irq_parse_raw" },
	{ 0xebaa9dc8, "kmem_cache_alloc_trace" },
	{ 0x5f849a69, "_raw_spin_lock_irqsave" },
	{ 0x8315451d, "of_irq_parse_one" },
	{ 0xde147102, "get_device" },
	{ 0x2cfde9a2, "warn_slowpath_fmt" },
	{ 0x37a0cba, "kfree" },
	{ 0xedc03953, "iounmap" },
	{ 0x271c4764, "of_platform_default_populate" },
	{ 0x9d6eee2e, "device_unregister" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xc358aaf8, "snprintf" },
	{ 0xe54dbfa5, "dev_set_name" },
	{ 0x719e0e44, "add_uevent_var" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "EDB777E99DB4425DBEA0DF4");
