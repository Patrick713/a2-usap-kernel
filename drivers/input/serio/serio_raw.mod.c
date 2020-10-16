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
	{ 0x36ac7fd0, "noop_llseek" },
	{ 0x81368f30, "serio_unregister_driver" },
	{ 0x79ec7670, "__serio_register_driver" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0x9ec748a7, "misc_deregister" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x49970de8, "finish_wait" },
	{ 0x647af474, "prepare_to_wait_event" },
	{ 0x1000e51, "schedule" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0xbb72d4fe, "__put_user_1" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xd697e69a, "trace_hardirqs_on" },
	{ 0x2da81bff, "_raw_spin_lock_irq" },
	{ 0x1ee8d6d4, "refcount_inc_checked" },
	{ 0xfc0cf9fb, "serio_close" },
	{ 0x7fa795f, "_dev_err" },
	{ 0x3eabc38c, "_dev_info" },
	{ 0xa07281f, "misc_register" },
	{ 0x3e1be84a, "mutex_lock_killable" },
	{ 0xc1e58a5f, "refcount_dec_and_test_checked" },
	{ 0x93db5c5f, "serio_open" },
	{ 0xde147102, "get_device" },
	{ 0x5bbe49f4, "__init_waitqueue_head" },
	{ 0xc358aaf8, "snprintf" },
	{ 0xebaa9dc8, "kmem_cache_alloc_trace" },
	{ 0xf4610713, "kmalloc_caches" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0x28118cb6, "__get_user_1" },
	{ 0x3375510b, "mutex_lock_interruptible" },
	{ 0x3b00de61, "fasync_helper" },
	{ 0x3dcf1ffa, "__wake_up" },
	{ 0x9707a604, "kill_fasync" },
	{ 0x37a0cba, "kfree" },
	{ 0xebcc8bdd, "put_device" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

MODULE_INFO(depends, "serio");

MODULE_ALIAS("serio:ty01pr*id*ex*");
MODULE_ALIAS("serio:ty06pr*id*ex*");

MODULE_INFO(srcversion, "EA688D9AD5AEE3436CE2D22");
