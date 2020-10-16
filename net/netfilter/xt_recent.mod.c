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
	{ 0x8a331d2b, "param_ops_uint" },
	{ 0xc8507ba0, "seq_release_private" },
	{ 0xdc0adda3, "seq_read" },
	{ 0x167c65ac, "seq_lseek" },
	{ 0x5139fc22, "xt_unregister_matches" },
	{ 0x65e2bb05, "unregister_pernet_subsys" },
	{ 0xc9e3fe05, "xt_register_matches" },
	{ 0xb041ec8d, "register_pernet_subsys" },
	{ 0xac5fcec0, "in4_pton" },
	{ 0x609bcd98, "in6_pton" },
	{ 0xa3131f6, "strnchr" },
	{ 0xae353d77, "arm_copy_from_user" },
	{ 0x71c90087, "memcmp" },
	{ 0x526c3a6c, "jiffies" },
	{ 0x2d6fcc06, "__kmalloc" },
	{ 0x9d669763, "memcpy" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xc5850110, "printk" },
	{ 0xee43fd9b, "___ratelimit" },
	{ 0x9eb8f369, "proc_set_user" },
	{ 0x2e2d9410, "proc_create_data" },
	{ 0x2e43d7c1, "make_kgid" },
	{ 0xb8886e84, "make_kuid" },
	{ 0x37cc1f05, "init_user_ns" },
	{ 0xe914e41e, "strcpy" },
	{ 0x8dfefc0d, "kvmalloc_node" },
	{ 0x9a717656, "__do_once_done" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0x18e60984, "__do_once_start" },
	{ 0x48012e28, "xt_check_proc_name" },
	{ 0xdc3fcbc9, "__sw_hweight8" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xf617b198, "proc_mkdir" },
	{ 0x7aa1756e, "kvfree" },
	{ 0xae947aa3, "remove_proc_entry" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0x37a0cba, "kfree" },
	{ 0x17a7462, "seq_putc" },
	{ 0xc8275115, "seq_printf" },
	{ 0x7d518e2b, "PDE_DATA" },
	{ 0x31514ef4, "__seq_open_private" },
	{ 0x8f3625fe, "_raw_spin_unlock_bh" },
	{ 0x2b5ab97d, "_raw_spin_lock_bh" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

MODULE_INFO(depends, "x_tables");


MODULE_INFO(srcversion, "9FFFEB64ADA80356865A9C9");
