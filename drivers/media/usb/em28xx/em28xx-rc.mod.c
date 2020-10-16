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
	{ 0x2d3385d3, "system_wq" },
	{ 0xc943d916, "em28xx_read_reg" },
	{ 0xf4610713, "kmalloc_caches" },
	{ 0xe01f1504, "rc_unregister_device" },
	{ 0x9a152689, "param_ops_int" },
	{ 0x721f7cc7, "em28xx_free_device" },
	{ 0x80cebd89, "em28xx_write_regs" },
	{ 0x56a78f1, "dev_printk" },
	{ 0xde45aa0d, "i2c_transfer" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x29d9f26e, "cancel_delayed_work_sync" },
	{ 0x8b801dbe, "em28xx_register_extension" },
	{ 0x3cd17765, "rc_allocate_device" },
	{ 0x38ea3b28, "input_event" },
	{ 0xdd0a2ba2, "strlcat" },
	{ 0x8ffd048a, "em28xx_find_led" },
	{ 0xf65110e8, "_dev_warn" },
	{ 0xd03009bf, "rc_free_device" },
	{ 0xd1853e77, "em28xx_toggle_reg_bits" },
	{ 0xf38271ca, "rc_keydown" },
	{ 0x3de2461c, "em28xx_unregister_extension" },
	{ 0xa8dadf72, "rc_register_device" },
	{ 0x5a2c17c5, "em28xx_write_reg_bits" },
	{ 0xc1e58a5f, "refcount_dec_and_test_checked" },
	{ 0x7fa795f, "_dev_err" },
	{ 0x3eabc38c, "_dev_info" },
	{ 0xcf86cdac, "queue_delayed_work_on" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x7b0629e7, "input_register_device" },
	{ 0x2de4f87b, "input_free_device" },
	{ 0xebaa9dc8, "kmem_cache_alloc_trace" },
	{ 0xcb203516, "i2c_transfer_buffer_flags" },
	{ 0x2cfde9a2, "warn_slowpath_fmt" },
	{ 0x37a0cba, "kfree" },
	{ 0xc0e66c25, "input_unregister_device" },
	{ 0x743beebe, "i2c_probe_func_quick_read" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0xc358aaf8, "snprintf" },
	{ 0xeaf60704, "em28xx_write_reg" },
	{ 0x1ee8d6d4, "refcount_inc_checked" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x921d7c65, "em28xx_boards" },
	{ 0xea1c9521, "input_allocate_device" },
};

MODULE_INFO(depends, "em28xx");


MODULE_INFO(srcversion, "E094AB33D95D0157684DA56");
