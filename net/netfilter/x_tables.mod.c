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
	{ 0xa24f23d8, "__request_module" },
	{ 0xf4610713, "kmalloc_caches" },
	{ 0x2d6fcc06, "__kmalloc" },
	{ 0xd6ee688f, "vmalloc" },
	{ 0x349cba85, "strchr" },
	{ 0xf509040f, "proc_create_seq_private" },
	{ 0x7aa1756e, "kvfree" },
	{ 0x97255bdf, "strlen" },
	{ 0xc8275115, "seq_printf" },
	{ 0xae947aa3, "remove_proc_entry" },
	{ 0xb1b939e, "kmemdup" },
	{ 0x50c89f23, "__alloc_percpu" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0xae353d77, "arm_copy_from_user" },
	{ 0x9eb8f369, "proc_set_user" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0x999e8297, "vfree" },
	{ 0xc9ec4e21, "free_percpu" },
	{ 0x51a910c0, "arm_copy_to_user" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xcf3fac84, "cpumask_next" },
	{ 0x2e43d7c1, "make_kgid" },
	{ 0x7d518e2b, "PDE_DATA" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0xf362dc7f, "arm_clear_user" },
	{ 0xdd0a2ba2, "strlcat" },
	{ 0x5f754e5a, "memset" },
	{ 0x1e96f43d, "__cpu_possible_mask" },
	{ 0x65e2bb05, "unregister_pernet_subsys" },
	{ 0xb44e18ea, "audit_enabled" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x73e20c1c, "strlcpy" },
	{ 0xbb72d4fe, "__put_user_1" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0xd2aeaa09, "init_net" },
	{ 0x8dfefc0d, "kvmalloc_node" },
	{ 0x12b548f6, "module_put" },
	{ 0x40a9b349, "vzalloc" },
	{ 0xd9ce8f0c, "strnlen" },
	{ 0xb8886e84, "make_kuid" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xee43fd9b, "___ratelimit" },
	{ 0xb041ec8d, "register_pernet_subsys" },
	{ 0x1fe88ae5, "proc_create_net_data" },
	{ 0xebaa9dc8, "kmem_cache_alloc_trace" },
	{ 0x341dbfa3, "__per_cpu_offset" },
	{ 0xff1e9dd8, "seq_list_start" },
	{ 0x31b9195c, "__local_bh_disable_ip" },
	{ 0x2cfde9a2, "warn_slowpath_fmt" },
	{ 0x37a0cba, "kfree" },
	{ 0xa32be214, "audit_log" },
	{ 0x74c134b9, "__sw_hweight32" },
	{ 0xb9acd3d9, "__put_user_2" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xc358aaf8, "snprintf" },
	{ 0xe7d4daac, "seq_list_next" },
	{ 0x717bcdac, "try_module_get" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "E8DD595D898A0324F6F97ED");
