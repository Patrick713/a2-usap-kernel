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
	{ 0x8a490c90, "rfkill_set_sw_state" },
	{ 0xc5688156, "genl_register_family" },
	{ 0x93b18eee, "debugfs_create_dir" },
	{ 0x349cba85, "strchr" },
	{ 0xa47a878, "debugfs_create_u8" },
	{ 0x97255bdf, "strlen" },
	{ 0x46ae4a33, "genl_unregister_family" },
	{ 0xa513fc17, "netif_carrier_on" },
	{ 0xa35dc8c8, "netif_carrier_off" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0x85df9b6c, "strsep" },
	{ 0xff282521, "rfkill_register" },
	{ 0x35edc130, "debugfs_remove_recursive" },
	{ 0x2d39b0a7, "kstrdup" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xe482a5a0, "param_ops_string" },
	{ 0x7d6174de, "netif_tx_wake_queue" },
	{ 0xdcb99924, "rfkill_alloc" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0xcd279169, "nla_find" },
	{ 0x97999817, "rfkill_set_hw_state" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0xa5c2e213, "nla_put" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0xd2aeaa09, "init_net" },
	{ 0x7fa795f, "_dev_err" },
	{ 0x49f26466, "kstrndup" },
	{ 0x4059792f, "print_hex_dump" },
	{ 0x22bf2ba1, "__alloc_skb" },
	{ 0xaad6d92f, "rfkill_init_sw_state" },
	{ 0x2b560e16, "netlink_broadcast" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xd28c75bb, "kfree_skb" },
	{ 0x76d31a13, "dev_driver_string" },
	{ 0xdb9ca3c5, "_raw_spin_lock" },
	{ 0x31b9195c, "__local_bh_disable_ip" },
	{ 0x2cfde9a2, "warn_slowpath_fmt" },
	{ 0x37a0cba, "kfree" },
	{ 0xdb68bbad, "rfkill_destroy" },
	{ 0xf45f59f7, "genlmsg_put" },
	{ 0x314b20c8, "scnprintf" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0xc358aaf8, "snprintf" },
	{ 0x83eb21c, "rfkill_unregister" },
};

MODULE_INFO(depends, "rfkill");


MODULE_INFO(srcversion, "CC8910C8C84C2729C56C9A4");
