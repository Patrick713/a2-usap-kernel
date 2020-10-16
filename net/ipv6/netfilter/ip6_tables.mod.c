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
	{ 0x2d6fcc06, "__kmalloc" },
	{ 0x435acf1c, "xt_unregister_table" },
	{ 0x24c8e482, "xt_copy_counters_from_user" },
	{ 0xddf68fc6, "xt_find_revision" },
	{ 0x7aa1756e, "kvfree" },
	{ 0x2e052f25, "xt_check_target" },
	{ 0xc9e3fe05, "xt_register_matches" },
	{ 0x9c995c69, "xt_percpu_counter_alloc" },
	{ 0xd87ae60d, "xt_check_entry_offsets" },
	{ 0xcf3cb456, "xt_proto_fini" },
	{ 0x9c04733b, "xt_table_unlock" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0xae353d77, "arm_copy_from_user" },
	{ 0xcb3e91cc, "xt_counters_alloc" },
	{ 0x999e8297, "vfree" },
	{ 0x3db71190, "xt_find_table_lock" },
	{ 0xe970d719, "ipv6_find_hdr" },
	{ 0xa5144af, "xt_replace_table" },
	{ 0x51a910c0, "arm_copy_to_user" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xcf3fac84, "cpumask_next" },
	{ 0xbaa2e391, "xt_proto_init" },
	{ 0xf132d07b, "xt_register_table" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0x7d2af752, "xt_target_to_user" },
	{ 0xd7f5fcd, "xt_alloc_entry_offsets" },
	{ 0x5f754e5a, "memset" },
	{ 0x1e96f43d, "__cpu_possible_mask" },
	{ 0x65e2bb05, "unregister_pernet_subsys" },
	{ 0xc5850110, "printk" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0x71c90087, "memcmp" },
	{ 0x19ad474, "nf_unregister_net_hooks" },
	{ 0x4025fd3f, "ns_capable" },
	{ 0x343c048e, "xt_register_targets" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x328a05f1, "strncpy" },
	{ 0x3655011b, "nf_log_trace" },
	{ 0x807d2b2c, "xt_recseq" },
	{ 0x91ae6be7, "xt_unregister_targets" },
	{ 0x12b548f6, "module_put" },
	{ 0x40a9b349, "vzalloc" },
	{ 0xf6e27651, "nf_register_net_hooks" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x654849ea, "nf_unregister_sockopt" },
	{ 0xd2b30083, "xt_tee_enabled" },
	{ 0xb44cec41, "xt_request_find_match" },
	{ 0xdd75b608, "xt_request_find_table_lock" },
	{ 0xb041ec8d, "register_pernet_subsys" },
	{ 0x5139fc22, "xt_unregister_matches" },
	{ 0x341dbfa3, "__per_cpu_offset" },
	{ 0x1720a9e1, "xt_request_find_target" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0x31b9195c, "__local_bh_disable_ip" },
	{ 0x2cfde9a2, "warn_slowpath_fmt" },
	{ 0x70c52dc5, "nf_skb_duplicated" },
	{ 0x9d669763, "memcpy" },
	{ 0x12b7fe67, "xt_check_match" },
	{ 0xfef779fa, "xt_find_jump_offset" },
	{ 0x552b967, "xt_check_table_hooks" },
	{ 0xbfacb837, "xt_percpu_counter_free" },
	{ 0x74c134b9, "__sw_hweight32" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x264ad5e, "nf_register_sockopt" },
	{ 0xc75d5ab2, "xt_alloc_table_info" },
	{ 0xeeb74156, "xt_match_to_user" },
	{ 0x9b73dda5, "skb_copy_bits" },
	{ 0x881df2ef, "xt_free_table_info" },
	{ 0xe914e41e, "strcpy" },
};

MODULE_INFO(depends, "x_tables");


MODULE_INFO(srcversion, "88B0EE15B39BDF259C74075");
