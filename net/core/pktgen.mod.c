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
	{ 0x9a152689, "param_ops_int" },
	{ 0xf7c048ae, "single_release" },
	{ 0xdc0adda3, "seq_read" },
	{ 0x167c65ac, "seq_lseek" },
	{ 0x9d0d6206, "unregister_netdevice_notifier" },
	{ 0x65e2bb05, "unregister_pernet_subsys" },
	{ 0xd2da1048, "register_netdevice_notifier" },
	{ 0xb041ec8d, "register_pernet_subsys" },
	{ 0x49970de8, "finish_wait" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x647af474, "prepare_to_wait_event" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x92aeea7b, "skb_checksum" },
	{ 0x44da5d0f, "__csum_ipv6_magic" },
	{ 0x33869697, "udp4_hwcsum" },
	{ 0x952da7ff, "dev_queue_xmit" },
	{ 0x8f3625fe, "_raw_spin_unlock_bh" },
	{ 0x2b5ab97d, "_raw_spin_lock_bh" },
	{ 0x1813c6d2, "pktgen_xfrm_outer_mode_output" },
	{ 0x28f7fb79, "skb_pull" },
	{ 0xa748a031, "pskb_expand_head" },
	{ 0x2124474, "ip_send_check" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0xdb9ca3c5, "_raw_spin_lock" },
	{ 0x36fbf3aa, "netif_receive_skb" },
	{ 0xc4e588b, "eth_type_trans" },
	{ 0xf68b0045, "skb_push" },
	{ 0x9acb8066, "_raw_read_unlock_bh" },
	{ 0x77f6c690, "_raw_read_lock_bh" },
	{ 0xa8223179, "refcount_dec_checked" },
	{ 0x8da4fe14, "softnet_data" },
	{ 0x4482cdb, "__refrigerator" },
	{ 0x86dbf1e, "freezing_slow_path" },
	{ 0x7ab88a45, "system_freezing_cnt" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0xc6de36ef, "refcount_sub_and_test_checked" },
	{ 0x7481b148, "refcount_add_checked" },
	{ 0x526c3a6c, "jiffies" },
	{ 0x31b9195c, "__local_bh_disable_ip" },
	{ 0x4cf17d9a, "hrtimer_cancel" },
	{ 0xffa09a87, "hrtimer_sleeper_start_expires" },
	{ 0x5c7f3904, "hrtimer_init_sleeper" },
	{ 0xb3f7646e, "kthread_should_stop" },
	{ 0x9e61bb05, "set_freezable" },
	{ 0xe6c12171, "complete" },
	{ 0xad73041f, "autoremove_wake_function" },
	{ 0x19f462ab, "kfree_call_rcu" },
	{ 0x60bffe6d, "div64_u64" },
	{ 0xd28c75bb, "kfree_skb" },
	{ 0xc358aaf8, "snprintf" },
	{ 0x609bcd98, "in6_pton" },
	{ 0x1b6314fd, "in_aton" },
	{ 0x652032cb, "mac_pton" },
	{ 0xcc286e8e, "__put_page" },
	{ 0x41482d8b, "strndup_user" },
	{ 0x999e8297, "vfree" },
	{ 0x2cfde9a2, "warn_slowpath_fmt" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x98335fc9, "dev_get_by_name" },
	{ 0x9e0c711d, "vzalloc_node" },
	{ 0xe914e41e, "strcpy" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xc6cbbc89, "capable" },
	{ 0x9ec6ca96, "ktime_get_real_ts64" },
	{ 0x40fd1bb5, "__alloc_pages_nodemask" },
	{ 0xeab3fd69, "skb_put" },
	{ 0x2196324, "__aeabi_idiv" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0x31709530, "proc_remove" },
	{ 0x54496b4, "schedule_timeout_interruptible" },
	{ 0x4c3275a, "__xfrm_state_destroy" },
	{ 0x12b548f6, "module_put" },
	{ 0xcc5005fe, "msleep_interruptible" },
	{ 0x717bcdac, "try_module_get" },
	{ 0xc5850110, "printk" },
	{ 0xcf3fac84, "cpumask_next" },
	{ 0xb561ac5b, "wait_for_completion" },
	{ 0xb35d51ab, "wake_up_process" },
	{ 0x1ee8d6d4, "refcount_inc_checked" },
	{ 0x2e2d9410, "proc_create_data" },
	{ 0x1a4e1eb3, "kthread_bind" },
	{ 0xdd34010a, "kthread_create_on_node" },
	{ 0x5bbe49f4, "__init_waitqueue_head" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0xebaa9dc8, "kmem_cache_alloc_trace" },
	{ 0xf4610713, "kmalloc_caches" },
	{ 0x921b07b1, "__cpu_online_mask" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0xba163868, "proc_create" },
	{ 0xf617b198, "proc_mkdir" },
	{ 0x718ae3f2, "__netdev_alloc_skb" },
	{ 0x22bf2ba1, "__alloc_skb" },
	{ 0x469521fb, "xfrm_stateonly_find" },
	{ 0xe8a853d3, "xfrm_state_lookup_byspi" },
	{ 0xfda9581f, "prandom_u32" },
	{ 0xf7802486, "__aeabi_uidivmod" },
	{ 0x1000e51, "schedule" },
	{ 0xb43f9365, "ktime_get" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xae947aa3, "remove_proc_entry" },
	{ 0xd7c104ee, "__put_task_struct" },
	{ 0xc1e58a5f, "refcount_dec_and_test_checked" },
	{ 0x7bfbe88e, "kthread_stop" },
	{ 0x37a0cba, "kfree" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x84b183ae, "strncmp" },
	{ 0x97255bdf, "strlen" },
	{ 0x11f7ed4c, "hex_to_bin" },
	{ 0x5f754e5a, "memset" },
	{ 0xae353d77, "arm_copy_from_user" },
	{ 0xc8275115, "seq_printf" },
	{ 0x5d7776e5, "seq_puts" },
	{ 0xcd34ce55, "single_open" },
	{ 0x7d518e2b, "PDE_DATA" },
	{ 0x28118cb6, "__get_user_1" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "FB13008E12B05E900FADA82");
