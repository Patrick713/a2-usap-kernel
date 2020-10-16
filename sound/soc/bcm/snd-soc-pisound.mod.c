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
	{ 0x22f8c1ca, "kobject_put" },
	{ 0x13d0adf7, "__kfifo_out" },
	{ 0xee3bb34c, "gpiod_direction_output" },
	{ 0x889e7573, "of_parse_phandle" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0x6663995b, "spi_setup" },
	{ 0xf6953456, "snd_rawmidi_set_ops" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x610b1492, "__platform_driver_register" },
	{ 0x526c3a6c, "jiffies" },
	{ 0xd666b295, "snd_rawmidi_new" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xaf22ee50, "kobject_create_and_add" },
	{ 0x822dc7f2, "snd_pcm_hw_constraint_mask64" },
	{ 0x5f754e5a, "memset" },
	{ 0xdbe521ac, "snd_pcm_hw_constraint_list" },
	{ 0xc5850110, "printk" },
	{ 0xf63fc023, "sysfs_create_group" },
	{ 0x89a72f7a, "snd_rawmidi_transmit_peek" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x8752ad47, "gpiod_direction_input" },
	{ 0xfa20e97c, "spi_bus_type" },
	{ 0x436b7464, "snd_soc_unregister_card" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x8e865d3c, "arm_delay_ops" },
	{ 0xc5fd6834, "bus_find_device" },
	{ 0x42160169, "flush_workqueue" },
	{ 0x5d2f2b13, "spi_sync" },
	{ 0x8cf5cbd7, "snd_soc_dai_set_bclk_ratio" },
	{ 0xdbc3d35f, "snd_rawmidi_transmit_ack" },
	{ 0xfc3aa697, "gpiod_unexport" },
	{ 0xebcc8bdd, "put_device" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xf1d33562, "snd_ctl_new1" },
	{ 0x6d55919b, "gpiod_get_value" },
	{ 0xa706a3f8, "kernel_kobj" },
	{ 0x3b6c41ea, "kstrtouint" },
	{ 0xad3b2d7d, "gpiod_export" },
	{ 0x3518599c, "gpiod_to_irq" },
	{ 0xd6fc557c, "snd_pcm_hw_constraint_minmax" },
	{ 0x1e72c57a, "gpiod_get_index" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xb2d48a2e, "queue_work_on" },
	{ 0xc358aaf8, "snprintf" },
	{ 0xda621c75, "snd_ctl_add" },
	{ 0x8ad83553, "platform_driver_unregister" },
	{ 0xfb5d3e3c, "gpiod_set_value" },
	{ 0x7447738e, "snd_soc_register_card" },
	{ 0xdf9208c0, "alloc_workqueue" },
	{ 0x694174f5, "gpiod_put" },
	{ 0x76063b93, "snd_rawmidi_receive" },
	{ 0xc1514a3b, "free_irq" },
	{ 0xe914e41e, "strcpy" },
};

MODULE_INFO(depends, "snd-rawmidi,snd-pcm,snd-soc-core,snd");

MODULE_ALIAS("of:N*T*Cblokaslabs,pisound");
MODULE_ALIAS("of:N*T*Cblokaslabs,pisoundC*");
MODULE_ALIAS("of:N*T*Cblokaslabs,pisound-spi");
MODULE_ALIAS("of:N*T*Cblokaslabs,pisound-spiC*");

MODULE_INFO(srcversion, "46C425AC35C9F47C71E20AE");
