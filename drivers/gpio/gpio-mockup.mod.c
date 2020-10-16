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
	{ 0xfe41fb0b, "param_ops_bool" },
	{ 0x9a152689, "param_ops_int" },
	{ 0xf7c048ae, "single_release" },
	{ 0xa0337a7f, "no_llseek" },
	{ 0xf11cd95c, "platform_device_unregister" },
	{ 0x8ad83553, "platform_driver_unregister" },
	{ 0x8bcd64f8, "platform_device_register_full" },
	{ 0x5f754e5a, "memset" },
	{ 0x35edc130, "debugfs_remove_recursive" },
	{ 0xc5850110, "printk" },
	{ 0x610b1492, "__platform_driver_register" },
	{ 0x528c709d, "simple_read_from_buffer" },
	{ 0xc358aaf8, "snprintf" },
	{ 0x44b38dbe, "irq_sim_fire" },
	{ 0x14c0904a, "irq_get_irq_data" },
	{ 0xc5cbdc54, "kstrtoint_from_user" },
	{ 0xcd34ce55, "single_open" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x7c20652d, "debugfs_create_file" },
	{ 0x93b18eee, "debugfs_create_dir" },
	{ 0x1498b8fe, "devm_gpiochip_add_data" },
	{ 0x65d400ba, "devm_irq_sim_init" },
	{ 0x738f3a77, "devm_kasprintf" },
	{ 0x8630a932, "device_property_present" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0xe544be36, "devm_kmalloc" },
	{ 0xcb6ba75f, "device_property_read_string" },
	{ 0x6ffd222f, "device_property_read_u16_array" },
	{ 0x6ff4c298, "device_property_read_u32_array" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xd3f57a2, "_find_next_bit_le" },
	{ 0x6d662533, "_find_first_bit_le" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0x114022d, "irq_sim_irqnum" },
	{ 0x52afd98, "gpiochip_get_data" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "3466B84F2CBEE3AF44F4FB2");
