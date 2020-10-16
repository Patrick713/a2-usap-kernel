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
	{ 0xf4610713, "kmalloc_caches" },
	{ 0x4cf17d9a, "hrtimer_cancel" },
	{ 0x9ee5e40a, "__ktime_divns" },
	{ 0x1a40def0, "snd_timer_global_new" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0xd697e69a, "trace_hardirqs_on" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0xe6d81d31, "hrtimer_start_range_ns" },
	{ 0x5f754e5a, "memset" },
	{ 0x406c4cb1, "hrtimer_resolution" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x2da81bff, "_raw_spin_lock_irq" },
	{ 0xebaa9dc8, "kmem_cache_alloc_trace" },
	{ 0xdb9ca3c5, "_raw_spin_lock" },
	{ 0x37a0cba, "kfree" },
	{ 0xc17072f3, "snd_timer_interrupt" },
	{ 0x18ddfa86, "hrtimer_init" },
	{ 0xcdd355a3, "snd_timer_global_register" },
	{ 0x971d61f0, "hrtimer_try_to_cancel" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xa7912994, "snd_timer_global_free" },
};

MODULE_INFO(depends, "snd-timer");


MODULE_INFO(srcversion, "4F6C866295FB5A6FB482C44");
