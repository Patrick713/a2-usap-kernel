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
	{ 0x7159851c, "unregister_md_personality" },
	{ 0x7a0ca58c, "register_md_personality" },
	{ 0x5003a3fb, "bio_clone_blkg_association" },
	{ 0x94fa2fc5, "__blkdev_issue_discard" },
	{ 0x6fb1e54f, "md_flush_request" },
	{ 0xca54fee, "_test_and_set_bit" },
	{ 0x921b07b1, "__cpu_online_mask" },
	{ 0x3532ba0, "bio_chain" },
	{ 0x1af35879, "bio_split" },
	{ 0x3e3928a, "generic_make_request" },
	{ 0xdcde4deb, "__tracepoint_block_bio_remap" },
	{ 0xb815eeea, "bio_associate_blkg" },
	{ 0xe034cf65, "bio_endio" },
	{ 0xff178f6, "__aeabi_idivmod" },
	{ 0x5d7d5750, "blk_queue_flag_clear" },
	{ 0x8c21be72, "md_integrity_register" },
	{ 0xd29a051, "md_set_array_sectors" },
	{ 0x48fa80e9, "blk_queue_flag_set" },
	{ 0xcb3b6ca5, "disk_stack_limits" },
	{ 0xfe037c5c, "blk_queue_io_opt" },
	{ 0xb661d708, "blk_queue_io_min" },
	{ 0xd893f909, "blk_queue_max_discard_sectors" },
	{ 0x52fc92ec, "blk_queue_max_write_zeroes_sectors" },
	{ 0x952d4a93, "blk_queue_max_write_same_sectors" },
	{ 0xcace8430, "blk_queue_max_hw_sectors" },
	{ 0xa34865e6, "md_check_no_bitmap" },
	{ 0xc5850110, "printk" },
	{ 0x77f6f183, "kmalloc_order_trace" },
	{ 0x59e5070d, "__do_div64" },
	{ 0x2d6fcc06, "__kmalloc" },
	{ 0xebaa9dc8, "kmem_cache_alloc_trace" },
	{ 0xf4610713, "kmalloc_caches" },
	{ 0xf7802486, "__aeabi_uidivmod" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xc358aaf8, "snprintf" },
	{ 0x5ed919d5, "bdevname" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xc8275115, "seq_printf" },
	{ 0x2cfde9a2, "warn_slowpath_fmt" },
	{ 0x37a0cba, "kfree" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

MODULE_INFO(depends, "md-mod");


MODULE_INFO(srcversion, "D52A565BA1DEA4AF6144392");
