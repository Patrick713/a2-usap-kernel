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
	{ 0xa24f23d8, "__request_module" },
	{ 0xf4610713, "kmalloc_caches" },
	{ 0x8eea7b99, "cn_add_callback" },
	{ 0x2d6fcc06, "__kmalloc" },
	{ 0xf9a482f9, "msleep" },
	{ 0xc9c2e149, "driver_register" },
	{ 0x64a07cd5, "of_find_matching_node_and_match" },
	{ 0x9a152689, "param_ops_int" },
	{ 0x858622da, "hwmon_device_unregister" },
	{ 0x1bdb8ad6, "kobject_uevent" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xd697e69a, "trace_hardirqs_on" },
	{ 0xa4040d67, "sysfs_remove_group" },
	{ 0xdd34010a, "kthread_create_on_node" },
	{ 0xff5a8cfe, "cn_del_callback" },
	{ 0xf65110e8, "_dev_warn" },
	{ 0x5f754e5a, "memset" },
	{ 0x5c2640cb, "device_register" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0x7bfbe88e, "kthread_stop" },
	{ 0xf63fc023, "sysfs_create_group" },
	{ 0xaa19e4aa, "_kstrtol" },
	{ 0x85c6e59a, "driver_unregister" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0xf1969a8e, "__usecs_to_jiffies" },
	{ 0xe224a212, "hwmon_device_register_with_info" },
	{ 0x8c8569cb, "kstrtoint" },
	{ 0x8e865d3c, "arm_delay_ops" },
	{ 0x7fa795f, "_dev_err" },
	{ 0x7f99f66a, "bus_unregister" },
	{ 0xa6c4041, "cn_netlink_send" },
	{ 0xadc408c1, "flush_signals" },
	{ 0x3eabc38c, "_dev_info" },
	{ 0xebcc8bdd, "put_device" },
	{ 0x4dd9d14d, "cn_netlink_send_mult" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x1000e51, "schedule" },
	{ 0xb35d51ab, "wake_up_process" },
	{ 0xcc5005fe, "msleep_interruptible" },
	{ 0xebaa9dc8, "kmem_cache_alloc_trace" },
	{ 0xdb9ca3c5, "_raw_spin_lock" },
	{ 0xb3f7646e, "kthread_should_stop" },
	{ 0x37a0cba, "kfree" },
	{ 0x9d669763, "memcpy" },
	{ 0xd0629701, "sysfs_create_groups" },
	{ 0x68aef268, "sysfs_remove_groups" },
	{ 0x9d6eee2e, "device_unregister" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0xc358aaf8, "snprintf" },
	{ 0xe54dbfa5, "dev_set_name" },
	{ 0x49ebacbd, "_clear_bit" },
	{ 0xec3d2e1b, "trace_hardirqs_off" },
	{ 0x719e0e44, "add_uevent_var" },
};

MODULE_INFO(depends, "cn");


MODULE_INFO(srcversion, "843007ADAB610557631C9D4");
