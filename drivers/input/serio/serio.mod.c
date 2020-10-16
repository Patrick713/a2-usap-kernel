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
	{ 0xc9c2e149, "driver_register" },
	{ 0x5fdc2be3, "device_release_driver" },
	{ 0x4205ad24, "cancel_work_sync" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xd697e69a, "trace_hardirqs_on" },
	{ 0x131db64a, "system_long_wq" },
	{ 0xf65110e8, "_dev_warn" },
	{ 0xba1d4e23, "device_bind_driver" },
	{ 0xc1c73f49, "device_del" },
	{ 0x39a12ca7, "_raw_spin_unlock_irqrestore" },
	{ 0x3375510b, "mutex_lock_interruptible" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0x85c6e59a, "driver_unregister" },
	{ 0x84b183ae, "strncmp" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0xd7865ed0, "device_attach" },
	{ 0x1b018b60, "device_add" },
	{ 0x7fa795f, "_dev_err" },
	{ 0x7f99f66a, "bus_unregister" },
	{ 0x12b548f6, "module_put" },
	{ 0xebcc8bdd, "put_device" },
	{ 0x2da81bff, "_raw_spin_lock_irq" },
	{ 0xebaa9dc8, "kmem_cache_alloc_trace" },
	{ 0x5f849a69, "_raw_spin_lock_irqsave" },
	{ 0xb66bc471, "__module_get" },
	{ 0x37a0cba, "kfree" },
	{ 0x9dc3b2ba, "device_initialize" },
	{ 0x6e0633e2, "driver_attach" },
	{ 0xb2d48a2e, "queue_work_on" },
	{ 0xe54dbfa5, "dev_set_name" },
	{ 0x41b23f77, "driver_find" },
	{ 0x717bcdac, "try_module_get" },
	{ 0x719e0e44, "add_uevent_var" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "6577D22A4F11336291FD55C");
