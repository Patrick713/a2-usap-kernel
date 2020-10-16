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
	{ 0xdc0adda3, "seq_read" },
	{ 0x167c65ac, "seq_lseek" },
	{ 0x60a13e90, "rcu_barrier" },
	{ 0x9d0d6206, "unregister_netdevice_notifier" },
	{ 0x65e2bb05, "unregister_pernet_subsys" },
	{ 0xbc25f9f7, "xt_unregister_target" },
	{ 0xd2da1048, "register_netdevice_notifier" },
	{ 0xb02595c, "xt_register_target" },
	{ 0xb041ec8d, "register_pernet_subsys" },
	{ 0x2e2d9410, "proc_create_data" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0xe914e41e, "strcpy" },
	{ 0xd8ba03c2, "nf_ct_netns_get" },
	{ 0x71c90087, "memcmp" },
	{ 0x9d669763, "memcpy" },
	{ 0xe2b5e146, "refcount_inc_not_zero_checked" },
	{ 0x20e1a7dd, "nf_ct_netns_put" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0xc2cae53e, "refcount_dec_and_lock" },
	{ 0x31b9195c, "__local_bh_disable_ip" },
	{ 0x9b73dda5, "skb_copy_bits" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0x28aa6a67, "call_rcu" },
	{ 0xc1e58a5f, "refcount_dec_and_test_checked" },
	{ 0xd2c2771e, "seq_release" },
	{ 0xc5850110, "printk" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0xf617b198, "proc_mkdir" },
	{ 0x7d63dcfa, "nf_register_net_hook" },
	{ 0x1ee8d6d4, "refcount_inc_checked" },
	{ 0xbce0c740, "seq_open" },
	{ 0x812b8f64, "nf_unregister_net_hook" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0x31709530, "proc_remove" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xca54fee, "_test_and_set_bit" },
	{ 0x2a3aa678, "_test_and_clear_bit" },
	{ 0x668b595, "_kstrtoul" },
	{ 0xae353d77, "arm_copy_from_user" },
	{ 0x7d518e2b, "PDE_DATA" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xebaa9dc8, "kmem_cache_alloc_trace" },
	{ 0xf4610713, "kmalloc_caches" },
	{ 0x74c134b9, "__sw_hweight32" },
	{ 0x49ebacbd, "_clear_bit" },
	{ 0x17a7462, "seq_putc" },
	{ 0xc8275115, "seq_printf" },
	{ 0x37a0cba, "kfree" },
	{ 0x98335fc9, "dev_get_by_name" },
	{ 0x53ba7185, "dev_mc_add" },
	{ 0x8f3625fe, "_raw_spin_unlock_bh" },
	{ 0x2a88feb0, "dev_mc_del" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x2b5ab97d, "_raw_spin_lock_bh" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

MODULE_INFO(depends, "x_tables,nf_conntrack");


MODULE_INFO(srcversion, "CE25B1F6189CD89DA7E9946");
