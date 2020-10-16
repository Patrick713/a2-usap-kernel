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
	{ 0x92b57248, "flush_work" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x64568c4f, "bus_register" },
	{ 0xa24f23d8, "__request_module" },
	{ 0x2d6fcc06, "__kmalloc" },
	{ 0xc9c2e149, "driver_register" },
	{ 0xc8275115, "seq_printf" },
	{ 0x4205ad24, "cancel_work_sync" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x988a694f, "snd_device_new" },
	{ 0xc1c73f49, "device_del" },
	{ 0x85c6e59a, "driver_unregister" },
	{ 0x1b018b60, "device_add" },
	{ 0x7f99f66a, "bus_unregister" },
	{ 0xea94ed54, "bus_for_each_dev" },
	{ 0xebcc8bdd, "put_device" },
	{ 0x2cfde9a2, "warn_slowpath_fmt" },
	{ 0x37a0cba, "kfree" },
	{ 0x4883fef8, "snd_seq_root" },
	{ 0xee2f893d, "snd_info_free_entry" },
	{ 0x9dc3b2ba, "device_initialize" },
	{ 0xb2d48a2e, "queue_work_on" },
	{ 0xe54dbfa5, "dev_set_name" },
	{ 0x27f7f9ed, "snd_info_create_module_entry" },
	{ 0x88cc6f48, "snd_info_register" },
};

MODULE_INFO(depends, "snd");


MODULE_INFO(srcversion, "5DF8F9C058836CBA2E0F90D");
