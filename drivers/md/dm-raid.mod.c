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
	{ 0xfe41fb0b, "param_ops_bool" },
	{ 0x52cb560, "dm_unregister_target" },
	{ 0x6d17d0e8, "dm_register_target" },
	{ 0x4447c1eb, "raid5_set_cache_size" },
	{ 0xabc0dcaf, "r5c_journal_mode_set" },
	{ 0xb1425b32, "dm_table_add_target_callbacks" },
	{ 0x2362b424, "md_start" },
	{ 0xe52f6f06, "md_run" },
	{ 0x40fd1bb5, "__alloc_pages_nodemask" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xf50692a, "dm_set_target_max_io_len" },
	{ 0x95c6b89, "dm_get_device" },
	{ 0xc66d919f, "dm_table_get_mode" },
	{ 0x77f6f183, "kmalloc_order_trace" },
	{ 0x8c8569cb, "kstrtoint" },
	{ 0x8efbc1a9, "md_rdev_init" },
	{ 0xe2847cc5, "mddev_init" },
	{ 0x2d6fcc06, "__kmalloc" },
	{ 0x11e0ec41, "dm_read_arg" },
	{ 0x7deff673, "dm_consume_args" },
	{ 0xc7d094b5, "dm_read_arg_group" },
	{ 0x5eb24829, "dm_shift_arg" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0x1e9dc4da, "md_bitmap_load" },
	{ 0x918e4974, "md_bitmap_resize" },
	{ 0x9adbcc22, "md_update_sb" },
	{ 0x59e5070d, "__do_div64" },
	{ 0xf7802486, "__aeabi_uidivmod" },
	{ 0xff178f6, "__aeabi_idivmod" },
	{ 0x314b20c8, "scnprintf" },
	{ 0x4be85a03, "memweight" },
	{ 0x8c60bef4, "mddev_resume" },
	{ 0x2a3aa678, "_test_and_clear_bit" },
	{ 0x5330c64, "md_error" },
	{ 0x4686cf94, "sync_page_io" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x5f754e5a, "memset" },
	{ 0x987c11c7, "__pv_phys_pfn_offset" },
	{ 0x76d11765, "mem_map" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xad84bef8, "dm_table_event" },
	{ 0xab55cf1f, "mddev_congested" },
	{ 0xf985b4cc, "md_stop" },
	{ 0x37a0cba, "kfree" },
	{ 0xc9b8af52, "dm_put_device" },
	{ 0x7e99d7ce, "md_rdev_clear" },
	{ 0x605d9fac, "md_handle_request" },
	{ 0x3f69de4f, "md_stop_writes" },
	{ 0xd59036c1, "mddev_unlock" },
	{ 0xa7710d9c, "mddev_suspend" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0xca54fee, "_test_and_set_bit" },
	{ 0xaa708074, "revalidate_disk" },
	{ 0xc3c12309, "dm_disk" },
	{ 0xc23e6bdf, "dm_table_get_md" },
	{ 0xc5850110, "printk" },
	{ 0x74c134b9, "__sw_hweight32" },
	{ 0x85dbc4d5, "md_wakeup_thread" },
	{ 0x9d7cba28, "md_reap_sync_thread" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0x49ebacbd, "_clear_bit" },
	{ 0xaafdc258, "strcasecmp" },
	{ 0x73552eb3, "blk_limits_io_opt" },
	{ 0xcbd2301, "blk_limits_io_min" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

MODULE_INFO(depends, "dm-mod,raid456,md-mod");


MODULE_INFO(srcversion, "70C481B4A9EEB9CABDA2D43");
