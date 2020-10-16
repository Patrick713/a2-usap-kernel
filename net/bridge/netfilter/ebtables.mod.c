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
	{ 0xbc25f9f7, "xt_unregister_target" },
	{ 0xa24f23d8, "__request_module" },
	{ 0xd6ee688f, "vmalloc" },
	{ 0x2e052f25, "xt_check_target" },
	{ 0xb1b939e, "kmemdup" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0x7bce4603, "xt_data_to_user" },
	{ 0xae353d77, "arm_copy_from_user" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0x999e8297, "vfree" },
	{ 0x51a910c0, "arm_copy_to_user" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xcf3fac84, "cpumask_next" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0x5f754e5a, "memset" },
	{ 0x1e96f43d, "__cpu_possible_mask" },
	{ 0xb44e18ea, "audit_enabled" },
	{ 0xc5850110, "printk" },
	{ 0x19ad474, "nf_unregister_net_hooks" },
	{ 0x4025fd3f, "ns_capable" },
	{ 0x73e20c1c, "strlcpy" },
	{ 0xbb72d4fe, "__put_user_1" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0xb02595c, "xt_register_target" },
	{ 0x12b548f6, "module_put" },
	{ 0xbc10dd97, "__put_user_4" },
	{ 0xf6e27651, "nf_register_net_hooks" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x654849ea, "nf_unregister_sockopt" },
	{ 0x1720a9e1, "xt_request_find_target" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0x1738c19e, "_raw_write_unlock_bh" },
	{ 0x2cfde9a2, "warn_slowpath_fmt" },
	{ 0x77f6c690, "_raw_read_lock_bh" },
	{ 0x9acb8066, "_raw_read_unlock_bh" },
	{ 0x109d0eca, "__vmalloc" },
	{ 0x37a0cba, "kfree" },
	{ 0x9d669763, "memcpy" },
	{ 0x12b7fe67, "xt_check_match" },
	{ 0xefb7bccf, "_raw_write_lock_bh" },
	{ 0xa32be214, "audit_log" },
	{ 0x74c134b9, "__sw_hweight32" },
	{ 0x9dc08a71, "pgprot_kernel" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x264ad5e, "nf_register_sockopt" },
	{ 0xde039f80, "xt_find_match" },
	{ 0x717bcdac, "try_module_get" },
};

MODULE_INFO(depends, "x_tables");


MODULE_INFO(srcversion, "3682E64433FA2D742EB18B6");