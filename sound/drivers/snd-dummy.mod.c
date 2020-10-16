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
	{ 0xf09b5d9a, "get_zeroed_page" },
	{ 0x76d11765, "mem_map" },
	{ 0x9a152689, "param_ops_int" },
	{ 0x2b68bd2f, "del_timer" },
	{ 0xcc20ac52, "hrtimer_forward" },
	{ 0xaa1a9edd, "snd_pcm_period_elapsed" },
	{ 0x4cf17d9a, "hrtimer_cancel" },
	{ 0xf7802486, "__aeabi_uidivmod" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0xfe41fb0b, "param_ops_bool" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x8bcd64f8, "platform_device_register_full" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x32e5f408, "snd_pcm_hw_constraint_integer" },
	{ 0xd697e69a, "trace_hardirqs_on" },
	{ 0x610b1492, "__platform_driver_register" },
	{ 0x526c3a6c, "jiffies" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0x4be0fc9e, "param_ops_charp" },
	{ 0xe6d81d31, "hrtimer_start_range_ns" },
	{ 0x5f754e5a, "memset" },
	{ 0x39a12ca7, "_raw_spin_unlock_irqrestore" },
	{ 0xc5850110, "printk" },
	{ 0x5b555848, "snd_pcm_set_ops" },
	{ 0x27cf2687, "snd_ctl_boolean_stereo_info" },
	{ 0x58adf443, "snd_ctl_notify" },
	{ 0x9a33d19f, "snd_pcm_lib_free_pages" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0xf11cd95c, "platform_device_unregister" },
	{ 0x5c88d591, "snd_pcm_lib_ioctl" },
	{ 0xb544d9c, "snd_pcm_lib_malloc_pages" },
	{ 0x59e5070d, "__do_div64" },
	{ 0xdcaaae74, "snd_card_new" },
	{ 0x81b69e41, "snd_ctl_enum_info" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x2da81bff, "_raw_spin_lock_irq" },
	{ 0xf1d33562, "snd_ctl_new1" },
	{ 0xebaa9dc8, "kmem_cache_alloc_trace" },
	{ 0xdb9ca3c5, "_raw_spin_lock" },
	{ 0x5f849a69, "_raw_spin_lock_irqsave" },
	{ 0x4302d0eb, "free_pages" },
	{ 0x37a0cba, "kfree" },
	{ 0x36138fcf, "param_array_ops" },
	{ 0x18ddfa86, "hrtimer_init" },
	{ 0xd6fc557c, "snd_pcm_hw_constraint_minmax" },
	{ 0x427f161a, "snd_pcm_lib_preallocate_pages_for_all" },
	{ 0x952b0e1e, "snd_card_free" },
	{ 0x84e5f73d, "snd_card_register" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x883200ae, "snd_pcm_new" },
	{ 0xda621c75, "snd_ctl_add" },
	{ 0x8ad83553, "platform_driver_unregister" },
};

MODULE_INFO(depends, "snd-pcm,snd");


MODULE_INFO(srcversion, "48FFE10F3744690741515CA");
