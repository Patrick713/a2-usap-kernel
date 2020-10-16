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
	{ 0xa0337a7f, "no_llseek" },
	{ 0x9ec748a7, "misc_deregister" },
	{ 0xa07281f, "misc_register" },
	{ 0x5b3e02e5, "input_mt_init_slots" },
	{ 0xbb72d4fe, "__put_user_1" },
	{ 0x97255bdf, "strlen" },
	{ 0xbc10dd97, "__put_user_4" },
	{ 0x41482d8b, "strndup_user" },
	{ 0xc34d6e6, "input_ff_destroy" },
	{ 0x7b0629e7, "input_register_device" },
	{ 0xe1f3be95, "input_ff_create" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0x51a910c0, "arm_copy_to_user" },
	{ 0x5f754e5a, "memset" },
	{ 0xae353d77, "arm_copy_from_user" },
	{ 0xd3f57a2, "_find_next_bit_le" },
	{ 0x6d662533, "_find_first_bit_le" },
	{ 0x38ea3b28, "input_event" },
	{ 0xe233762a, "input_event_from_user" },
	{ 0xea1c9521, "input_allocate_device" },
	{ 0x724b676, "input_alloc_absinfo" },
	{ 0x49f26466, "kstrndup" },
	{ 0xe2e8065e, "memdup_user" },
	{ 0xc5850110, "printk" },
	{ 0xd83dc5e6, "wait_for_completion_timeout" },
	{ 0xf7455c16, "input_event_to_user" },
	{ 0xd697e69a, "trace_hardirqs_on" },
	{ 0x2da81bff, "_raw_spin_lock_irq" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0x3375510b, "mutex_lock_interruptible" },
	{ 0x49970de8, "finish_wait" },
	{ 0x647af474, "prepare_to_wait_event" },
	{ 0x1000e51, "schedule" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x7536cefd, "input_ff_flush" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x3dcf1ffa, "__wake_up" },
	{ 0x5e515be6, "ktime_get_ts64" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x2dfdedea, "stream_open" },
	{ 0x5bbe49f4, "__init_waitqueue_head" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0xebaa9dc8, "kmem_cache_alloc_trace" },
	{ 0xf4610713, "kmalloc_caches" },
	{ 0xc0e66c25, "input_unregister_device" },
	{ 0xe6c12171, "complete" },
	{ 0x37a0cba, "kfree" },
	{ 0x2de4f87b, "input_free_device" },
	{ 0xdb9ca3c5, "_raw_spin_lock" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "957A5BBC5CF6768558AC4C4");
