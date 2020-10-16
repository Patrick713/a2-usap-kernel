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
	{ 0x9a152689, "param_ops_int" },
	{ 0x2b68bd2f, "del_timer" },
	{ 0x97255bdf, "strlen" },
	{ 0x5e7f4920, "snd_pcm_format_set_silence" },
	{ 0xaa1a9edd, "snd_pcm_period_elapsed" },
	{ 0xf7802486, "__aeabi_uidivmod" },
	{ 0xc8275115, "seq_printf" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0xfe41fb0b, "param_ops_bool" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0x8bcd64f8, "platform_device_register_full" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x32e5f408, "snd_pcm_hw_constraint_integer" },
	{ 0xd697e69a, "trace_hardirqs_on" },
	{ 0x610b1492, "__platform_driver_register" },
	{ 0x526c3a6c, "jiffies" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0x4be0fc9e, "param_ops_charp" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0x5f754e5a, "memset" },
	{ 0x39a12ca7, "_raw_spin_unlock_irqrestore" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0x71c90087, "memcmp" },
	{ 0x5b555848, "snd_pcm_set_ops" },
	{ 0x58adf443, "snd_ctl_notify" },
	{ 0xed91b2e0, "snd_pcm_lib_get_vmalloc_page" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0xf11cd95c, "platform_device_unregister" },
	{ 0x5c88d591, "snd_pcm_lib_ioctl" },
	{ 0x5a1d4aee, "snd_ctl_boolean_mono_info" },
	{ 0x59e5070d, "__do_div64" },
	{ 0xdcaaae74, "snd_card_new" },
	{ 0xca95beb8, "snd_pcm_hw_rule_add" },
	{ 0x4f990c81, "_snd_pcm_lib_alloc_vmalloc_buffer" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x2da81bff, "_raw_spin_lock_irq" },
	{ 0xf1d33562, "snd_ctl_new1" },
	{ 0xebaa9dc8, "kmem_cache_alloc_trace" },
	{ 0xdb9ca3c5, "_raw_spin_lock" },
	{ 0x5f849a69, "_raw_spin_lock_irqsave" },
	{ 0x68a24153, "snd_pcm_format_physical_width" },
	{ 0xd07fd06a, "snd_card_rw_proc_new" },
	{ 0x4cda566, "snd_interval_refine" },
	{ 0x37a0cba, "kfree" },
	{ 0x9d669763, "memcpy" },
	{ 0x36138fcf, "param_array_ops" },
	{ 0x453495aa, "snd_pcm_stop" },
	{ 0x952b0e1e, "snd_card_free" },
	{ 0x84e5f73d, "snd_card_register" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x883200ae, "snd_pcm_new" },
	{ 0xc358aaf8, "snprintf" },
	{ 0x495a4451, "snd_pcm_lib_free_vmalloc_buffer" },
	{ 0xda621c75, "snd_ctl_add" },
	{ 0x8ad83553, "platform_driver_unregister" },
};

MODULE_INFO(depends, "snd-pcm,snd");


MODULE_INFO(srcversion, "AA10AF11CFC7AFB7AD29C2B");
