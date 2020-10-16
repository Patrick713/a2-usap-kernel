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
	{ 0x1af35879, "bio_split" },
	{ 0x2d6fcc06, "__kmalloc" },
	{ 0x19f462ab, "kfree_call_rcu" },
	{ 0xa7710d9c, "mddev_suspend" },
	{ 0xdcde4deb, "__tracepoint_block_bio_remap" },
	{ 0xc8275115, "seq_printf" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0x7159851c, "unregister_md_personality" },
	{ 0xaa708074, "revalidate_disk" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0x6fb1e54f, "md_flush_request" },
	{ 0xc5850110, "printk" },
	{ 0x921b07b1, "__cpu_online_mask" },
	{ 0xcb3b6ca5, "disk_stack_limits" },
	{ 0x3532ba0, "bio_chain" },
	{ 0x3e3928a, "generic_make_request" },
	{ 0xe034cf65, "bio_endio" },
	{ 0x59e5070d, "__do_div64" },
	{ 0x5d7d5750, "blk_queue_flag_clear" },
	{ 0x48fa80e9, "blk_queue_flag_set" },
	{ 0x5ed919d5, "bdevname" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x77f6f183, "kmalloc_order_trace" },
	{ 0xd29a051, "md_set_array_sectors" },
	{ 0x2cfde9a2, "warn_slowpath_fmt" },
	{ 0x37a0cba, "kfree" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xca54fee, "_test_and_set_bit" },
	{ 0x8c60bef4, "mddev_resume" },
	{ 0xa34865e6, "md_check_no_bitmap" },
	{ 0x8c21be72, "md_integrity_register" },
	{ 0x7a0ca58c, "register_md_personality" },
	{ 0xb815eeea, "bio_associate_blkg" },
};

MODULE_INFO(depends, "md-mod");


MODULE_INFO(srcversion, "D5D73E7CB11DF4C476ECE5C");
